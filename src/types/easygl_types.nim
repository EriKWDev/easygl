import opengl
import glm

type 
    BufferId* = distinct GLuint
    VertexArrayId* = distinct GLuint
    TextureId* = distinct GLuint
    ShaderId* = distinct GLuint
    ShaderProgramId* = distinct GLuint
    UniformLocation* = distinct GLint
    
    BufferTarget* {.pure.} = enum
        ARRAY_BUFFER = GL_ARRAY_BUFFER, #0x88923
        ELEMENT_ARRAY_BUFFER = GL_ELEMENT_ARRAY_BUFFER, #0x8893 
        PIXEL_PACK_BUFFER = GL_PIXEL_PACK_BUFFER, #0x88EB
        PIXEL_UNPACK_BUFFER = GL_PIXEL_UNPACK_BUFFER, #0x88EC
        UNIFORM_BUFFER = GL_UNIFORM_BUFFER #0x8A11
        TEXTURE_BUFFER = GL_TEXTURE_BUFFER, #0x8C2A
        TRANSFORM_FEEDBACK_BUFFER = GL_TRANSFORM_FEEDBACK_BUFFER, #0x8C8E
        COPY_READ_BUFFER = GL_COPY_READ_BUFFER, #0x8F36
        COPY_WRITE_BUFFER = GL_COPY_WRITE_BUFFER, #0x8F37
        DRAW_INDIRECT_BUFFER = GL_DRAW_INDIRECT_BUFFER,#0x8F3F 
        SHADER_STORAGE_BUFFER = GL_SHADER_STORAGE_BUFFER, #0x90D2
        DISPATCH_INDIRECT_BUFFER = GL_DISPATCH_INDIRECT_BUFFER, #0x90EE
        QUERY_BUFFER = GL_QUERY_BUFFER, #0x9192
        ATOMIC_COUNTER_BUFFER = GL_ATOMIC_COUNTER_BUFFER, #0x92C0
    
    BufferDataUsage* {.pure.} = enum
        STREAM_DRAW = GL_STREAM_DRAW, 
        STREAM_READ = GL_STREAM_READ, 
        STREAM_COPY = GL_STREAM_COPY, 
        STATIC_DRAW = GL_STATIC_DRAW, 
        STATIC_READ = GL_STATIC_READ, 
        STATIC_COPY = GL_STATIC_COPY,
        DYNAMIC_DRAW = GL_DYNAMIC_DRAW, 
        DYNAMIC_READ = GL_DYNAMIC_READ,
        DYNAMIC_COPY = GL_DYNAMIC_COPY

    ShaderType* {.pure.} = enum
        FRAGMENT_SHADER = GL_FRAGMENT_SHADER #0x8B30
        VERTEX_SHADER = GL_VERTEX_SHADER #0x8B31,
        GEOMETRY_SHADER = GL_GEOMETRY_SHADER, #0x8DD9
        TESS_EVALUATION_SHADER = GL_TESS_EVALUATION_SHADER, #0x8E87
        TESS_CONTROL_SHADER = GL_TESS_CONTROL_SHADER, #0x8E88
        COMPUTE_SHADER = GL_COMPUTE_SHADER, #0x91B9

    VertexAttribIType* {.pure.} = enum
        BYTE = cGL_BYTE, 
        UNSIGNED_BYTE = GL_UNSIGNED_BYTE,
        SHORT =  cGL_SHORT, 
        UINSIGNED_SHORT = GL_UNSIGNED_SHORT, 
        INT = cGL_INT, 
        UNSIGNED_INT = GL_UNSIGNED_INT

    VertexAttribType* {.pure.} = enum
        BYTE = cGL_BYTE, #0x1400
        UNSIGNED_BYTE = GL_UNSIGNED_BYTE, #0x1401
        SHORT =  cGL_SHORT, #0x1402
        UINSIGNED_SHORT = GL_UNSIGNED_SHORT, #0x1403
        INT = cGL_INT,#0x1404 
        UNSIGNED_INT = GL_UNSIGNED_INT, #0x1405
        FLOAT = cGL_FLOAT, #0x1406
        DOUBLE = cGL_DOUBLE, 
        HALF_FLOAT = GL_HALF_FLOAT, #0x140B                
        FIXED = cGL_FIXED, 
        UNSIGNED_INT_2_10_10_10_REV = GL_UNSIGNED_INT_2_10_10_10_REV, # 0x8368
        UNSIGNED_INT_10F_11F_11F_REV = GL_UNSIGNED_INT_10F_11F_11F_REV #0x8C3B
        INT_2_10_10_10_REV = GL_INT_2_10_10_10_REV, #0x8D9F        

    DrawMode* {.pure.} = enum
        POINTS = GL_POINTS, #0x0000
        LINE = GL_LINES, # 0x0001        
        LINE_LOOP = GL_LINE_LOOP, #0x0002
        LINE_STRIP = GL_LINE_STRIP, #0x0003
        TRIANGLES = GL_TRIANGLES, #0x0004
        TRIANGLE_STRIP = GL_TRIANGLE_STRIP, #0x0005
        TRIANGLE_FAN = GL_TRIANGLE_FAN, #0x0006
        LINES_ADJACENCY = GL_LINES_ADJACENCY, #0x000A
        LINE_STRIP_ADJACENCY = GL_LINE_STRIP_ADJACENCY, #0x000B
        TRIANGLES_ADJACENCY = GL_TRIANGLES_ADJACENCY, #0x000C                        
        TRIANGLE_STRIP_ADJACENCY = GL_TRIANGLE_STRIP_ADJACENCY, #0x000D        
        PATCHES = GL_PATCHES #0x000E

    ClearBufferMask* {.pure.} = enum
        DEPTH_BUFFER_BIT = GL_DEPTH_BUFFER_BIT,
        STENCIL_BUFFER_BIT = GL_STENCIL_BUFFER_BIT,
        COLOR_BUFFER_BIT = GL_COLOR_BUFFER_BIT

    IndexType* {.pure.} = enum
        UNSIGNED_BYTE = GL_UNSIGNED_BYTE,
        UNSIGNED_SHORT = GL_UNSIGNED_SHORT,
        UNSIGNED_INT = GL_UNSIGNED_INT

    MipmapTarget* {.pure.} = enum 
        TEXTURE_1D = GL_TEXTURE_1D, 
        TEXTURE_2D = GL_TEXTURE_2D, 
        TEXTURE_3D = GL_TEXTURE_3D, 
        TEXTURE_CUBE_MAP = GL_TEXTURE_CUBE_MAP, #0x8513 
        TEXTURE_1D_ARRAY = GL_TEXTURE_1D_ARRAY, 
        TEXTURE_2D_ARRAY = GL_TEXTURE_2D_ARRAY, #0x8C1A  
        TEXTURE_CUBE_MAP_ARRAY = GL_TEXTURE_CUBE_MAP_ARRAY,  

    TextureTarget* {.pure.} = enum
        TEXTURE_1D = GL_TEXTURE_1D, 
        TEXTURE_2D = GL_TEXTURE_2D, 
        TEXTURE_3D = GL_TEXTURE_3D, 
        TEXTURE_RECTANGLE = GL_TEXTURE_RECTANGLE, #0x84F5
        TEXTURE_CUBE_MAP = GL_TEXTURE_CUBE_MAP, #0x8513 
        TEXTURE_1D_ARRAY = GL_TEXTURE_1D_ARRAY, 
        TEXTURE_2D_ARRAY = GL_TEXTURE_2D_ARRAY, #0x8C1A  
        TEXTURE_BUFFER = GL_TEXTURE_BUFFER, #0x8C2A
        TEXTURE_CUBE_MAP_ARRAY = GL_TEXTURE_CUBE_MAP_ARRAY,  
        TEXTURE_2D_MULTISAMPLE = GL_TEXTURE_2D_MULTISAMPLE,
        TEXTURE_2D_MULTISAMPLE_ARRAY = GL_TEXTURE_2D_MULTISAMPLE_ARRAY
    
    TexImageTarget* {.pure.} = enum
        TEXTURE_2D = GL_TEXTURE_2D, 
        PROXY_TEXTURE_2D = GL_PROXY_TEXTURE_2D, #0x8064 
        TEXTURE_RECTANGLE = GL_TEXTURE_RECTANGLE, 
        PROXY_TEXTURE_RECTANGLE = GL_PROXY_TEXTURE_RECTANGLE, 
        TEXTURE_CUBE_MAP_POSITIVE_X = GL_TEXTURE_CUBE_MAP_POSITIVE_X, #0x8515 
        TEXTURE_CUBE_MAP_NEGATIVE_X = GL_TEXTURE_CUBE_MAP_NEGATIVE_X, 
        TEXTURE_CUBE_MAP_POSITIVE_Y = GL_TEXTURE_CUBE_MAP_POSITIVE_Y, 
        TEXTURE_CUBE_MAP_NEGATIVE_Y = GL_TEXTURE_CUBE_MAP_NEGATIVE_Y, 
        TEXTURE_CUBE_MAP_POSITIVE_Z = GL_TEXTURE_CUBE_MAP_POSITIVE_Z, 
        TEXTURE_CUBE_MAP_NEGATIVE_Z = GL_TEXTURE_CUBE_MAP_NEGATIVE_Z,
        PROXY_TEXTURE_CUBE_MAP = GL_PROXY_TEXTURE_CUBE_MAP   
        TEXTURE_1D_ARRAY = GL_TEXTURE_1D_ARRAY,
        PROXY_TEXTURE1D_ARRAY = GL_PROXY_TEXTURE_1D_ARRAY, #0x8C19 
        
    TextureParameter* {.pure.} = enum
        TEXTURE_MAG_FILTER = GL_TEXTURE_MAG_FILTER,
        TEXTURE_MIN_FILTER = GL_TEXTURE_MIN_FILTER, #0x2801
        TEXTURE_WRAP_S = GL_TEXTURE_WRAP_S, #0x2802
        TEXTURE_WRAP_T = GL_TEXTURE_WRAP_T,
        TEXTURE_WRAP_R =  GL_TEXTURE_WRAP_R,
        TEXTURE_MIN_LOD = GL_TEXTURE_MIN_LOD, #0x813A
        TEXTURE_MAX_LOD = GL_TEXTURE_MAX_LOD,
        TEXTURE_BASE_LEVEL = GL_TEXTURE_BASE_LEVEL, #0x813C
        TEXTURE_MAX_LEVEL = GL_TEXTURE_MAX_LEVEL, #0x813D
        TEXTURE_LOD_BIAS = GL_TEXTURE_LOD_BIAS, #0x8501
        TEXTURE_COMPARE_MODE = GL_TEXTURE_COMPARE_MODE, #0x884C
        TEXTURE_COMPARE_FUNC = GL_TEXTURE_COMPARE_FUNC, # 0x884D
        TEXTURE_SWIZZLE_R = GL_TEXTURE_SWIZZLE_R, #0x8E42
        TEXTURE_SWIZZLE_G = GL_TEXTURE_SWIZZLE_G,
        TEXTURE_SWIZZLE_B = GL_TEXTURE_SWIZZLE_B,
        TEXTURE_SWIZZLE_A = GL_TEXTURE_SWIZZLE_A,
        DEPTH_STENCIL_TEXTURE_MODE = GL_DEPTH_STENCIL_TEXTURE_MODE #0x90EA

    TextureParameterV* {.pure.} = enum
        TEXTURE_BORDER_COLOR = GL_TEXTURE_BORDER_COLOR, #0x1004
        TEXTURE_MAG_FILTER = GL_TEXTURE_MAG_FILTER,
        TEXTURE_MIN_FILTER = GL_TEXTURE_MIN_FILTER, #0x2801
        TEXTURE_WRAP_S = GL_TEXTURE_WRAP_S, #0x2802
        TEXTURE_WRAP_T = GL_TEXTURE_WRAP_T,
        TEXTURE_WRAP_R =  GL_TEXTURE_WRAP_R,
        TEXTURE_MIN_LOD = GL_TEXTURE_MIN_LOD, #0x813A
        TEXTURE_MAX_LOD = GL_TEXTURE_MAX_LOD,
        TEXTURE_BASE_LEVEL = GL_TEXTURE_BASE_LEVEL, #0x813C
        TEXTURE_MAX_LEVEL = GL_TEXTURE_MAX_LEVEL, #0x813D
        TEXTURE_LOD_BIAS = GL_TEXTURE_LOD_BIAS, #0x8501
        TEXTURE_COMPARE_MODE = GL_TEXTURE_COMPARE_MODE, #0x884C
        TEXTURE_COMPARE_FUNC = GL_TEXTURE_COMPARE_FUNC, # 0x884D
        TEXTURE_SWIZZLE_R = GL_TEXTURE_SWIZZLE_R, #0x8E42
        TEXTURE_SWIZZLE_G = GL_TEXTURE_SWIZZLE_G,
        TEXTURE_SWIZZLE_B = GL_TEXTURE_SWIZZLE_B,
        TEXTURE_SWIZZLE_A = GL_TEXTURE_SWIZZLE_A,
        TEXTURE_SWIZZLE_RGBA = GL_TEXTURE_SWIZZLE_RGBA, #0x8E46
        DEPTH_STENCIL_TEXTURE_MODE = GL_DEPTH_STENCIL_TEXTURE_MODE #0x90EA

    TextureUnit* {.pure.} = enum
        TEXTURE0 = GL_TEXTURE_0,
        TEXTURE1 = GL_TEXTURE_1,
        TEXTURE2 = GL_TEXTURE_2,
        TEXTURE3 = GL_TEXTURE_3,
        TEXTURE4 = GL_TEXTURE_4,
        TEXTURE5 = GL_TEXTURE_5,
        TEXTURE6 = GL_TEXTURE_6,
        TEXTURE7 = GL_TEXTURE_7,
        TEXTURE8 = GL_TEXTURE_8,
        TEXTURE9 = GL_TEXTURE_9,
        TEXTURE10 = GL_TEXTURE_10,
        TEXTURE11 = GL_TEXTURE_11,
        TEXTURE12 = GL_TEXTURE_12,
        TEXTURE13 = GL_TEXTURE_13,
        TEXTURE14 = GL_TEXTURE_14,
        TEXTURE15 = GL_TEXTURE_15,
        TEXTURE16 = GL_TEXTURE_16,
        TEXTURE17 = GL_TEXTURE_17,
        TEXTURE18  = GL_TEXTURE_18,
        TEXTURE19 = GL_TEXTURE_19,
        TEXTURE20 = GL_TEXTURE_20,
        TEXTURE21  = GL_TEXTURE_21,
        TEXTURE22 = GL_TEXTURE_22,
        TEXTURE23 = GL_TEXTURE_23,
        TEXTURE24 = GL_TEXTURE_24,
        TEXTURE25 = GL_TEXTURE_25,
        TEXTURE26 = GL_TEXTURE_26,
        TEXTURE27 = GL_TEXTURE_27,
        TEXTURE28 = GL_TEXTURE_28,
        TEXTURE29 = GL_TEXTURE_29,
        TEXTURE30 = GL_TEXTURE_30,
        TEXTURE31 = GL_TEXTURE_31

    TextureInternalFormat* {.pure.} = enum
        DEPTH_COMPONENT = GL_DEPTH_COMPONENT, #0x1902
        RED = GL_RED, #0x1903
        RGB = GL_RGB,        
        RGBA = GL_RGBA, #0x1908
        RG = GL_RG,
        DEPTH_STENCIL = GL_DEPTH_STENCIL, #0x84F9
        #todo sized formats
    
    PixelDataFormat* {.pure.} = enum
        STENCIL_INDEX = GL_STENCIL_INDEX, #0x1901
        DEPTH_COMPONENT = GL_DEPTH_COMPONENT, 
        RED = GL_RED, 
        RGB = GL_RGB,
        RGBA = GL_RGBA, 
        BGR = GL_BGR, #0x80E0 
        BGRA = GL_BGRA, #0x80E1
        RG = GL_RG, #0x8227 
        RG_INTEGER = GL_RG_INTEGER, #0x8228
        DEPTH_STENCIAL = GL_DEPTH_STENCIL,
        RED_INTEGER = GL_RED_INTEGER, #0x8D94 
        RGB_INTERGER = GL_RGB_INTEGER, #0x8D98
        RGBA_INTEGER = GL_RGBA_INTEGER, #0x8D99 
        BGR_INTEGER = GL_BGR_INTEGER,  
        BGRA_INTEGER = GL_BGRA_INTEGER
        
    PixelDataType* {.pure.} = enum
        BYTE = cGL_BYTE, #0x1400
        UNSIGNED_BYTE = GL_UNSIGNED_BYTE, #0x1401
        SHORT =  cGL_SHORT, #0x1402
        UINSIGNED_SHORT = GL_UNSIGNED_SHORT, #0x1403
        INT = cGL_INT,#0x1404 
        UNSIGNED_INT = GL_UNSIGNED_INT, #0x1405
        FLOAT = cGL_FLOAT, #0x1406
        UNSIGNED_BYTE_3_3_2 = GL_UNSIGNED_BYTE_3_3_2, #0x8032
        UNSIGNED_SHORT_4_4_4_4 = GL_UNSIGNED_SHORT_4_4_4_4, #0x8033 
        UNSIGNED_SHORT_5_5_5_1 = GL_UNSIGNED_SHORT_5_5_5_1, #0x8034
        UNSIGNED_INT_8_8_8_8 = GL_UNSIGNED_INT_8_8_8_8,
        UNSIGNED_INT_10_10_10_2 = GL_UNSIGNED_INT_10_10_10_2,
        UNSIGNED_BYTE_2_3_3_REV = GL_UNSIGNED_BYTE_2_3_3_REV,
        UNSIGNED_SHORT_5_6_5 = GL_UNSIGNED_SHORT_5_6_5,
        UNSIGNED_SHORT_5_6_6_REV = GL_UNSIGNED_SHORT_5_6_5_REV,
        UNSIGNED_SHORT_4_4_4_4_REV = GL_UNSIGNED_SHORT_4_4_4_4_REV, #0x8365 
        UNSIGNED_SHORT_1_5_5_5_REV = GL_UNSIGNED_SHORT_1_5_5_5_REV,
        UNSIGNED_INT_8_8_8_8_REV = GL_UNSIGNED_INT_8_8_8_8_REV,
        UNSIGNED_INT_2_10_10_10_REV = GL_UNSIGNED_INT_2_10_10_10_REV # 0x8368