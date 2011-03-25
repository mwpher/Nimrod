/* Generated by Nimrod Compiler v0.8.11 */
/*   (c) 2011 Andreas Rumpf */

typedef long int NI;
typedef unsigned long int NU;
#include "nimbase.h"

typedef struct TY104012 TY104012;
typedef struct TY51526 TY51526;
typedef struct TY43538 TY43538;
typedef struct TY51552 TY51552;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TY51548 TY51548;
typedef struct TY50011 TY50011;
typedef struct TY51520 TY51520;
typedef struct E_Base E_Base;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TSafePoint TSafePoint;
typedef struct TY102002 TY102002;
typedef struct TY104006 TY104006;
typedef struct TY56099 TY56099;
typedef struct TY56101 TY56101;
typedef struct TY51530 TY51530;
typedef struct TY51528 TY51528;
typedef struct TY51895 TY51895;
typedef struct TY51891 TY51891;
typedef struct TY51893 TY51893;
typedef struct TY39019 TY39019;
typedef struct TY39013 TY39013;
typedef struct TY10602 TY10602;
typedef struct TY10614 TY10614;
typedef struct TY10996 TY10996;
typedef struct TY10618 TY10618;
typedef struct TY10610 TY10610;
typedef struct TY10994 TY10994;
typedef struct TY50005 TY50005;
typedef struct TY51540 TY51540;
typedef struct TY48008 TY48008;
typedef struct TY51544 TY51544;
typedef struct TY56071 TY56071;
typedef struct TY51550 TY51550;
typedef struct TY123007 TY123007;
typedef struct TY51564 TY51564;
typedef struct TY51562 TY51562;
typedef struct TY51560 TY51560;
typedef NU8 TY126741[16];
struct TY43538 {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct TGenericSeq {
NI len;
NI space;
};
typedef NIM_CHAR TY245[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY245 data;
};
struct TY51526 {
TY51552* Typ;
NimStringDesc* Comment;
TY43538 Info;
NU8 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF64 Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {TY51548* Sym;
} S4;
struct {TY50011* Ident;
} S5;
struct {TY51520* Sons;
} S6;
} KindU;
};
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
};
struct TNimObject {
TNimType* m_type;
};
struct E_Base {
  TNimObject Sup;
E_Base* parent;
NCSTRING name;
NimStringDesc* message;
};
struct TSafePoint {
TSafePoint* prev;
NI status;
E_Base* exc;
jmp_buf context;
};
struct TY102002 {
  TNimObject Sup;
};
struct TY51530 {
TNimType* m_type;
NI Counter;
TY51528* Data;
};
struct TY56099 {
NI Tos;
TY56101* Stack;
};
struct TY51895 {
NI Counter;
NI Max;
TY51891* Head;
TY51893* Data;
};
struct TY39019 {
TNimType* m_type;
TY39013* Head;
TY39013* Tail;
NI Counter;
};
typedef N_NIMCALL_PTR(TY51526*, TY104032) (TY104012* C_104033, TY51526* N_104034);
typedef N_NIMCALL_PTR(TY51526*, TY104037) (TY104012* C_104038, TY51526* N_104039);
struct TY104012 {
  TY102002 Sup;
TY51548* Module;
TY104006* P;
NI Instcounter;
TY51526* Generics;
NI Lastgenericidx;
TY56099 Tab;
TY51895 Ambiguoussymbols;
TY51528* Converters;
TY39019 Optionstack;
TY39019 Libs;
NIM_BOOL Fromcache;
TY104032 Semconstexpr;
TY104037 Semexpr;
TY51895 Includedfiles;
NimStringDesc* Filename;
TY51530 Userpragmas;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TY10602 {
NI Refcount;
TNimType* Typ;
};
struct TY10618 {
NI Len;
NI Cap;
TY10602** D;
};
struct TY10614 {
NI Counter;
NI Max;
TY10610* Head;
TY10610** Data;
};
struct TY10994 {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
};
struct TY10996 {
TY10618 Zct;
TY10618 Decstack;
TY10614 Cycleroots;
TY10618 Tempstack;
TY10994 Stat;
};
struct TY50005 {
  TNimObject Sup;
NI Id;
};
struct TY51540 {
NU8 K;
NU8 S;
NU8 Flags;
TY51552* T;
TY48008* R;
NI A;
};
struct TY51548 {
  TY50005 Sup;
NU8 Kind;
NU8 Magic;
TY51552* Typ;
TY50011* Name;
TY43538 Info;
TY51548* Owner;
NU32 Flags;
TY51530 Tab;
TY51526* Ast;
NU32 Options;
NI Position;
NI Offset;
TY51540 Loc;
TY51544* Annex;
};
struct TY56071 {
NI H;
};
struct TY50011 {
  TY50005 Sup;
NimStringDesc* S;
TY50011* Next;
NI H;
};
struct TY51552 {
  TY50005 Sup;
NU8 Kind;
TY51550* Sons;
TY51526* N;
NU8 Flags;
NU8 Callconv;
TY51548* Owner;
TY51548* Sym;
NI64 Size;
NI Align;
NI Containerid;
TY51540 Loc;
};
struct TY51560 {
TY50005* Key;
TNimObject* Val;
};
struct TY51564 {
NI Counter;
TY51562* Data;
};
struct TY123007 {
NI Exactmatches;
NI Subtypematches;
NI Intconvmatches;
NI Convmatches;
NI Genericmatches;
NU8 State;
TY51552* Callee;
TY51548* Calleesym;
TY51526* Call;
TY51564 Bindings;
NIM_BOOL Basetypematch;
};
struct TY104006 {
TY51548* Owner;
TY51548* Resultsym;
NI Nestedloopcounter;
NI Nestedblockcounter;
};
typedef NI TY8614[16];
struct TY51891 {
TY51891* Next;
NI Key;
TY8614 Bits;
};
struct TY39013 {
  TNimObject Sup;
TY39013* Prev;
TY39013* Next;
};
struct TY10610 {
TY10610* Next;
NI Key;
TY8614 Bits;
};
struct TY48008 {
  TNimObject Sup;
TY48008* Left;
TY48008* Right;
NI Length;
NimStringDesc* Data;
};
struct TY51544 {
  TY39013 Sup;
NU8 Kind;
NIM_BOOL Generated;
TY48008* Name;
TY51526* Path;
};
struct TY51520 {
  TGenericSeq Sup;
  TY51526* data[SEQ_DECL_SIZE];
};
struct TY51528 {
  TGenericSeq Sup;
  TY51548* data[SEQ_DECL_SIZE];
};
struct TY56101 {
  TGenericSeq Sup;
  TY51530 data[SEQ_DECL_SIZE];
};
struct TY51893 {
  TGenericSeq Sup;
  TY51891* data[SEQ_DECL_SIZE];
};
struct TY51550 {
  TGenericSeq Sup;
  TY51552* data[SEQ_DECL_SIZE];
};
struct TY51562 {
  TGenericSeq Sup;
  TY51560 data[SEQ_DECL_SIZE];
};
N_NIMCALL(NU8, Incheckpoint_43850)(TY43538 Current_43852);
N_NIMCALL(TY51526*, Findclosestdot_126649)(TY51526* N_126651);
static N_INLINE(NI, Sonslen_51804)(TY51526* N_51806);
N_NIMCALL(TY51526*, Safesemexpr_126915)(TY104012* C_126917, TY51526* N_126918);
static N_INLINE(void, pushSafePoint)(TSafePoint* S_5035);
static N_INLINE(void, popSafePoint)(void);
static N_INLINE(E_Base*, getCurrentException)(void);
static N_INLINE(void, popCurrentException)(void);
static N_INLINE(void, asgnRef)(void** Dest_13014, void* Src_13015);
static N_INLINE(void, Incref_13002)(TY10602* C_13004);
static N_INLINE(NI, Atomicinc_3221)(NI* Memloc_3224, NI X_3225);
static N_INLINE(NIM_BOOL, Canbecycleroot_11416)(TY10602* C_11418);
static N_INLINE(void, Rtladdcycleroot_12052)(TY10602* C_12054);
N_NOINLINE(void, Incl_10880)(TY10614* S_10883, TY10602* Cell_10884);
static N_INLINE(TY10602*, Usrtocell_11412)(void* Usr_11414);
static N_INLINE(void, Decref_12801)(TY10602* C_12803);
static N_INLINE(NI, Atomicdec_3226)(NI* Memloc_3229, NI X_3230);
static N_INLINE(void, Rtladdzct_12401)(TY10602* C_12403);
N_NOINLINE(void, Addzct_11401)(TY10618* S_11404, TY10602* C_11405);
N_NIMCALL(void, reraiseException)(void);
N_NIMCALL(void, Suggestfieldaccess_126460)(TY104012* C_126462, TY51526* N_126463);
N_NIMCALL(void, genericReset)(void* Dest_19528, TNimType* Mt_19529);
N_NIMCALL(void, genericAssign)(void* Dest_19452, void* Src_19453, TNimType* Mt_19454);
N_NIMCALL(TY51548*, Inittabiter_56073)(TY56071* Ti_56076, TY51530* Tab_56077);
static N_INLINE(NIM_BOOL, Filtersym_126057)(TY51548* S_126059);
N_NIMCALL(void, Outwriteln_43783)(NimStringDesc* S_43785);
N_NIMCALL(NimStringDesc*, Symtostr_126008)(TY51548* S_126010, NIM_BOOL Islocal_126011, NimStringDesc* Section_126012);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* Src_18512);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* S_1803, NIM_CHAR C_1804);
N_NIMCALL(NimStringDesc*, reprEnum)(NI E_19632, TNimType* Typ_19633);
static N_INLINE(void, appendString)(NimStringDesc* Dest_18599, NimStringDesc* Src_18600);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* Dest_18589, NI Addlen_18590);
N_NIMCALL(NimStringDesc*, Typetostring_94014)(TY51552* Typ_94016, NU8 Prefer_94017);
N_NIMCALL(NimStringDesc*, Tofilename_43724)(TY43538 Info_43726);
static N_INLINE(NI, Tolinenumber_43732)(TY43538 Info_43734);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI X_19203);
static N_INLINE(NI, Tocolumn_43736)(TY43538 Info_43738);
N_NIMCALL(TY51548*, Nextiter_56078)(TY56071* Ti_56081, TY51530* Tab_56082);
N_NIMCALL(void, Suggesteverything_126433)(TY104012* C_126435, TY51526* N_126436);
N_NIMCALL(void, Suggestsymlist_126080)(TY51526* List_126082);
N_NIMCALL(void, Internalerror_44208)(TY43538 Info_44210, NimStringDesc* Errmsg_44211);
N_NIMCALL(void, Suggestfield_126072)(TY51548* S_126074);
N_NIMCALL(void, Suggestoperations_126394)(TY104012* C_126396, TY51526* N_126397, TY51552* Typ_126398);
static N_INLINE(NIM_BOOL, Typefits_126362)(TY104012* C_126364, TY51548* S_126365, TY51552* Firstarg_126366);
static N_INLINE(NI, Sonslen_51807)(TY51552* N_51809);
N_NIMCALL(NIM_BOOL, Argtypematches_124914)(TY104012* C_124916, TY51552* F_124917, TY51552* A_124918);
N_NIMCALL(TY51552*, Skiptypes_94087)(TY51552* T_94089, NU64 Kinds_94090);
N_NIMCALL(void, Suggestobject_126155)(TY51526* N_126157);
static N_INLINE(TY51526*, Lastson_51810)(TY51526* N_51812);
N_NIMCALL(TY51526*, Findclosestcall_126742)(TY51526* N_126744);
N_NIMCALL(TY51526*, Copynode_51849)(TY51526* Src_51851);
N_NIMCALL(void, Addson_51824)(TY51526* Father_51826, TY51526* Son_51827);
N_NIMCALL(void, Suggestcall_126320)(TY104012* C_126322, TY51526* N_126323);
N_NIMCALL(NIM_BOOL, Namefits_126235)(TY104012* C_126237, TY51548* S_126238, TY51526* N_126239);
N_NIMCALL(NIM_BOOL, Argsfit_126302)(TY104012* C_126304, TY51548* Candidate_126305, TY51526* N_126306);
N_NIMCALL(void, Initcandidate_123041)(TY123007* C_123044, TY51548* Callee_123045, TY51526* Binding_123046);
N_NIMCALL(void, Partialmatch_125474)(TY104012* C_125476, TY51526* N_125477, TY123007* M_125479);
N_NIMCALL(TY51526*, Findclosestsym_126835)(TY51526* N_126837);
N_NIMCALL(TY51526*, Fuzzysemcheck_126920)(TY104012* C_126922, TY51526* N_126923);
N_NIMCALL(TY51526*, Newnodei_51738)(NU8 Kind_51740, TY43538 Info_51741);
N_NIMCALL(void, Suggestexpr_126991)(TY104012* C_126993, TY51526* Node_126994);
NIM_CONST TY126741 Callnodes_126740 = {
0x00, 0x00, 0x70, 0x38, 0x00, 0x00, 0x00, 0x00,
0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP194027, "sug", 3);
STRING_LITERAL(TMP194028, "getSymFromList", 14);
STRING_LITERAL(TMP194074, "con", 3);
STRING_LITERAL(TMP194075, "def", 3);
NI Recursivecheck_126914;
extern NU32 Gglobaloptions_42084;
extern TSafePoint* excHandler;
extern TNimType* NTI43540; /* ERecoverableError */
extern E_Base* Currexception_5032;
extern TY51526* Emptynode_51858;
extern TY10996 Gch_11014;
extern TNimType* NTI51530; /* TStrTable */
extern TNimType* NTI51174; /* TSymKind */
extern TNimType* NTI123007; /* TCandidate */
static N_INLINE(NI, Sonslen_51804)(TY51526* N_51806) {
NI Result_52897;
Result_52897 = 0;
if (!(*N_51806).KindU.S6.Sons == 0) goto LA2;
Result_52897 = 0;
goto LA1;
LA2: ;
Result_52897 = (*N_51806).KindU.S6.Sons->Sup.len;
LA1: ;
return Result_52897;
}
N_NIMCALL(TY51526*, Findclosestdot_126649)(TY51526* N_126651) {
TY51526* Result_126652;
NU8 LOC2;
NI I_126692;
NI HEX3Atmp_126737;
NI LOC7;
NI Res_126739;
Result_126652 = 0;
Result_126652 = NIM_NIL;
LOC2 = Incheckpoint_43850((*N_126651).Info);
if (!(LOC2 == ((NU8) 2))) goto LA3;
Result_126652 = N_126651;
goto LA1;
LA3: ;
if (!!(((*N_126651).Kind >= ((NU8) 0) && (*N_126651).Kind <= ((NU8) 18)))) goto LA5;
I_126692 = 0;
HEX3Atmp_126737 = 0;
LOC7 = Sonslen_51804(N_126651);
HEX3Atmp_126737 = LOC7 - 1;
Res_126739 = 0;
Res_126739 = 0;
while (1) {
if (!(Res_126739 <= HEX3Atmp_126737)) goto LA8;
I_126692 = Res_126739;
if (!((*(*N_126651).KindU.S6.Sons->data[I_126692]).Kind == ((NU8) 36))) goto LA10;
Result_126652 = Findclosestdot_126649((*N_126651).KindU.S6.Sons->data[I_126692]);
if (!!((Result_126652 == NIM_NIL))) goto LA13;
goto BeforeRet;
LA13: ;
LA10: ;
Res_126739 += 1;
} LA8: ;
goto LA1;
LA5: ;
LA1: ;
BeforeRet: ;
return Result_126652;
}
static N_INLINE(void, pushSafePoint)(TSafePoint* S_5035) {
(*S_5035).prev = excHandler;
excHandler = S_5035;
}
static N_INLINE(void, popSafePoint)(void) {
excHandler = (*excHandler).prev;
}
static N_INLINE(E_Base*, getCurrentException)(void) {
E_Base* Result_20404;
Result_20404 = 0;
Result_20404 = NIM_NIL;
Result_20404 = Currexception_5032;
return Result_20404;
}
static N_INLINE(NI, Atomicinc_3221)(NI* Memloc_3224, NI X_3225) {
NI Result_7807;
Result_7807 = 0;
(*Memloc_3224) += X_3225;
Result_7807 = (*Memloc_3224);
return Result_7807;
}
static N_INLINE(NIM_BOOL, Canbecycleroot_11416)(TY10602* C_11418) {
NIM_BOOL Result_11419;
Result_11419 = 0;
Result_11419 = !((((*(*C_11418).Typ).flags &(1<<((((NU8) 1))&7)))!=0));
return Result_11419;
}
static N_INLINE(void, Rtladdcycleroot_12052)(TY10602* C_12054) {
Incl_10880(&Gch_11014.Cycleroots, C_12054);
}
static N_INLINE(void, Incref_13002)(TY10602* C_13004) {
NI LOC1;
NIM_BOOL LOC3;
LOC1 = Atomicinc_3221(&(*C_13004).Refcount, 8);
LOC3 = Canbecycleroot_11416(C_13004);
if (!LOC3) goto LA4;
Rtladdcycleroot_12052(C_13004);
LA4: ;
}
static N_INLINE(TY10602*, Usrtocell_11412)(void* Usr_11414) {
TY10602* Result_11415;
Result_11415 = 0;
Result_11415 = ((TY10602*) ((NI32)((NU32)(((NI) (Usr_11414))) - (NU32)(((NI) (((NI)sizeof(TY10602))))))));
return Result_11415;
}
static N_INLINE(NI, Atomicdec_3226)(NI* Memloc_3229, NI X_3230) {
NI Result_8006;
Result_8006 = 0;
(*Memloc_3229) -= X_3230;
Result_8006 = (*Memloc_3229);
return Result_8006;
}
static N_INLINE(void, Rtladdzct_12401)(TY10602* C_12403) {
Addzct_11401(&Gch_11014.Zct, C_12403);
}
static N_INLINE(void, Decref_12801)(TY10602* C_12803) {
NI LOC2;
NIM_BOOL LOC5;
LOC2 = Atomicdec_3226(&(*C_12803).Refcount, 8);
if (!((NU32)(LOC2) < (NU32)(8))) goto LA3;
Rtladdzct_12401(C_12803);
goto LA1;
LA3: ;
LOC5 = Canbecycleroot_11416(C_12803);
if (!LOC5) goto LA6;
Rtladdcycleroot_12052(C_12803);
goto LA1;
LA6: ;
LA1: ;
}
static N_INLINE(void, asgnRef)(void** Dest_13014, void* Src_13015) {
TY10602* LOC4;
TY10602* LOC8;
if (!!((Src_13015 == NIM_NIL))) goto LA2;
LOC4 = Usrtocell_11412(Src_13015);
Incref_13002(LOC4);
LA2: ;
if (!!(((*Dest_13014) == NIM_NIL))) goto LA6;
LOC8 = Usrtocell_11412((*Dest_13014));
Decref_12801(LOC8);
LA6: ;
(*Dest_13014) = Src_13015;
}
static N_INLINE(void, popCurrentException)(void) {
asgnRef((void**) &Currexception_5032, (*Currexception_5032).parent);
}
N_NIMCALL(TY51526*, Safesemexpr_126915)(TY104012* C_126917, TY51526* N_126918) {
TY51526* Result_126919;
TSafePoint TMP193968;
Result_126919 = 0;
Result_126919 = NIM_NIL;
pushSafePoint(&TMP193968);
TMP193968.status = setjmp(TMP193968.context);
if (TMP193968.status == 0) {
Result_126919 = (*C_126917).Semexpr(C_126917, N_126918);
popSafePoint();
} else {
popSafePoint();
if (getCurrentException()->Sup.m_type == NTI43540) {
Result_126919 = Emptynode_51858;
TMP193968.status = 0;popCurrentException();}
}
if (TMP193968.status != 0) reraiseException();
return Result_126919;
}
static N_INLINE(NIM_BOOL, Filtersym_126057)(TY51548* S_126059) {
NIM_BOOL Result_126060;
Result_126060 = 0;
Result_126060 = (((NU8)((*(*S_126059).Name).S->data[0])) >= ((NU8)(97)) && ((NU8)((*(*S_126059).Name).S->data[0])) <= ((NU8)(122)) || ((NU8)((*(*S_126059).Name).S->data[0])) >= ((NU8)(65)) && ((NU8)((*(*S_126059).Name).S->data[0])) <= ((NU8)(90)) || ((NU8)((*(*S_126059).Name).S->data[0])) >= ((NU8)(48)) && ((NU8)((*(*S_126059).Name).S->data[0])) <= ((NU8)(57)) || ((NU8)((*(*S_126059).Name).S->data[0])) >= ((NU8)(128)) && ((NU8)((*(*S_126059).Name).S->data[0])) <= ((NU8)(255)));
return Result_126060;
}
static N_INLINE(void, appendString)(NimStringDesc* Dest_18599, NimStringDesc* Src_18600) {
memcpy(((NCSTRING) (&(*Dest_18599).data[((*Dest_18599).Sup.len)-0])), ((NCSTRING) ((*Src_18600).data)), ((NI32) ((NI32)((NI32)((*Src_18600).Sup.len + 1) * 1))));
(*Dest_18599).Sup.len += (*Src_18600).Sup.len;
}
static N_INLINE(NI, Tolinenumber_43732)(TY43538 Info_43734) {
NI Result_43735;
Result_43735 = 0;
Result_43735 = ((NI) (Info_43734.Line));
return Result_43735;
}
static N_INLINE(NI, Tocolumn_43736)(TY43538 Info_43738) {
NI Result_43739;
Result_43739 = 0;
Result_43739 = ((NI) (Info_43738.Col));
return Result_43739;
}
N_NIMCALL(NimStringDesc*, Symtostr_126008)(TY51548* S_126010, NIM_BOOL Islocal_126011, NimStringDesc* Section_126012) {
NimStringDesc* Result_126013;
NIM_BOOL LOC5;
NimStringDesc* LOC12;
NimStringDesc* LOC13;
NI LOC14;
NimStringDesc* LOC15;
NI LOC16;
NimStringDesc* LOC17;
Result_126013 = 0;
Result_126013 = NIM_NIL;
Result_126013 = copyString(Section_126012);
Result_126013 = addChar(Result_126013, 9);
Result_126013 = resizeString(Result_126013, reprEnum((*S_126010).Kind, NTI51174)->Sup.len + 0);
appendString(Result_126013, reprEnum((*S_126010).Kind, NTI51174));
Result_126013 = addChar(Result_126013, 9);
if (!!(Islocal_126011)) goto LA2;
LOC5 = !(((*S_126010).Kind == ((NU8) 6)));
if (!(LOC5)) goto LA6;
LOC5 = !(((*S_126010).Owner == NIM_NIL));
LA6: ;
if (!LOC5) goto LA7;
Result_126013 = resizeString(Result_126013, (*(*(*S_126010).Owner).Name).S->Sup.len + 0);
appendString(Result_126013, (*(*(*S_126010).Owner).Name).S);
Result_126013 = addChar(Result_126013, 46);
LA7: ;
LA2: ;
Result_126013 = resizeString(Result_126013, (*(*S_126010).Name).S->Sup.len + 0);
appendString(Result_126013, (*(*S_126010).Name).S);
Result_126013 = addChar(Result_126013, 9);
if (!!(((*S_126010).Typ == NIM_NIL))) goto LA10;
LOC12 = 0;
LOC12 = Typetostring_94014((*S_126010).Typ, ((NU8) 0));
Result_126013 = resizeString(Result_126013, LOC12->Sup.len + 0);
appendString(Result_126013, LOC12);
LA10: ;
Result_126013 = addChar(Result_126013, 9);
LOC13 = 0;
LOC13 = Tofilename_43724((*S_126010).Info);
Result_126013 = resizeString(Result_126013, LOC13->Sup.len + 0);
appendString(Result_126013, LOC13);
Result_126013 = addChar(Result_126013, 9);
LOC14 = Tolinenumber_43732((*S_126010).Info);
LOC15 = 0;
LOC15 = nimIntToStr(LOC14);
Result_126013 = resizeString(Result_126013, LOC15->Sup.len + 0);
appendString(Result_126013, LOC15);
Result_126013 = addChar(Result_126013, 9);
LOC16 = Tocolumn_43736((*S_126010).Info);
LOC17 = 0;
LOC17 = nimIntToStr(LOC16);
Result_126013 = resizeString(Result_126013, LOC17->Sup.len + 0);
appendString(Result_126013, LOC17);
return Result_126013;
}
N_NIMCALL(void, Suggesteverything_126433)(TY104012* C_126435, TY51526* N_126436) {
NI I_126444;
NI HEX3Atmp_126457;
NI Res_126459;
TY51548* It_126447;
TY51530 HEX3Atmp_126452;
TY56071 It_126454;
TY51548* S_126456;
NIM_BOOL LOC4;
NimStringDesc* LOC7;
It_126447 = 0;
memset((void*)&HEX3Atmp_126452, 0, sizeof(HEX3Atmp_126452));
HEX3Atmp_126452.m_type = NTI51530;
S_126456 = 0;
I_126444 = 0;
HEX3Atmp_126457 = 0;
HEX3Atmp_126457 = (NI32)(((NI) ((*C_126435).Tab.Tos)) - 1);
Res_126459 = 0;
Res_126459 = HEX3Atmp_126457;
while (1) {
if (!(0 <= Res_126459)) goto LA1;
I_126444 = Res_126459;
It_126447 = NIM_NIL;
genericReset((void*)&HEX3Atmp_126452, NTI51530);
genericAssign((void*)&HEX3Atmp_126452, (void*)&(*C_126435).Tab.Stack->data[I_126444], NTI51530);
memset((void*)&It_126454, 0, sizeof(It_126454));
S_126456 = NIM_NIL;
S_126456 = Inittabiter_56073(&It_126454, &HEX3Atmp_126452);
while (1) {
if (!!((S_126456 == NIM_NIL))) goto LA2;
It_126447 = S_126456;
LOC4 = Filtersym_126057(It_126447);
if (!LOC4) goto LA5;
LOC7 = 0;
LOC7 = Symtostr_126008(It_126447, (1 < I_126444), ((NimStringDesc*) &TMP194027));
Outwriteln_43783(LOC7);
LA5: ;
S_126456 = Nextiter_56078(&It_126454, &HEX3Atmp_126452);
} LA2: ;
Res_126459 -= 1;
} LA1: ;
}
N_NIMCALL(void, Suggestfield_126072)(TY51548* S_126074) {
NIM_BOOL LOC2;
NimStringDesc* LOC5;
LOC2 = Filtersym_126057(S_126074);
if (!LOC2) goto LA3;
LOC5 = 0;
LOC5 = Symtostr_126008(S_126074, NIM_TRUE, ((NimStringDesc*) &TMP194027));
Outwriteln_43783(LOC5);
LA3: ;
}
N_NIMCALL(void, Suggestsymlist_126080)(TY51526* List_126082) {
NI I_126106;
NI HEX3Atmp_126152;
NI LOC1;
NI Res_126154;
I_126106 = 0;
HEX3Atmp_126152 = 0;
LOC1 = Sonslen_51804(List_126082);
HEX3Atmp_126152 = (NI32)(LOC1 - 1);
Res_126154 = 0;
Res_126154 = 0;
while (1) {
if (!(Res_126154 <= HEX3Atmp_126152)) goto LA2;
I_126106 = Res_126154;
if (!!(((*(*List_126082).KindU.S6.Sons->data[I_126106]).Kind == ((NU8) 3)))) goto LA4;
Internalerror_44208((*List_126082).Info, ((NimStringDesc*) &TMP194028));
LA4: ;
Suggestfield_126072((*(*List_126082).KindU.S6.Sons->data[I_126106]).KindU.S4.Sym);
Res_126154 += 1;
} LA2: ;
}
static N_INLINE(NI, Sonslen_51807)(TY51552* N_51809) {
NI Result_52761;
Result_52761 = 0;
if (!(*N_51809).Sons == 0) goto LA2;
Result_52761 = 0;
goto LA1;
LA2: ;
Result_52761 = (*N_51809).Sons->Sup.len;
LA1: ;
return Result_52761;
}
static N_INLINE(NIM_BOOL, Typefits_126362)(TY104012* C_126364, TY51548* S_126365, TY51552* Firstarg_126366) {
NIM_BOOL Result_126367;
NIM_BOOL LOC2;
NIM_BOOL LOC3;
NI LOC5;
Result_126367 = 0;
LOC3 = !(((*S_126365).Typ == NIM_NIL));
if (!(LOC3)) goto LA4;
LOC5 = Sonslen_51807((*S_126365).Typ);
LOC3 = (1 < LOC5);
LA4: ;
LOC2 = LOC3;
if (!(LOC2)) goto LA6;
LOC2 = !(((*(*S_126365).Typ).Sons->data[1] == NIM_NIL));
LA6: ;
if (!LOC2) goto LA7;
Result_126367 = Argtypematches_124914(C_126364, (*(*S_126365).Typ).Sons->data[1], Firstarg_126366);
LA7: ;
return Result_126367;
}
N_NIMCALL(void, Suggestoperations_126394)(TY104012* C_126396, TY51526* N_126397, TY51552* Typ_126398) {
NI I_126417;
NI HEX3Atmp_126430;
NI Res_126432;
TY51548* It_126420;
TY51530 HEX3Atmp_126425;
TY56071 It_126427;
TY51548* S_126429;
NIM_BOOL LOC4;
NimStringDesc* LOC8;
It_126420 = 0;
memset((void*)&HEX3Atmp_126425, 0, sizeof(HEX3Atmp_126425));
HEX3Atmp_126425.m_type = NTI51530;
S_126429 = 0;
I_126417 = 0;
HEX3Atmp_126430 = 0;
HEX3Atmp_126430 = (NI32)(((NI) ((*C_126396).Tab.Tos)) - 1);
Res_126432 = 0;
Res_126432 = HEX3Atmp_126430;
while (1) {
if (!(0 <= Res_126432)) goto LA1;
I_126417 = Res_126432;
It_126420 = NIM_NIL;
genericReset((void*)&HEX3Atmp_126425, NTI51530);
genericAssign((void*)&HEX3Atmp_126425, (void*)&(*C_126396).Tab.Stack->data[I_126417], NTI51530);
memset((void*)&It_126427, 0, sizeof(It_126427));
S_126429 = NIM_NIL;
S_126429 = Inittabiter_56073(&It_126427, &HEX3Atmp_126425);
while (1) {
if (!!((S_126429 == NIM_NIL))) goto LA2;
It_126420 = S_126429;
LOC4 = Filtersym_126057(It_126420);
if (!(LOC4)) goto LA5;
LOC4 = Typefits_126362(C_126396, It_126420, Typ_126398);
LA5: ;
if (!LOC4) goto LA6;
LOC8 = 0;
LOC8 = Symtostr_126008(It_126420, (1 < I_126417), ((NimStringDesc*) &TMP194027));
Outwriteln_43783(LOC8);
LA6: ;
S_126429 = Nextiter_56078(&It_126427, &HEX3Atmp_126425);
} LA2: ;
Res_126432 -= 1;
} LA1: ;
}
static N_INLINE(TY51526*, Lastson_51810)(TY51526* N_51812) {
TY51526* Result_53916;
NI LOC1;
Result_53916 = 0;
Result_53916 = NIM_NIL;
LOC1 = Sonslen_51804(N_51812);
Result_53916 = (*N_51812).KindU.S6.Sons->data[(NI32)(LOC1 - 1)];
return Result_53916;
}
N_NIMCALL(void, Suggestobject_126155)(TY51526* N_126157) {
NI I_126166;
NI HEX3Atmp_126229;
NI LOC1;
NI Res_126231;
NI L_126179;
NI I_126204;
NI HEX3Atmp_126232;
NI Res_126234;
TY51526* LOC7;
switch ((*N_126157).Kind) {
case ((NU8) 113):
I_126166 = 0;
HEX3Atmp_126229 = 0;
LOC1 = Sonslen_51804(N_126157);
HEX3Atmp_126229 = (NI32)(LOC1 - 1);
Res_126231 = 0;
Res_126231 = 0;
while (1) {
if (!(Res_126231 <= HEX3Atmp_126229)) goto LA2;
I_126166 = Res_126231;
Suggestobject_126155((*N_126157).KindU.S6.Sons->data[I_126166]);
Res_126231 += 1;
} LA2: ;
break;
case ((NU8) 114):
L_126179 = 0;
L_126179 = Sonslen_51804(N_126157);
if (!(0 < L_126179)) goto LA4;
Suggestobject_126155((*N_126157).KindU.S6.Sons->data[0]);
I_126204 = 0;
HEX3Atmp_126232 = 0;
HEX3Atmp_126232 = (NI32)(L_126179 - 1);
Res_126234 = 0;
Res_126234 = 1;
while (1) {
if (!(Res_126234 <= HEX3Atmp_126232)) goto LA6;
I_126204 = Res_126234;
LOC7 = 0;
LOC7 = Lastson_51810((*N_126157).KindU.S6.Sons->data[I_126204]);
Suggestobject_126155(LOC7);
Res_126234 += 1;
} LA6: ;
LA4: ;
break;
case ((NU8) 3):
Suggestfield_126072((*N_126157).KindU.S4.Sym);
break;
default:
break;
}
}
N_NIMCALL(void, Suggestfieldaccess_126460)(TY104012* C_126462, TY51526* N_126463) {
TY51552* Typ_126464;
NIM_BOOL LOC5;
TY51548* It_126529;
TY51530 HEX3Atmp_126639;
TY56071 It_126641;
TY51548* S_126643;
NIM_BOOL LOC14;
NimStringDesc* LOC17;
TY51548* It_126544;
TY51530 HEX3Atmp_126644;
TY56071 It_126646;
TY51548* S_126648;
NIM_BOOL LOC20;
NimStringDesc* LOC23;
NIM_BOOL LOC24;
NIM_BOOL LOC25;
TY51552* T_126584;
TY51552* T_126606;
NIM_BOOL LOC38;
Typ_126464 = 0;
It_126529 = 0;
memset((void*)&HEX3Atmp_126639, 0, sizeof(HEX3Atmp_126639));
HEX3Atmp_126639.m_type = NTI51530;
S_126643 = 0;
It_126544 = 0;
memset((void*)&HEX3Atmp_126644, 0, sizeof(HEX3Atmp_126644));
HEX3Atmp_126644.m_type = NTI51530;
S_126648 = 0;
T_126584 = 0;
T_126606 = 0;
Typ_126464 = NIM_NIL;
Typ_126464 = (*N_126463).Typ;
if (!(Typ_126464 == NIM_NIL)) goto LA2;
LOC5 = ((*N_126463).Kind == ((NU8) 3));
if (!(LOC5)) goto LA6;
LOC5 = ((*(*N_126463).KindU.S4.Sym).Kind == ((NU8) 6));
LA6: ;
if (!LOC5) goto LA7;
if (!((*N_126463).KindU.S4.Sym == (*C_126462).Module)) goto LA10;
It_126529 = NIM_NIL;
genericReset((void*)&HEX3Atmp_126639, NTI51530);
genericAssign((void*)&HEX3Atmp_126639, (void*)&(*C_126462).Tab.Stack->data[1], NTI51530);
memset((void*)&It_126641, 0, sizeof(It_126641));
S_126643 = NIM_NIL;
S_126643 = Inittabiter_56073(&It_126641, &HEX3Atmp_126639);
while (1) {
if (!!((S_126643 == NIM_NIL))) goto LA12;
It_126529 = S_126643;
LOC14 = Filtersym_126057(It_126529);
if (!LOC14) goto LA15;
LOC17 = 0;
LOC17 = Symtostr_126008(It_126529, NIM_FALSE, ((NimStringDesc*) &TMP194027));
Outwriteln_43783(LOC17);
LA15: ;
S_126643 = Nextiter_56078(&It_126641, &HEX3Atmp_126639);
} LA12: ;
goto LA9;
LA10: ;
It_126544 = NIM_NIL;
genericReset((void*)&HEX3Atmp_126644, NTI51530);
genericAssign((void*)&HEX3Atmp_126644, (void*)&(*(*N_126463).KindU.S4.Sym).Tab, NTI51530);
memset((void*)&It_126646, 0, sizeof(It_126646));
S_126648 = NIM_NIL;
S_126648 = Inittabiter_56073(&It_126646, &HEX3Atmp_126644);
while (1) {
if (!!((S_126648 == NIM_NIL))) goto LA18;
It_126544 = S_126648;
LOC20 = Filtersym_126057(It_126544);
if (!LOC20) goto LA21;
LOC23 = 0;
LOC23 = Symtostr_126008(It_126544, NIM_FALSE, ((NimStringDesc*) &TMP194027));
Outwriteln_43783(LOC23);
LA21: ;
S_126648 = Nextiter_56078(&It_126646, &HEX3Atmp_126644);
} LA18: ;
LA9: ;
goto LA4;
LA7: ;
Suggesteverything_126433(C_126462, N_126463);
LA4: ;
goto LA1;
LA2: ;
LOC25 = ((*Typ_126464).Kind == ((NU8) 14));
if (!(LOC25)) goto LA26;
LOC25 = ((*N_126463).Kind == ((NU8) 3));
LA26: ;
LOC24 = LOC25;
if (!(LOC24)) goto LA27;
LOC24 = ((*(*N_126463).KindU.S4.Sym).Kind == ((NU8) 7));
LA27: ;
if (!LOC24) goto LA28;
T_126584 = NIM_NIL;
T_126584 = Typ_126464;
while (1) {
if (!!((T_126584 == NIM_NIL))) goto LA30;
Suggestsymlist_126080((*T_126584).N);
T_126584 = (*T_126584).Sons->data[0];
} LA30: ;
Suggestoperations_126394(C_126462, N_126463, Typ_126464);
goto LA1;
LA28: ;
Typ_126464 = Skiptypes_94087(Typ_126464, 14682112);
if (!((*Typ_126464).Kind == ((NU8) 17))) goto LA32;
T_126606 = NIM_NIL;
T_126606 = Typ_126464;
while (1) {
Suggestobject_126155((*T_126606).N);
if (!((*T_126606).Sons->data[0] == NIM_NIL)) goto LA36;
goto LA34;
LA36: ;
T_126606 = Skiptypes_94087((*T_126606).Sons->data[0], 2048);
} LA34: ;
Suggestoperations_126394(C_126462, N_126463, Typ_126464);
goto LA31;
LA32: ;
LOC38 = ((*Typ_126464).Kind == ((NU8) 18));
if (!(LOC38)) goto LA39;
LOC38 = !(((*Typ_126464).N == NIM_NIL));
LA39: ;
if (!LOC38) goto LA40;
Suggestsymlist_126080((*Typ_126464).N);
Suggestoperations_126394(C_126462, N_126463, Typ_126464);
goto LA31;
LA40: ;
Suggesteverything_126433(C_126462, N_126463);
LA31: ;
LA1: ;
}
N_NIMCALL(TY51526*, Findclosestcall_126742)(TY51526* N_126744) {
TY51526* Result_126745;
NU8 LOC2;
NI I_126785;
NI HEX3Atmp_126832;
NI LOC7;
NI Res_126834;
Result_126745 = 0;
Result_126745 = NIM_NIL;
LOC2 = Incheckpoint_43850((*N_126744).Info);
if (!(LOC2 == ((NU8) 2))) goto LA3;
Result_126745 = N_126744;
goto LA1;
LA3: ;
if (!!(((*N_126744).Kind >= ((NU8) 0) && (*N_126744).Kind <= ((NU8) 18)))) goto LA5;
I_126785 = 0;
HEX3Atmp_126832 = 0;
LOC7 = Sonslen_51804(N_126744);
HEX3Atmp_126832 = LOC7 - 1;
Res_126834 = 0;
Res_126834 = 0;
while (1) {
if (!(Res_126834 <= HEX3Atmp_126832)) goto LA8;
I_126785 = Res_126834;
if (!((*(*N_126744).KindU.S6.Sons->data[I_126785]).Kind == ((NU8) 21) || (*(*N_126744).KindU.S6.Sons->data[I_126785]).Kind == ((NU8) 27) || (*(*N_126744).KindU.S6.Sons->data[I_126785]).Kind == ((NU8) 28) || (*(*N_126744).KindU.S6.Sons->data[I_126785]).Kind == ((NU8) 29) || (*(*N_126744).KindU.S6.Sons->data[I_126785]).Kind == ((NU8) 20) || (*(*N_126744).KindU.S6.Sons->data[I_126785]).Kind == ((NU8) 22) || (*(*N_126744).KindU.S6.Sons->data[I_126785]).Kind == ((NU8) 79))) goto LA10;
Result_126745 = Findclosestcall_126742((*N_126744).KindU.S6.Sons->data[I_126785]);
if (!!((Result_126745 == NIM_NIL))) goto LA13;
goto BeforeRet;
LA13: ;
LA10: ;
Res_126834 += 1;
} LA8: ;
goto LA1;
LA5: ;
LA1: ;
BeforeRet: ;
return Result_126745;
}
N_NIMCALL(NIM_BOOL, Namefits_126235)(TY104012* C_126237, TY51548* S_126238, TY51526* N_126239) {
NIM_BOOL Result_126240;
TY51526* Op_126253;
TY50011* Opr_126275;
Op_126253 = 0;
Opr_126275 = 0;
Result_126240 = 0;
Op_126253 = NIM_NIL;
Op_126253 = (*N_126239).KindU.S6.Sons->data[0];
if (!((*Op_126253).Kind == ((NU8) 46))) goto LA2;
Op_126253 = (*Op_126253).KindU.S6.Sons->data[0];
LA2: ;
Opr_126275 = NIM_NIL;
switch ((*Op_126253).Kind) {
case ((NU8) 3):
Opr_126275 = (*(*Op_126253).KindU.S4.Sym).Name;
break;
case ((NU8) 2):
Opr_126275 = (*Op_126253).KindU.S5.Ident;
break;
default:
Result_126240 = NIM_FALSE;
goto BeforeRet;
break;
}
Result_126240 = ((*Opr_126275).Sup.Id == (*(*S_126238).Name).Sup.Id);
BeforeRet: ;
return Result_126240;
}
N_NIMCALL(NIM_BOOL, Argsfit_126302)(TY104012* C_126304, TY51548* Candidate_126305, TY51526* N_126306) {
NIM_BOOL Result_126307;
TY123007 M_126308;
memset((void*)&M_126308, 0, sizeof(M_126308));
Result_126307 = 0;
switch ((*Candidate_126305).Kind) {
case ((NU8) 10):
case ((NU8) 12):
case ((NU8) 11):
genericReset((void*)&M_126308, NTI123007);
Initcandidate_123041(&M_126308, Candidate_126305, NIM_NIL);
Partialmatch_125474(C_126304, N_126306, &M_126308);
Result_126307 = !((M_126308.State == ((NU8) 2)));
break;
case ((NU8) 15):
case ((NU8) 14):
Result_126307 = NIM_TRUE;
break;
default:
Result_126307 = NIM_FALSE;
break;
}
return Result_126307;
}
N_NIMCALL(void, Suggestcall_126320)(TY104012* C_126322, TY51526* N_126323) {
NI I_126346;
NI HEX3Atmp_126359;
NI Res_126361;
TY51548* It_126349;
TY51530 HEX3Atmp_126354;
TY56071 It_126356;
TY51548* S_126358;
NIM_BOOL LOC4;
NIM_BOOL LOC5;
NimStringDesc* LOC10;
It_126349 = 0;
memset((void*)&HEX3Atmp_126354, 0, sizeof(HEX3Atmp_126354));
HEX3Atmp_126354.m_type = NTI51530;
S_126358 = 0;
I_126346 = 0;
HEX3Atmp_126359 = 0;
HEX3Atmp_126359 = (NI32)(((NI) ((*C_126322).Tab.Tos)) - 1);
Res_126361 = 0;
Res_126361 = HEX3Atmp_126359;
while (1) {
if (!(0 <= Res_126361)) goto LA1;
I_126346 = Res_126361;
It_126349 = NIM_NIL;
genericReset((void*)&HEX3Atmp_126354, NTI51530);
genericAssign((void*)&HEX3Atmp_126354, (void*)&(*C_126322).Tab.Stack->data[I_126346], NTI51530);
memset((void*)&It_126356, 0, sizeof(It_126356));
S_126358 = NIM_NIL;
S_126358 = Inittabiter_56073(&It_126356, &HEX3Atmp_126354);
while (1) {
if (!!((S_126358 == NIM_NIL))) goto LA2;
It_126349 = S_126358;
LOC5 = Filtersym_126057(It_126349);
if (!(LOC5)) goto LA6;
LOC5 = Namefits_126235(C_126322, It_126349, N_126323);
LA6: ;
LOC4 = LOC5;
if (!(LOC4)) goto LA7;
LOC4 = Argsfit_126302(C_126322, It_126349, N_126323);
LA7: ;
if (!LOC4) goto LA8;
LOC10 = 0;
LOC10 = Symtostr_126008(It_126349, (1 < I_126346), ((NimStringDesc*) &TMP194074));
Outwriteln_43783(LOC10);
LA8: ;
S_126358 = Nextiter_56078(&It_126356, &HEX3Atmp_126354);
} LA2: ;
Res_126361 -= 1;
} LA1: ;
}
N_NIMCALL(TY51526*, Findclosestsym_126835)(TY51526* N_126837) {
TY51526* Result_126838;
NIM_BOOL LOC2;
NU8 LOC4;
NI I_126887;
NI HEX3Atmp_126911;
NI LOC9;
NI Res_126913;
Result_126838 = 0;
Result_126838 = NIM_NIL;
LOC2 = ((*N_126837).Kind == ((NU8) 3));
if (!(LOC2)) goto LA3;
LOC4 = Incheckpoint_43850((*N_126837).Info);
LOC2 = (LOC4 == ((NU8) 2));
LA3: ;
if (!LOC2) goto LA5;
Result_126838 = N_126837;
goto LA1;
LA5: ;
if (!!(((*N_126837).Kind >= ((NU8) 0) && (*N_126837).Kind <= ((NU8) 18)))) goto LA7;
I_126887 = 0;
HEX3Atmp_126911 = 0;
LOC9 = Sonslen_51804(N_126837);
HEX3Atmp_126911 = LOC9 - 1;
Res_126913 = 0;
Res_126913 = 0;
while (1) {
if (!(Res_126913 <= HEX3Atmp_126911)) goto LA10;
I_126887 = Res_126913;
Result_126838 = Findclosestsym_126835((*N_126837).KindU.S6.Sons->data[I_126887]);
if (!!((Result_126838 == NIM_NIL))) goto LA12;
goto BeforeRet;
LA12: ;
Res_126913 += 1;
} LA10: ;
goto LA1;
LA7: ;
LA1: ;
BeforeRet: ;
return Result_126838;
}
N_NIMCALL(TY51526*, Fuzzysemcheck_126920)(TY104012* C_126922, TY51526* N_126923) {
TY51526* Result_126924;
NIM_BOOL LOC2;
NI I_126975;
NI HEX3Atmp_126988;
NI LOC9;
NI Res_126990;
TY51526* LOC11;
Result_126924 = 0;
Result_126924 = NIM_NIL;
Result_126924 = Safesemexpr_126915(C_126922, N_126923);
LOC2 = (Result_126924 == NIM_NIL);
if (LOC2) goto LA3;
LOC2 = ((*Result_126924).Kind == ((NU8) 1));
LA3: ;
if (!LOC2) goto LA4;
Result_126924 = Newnodei_51738((*N_126923).Kind, (*N_126923).Info);
if (!!(((*N_126923).Kind >= ((NU8) 0) && (*N_126923).Kind <= ((NU8) 18)))) goto LA7;
I_126975 = 0;
HEX3Atmp_126988 = 0;
LOC9 = Sonslen_51804(N_126923);
HEX3Atmp_126988 = LOC9 - 1;
Res_126990 = 0;
Res_126990 = 0;
while (1) {
if (!(Res_126990 <= HEX3Atmp_126988)) goto LA10;
I_126975 = Res_126990;
LOC11 = 0;
LOC11 = Fuzzysemcheck_126920(C_126922, (*N_126923).KindU.S6.Sons->data[I_126975]);
Addson_51824(Result_126924, LOC11);
Res_126990 += 1;
} LA10: ;
LA7: ;
LA4: ;
return Result_126924;
}
N_NIMCALL(void, Suggestexpr_126991)(TY104012* C_126993, TY51526* Node_126994) {
NU8 Cp_126995;
TY51526* N_127032;
NIM_BOOL LOC14;
TY51526* Obj_127074;
TY51526* N_127086;
TY51526* A_127109;
TY51526* X_127122;
NIM_BOOL LOC28;
NI I_127163;
NI HEX3Atmp_127232;
NI LOC32;
NI Res_127234;
TY51526* X_127176;
NIM_BOOL LOC35;
TY51526* N_127208;
TY51526* LOC42;
NimStringDesc* LOC46;
N_127032 = 0;
Obj_127074 = 0;
N_127086 = 0;
A_127109 = 0;
X_127122 = 0;
X_127176 = 0;
N_127208 = 0;
Cp_126995 = 0;
Cp_126995 = Incheckpoint_43850((*Node_126994).Info);
if (!(Cp_126995 == ((NU8) 0))) goto LA2;
goto BeforeRet;
LA2: ;
if (!(0 < Recursivecheck_126914)) goto LA5;
goto BeforeRet;
LA5: ;
Recursivecheck_126914 += 1;
if (!((Gglobaloptions_42084 &(1<<((((NU8) 21))&31)))!=0)) goto LA8;
N_127032 = NIM_NIL;
N_127032 = Findclosestdot_126649(Node_126994);
if (!(N_127032 == NIM_NIL)) goto LA11;
N_127032 = Node_126994;
goto LA10;
LA11: ;
Cp_126995 = ((NU8) 2);
LA10: ;
LOC14 = ((*N_127032).Kind == ((NU8) 36));
if (!(LOC14)) goto LA15;
LOC14 = (Cp_126995 == ((NU8) 2));
LA15: ;
if (!LOC14) goto LA16;
Obj_127074 = NIM_NIL;
Obj_127074 = Safesemexpr_126915(C_126993, (*N_127032).KindU.S6.Sons->data[0]);
Suggestfieldaccess_126460(C_126993, Obj_127074);
goto LA13;
LA16: ;
Suggesteverything_126433(C_126993, N_127032);
LA13: ;
LA8: ;
if (!((Gglobaloptions_42084 &(1<<((((NU8) 22))&31)))!=0)) goto LA19;
N_127086 = NIM_NIL;
N_127086 = Findclosestcall_126742(Node_126994);
if (!(N_127086 == NIM_NIL)) goto LA22;
N_127086 = Node_126994;
goto LA21;
LA22: ;
Cp_126995 = ((NU8) 2);
LA21: ;
if (!((*N_127086).Kind == ((NU8) 21) || (*N_127086).Kind == ((NU8) 27) || (*N_127086).Kind == ((NU8) 28) || (*N_127086).Kind == ((NU8) 29) || (*N_127086).Kind == ((NU8) 20) || (*N_127086).Kind == ((NU8) 22) || (*N_127086).Kind == ((NU8) 79))) goto LA25;
A_127109 = NIM_NIL;
A_127109 = Copynode_51849(N_127086);
X_127122 = NIM_NIL;
X_127122 = Safesemexpr_126915(C_126993, (*N_127086).KindU.S6.Sons->data[0]);
LOC28 = ((*X_127122).Kind == ((NU8) 1));
if (LOC28) goto LA29;
LOC28 = ((*X_127122).Typ == NIM_NIL);
LA29: ;
if (!LOC28) goto LA30;
X_127122 = (*N_127086).KindU.S6.Sons->data[0];
LA30: ;
Addson_51824(A_127109, X_127122);
I_127163 = 0;
HEX3Atmp_127232 = 0;
LOC32 = Sonslen_51804(N_127086);
HEX3Atmp_127232 = (NI32)(LOC32 - 1);
Res_127234 = 0;
Res_127234 = 1;
while (1) {
if (!(Res_127234 <= HEX3Atmp_127232)) goto LA33;
I_127163 = Res_127234;
X_127176 = NIM_NIL;
X_127176 = Safesemexpr_126915(C_126993, (*N_127086).KindU.S6.Sons->data[I_127163]);
LOC35 = ((*X_127176).Kind == ((NU8) 1));
if (LOC35) goto LA36;
LOC35 = ((*X_127176).Typ == NIM_NIL);
LA36: ;
if (!LOC35) goto LA37;
goto LA33;
LA37: ;
Addson_51824(A_127109, X_127176);
Res_127234 += 1;
} LA33: ;
Suggestcall_126320(C_126993, A_127109);
LA25: ;
LA19: ;
if (!((Gglobaloptions_42084 &(1<<((((NU8) 23))&31)))!=0)) goto LA40;
N_127208 = NIM_NIL;
LOC42 = 0;
LOC42 = Fuzzysemcheck_126920(C_126993, Node_126994);
N_127208 = Findclosestsym_126835(LOC42);
if (!!((N_127208 == NIM_NIL))) goto LA44;
LOC46 = 0;
LOC46 = Symtostr_126008((*N_127208).KindU.S4.Sym, NIM_FALSE, ((NimStringDesc*) &TMP194075));
Outwriteln_43783(LOC46);
LA44: ;
LA40: ;
exit(0);
BeforeRet: ;
}
N_NIMCALL(void, Suggeststmt_127235)(TY104012* C_127237, TY51526* N_127238) {
Suggestexpr_126991(C_127237, N_127238);
}
N_NOINLINE(void, suggestInit)(void) {
Recursivecheck_126914 = 0;
}
