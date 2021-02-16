typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned long long    qword;
typedef unsigned char    uchar;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef ulong __darwin_size_t;

typedef __darwin_size_t size_t;

typedef longlong __int64_t;

typedef __int64_t __darwin_off_t;

typedef struct __sFILEX __sFILEX, *P__sFILEX;

struct __sFILEX {
};

typedef struct __sbuf __sbuf, *P__sbuf;

struct __sbuf {
    uchar * _base;
    int _size;
};

typedef struct __sFILE __sFILE, *P__sFILE;

typedef __darwin_off_t fpos_t;

typedef struct __sFILE FILE;

struct __sFILE {
    uchar * _p;
    int _r;
    int _w;
    short _flags;
    short _file;
    struct __sbuf _bf;
    int _lbfsize;
    void * _cookie;
    int (* _close)(void *);
    int (* _read)(void *, char *, int);
    fpos_t (* _seek)(void *, fpos_t, int);
    int (* _write)(void *, char *, int);
    struct __sbuf _ub;
    struct __sFILEX * _extra;
    int _ur;
    uchar _ubuf[3];
    uchar _nbuf[1];
    struct __sbuf _lb;
    int _blksize;
    fpos_t _offset;
};

typedef struct uuid_command uuid_command, *Puuid_command;

struct uuid_command {
    dword cmd;
    dword cmdsize;
    byte uuid[16];
};

typedef struct lc_str lc_str, *Plc_str;

struct lc_str {
    dword offset;
};

typedef struct dylib dylib, *Pdylib;

struct dylib {
    struct lc_str name;
    dword timestamp;
    dword current_version;
    dword compatibility_version;
};

typedef struct section section, *Psection;

struct section {
    char sectname[16];
    char segname[16];
    qword addr;
    qword size;
    dword offset;
    dword align;
    dword reloff;
    dword nrelocs;
    dword flags;
    dword reserved1;
    dword reserved2;
    dword reserved3;
};

typedef struct dysymtab_command dysymtab_command, *Pdysymtab_command;

struct dysymtab_command {
    dword cmd;
    dword cmdsize;
    dword ilocalsym;
    dword nlocalsym;
    dword iextdefsym;
    dword nextdefsym;
    dword iundefsym;
    dword nundefsym;
    dword tocoff;
    dword ntoc;
    dword modtaboff;
    dword nmodtab;
    dword extrefsymoff;
    dword nextrefsyms;
    dword indirectsymoff;
    dword nindirectsyms;
    dword extreloff;
    dword nextrel;
    dword locreloff;
    dword nlocrel;
};

typedef struct segment_command segment_command, *Psegment_command;

struct segment_command {
    dword cmd;
    dword cmdsize;
    char segname[16];
    qword vmaddr;
    qword vmsize;
    qword fileoff;
    qword filesize;
    dword maxprot;
    dword initprot;
    dword nsects;
    dword flags;
};

typedef struct dylib_command dylib_command, *Pdylib_command;

struct dylib_command {
    dword cmd;
    dword cmdsize;
    struct dylib dylib;
};

typedef struct symtab_command symtab_command, *Psymtab_command;

struct symtab_command {
    dword cmd;
    dword cmdsize;
    dword symoff;
    dword nsyms;
    dword stroff;
    dword strsize;
};

typedef struct version_min_command version_min_command, *Pversion_min_command;

struct version_min_command {
    dword cmd;
    dword cmdsize;
    dword version;
    dword sdk;
};

typedef struct mach_header mach_header, *Pmach_header;

struct mach_header {
    dword magic;
    dword cputype;
    dword cpusubtype;
    dword filetype;
    dword ncmds;
    dword sizeofcmds;
    dword flags;
    dword reserved;
};

typedef struct linkedit_data_command linkedit_data_command, *Plinkedit_data_command;

struct linkedit_data_command {
    dword cmd;
    dword cmdsize;
    dword dataoff;
    dword datasize;
};




void dyld_stub_binding_helper(void)

{
                    // WARNING: Could not recover jumptable at 0x00002a68. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_00004000)();
  return;
}



void __dyld_func_lookup(void)

{
                    // WARNING: Could not recover jumptable at 0x00002a88. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_00004008)();
  return;
}



longlong _qwm_dock_init(longlong param_1)

{
  undefined *puVar1;
  char *pcVar2;
  int iVar5;
  undefined8 uVar3;
  longlong lVar4;
  undefined auStack112 [8];
  undefined8 local_68;
  undefined4 local_5c;
  char local_58 [32];
  longlong local_38;
  
  puVar1 = __nl_symbol_ptr::___stack_chk_guard;
  local_38 = *(longlong *)__nl_symbol_ptr::___stack_chk_guard;
  local_68 = 0x20;
  iVar5 = __picsymbolstub1::_sysctlbyname
                    ("kern.osrelease",local_58,(size_t *)&local_68,(void *)0x0,0);
  pcVar2 = local_58;
  if (iVar5 == -1) {
    __picsymbolstub1::_perror("sysctl");
    ___os_major_version = 10;
  }
  else {
    while( true ) {
      if ((*pcVar2 == '\0') || (*pcVar2 == '.')) break;
      pcVar2 = pcVar2 + 1;
    }
    *pcVar2 = '\0';
    ___os_major_version = __picsymbolstub1::_atoi(local_58);
  }
  uVar3 = __picsymbolstub1::__CGSDefaultConnection();
  lVar4 = __picsymbolstub1::_CGSGetEventPort(uVar3,&local_5c);
  if (lVar4 == 0) {
    uVar3 = *(undefined8 *)__nl_symbol_ptr::_kCFAllocatorDefault;
    lVar4 = __picsymbolstub1::_CFMachPortCreateWithPort(uVar3,local_5c,&_cg_input_callback,0,0);
    if (lVar4 != 0) {
      _cg_input_source = __picsymbolstub1::_CFMachPortCreateRunLoopSource(uVar3,lVar4,0);
      lVar4 = __picsymbolstub1::_CFRelease(lVar4);
      if (_cg_input_source != 0) {
        uVar3 = __picsymbolstub1::_CFRunLoopGetCurrent();
        lVar4 = __picsymbolstub1::_CFRunLoopAddSource
                          (uVar3,_cg_input_source,
                           *(undefined8 *)__nl_symbol_ptr::_kCFRunLoopDefaultMode);
      }
    }
  }
  if (param_1 == 0) {
    __picsymbolstub1::__RegisterApplication(0,auStack112);
    uVar3 = __picsymbolstub1::_CFRunLoopGetCurrent();
    lVar4 = __picsymbolstub1::_CoreDockRegisterClientWithRunLoop(&_dock_message_handler,0,uVar3);
    if ((short)lVar4 != 0) {
      iVar5 = __picsymbolstub1::_fprintf
                        (*(FILE **)__nl_symbol_ptr::___stderrp,"couldn\'t register with dock: %d\n")
      ;
      lVar4 = (longlong)iVar5;
    }
    __xp_dock_rect_valid = 0;
  }
  if (local_38 != *(longlong *)puVar1) {
                    // WARNING: Subroutine does not return
    __picsymbolstub1::___stack_chk_fail();
  }
  return lVar4;
}



undefined4 _qwm_dock_get_orientation(void)

{
  undefined auStack24 [4];
  undefined4 local_14 [5];
  
  __picsymbolstub1::_CoreDockGetOrientationAndPinning(local_14,auStack24);
  return local_14[0];
}



void _qwm_dock_event_set_handler(longlong param_1)

{
  if (param_1 == 0) {
                    // WARNING: Subroutine does not return
    __picsymbolstub1::___assert_rtn
              ("qwm_dock_event_set_handler","dock-support.c",0x17b,"new_handler");
  }
  _dock_event_handler = param_1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 _qwm_dock_get_rect(undefined8 param_1,double param_2,double param_3,double param_4)

{
  double dVar1;
  double dVar2;
  void *pvVar3;
  longlong lVar4;
  ulonglong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  undefined auStack76 [4];
  int local_48;
  uint local_44;
  
  if (__xp_dock_rect_valid == '\0') {
    __picsymbolstub1::_CoreDockGetRect(&local_78);
    __picsymbolstub1::_CoreDockGetOrientationAndPinning(&local_48,auStack76);
    __picsymbolstub1::_CGGetActiveDisplayList(0,0,&local_44);
    pvVar3 = __picsymbolstub1::_malloc(local_44 << 2);
    if (pvVar3 == (void *)0x0) {
                    // WARNING: Subroutine does not return
      __picsymbolstub1::___assert_rtn("qwm_dock_get_rect","dock-support.c",0x21b,"displayList");
    }
    uVar5 = 0;
    __picsymbolstub1::_CGGetActiveDisplayList(local_44,pvVar3,&local_44);
    while ((uVar5 & 0xffffffff) < (ulonglong)local_44) {
      dVar6 = (double)__picsymbolstub1::_CGDisplayBounds
                                (*(undefined4 *)((longlong)pvVar3 + (uVar5 & 0xffffffff) * 4));
      dVar7 = param_2;
      dVar8 = param_3;
      dVar9 = param_4;
      lVar4 = __picsymbolstub1::_CGRectContainsPoint(dVar6);
      dVar1 = local_70;
      dVar2 = local_60;
      if ((lVar4 != 0) && (dVar1 = param_2, dVar2 = param_4, local_48 != 3)) {
        if (local_48 == 4) {
          if (___os_major_version < 10) {
            local_68 = local_68 + 1.0;
          }
        }
        else {
          if (local_48 == 2) {
            local_78 = dVar6;
            dVar1 = local_70;
            local_68 = param_3;
            dVar2 = local_60;
            if (___os_major_version < 10) {
              dVar2 = local_60 + 1.0;
            }
          }
          else {
            __picsymbolstub1::_fprintf
                      (*(FILE **)__nl_symbol_ptr::___stderrp,
                       "Invalid response from qwm_dock_get_orientation(): %d\n");
            dVar1 = local_70;
            dVar2 = local_60;
          }
        }
      }
      local_60 = dVar2;
      local_70 = dVar1;
      uVar5 = uVar5 + 1;
      param_2 = dVar7;
      param_3 = dVar8;
      param_4 = dVar9;
    }
    __xp_dock_rect_valid = '\x01';
    ___xp_dock_rect = (int)local_70 & 0xffffU | (int)local_78 << 0x10;
    _DAT_0000414e = (int)(local_70 + local_60) & 0xffffU | (int)(local_78 + local_68) << 0x10;
    __picsymbolstub1::_free(pvVar3);
  }
  return CONCAT44(___xp_dock_rect,_DAT_0000414e);
}



char _qwm_dock_restore_item_async(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = __picsymbolstub1::_CoreDockRestoreItemAsync();
  __picsymbolstub1::_asl_log(0,0,7,"window_id: %d err: %d\n",param_1,lVar1);
  return (lVar1 != 0) * '\x02';
}



char _qwm_dock_minimize_item_with_title_async(undefined8 param_1,char *param_2)

{
  size_t sVar3;
  undefined8 uVar1;
  longlong lVar2;
  
  sVar3 = __picsymbolstub1::_strlen(param_2);
  uVar1 = __picsymbolstub1::_CFStringCreateWithBytes(0,param_2,sVar3,0x8000100,0);
  lVar2 = __picsymbolstub1::_CoreDockMinimizeItemWithTitleAsync(param_1,uVar1);
  __picsymbolstub1::_CFRelease(uVar1);
  return (lVar2 != 0) * '\x02';
}



char _qwm_dock_drag_end(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = __picsymbolstub1::_CoreDockSendDragWindowMessage(2,param_1);
  return (lVar1 != 0) * '\x02';
}



char _qwm_dock_drag_begin(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = __picsymbolstub1::_CoreDockSendDragWindowMessage(1,param_1);
  return (lVar1 != 0) * '\x02';
}



char _qwm_dock_remove_item(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = __picsymbolstub1::_CoreDockRemoveItem();
  __picsymbolstub1::_asl_log(0,0,7,"window_id: %d err: %d\n",param_1,lVar1);
  return (lVar1 != 0) * '\x02';
}



undefined8 _qwm_dock_is_window_visible(undefined8 param_1,uint *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  uint local_28;
  uint local_24;
  
  uVar2 = __picsymbolstub1::__CGSDefaultConnection();
  lVar3 = __picsymbolstub1::_CGSGetWorkspace(uVar2,&local_28);
  if ((lVar3 == 0) &&
     (lVar3 = __picsymbolstub1::_CGSGetWindowWorkspace(uVar2,param_1,&local_24), lVar3 == 0)) {
    uVar2 = countLeadingZeros(local_28 ^ local_24);
    *param_2 = (uint)uVar2 >> 5;
    return 0;
  }
  iVar4 = (int)lVar3;
  if (iVar4 != 0x3ee) {
    if (iVar4 < 0x3ef) {
      if (iVar4 == 0) {
        return 0;
      }
      bVar1 = iVar4 == 1000;
    }
    else {
      if (iVar4 == 0x3f2) {
        return 1;
      }
      bVar1 = iVar4 == 0x3f3;
    }
    if (!bVar1) {
      return 2;
    }
  }
  return 0x11;
}



// /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation

void __picsymbolstub1::_CFMachPortCreateRunLoopSource(void)

{
                    // WARNING: Could not recover jumptable at 0x0000381c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CFMachPortCreateRunLoopSource)();
  return;
}



// /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation

void __picsymbolstub1::_CFMachPortCreateWithPort(void)

{
                    // WARNING: Could not recover jumptable at 0x0000383c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CFMachPortCreateWithPort)();
  return;
}



// /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation

void __picsymbolstub1::_CFRelease(void)

{
                    // WARNING: Could not recover jumptable at 0x0000385c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CFRelease)();
  return;
}



// /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation

void __picsymbolstub1::_CFRunLoopAddSource(void)

{
                    // WARNING: Could not recover jumptable at 0x0000387c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CFRunLoopAddSource)();
  return;
}



// /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation

void __picsymbolstub1::_CFRunLoopGetCurrent(void)

{
                    // WARNING: Could not recover jumptable at 0x0000389c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CFRunLoopGetCurrent)();
  return;
}



// /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation

void __picsymbolstub1::_CFStringCreateWithBytes(void)

{
                    // WARNING: Could not recover jumptable at 0x000038bc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CFStringCreateWithBytes)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __picsymbolstub1::_CGDisplayBounds(void)

{
                    // WARNING: Could not recover jumptable at 0x000038dc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CGDisplayBounds)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __picsymbolstub1::_CGGetActiveDisplayList(void)

{
                    // WARNING: Could not recover jumptable at 0x000038fc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CGGetActiveDisplayList)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __picsymbolstub1::_CGRectContainsPoint(void)

{
                    // WARNING: Could not recover jumptable at 0x0000391c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CGRectContainsPoint)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __picsymbolstub1::_CGSGetEventPort(void)

{
                    // WARNING: Could not recover jumptable at 0x0000393c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CGSGetEventPort)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __picsymbolstub1::_CGSGetNextEventRecordFromMessage(void)

{
                    // WARNING: Could not recover jumptable at 0x0000395c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CGSGetNextEventRecordFromMessage)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __picsymbolstub1::_CGSGetWindowWorkspace(void)

{
                    // WARNING: Could not recover jumptable at 0x0000397c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CGSGetWindowWorkspace)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __picsymbolstub1::_CGSGetWorkspace(void)

{
                    // WARNING: Could not recover jumptable at 0x0000399c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CGSGetWorkspace)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __picsymbolstub1::_CoreDockGetOrientationAndPinning(void)

{
                    // WARNING: Could not recover jumptable at 0x000039bc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CoreDockGetOrientationAndPinning)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __picsymbolstub1::_CoreDockGetRect(void)

{
                    // WARNING: Could not recover jumptable at 0x000039dc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CoreDockGetRect)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __picsymbolstub1::_CoreDockMinimizeItemWithTitleAsync(void)

{
                    // WARNING: Could not recover jumptable at 0x000039fc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CoreDockMinimizeItemWithTitleAsync)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __picsymbolstub1::_CoreDockRegisterClientWithRunLoop(void)

{
                    // WARNING: Could not recover jumptable at 0x00003a1c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CoreDockRegisterClientWithRunLoop)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __picsymbolstub1::_CoreDockRemoveItem(void)

{
                    // WARNING: Could not recover jumptable at 0x00003a3c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CoreDockRemoveItem)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __picsymbolstub1::_CoreDockRestoreItemAsync(void)

{
                    // WARNING: Could not recover jumptable at 0x00003a5c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CoreDockRestoreItemAsync)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __picsymbolstub1::_CoreDockSendDragWindowMessage(void)

{
                    // WARNING: Could not recover jumptable at 0x00003a7c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CoreDockSendDragWindowMessage)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __picsymbolstub1::__CGSDefaultConnection(void)

{
                    // WARNING: Could not recover jumptable at 0x00003a9c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::__CGSDefaultConnection)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __picsymbolstub1::__RegisterApplication(void)

{
                    // WARNING: Could not recover jumptable at 0x00003abc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::__RegisterApplication)();
  return;
}



// /usr/lib/libSystem.B.dylib

void __picsymbolstub1::___assert_rtn(char *param_1,char *param_2,int param_3,char *param_4)

{
                    // WARNING: Could not recover jumptable at 0x00003adc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::___assert_rtn)();
  return;
}



// /usr/lib/libSystem.B.dylib

void __picsymbolstub1::___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x00003afc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::___stack_chk_fail)();
  return;
}



// /usr/lib/libSystem.B.dylib

void __picsymbolstub1::_asl_log(void)

{
                    // WARNING: Could not recover jumptable at 0x00003b1c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_asl_log)();
  return;
}



// /usr/lib/libSystem.B.dylib

int __picsymbolstub1::_atoi(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00003b3c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)__la_symbol_ptr::_atoi)((int)param_1);
  return iVar1;
}



// /usr/lib/libSystem.B.dylib

int __picsymbolstub1::_fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00003b7c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)__la_symbol_ptr::_fprintf)((int)param_1);
  return iVar1;
}



// /usr/lib/libSystem.B.dylib

void __picsymbolstub1::_free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x00003b9c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_free)();
  return;
}



// /usr/lib/libSystem.B.dylib

void * __picsymbolstub1::_malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00003bbc. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)__la_symbol_ptr::_malloc)();
  return pvVar1;
}



// /usr/lib/libSystem.B.dylib

void __picsymbolstub1::_perror(char *param_1)

{
                    // WARNING: Could not recover jumptable at 0x00003bdc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_perror)();
  return;
}



// /usr/lib/libSystem.B.dylib

size_t __picsymbolstub1::_strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x00003bfc. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)__la_symbol_ptr::_strlen)((int)param_1);
  return sVar1;
}



// /usr/lib/libSystem.B.dylib

int __picsymbolstub1::_sysctlbyname
              (char *param_1,void *param_2,size_t *param_3,void *param_4,size_t param_5)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00003c1c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)__la_symbol_ptr::_sysctlbyname)((int)param_1);
  return iVar1;
}


