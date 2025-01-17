import
    ../easygl,
    utils,
    opengl,
    assimp,
    glm

type TextureType* {.pure.} = enum
    TextureDiffuse,
    TextureSpecular,
    TextureNormal,
    TextureHeight

type Vertex* = object
    Position*:Vec3f
    Normal*:Vec3f
    TexCoords*:Vec2f
    Tangent*:Vec3f
    Bitangent*:Vec3f


type Texture* = object
    id*:TextureId
    texType*:TextureType
    path*:string

type Mesh* = object
    vertices*: seq[Vertex]
    indices*: seq[uint32]
    textures*: seq[Texture]
    VAO*:VertexArrayId
    VBO:BufferId
    EBO:BufferId


proc setupMesh(mesh:var Mesh) =
    mesh.VAO = genVertexArray()
    mesh.VBO = genBuffer()
    mesh.EBO = genBuffer()
    bindVertexArray(mesh.VAO)
    bindBuffer(GL_ARRAY_BUFFER,mesh.VBO)

    bufferData(GL_ARRAY_BUFFER,mesh.vertices,GL_STATIC_DRAW)

    bindBuffer(GL_ELEMENT_ARRAY_BUFFER,mesh.EBO)
    bufferData(GL_ELEMENT_ARRAY_BUFFER,mesh.indices,GL_STATIC_DRAW)

    enableVertexAttribArray(0)
    vertexAttribPointer(0,3,cGL_FLOAT,false,Vertex.sizeof().int32,0)
    enableVertexAttribArray(1)
    vertexAttribPointer(1,3,cGL_FLOAT,false,Vertex.sizeof().int32,offsetof(Vertex,Normal).int32)
    enableVertexAttribArray(2)
    vertexAttribPointer(2,3,cGL_FLOAT,false,Vertex.sizeof().int32,offsetof(Vertex,TexCoords).int32)
    enableVertexAttribArray(3)
    vertexAttribPointer(3,3,cGL_FLOAT,false,Vertex.sizeof().int32,offsetof(Vertex,Tangent).int32)
    enableVertexAttribArray(4)
    vertexAttribPointer(4,3,cGL_FLOAT,false,Vertex.sizeof().int32,offsetof(Vertex,Bitangent).int32)

    unBindVertexArray()


proc newMesh*(vertices:seq[Vertex], indices:seq[uint32], textures:seq[Texture]) : Mesh =
    result.vertices = vertices
    result.indices = indices
    result.textures = textures
    result.setupMesh()

proc draw*(mesh:Mesh,shaderProgram:ShaderProgramId) =
    var diffuseNr,specularNr,normalNr,heightNr = 0'u32
    for i,tex in mesh.textures:
        activeTexture((GL_TEXTURE0.ord + i).GLenum)
        let texIndex =
            case tex.texType:
                of TextureType.TextureDiffuse:
                    diffuseNr.inc()
                    diffuseNr
                of TextureType.TextureSpecular:
                    specularNr.inc()
                    specularNr
                of TextureType.TextureNormal:
                    normalNr.inc()
                    normalNr
                of TextureType.TextureHeight:
                    heightNr.inc()
                    heightNr
        let uniform = $tex.texType & $texIndex
        shaderProgram.setInt(uniform,i.int32)
        bindTexture(GL_TEXTURE_2D, mesh.textures[i].id)

    bindVertexArray(mesh.VAO)
    drawElements(GL_TRIANGLES,mesh.indices.len,GL_UNSIGNED_INT,0)
    unBindVertexArray()
    activeTexture(GL_TEXTURE0)