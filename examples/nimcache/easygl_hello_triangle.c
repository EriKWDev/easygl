/* Generated by Nim Compiler v0.17.2 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Windows, amd64, gcc */
/* Command for C compiler:
   gcc.exe -c  -w -mno-ms-bitfields  -IC:\nim\lib -o C:\projects\easygl\examples\nimcache\easygl_hello_triangle.o C:\projects\easygl\examples\nimcache\easygl_hello_triangle.c */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef powerpc
#undef unix
typedef struct tyObject_WindowPtrcolonObjectType__8bMU2xl1xmmMvYcskTOB4w tyObject_WindowPtrcolonObjectType__8bMU2xl1xmmMvYcskTOB4w;
typedef struct tyObject_GlContextPtrcolonObjectType__RFk4O9aogXphw3vfXrOizCg tyObject_GlContextPtrcolonObjectType__RFk4O9aogXphw3vfXrOizCg;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tySequence_4Xyxy0Om14N6K1l5e9bUPSQ tySequence_4Xyxy0Om14N6K1l5e9bUPSQ;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tySequence_9bAGqSvkAaFL9bWjsEPslrFA tySequence_9bAGqSvkAaFL9bWjsEPslrFA;
typedef struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w;
typedef struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct tyObject_GcStack_7fytPA5bBsob6See21YMRA tyObject_GcStack_7fytPA5bBsob6See21YMRA;
typedef struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg;
typedef struct tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ;
typedef struct tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw;
typedef struct tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg;
typedef struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA;
typedef struct tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw;
typedef struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg;
typedef struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyTuple_ujsjpB2O9cjj3uDHsXbnSzg;
typedef struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg;
typedef struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ;
typedef struct tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg;
typedef struct tyObject_Event_Uzh9aP43ffUpM9aa6vZvNEug tyObject_Event_Uzh9aP43ffUpM9aa6vZvNEug;
typedef struct tyObject_WindowEventObj_d6XCemaEKzK59bxf1YxrwlA tyObject_WindowEventObj_d6XCemaEKzK59bxf1YxrwlA;
typedef struct tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w;
typedef struct tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ;
typedef NI32 tyEnum_SDL_Return_8wc8or7UFANAtbisKJq7lw;
typedef N_CDECL_PTR(tyEnum_SDL_Return_8wc8or7UFANAtbisKJq7lw, tyProc_fvOXafK39cW5YZA9b9bzinu9cw) (int flags);
typedef N_CDECL_PTR(tyObject_WindowPtrcolonObjectType__8bMU2xl1xmmMvYcskTOB4w*, tyProc_1K9aSViCbSUpZMtRI9aw9a2Rg) (NCSTRING title, int x, int y, int w, int h, NU32 flags);
typedef N_CDECL_PTR(tyObject_GlContextPtrcolonObjectType__RFk4O9aogXphw3vfXrOizCg*, tyProc_A4TgaVzGkRyot8mrE1bD0g) (tyObject_WindowPtrcolonObjectType__8bMU2xl1xmmMvYcskTOB4w* window);
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc_ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc_ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
typedef NU8 tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef N_NIMCALL_PTR(void, tyProc_T4eqaYlFJYZUv9aG9b1TV0bQ) (void);
struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g {
NI refcount;
TNimType* typ;
};
struct tyObject_GcStack_7fytPA5bBsob6See21YMRA {
void* bottom;
};
struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w {
NI len;
NI cap;
tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* tyArray_SiRwrEKZdLgxqz9a9aoVBglg[512];
typedef tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw* tyArray_lh2A89ahMmYg9bCmpVaplLbA[256];
struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA {
tyArray_lh2A89ahMmYg9bCmpVaplLbA data;
};
typedef tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* tyArray_0aOLqZchNi8nWtMTi8ND8w[2];
struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw {
tyArray_0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperBound;
NI level;
};
struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg {
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* Field0;
NI Field1;
};
typedef tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyArray_LzOv2eCDGiceMKQstCLmhw[30];
struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg {
NI len;
tyArray_LzOv2eCDGiceMKQstCLmhw chunks;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg* next;
};
struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg {
NI minLargeObj;
NI maxLargeObj;
tyArray_SiRwrEKZdLgxqz9a9aoVBglg freeSmallChunks;
tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw* llmem;
NI currMem;
NI maxMem;
NI freeMem;
NI lastSize;
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* freeChunksList;
tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA chunkStarts;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* root;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* deleted;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* last;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* freeAvlNodes;
NIM_BOOL locked;
NIM_BOOL blockChunkSizeIncrease;
NI nextChunkSize;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw bottomData;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg heapLinks;
};
struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg {
NI stackScans;
NI cycleCollections;
NI maxThreshold;
NI maxStackSize;
NI maxStackCells;
NI cycleTableSize;
NI64 maxPause;
};
struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ {
NI counter;
NI max;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg* head;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg** data;
};
struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ {
tyObject_GcStack_7fytPA5bBsob6See21YMRA stack;
NI cycleThreshold;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w zct;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w decStack;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tempStack;
NI recGcLock;
tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg region;
tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg stat;
tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ marked;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w additionalRoots;
};
typedef NU16 tyEnum_BufferTarget_ErfFU3mi5ovMsHV4URfCgw;
typedef NU16 tyEnum_BufferDataUsage_JzOeul0QG8UdVnNILz38YA;
typedef NU16 tyEnum_VertexAttribType_bs3Im7IMiwnCiTE9bMx9cjOw;
typedef NI32 tyEnum_EventType_9ayvRjKFMoE6pV9bOp5OUI5w;
typedef NU8 tyArray_Y1pDC6KIrpu9aJMBN9aOQMhw[52];
struct tyObject_Event_Uzh9aP43ffUpM9aa6vZvNEug {
tyEnum_EventType_9ayvRjKFMoE6pV9bOp5OUI5w kind;
tyArray_Y1pDC6KIrpu9aJMBN9aOQMhw padding;
};
typedef NI32 tyEnum_Bool32_lrv4aZgVTmBUYdrYUkLMlg;
typedef N_CDECL_PTR(tyEnum_Bool32_lrv4aZgVTmBUYdrYUkLMlg, tyProc_b9aXpKFbsyZ0PIk3aYRVCAA) (tyObject_Event_Uzh9aP43ffUpM9aa6vZvNEug* event);
typedef NU8 tyEnum_WindowEventID_qlyMtQ19b0uMsXgE0vQ3Diw;
struct tyObject_WindowEventObj_d6XCemaEKzK59bxf1YxrwlA {
tyEnum_EventType_9ayvRjKFMoE6pV9bOp5OUI5w kind;
NU32 timestamp;
NU32 windowID;
tyEnum_WindowEventID_qlyMtQ19b0uMsXgE0vQ3Diw event;
NU8 pad1;
NU8 pad2;
NU8 pad3;
int data1;
int data2;
};
typedef NU16 tyEnum_ClearBufferMask_lO6Dt9aokgt9cH8rSDGYbX9aQ;
typedef tyEnum_ClearBufferMask_lO6Dt9aokgt9cH8rSDGYbX9aQ tyArray_ue9bV4rvhyJDkh6kT7PhDLg[1];
typedef NU8 tyEnum_DrawMode_AmhJunCRQ8PFJ9aloC9ag9bYQ;
typedef NU16 tyEnum_IndexType_KuLW3epA7GK4gjJFmNlYtw;
typedef N_CDECL_PTR(void, tyProc_T629bWTbvDFNyKAaO0BGGIQ) (tyObject_WindowPtrcolonObjectType__8bMU2xl1xmmMvYcskTOB4w* window);
struct tyObject_WindowPtrcolonObjectType__8bMU2xl1xmmMvYcskTOB4w {
char dummy;
};
struct tyObject_GlContextPtrcolonObjectType__RFk4O9aogXphw3vfXrOizCg {
char dummy;
};
struct tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w {
NI prevSize;
NI size;
};
struct tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ {
  tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* next;
tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* prev;
tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ* freeList;
NI free;
NI acc;
NF data;
};
struct tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw {
NI size;
NI acc;
tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw* next;
};
struct tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg {
  tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* next;
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* prev;
NF data;
};
typedef NI tyArray_9a8QARi5WsUggNU9bom7kzTQ[8];
struct tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw {
tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw* next;
NI key;
tyArray_9a8QARi5WsUggNU9bom7kzTQ bits;
};
struct tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg {
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg* next;
NI key;
tyArray_9a8QARi5WsUggNU9bom7kzTQ bits;
};
struct tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ {
tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ* next;
NI zeroField;
};
struct tySequence_4Xyxy0Om14N6K1l5e9bUPSQ {
  TGenericSeq Sup;
  NF32 data[SEQ_DECL_SIZE];
};
struct tySequence_9bAGqSvkAaFL9bWjsEPslrFA {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimLoadProcs0)(void);
N_NIMCALL(NU32, CreateAndLinkProgram_vn5ROZF0pfhPx6U9bF9ccGXw)(NimStringDesc* vertexPath, NimStringDesc* fragmentPath, NimStringDesc* geometryPath);
static N_NIMCALL(void, Marker_tySequence_4Xyxy0Om14N6K1l5e9bUPSQ)(void* p, NI op);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, TM_UQZe7HeD9bkthFNhfzbP6IA_4)(void);
N_NIMCALL(void, nimRegisterGlobalMarker)(tyProc_T4eqaYlFJYZUv9aG9b1TV0bQ markerProc);
N_NIMCALL(void, genericSeqAssign)(void* dest, void* src, TNimType* mt);
static N_NIMCALL(void, TM_UQZe7HeD9bkthFNhfzbP6IA_7)(void);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackOverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
static N_INLINE(NU32, GenVertexArray_y9aWBmx772xkm1fCOo2NcFAeasygl)(void);
N_STDCALL(void, glGenVertexArrays_zvqeRPLD9c2eggqLYZ1r3Zg)(NI32 n, NU32* arrays);
static N_INLINE(NU32, GenBuffer_xxU7oJIkwZkPfbkUj9aKWpgeasygl)(void);
N_STDCALL(void, glGenBuffers_B9ax9aWnWORHtXpch5OZqE6g)(NI32 n, NU32* buffers);
static N_INLINE(void, BindVertexArray_1olxbPfcB1SGdKsshWP3wgeasygl)(NU32 vertexArray);
N_STDCALL(void, glBindVertexArray_DTfQaj6wT6HQ9c375GwSXmg)(NU32 array);
static N_INLINE(void, BindBuffer_W9bN003jC8Uhvy4z5xdUL9bAeasygl)(tyEnum_BufferTarget_ErfFU3mi5ovMsHV4URfCgw target, NU32 buffer);
N_STDCALL(void, glBindBuffer_3rtrqe5eYHMVBLzlqTY63w)(NU32 target, NU32 buffer);
static N_INLINE(void, BufferData_9c9bFitUJKUzqcspXMNZg4Iwhello_triangle)(tyEnum_BufferTarget_ErfFU3mi5ovMsHV4URfCgw target, NF32* data, NI dataLen_0, tyEnum_BufferDataUsage_JzOeul0QG8UdVnNILz38YA usage);
N_STDCALL(void, glBufferData_00Qu57bAXtAMX49bzkHe6aQ)(NU32 target, NI size, void* data, NU32 usage);
N_NIMCALL(NI, mulInt)(NI a, NI b);
static N_INLINE(void, BufferData_NHhcuX9a476t2DF9ccAE29csQhello_triangle)(tyEnum_BufferTarget_ErfFU3mi5ovMsHV4URfCgw target, NU32* data, NI dataLen_0, tyEnum_BufferDataUsage_JzOeul0QG8UdVnNILz38YA usage);
static N_INLINE(void, VertexAttribPointer_rpmL9b1Xbhw9au2jacf9chz2geasygl)(NU32 index, NI size, tyEnum_VertexAttribType_bs3Im7IMiwnCiTE9bMx9cjOw attribType, NIM_BOOL normalized, NI32 stride, NI32 pointer);
N_STDCALL(void, glVertexAttribPointer_ARjPQ9cnPkJQtADdR9bd9a8Ww)(NU32 index, NI32 size, NU32 type_0, NIM_BOOL normalized, NI32 stride, void* pointer);
static N_INLINE(void, EnableVertexAttribArray_xe9ai9b74zILHV5CMYQeQAVgeasygl)(NU32 indeX);
N_STDCALL(void, glEnableVertexAttribArray_PNXJR7G6JIj9ajx7Tvz9a1RA)(NU32 index);
N_STDCALL(void, glViewport_yDKviL1Jxz9cvMulIoNt7vQ)(NI32 x, NI32 y, NI32 width, NI32 height);
N_NIMCALL(NIM_BOOL, toBool_3fq5Y9cfgYx8q7J9ba6TTYbQ)(tyEnum_Bool32_lrv4aZgVTmBUYdrYUkLMlg some);
N_NIMCALL(void, ClearColor_dPsnFT23vDc9bue9bSM7F6dw)(NF32 r, NF32 g, NF32 b, NF32 a);
static N_INLINE(void, Clear_oYYKmodfLpSojEpZtDQHrgeasygl)(tyEnum_ClearBufferMask_lO6Dt9aokgt9cH8rSDGYbX9aQ* buffersToClear, NI buffersToClearLen_0);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_STDCALL(void, glClear_ecjp09clx9c7t3uIhyfuACGQ)(NU32 mask);
static N_INLINE(void, UseProgram_zLuRnlSabmGQB1f159beDeA_2easygl)(NU32 program);
N_STDCALL(void, glUseProgram_bYudX2ps2dTBClLz2NbyzA_2)(NU32 program);
N_NIMCALL(void, DrawElements_t1y9ax9cvJfzgyrfV2IPW85w)(tyEnum_DrawMode_AmhJunCRQ8PFJ9aloC9ag9bYQ mode, NI count, tyEnum_IndexType_KuLW3epA7GK4gjJFmNlYtw indexType, NI offset);
static N_INLINE(void, destroy_sFvfWODyHxg46OuBtGyU8Qhello_triangle)(tyObject_WindowPtrcolonObjectType__8bMU2xl1xmmMvYcskTOB4w* window);
static N_INLINE(void, initStackBottomWith)(void* locals);
N_NOINLINE(void, setStackBottom)(void* theStackBottom);
NIM_EXTERNC N_NOINLINE(void, systemInit000)(void);
NIM_EXTERNC N_NOINLINE(void, systemDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_macrosInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_macrosDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_unsignedInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_unsignedDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_parseutilsInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_parseutilsDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_mathInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_mathDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_algorithmInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_algorithmDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_strutilsInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_strutilsDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, sdl2_sdl2Init000)(void);
NIM_EXTERNC N_NOINLINE(void, sdl2_sdl2DatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_sequtilsInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_sequtilsDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_dynlibInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_dynlibDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_winleanInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_winleanDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_timesInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_timesDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_ospathsInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_ospathsDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_osInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_osDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, opengl_openglInit000)(void);
NIM_EXTERNC N_NOINLINE(void, opengl_openglDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_basic2dInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_basic2dDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_basic3dInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_basic3dDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, easygl_easyglInit000)(void);
NIM_EXTERNC N_NOINLINE(void, easygl_easyglDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, NimMainModule)(void);
NIM_EXTERNC N_NOINLINE(void, hello_triangleDatInit000)(void);
extern tyProc_fvOXafK39cW5YZA9b9bzinu9cw Dl_141765_;
int screenWidth_zhBeejtZg8k9aSso6BLQR3g;
int screenHeight_Qb0TTyn8OVZEiksqXk5tYw;
tyObject_WindowPtrcolonObjectType__8bMU2xl1xmmMvYcskTOB4w* window_giui5WTr3DOtRaAxSNpWhw;
extern tyProc_1K9aSViCbSUpZMtRI9aw9a2Rg Dl_142356_;
extern tyProc_A4TgaVzGkRyot8mrE1bD0g Dl_142434_;
NU32 programId_CgRiMhTBjvRsBti9ce0mL1g;
tySequence_4Xyxy0Om14N6K1l5e9bUPSQ* vertices_XZhZp6AvlIghDbmPpmf6QA;
extern TNimType NTI_C875xFvYpI7aGybrDGHIaQ_;
TNimType NTI_4Xyxy0Om14N6K1l5e9bUPSQ_;
tySequence_9bAGqSvkAaFL9bWjsEPslrFA* indices_Rj9aIGbtI9aHnFhV6dVO9aG1A;
extern TNimType NTI_9bAGqSvkAaFL9bWjsEPslrFA_;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
NU32 VAO_G5Y9aTvQxeZHcYV9avYtMk1A;
NU32 VBO_oAnwLKoUS9c9ctu59bufGkFbg;
NU32 EBO_g3KrXJtpxBpJMjfnNDTjdw;
tyObject_Event_Uzh9aP43ffUpM9aa6vZvNEug evt_v7pE9cfj0yubLumGUvDsKoQ;
extern tyObject_Event_Uzh9aP43ffUpM9aa6vZvNEug defaultEvent_LbtYyFPe9bpTC9bKZ8rWJeKQ;
NIM_BOOL run_OkKGtQaHDrDRNM9afWgLeEw;
extern tyProc_b9aXpKFbsyZ0PIk3aYRVCAA Dl_142605_;
tyObject_WindowEventObj_d6XCemaEKzK59bxf1YxrwlA* windowEvent_yuFGu8XIvONA759bltCXxpQ;
int newWidth_VX8glSAAj9c9a5VSxFPyW9c9bQ;
int newHeight_ydmIXu5i5aHe3C2Ngk8Oyg;
extern tyProc_T629bWTbvDFNyKAaO0BGGIQ Dl_142456_;
extern tyProc_T629bWTbvDFNyKAaO0BGGIQ Dl_142388_;
STRING_LITERAL(TM_UQZe7HeD9bkthFNhfzbP6IA_2, "shaders/hello_triangle.vert", 27);
STRING_LITERAL(TM_UQZe7HeD9bkthFNhfzbP6IA_3, "shaders/hello_triangle.frag", 27);
NIM_CONST struct {
  TGenericSeq Sup;
  NF32 data[12];
} TM_UQZe7HeD9bkthFNhfzbP6IA_6 = {{12, 12}, {5.0000000000000000e-001f,
5.0000000000000000e-001f,
0.0f,
5.0000000000000000e-001f,
-5.0000000000000000e-001,
0.0f,
-5.0000000000000000e-001,
-5.0000000000000000e-001,
0.0f,
-5.0000000000000000e-001,
5.0000000000000000e-001f,
0.0f}};
NIM_CONST tySequence_4Xyxy0Om14N6K1l5e9bUPSQ* TM_UQZe7HeD9bkthFNhfzbP6IA_5 = ((tySequence_4Xyxy0Om14N6K1l5e9bUPSQ*)&TM_UQZe7HeD9bkthFNhfzbP6IA_6);
NIM_CONST tyArray_ue9bV4rvhyJDkh6kT7PhDLg TM_UQZe7HeD9bkthFNhfzbP6IA_11 = {((tyEnum_ClearBufferMask_lO6Dt9aokgt9cH8rSDGYbX9aQ) 16384)}
;
static N_NIMCALL(void, Marker_tySequence_4Xyxy0Om14N6K1l5e9bUPSQ)(void* p, NI op) {
	tySequence_4Xyxy0Om14N6K1l5e9bUPSQ* a;
	NI T1_;
	a = (tySequence_4Xyxy0Om14N6K1l5e9bUPSQ*)p;
	T1_ = (NI)0;
}
static N_NIMCALL(void, TM_UQZe7HeD9bkthFNhfzbP6IA_4)(void) {
	nimGCvisit((void*)vertices_XZhZp6AvlIghDbmPpmf6QA, 0);
}
static N_NIMCALL(void, TM_UQZe7HeD9bkthFNhfzbP6IA_7)(void) {
	nimGCvisit((void*)indices_Rj9aIGbtI9aHnFhV6dVO9aG1A, 0);
}

static N_INLINE(void, nimFrame)(TFrame* s) {
	NI T1_;
	T1_ = (NI)0;
	{
		if (!(framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw == NIM_NIL)) goto LA4_;
		T1_ = ((NI) 0);
	}
	goto LA2_;
	LA4_: ;
	{
		T1_ = ((NI) ((NI16)((*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).calldepth + ((NI16) 1))));
	}
	LA2_: ;
	(*s).calldepth = ((NI16) (T1_));
	(*s).prev = framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = s;
	{
		if (!((*s).calldepth == ((NI16) 2000))) goto LA9_;
		stackOverflow_II46IjNZztN9bmbxUD8dt8g();
	}
	LA9_: ;
}

static N_INLINE(void, popFrame)(void) {
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = (*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).prev;
}

static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* result;
	nimfr_("usrToCell", "gc.nim");
	result = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	nimln_(138, "gc.nim");
	result = ((tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	nimfr_("rtlAddZCT", "gc.nim");
	nimln_(216, "gc.nim");
	addZCT_fCDI7oO1NNVXXURtxSzsRw((&gch_IcYaEuuWivYAS86vFMTS3Q.zct), c);
	popFrame();
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c;
	nimfr_("nimGCunrefNoCycle", "gc.nim");
	nimln_(255, "gc.nim");
	c = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(p);
	nimln_(257, "gc.nim");
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3_;
		nimln_(258, "gc.nim");
		rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c);
	}
	LA3_: ;
	popFrame();
}

static N_INLINE(NU32, GenVertexArray_y9aWBmx772xkm1fCOo2NcFAeasygl)(void) {
	NU32 result;
	nimfr_("GenVertexArray", "easygl.nim");
	result = (NU32)0;
	nimln_(232, "easygl.nim");
	glGenVertexArrays_zvqeRPLD9c2eggqLYZ1r3Zg(((NI32) 1), ((NU32*) ((&result))));
	popFrame();
	return result;
}

static N_INLINE(NU32, GenBuffer_xxU7oJIkwZkPfbkUj9aKWpgeasygl)(void) {
	NU32 result;
	nimfr_("GenBuffer", "easygl.nim");
	result = (NU32)0;
	nimln_(98, "easygl.nim");
	glGenBuffers_B9ax9aWnWORHtXpch5OZqE6g(((NI32) 1), ((NU32*) ((&result))));
	popFrame();
	return result;
}

static N_INLINE(void, BindVertexArray_1olxbPfcB1SGdKsshWP3wgeasygl)(NU32 vertexArray) {
	nimfr_("BindVertexArray", "easygl.nim");
	nimln_(246, "easygl.nim");
	glBindVertexArray_DTfQaj6wT6HQ9c375GwSXmg(vertexArray);
	popFrame();
}

static N_INLINE(void, BindBuffer_W9bN003jC8Uhvy4z5xdUL9bAeasygl)(tyEnum_BufferTarget_ErfFU3mi5ovMsHV4URfCgw target, NU32 buffer) {
	nimfr_("BindBuffer", "easygl.nim");
	nimln_(112, "easygl.nim");
	glBindBuffer_3rtrqe5eYHMVBLzlqTY63w(((NU32) (target)), buffer);
	popFrame();
}

static N_INLINE(void, BufferData_9c9bFitUJKUzqcspXMNZg4Iwhello_triangle)(tyEnum_BufferTarget_ErfFU3mi5ovMsHV4URfCgw target, NF32* data, NI dataLen_0, tyEnum_BufferDataUsage_JzOeul0QG8UdVnNILz38YA usage) {
	NI TM_UQZe7HeD9bkthFNhfzbP6IA_8;
	nimfr_("BufferData", "easygl.nim");
	nimln_(115, "easygl.nim");
	TM_UQZe7HeD9bkthFNhfzbP6IA_8 = mulInt(dataLen_0, ((NI) 4));
	glBufferData_00Qu57bAXtAMX49bzkHe6aQ(((NU32) (target)), (NI)(TM_UQZe7HeD9bkthFNhfzbP6IA_8), ((void*) (data)), ((NU32) (usage)));
	popFrame();
}

static N_INLINE(void, BufferData_NHhcuX9a476t2DF9ccAE29csQhello_triangle)(tyEnum_BufferTarget_ErfFU3mi5ovMsHV4URfCgw target, NU32* data, NI dataLen_0, tyEnum_BufferDataUsage_JzOeul0QG8UdVnNILz38YA usage) {
	NI TM_UQZe7HeD9bkthFNhfzbP6IA_9;
	nimfr_("BufferData", "easygl.nim");
	nimln_(115, "easygl.nim");
	TM_UQZe7HeD9bkthFNhfzbP6IA_9 = mulInt(dataLen_0, ((NI) 4));
	glBufferData_00Qu57bAXtAMX49bzkHe6aQ(((NU32) (target)), (NI)(TM_UQZe7HeD9bkthFNhfzbP6IA_9), ((void*) (data)), ((NU32) (usage)));
	popFrame();
}

static N_INLINE(void, VertexAttribPointer_rpmL9b1Xbhw9au2jacf9chz2geasygl)(NU32 index, NI size, tyEnum_VertexAttribType_bs3Im7IMiwnCiTE9bMx9cjOw attribType, NIM_BOOL normalized, NI32 stride, NI32 pointer) {
	nimfr_("VertexAttribPointer", "easygl.nim");
	nimln_(250, "easygl.nim");
	glVertexAttribPointer_ARjPQ9cnPkJQtADdR9bd9a8Ww(index, ((NI32) (size)), ((NU32) (attribType)), normalized, stride, ((void*) (pointer)));
	popFrame();
}

static N_INLINE(void, EnableVertexAttribArray_xe9ai9b74zILHV5CMYQeQAVgeasygl)(NU32 indeX) {
	nimfr_("EnableVertexAttribArray", "easygl.nim");
	nimln_(253, "easygl.nim");
	glEnableVertexAttribArray_PNXJR7G6JIj9ajx7Tvz9a1RA(indeX);
	popFrame();
}

static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ (NI)((NU64) ~(b))));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU64)(a) + (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ b));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

static N_INLINE(void, Clear_oYYKmodfLpSojEpZtDQHrgeasygl)(tyEnum_ClearBufferMask_lO6Dt9aokgt9cH8rSDGYbX9aQ* buffersToClear, NI buffersToClearLen_0) {
	NU32 mask;
	nimfr_("Clear", "easygl.nim");
	nimln_(265, "easygl.nim");
	if ((NU)(((NI) 0)) >= (NU)(buffersToClearLen_0)) raiseIndexError();
	mask = ((NU32) (buffersToClear[((NI) 0)]));
	{
		NI i;
		NI colontmp_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		nimln_(266, "easygl.nim");
		colontmp_ = subInt(buffersToClearLen_0, 1);
		nimln_(1973, "system.nim");
		res = ((NI) 1);
		{
			nimln_(1974, "system.nim");
			while (1) {
				NI TM_UQZe7HeD9bkthFNhfzbP6IA_10;
				if (!(res <= colontmp_)) goto LA3;
				nimln_(1975, "system.nim");
				i = res;
				nimln_(267, "easygl.nim");
				if ((NU)(i) >= (NU)(buffersToClearLen_0)) raiseIndexError();
				mask = (unsigned int)(mask | ((NU32) (buffersToClear[i])));
				nimln_(1976, "system.nim");
				TM_UQZe7HeD9bkthFNhfzbP6IA_10 = addInt(res, ((NI) 1));
				res = (NI)(TM_UQZe7HeD9bkthFNhfzbP6IA_10);
			} LA3: ;
		}
	}
	nimln_(268, "easygl.nim");
	glClear_ecjp09clx9c7t3uIhyfuACGQ(mask);
	popFrame();
}

static N_INLINE(void, UseProgram_zLuRnlSabmGQB1f159beDeA_2easygl)(NU32 program) {
	nimfr_("UseProgram", "easygl.nim");
	nimln_(200, "easygl.nim");
	glUseProgram_bYudX2ps2dTBClLz2NbyzA_2(program);
	popFrame();
}

static N_INLINE(void, destroy_sFvfWODyHxg46OuBtGyU8Qhello_triangle)(tyObject_WindowPtrcolonObjectType__8bMU2xl1xmmMvYcskTOB4w* window) {
	nimfr_("destroy", "sdl2.nim");
	nimln_(1742, "sdl2.nim");
	Dl_142388_(window);
	popFrame();
}

static N_INLINE(void, initStackBottomWith)(void* locals) {
	setStackBottom(locals);
}
void PreMainInner(void) {
	systemInit000();
	stdlib_macrosDatInit000();
	stdlib_unsignedDatInit000();
	stdlib_parseutilsDatInit000();
	stdlib_mathDatInit000();
	stdlib_algorithmDatInit000();
	stdlib_strutilsDatInit000();
	sdl2_sdl2DatInit000();
	stdlib_sequtilsDatInit000();
	stdlib_dynlibDatInit000();
	stdlib_winleanDatInit000();
	stdlib_timesDatInit000();
	stdlib_ospathsDatInit000();
	stdlib_osDatInit000();
	opengl_openglDatInit000();
	stdlib_basic2dDatInit000();
	stdlib_basic3dDatInit000();
	easygl_easyglDatInit000();
	hello_triangleDatInit000();
	stdlib_macrosInit000();
	stdlib_unsignedInit000();
	stdlib_parseutilsInit000();
	stdlib_mathInit000();
	stdlib_algorithmInit000();
	stdlib_strutilsInit000();
	sdl2_sdl2Init000();
	stdlib_sequtilsInit000();
	stdlib_dynlibInit000();
	stdlib_winleanInit000();
	stdlib_timesInit000();
	stdlib_ospathsInit000();
	stdlib_osInit000();
	opengl_openglInit000();
	stdlib_basic2dInit000();
	stdlib_basic3dInit000();
	easygl_easyglInit000();
}

void PreMain(void) {
	void (*volatile inner)(void);
	systemDatInit000();
	inner = PreMainInner;
	initStackBottomWith((void *)&inner);
	(*inner)();
}

int cmdCount;
char** cmdLine;
char** gEnv;
N_CDECL(void, NimMainInner)(void) {
	NimMainModule();
}

N_CDECL(void, NimMain)(void) {
	void (*volatile inner)(void);
	PreMain();
	inner = NimMainInner;
	initStackBottomWith((void *)&inner);
	(*inner)();
}

int main(int argc, char** args, char** env) {
	cmdLine = args;
	cmdCount = argc;
	gEnv = env;
	NimMain();
	return nim_program_result;
}

NIM_EXTERNC N_NOINLINE(void, NimMainModule)(void) {
	tyEnum_SDL_Return_8wc8or7UFANAtbisKJq7lw T1_;
	tyObject_GlContextPtrcolonObjectType__RFk4O9aogXphw3vfXrOizCg* T2_;
	nimfr_("hello_triangle", "hello_triangle.nim");
nimRegisterGlobalMarker(TM_UQZe7HeD9bkthFNhfzbP6IA_4);
nimRegisterGlobalMarker(TM_UQZe7HeD9bkthFNhfzbP6IA_7);
	nimln_(8, "hello_triangle.nim");
	T1_ = (tyEnum_SDL_Return_8wc8or7UFANAtbisKJq7lw)0;
	T1_ = Dl_141765_(((int) 65535));
	T1_;
	nimln_(10, "hello_triangle.nim");
	screenWidth_zhBeejtZg8k9aSso6BLQR3g = ((int) 800);
	nimln_(11, "hello_triangle.nim");
	screenHeight_Qb0TTyn8OVZEiksqXk5tYw = ((int) 600);
	nimln_(13, "hello_triangle.nim");
	window_giui5WTr3DOtRaAxSNpWhw = Dl_142356_("Learn OpenGL 01", ((int) 100), ((int) 100), screenWidth_zhBeejtZg8k9aSso6BLQR3g, screenHeight_Qb0TTyn8OVZEiksqXk5tYw, ((unsigned int) 34));
	nimln_(14, "hello_triangle.nim");
	T2_ = (tyObject_GlContextPtrcolonObjectType__RFk4O9aogXphw3vfXrOizCg*)0;
	T2_ = Dl_142434_(window_giui5WTr3DOtRaAxSNpWhw);
	T2_;
	nimln_(17, "hello_triangle.nim");
	nimLoadProcs0();
	nimln_(21, "hello_triangle.nim");
	programId_CgRiMhTBjvRsBti9ce0mL1g = CreateAndLinkProgram_vn5ROZF0pfhPx6U9bF9ccGXw(((NimStringDesc*) &TM_UQZe7HeD9bkthFNhfzbP6IA_2), ((NimStringDesc*) &TM_UQZe7HeD9bkthFNhfzbP6IA_3), NIM_NIL);
	nimln_(24, "hello_triangle.nim");
	genericSeqAssign((&vertices_XZhZp6AvlIghDbmPpmf6QA), TM_UQZe7HeD9bkthFNhfzbP6IA_5, (&NTI_4Xyxy0Om14N6K1l5e9bUPSQ_));
	nimln_(31, "hello_triangle.nim");
	if (indices_Rj9aIGbtI9aHnFhV6dVO9aG1A) { nimGCunrefNoCycle(indices_Rj9aIGbtI9aHnFhV6dVO9aG1A); indices_Rj9aIGbtI9aHnFhV6dVO9aG1A = NIM_NIL; }
	indices_Rj9aIGbtI9aHnFhV6dVO9aG1A = (tySequence_9bAGqSvkAaFL9bWjsEPslrFA*) newSeqRC1((&NTI_9bAGqSvkAaFL9bWjsEPslrFA_), 6);
	indices_Rj9aIGbtI9aHnFhV6dVO9aG1A->data[0] = ((NU32) 0);
	indices_Rj9aIGbtI9aHnFhV6dVO9aG1A->data[1] = ((NU32) 1);
	indices_Rj9aIGbtI9aHnFhV6dVO9aG1A->data[2] = ((NU32) 3);
	indices_Rj9aIGbtI9aHnFhV6dVO9aG1A->data[3] = ((NU32) 1);
	indices_Rj9aIGbtI9aHnFhV6dVO9aG1A->data[4] = ((NU32) 2);
	indices_Rj9aIGbtI9aHnFhV6dVO9aG1A->data[5] = ((NU32) 3);
	nimln_(36, "hello_triangle.nim");
	VAO_G5Y9aTvQxeZHcYV9avYtMk1A = GenVertexArray_y9aWBmx772xkm1fCOo2NcFAeasygl();
	nimln_(37, "hello_triangle.nim");
	VBO_oAnwLKoUS9c9ctu59bufGkFbg = GenBuffer_xxU7oJIkwZkPfbkUj9aKWpgeasygl();
	nimln_(38, "hello_triangle.nim");
	EBO_g3KrXJtpxBpJMjfnNDTjdw = GenBuffer_xxU7oJIkwZkPfbkUj9aKWpgeasygl();
	nimln_(41, "hello_triangle.nim");
	BindVertexArray_1olxbPfcB1SGdKsshWP3wgeasygl(VAO_G5Y9aTvQxeZHcYV9avYtMk1A);
	nimln_(43, "hello_triangle.nim");
	BindBuffer_W9bN003jC8Uhvy4z5xdUL9bAeasygl(((tyEnum_BufferTarget_ErfFU3mi5ovMsHV4URfCgw) 34962), VBO_oAnwLKoUS9c9ctu59bufGkFbg);
	nimln_(44, "hello_triangle.nim");
	BufferData_9c9bFitUJKUzqcspXMNZg4Iwhello_triangle(((tyEnum_BufferTarget_ErfFU3mi5ovMsHV4URfCgw) 34962), vertices_XZhZp6AvlIghDbmPpmf6QA->data, vertices_XZhZp6AvlIghDbmPpmf6QA->Sup.len, ((tyEnum_BufferDataUsage_JzOeul0QG8UdVnNILz38YA) 35044));
	nimln_(46, "hello_triangle.nim");
	BindBuffer_W9bN003jC8Uhvy4z5xdUL9bAeasygl(((tyEnum_BufferTarget_ErfFU3mi5ovMsHV4URfCgw) 34963), EBO_g3KrXJtpxBpJMjfnNDTjdw);
	nimln_(47, "hello_triangle.nim");
	BufferData_NHhcuX9a476t2DF9ccAE29csQhello_triangle(((tyEnum_BufferTarget_ErfFU3mi5ovMsHV4URfCgw) 34963), indices_Rj9aIGbtI9aHnFhV6dVO9aG1A->data, indices_Rj9aIGbtI9aHnFhV6dVO9aG1A->Sup.len, ((tyEnum_BufferDataUsage_JzOeul0QG8UdVnNILz38YA) 35044));
	nimln_(49, "hello_triangle.nim");
	VertexAttribPointer_rpmL9b1Xbhw9au2jacf9chz2geasygl(((NU32) 0), ((NI) 3), ((tyEnum_VertexAttribType_bs3Im7IMiwnCiTE9bMx9cjOw) 5126), NIM_FALSE, ((NI32) 12), ((NI32) 0));
	nimln_(50, "hello_triangle.nim");
	EnableVertexAttribArray_xe9ai9b74zILHV5CMYQeQAVgeasygl(((NU32) 0));
	nimln_(53, "hello_triangle.nim");
	BindBuffer_W9bN003jC8Uhvy4z5xdUL9bAeasygl(((tyEnum_BufferTarget_ErfFU3mi5ovMsHV4URfCgw) 34962), ((NU32) 0));
	nimln_(54, "hello_triangle.nim");
	BindVertexArray_1olxbPfcB1SGdKsshWP3wgeasygl(((NU32) 0));
	nimln_(58, "hello_triangle.nim");
	evt_v7pE9cfj0yubLumGUvDsKoQ = defaultEvent_LbtYyFPe9bpTC9bKZ8rWJeKQ;
	nimln_(59, "hello_triangle.nim");
	run_OkKGtQaHDrDRNM9afWgLeEw = NIM_TRUE;
	nimln_(61, "hello_triangle.nim");
	glViewport_yDKviL1Jxz9cvMulIoNt7vQ(((NI32) 0), ((NI32) 0), screenWidth_zhBeejtZg8k9aSso6BLQR3g, screenHeight_Qb0TTyn8OVZEiksqXk5tYw);
	{
		nimln_(63, "hello_triangle.nim");
		while (1) {
			if (!run_OkKGtQaHDrDRNM9afWgLeEw) goto LA4;
			{
				nimln_(64, "hello_triangle.nim");
				while (1) {
					tyEnum_Bool32_lrv4aZgVTmBUYdrYUkLMlg T7_;
					NIM_BOOL T8_;
					T7_ = (tyEnum_Bool32_lrv4aZgVTmBUYdrYUkLMlg)0;
					T7_ = Dl_142605_((&evt_v7pE9cfj0yubLumGUvDsKoQ));
					T8_ = (NIM_BOOL)0;
					T8_ = toBool_3fq5Y9cfgYx8q7J9ba6TTYbQ(T7_);
					if (!T8_) goto LA6;
					nimln_(65, "hello_triangle.nim");
					{
						if (!(evt_v7pE9cfj0yubLumGUvDsKoQ.kind == ((tyEnum_EventType_9ayvRjKFMoE6pV9bOp5OUI5w) 256))) goto LA11_;
						nimln_(66, "hello_triangle.nim");
						run_OkKGtQaHDrDRNM9afWgLeEw = NIM_FALSE;
						nimln_(67, "hello_triangle.nim");
						goto LA5;
					}
					LA11_: ;
					nimln_(68, "hello_triangle.nim");
					{
						if (!(evt_v7pE9cfj0yubLumGUvDsKoQ.kind == ((tyEnum_EventType_9ayvRjKFMoE6pV9bOp5OUI5w) 512))) goto LA15_;
						windowEvent_yuFGu8XIvONA759bltCXxpQ = 0;
						nimln_(69, "hello_triangle.nim");
						windowEvent_yuFGu8XIvONA759bltCXxpQ = ((tyObject_WindowEventObj_d6XCemaEKzK59bxf1YxrwlA*) ((&evt_v7pE9cfj0yubLumGUvDsKoQ)));
						nimln_(70, "hello_triangle.nim");
						{
							if (!((*windowEvent_yuFGu8XIvONA759bltCXxpQ).event == ((tyEnum_WindowEventID_qlyMtQ19b0uMsXgE0vQ3Diw) 5))) goto LA19_;
							newWidth_VX8glSAAj9c9a5VSxFPyW9c9bQ = 0;
							nimln_(71, "hello_triangle.nim");
							newWidth_VX8glSAAj9c9a5VSxFPyW9c9bQ = (*windowEvent_yuFGu8XIvONA759bltCXxpQ).data1;
							newHeight_ydmIXu5i5aHe3C2Ngk8Oyg = 0;
							nimln_(72, "hello_triangle.nim");
							newHeight_ydmIXu5i5aHe3C2Ngk8Oyg = (*windowEvent_yuFGu8XIvONA759bltCXxpQ).data2;
							nimln_(73, "hello_triangle.nim");
							glViewport_yDKviL1Jxz9cvMulIoNt7vQ(((NI32) 0), ((NI32) 0), newWidth_VX8glSAAj9c9a5VSxFPyW9c9bQ, newHeight_ydmIXu5i5aHe3C2Ngk8Oyg);
						}
						LA19_: ;
					}
					LA15_: ;
				} LA6: ;
			} LA5: ;
			nimln_(76, "hello_triangle.nim");
			ClearColor_dPsnFT23vDc9bue9bSM7F6dw(2.0000000000000001e-001, 2.9999999999999999e-001, 2.9999999999999999e-001, 1.0000000000000000e+000);
			nimln_(77, "hello_triangle.nim");
			Clear_oYYKmodfLpSojEpZtDQHrgeasygl(TM_UQZe7HeD9bkthFNhfzbP6IA_11, 1);
			nimln_(78, "hello_triangle.nim");
			UseProgram_zLuRnlSabmGQB1f159beDeA_2easygl(programId_CgRiMhTBjvRsBti9ce0mL1g);
			nimln_(79, "hello_triangle.nim");
			BindVertexArray_1olxbPfcB1SGdKsshWP3wgeasygl(VAO_G5Y9aTvQxeZHcYV9avYtMk1A);
			nimln_(80, "hello_triangle.nim");
			DrawElements_t1y9ax9cvJfzgyrfV2IPW85w(((tyEnum_DrawMode_AmhJunCRQ8PFJ9aloC9ag9bYQ) 4), ((NI) 6), ((tyEnum_IndexType_KuLW3epA7GK4gjJFmNlYtw) 5125), ((NI) 0));
			nimln_(81, "hello_triangle.nim");
			Dl_142456_(window_giui5WTr3DOtRaAxSNpWhw);
		} LA4: ;
	}
	nimln_(83, "hello_triangle.nim");
	destroy_sFvfWODyHxg46OuBtGyU8Qhello_triangle(window_giui5WTr3DOtRaAxSNpWhw);
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, hello_triangleDatInit000)(void) {
NTI_4Xyxy0Om14N6K1l5e9bUPSQ_.size = sizeof(tySequence_4Xyxy0Om14N6K1l5e9bUPSQ*);
NTI_4Xyxy0Om14N6K1l5e9bUPSQ_.kind = 24;
NTI_4Xyxy0Om14N6K1l5e9bUPSQ_.base = (&NTI_C875xFvYpI7aGybrDGHIaQ_);
NTI_4Xyxy0Om14N6K1l5e9bUPSQ_.flags = 2;
NTI_4Xyxy0Om14N6K1l5e9bUPSQ_.marker = Marker_tySequence_4Xyxy0Om14N6K1l5e9bUPSQ;
}
