typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
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
    dword addr;
    dword size;
    dword offset;
    dword align;
    dword reloff;
    dword nrelocs;
    dword flags;
    dword reserved1;
    dword reserved2;
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
    dword vmaddr;
    dword vmsize;
    dword fileoff;
    dword filesize;
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
                    // WARNING: Could not recover jumptable at 0x00002a7c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_00004000)();
  return;
}



void cfm_stub_binding_helper(void)

{
  dyld_stub_binding_helper();
  return;
}



void __dyld_func_lookup(void)

{
                    // WARNING: Could not recover jumptable at 0x00002aa4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_00004004)();
  return;
}



void ___initialize_Cplusplus(void)

{
  code *local_28 [9];
  
  __dyld_func_lookup("__dyld_call_module_initializers_for_dylib",local_28);
  if (local_28[0] != (code *)0x0) {
    (*local_28[0])(PTR_00004008);
  }
  return;
}



void _qwm_dock_init(int param_1)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  short sVar4;
  size_t local_48;
  undefined4 local_44;
  undefined auStack64 [8];
  char local_38 [40];
  
  local_48 = 0x20;
  iVar2 = __picsymbolstub1::_sysctlbyname("kern.osrelease",local_38,&local_48,(void *)0x0,0);
  pcVar1 = local_38;
  if (iVar2 == -1) {
    __picsymbolstub1::_perror("sysctl");
    ___os_major_version = 10;
  }
  else {
    while( true ) {
      if ((*pcVar1 == '\0') || (*pcVar1 == '.')) break;
      pcVar1 = pcVar1 + 1;
    }
    *pcVar1 = '\0';
    ___os_major_version = __picsymbolstub1::_atoi(local_38);
  }
  uVar3 = __picsymbolstub1::__CGSDefaultConnection();
  iVar2 = __picsymbolstub1::_CGSGetEventPort(uVar3,&local_44);
  if (iVar2 == 0) {
    uVar3 = *(undefined4 *)__nl_symbol_ptr::_kCFAllocatorDefault;
    iVar2 = __picsymbolstub1::_CFMachPortCreateWithPort(uVar3,local_44,&_cg_input_callback,0,0);
    if (iVar2 != 0) {
      _cg_input_source = __picsymbolstub1::_CFMachPortCreateRunLoopSource(uVar3,iVar2,0);
      __picsymbolstub1::_CFRelease(iVar2);
      if (_cg_input_source != 0) {
        uVar3 = __picsymbolstub1::_CFRunLoopGetCurrent();
        __picsymbolstub1::_CFRunLoopAddSource
                  (uVar3,_cg_input_source,*(undefined4 *)__nl_symbol_ptr::_kCFRunLoopDefaultMode);
      }
    }
  }
  if (param_1 == 0) {
    if (__nl_symbol_ptr::__RegisterApplication == (undefined *)0x0) {
      __picsymbolstub1::_CPSRegisterWithServer(4);
    }
    else {
      __picsymbolstub1::__RegisterApplication(0,auStack64);
    }
    uVar3 = __picsymbolstub1::_CFRunLoopGetCurrent();
    sVar4 = __picsymbolstub1::_CoreDockRegisterClientWithRunLoop(&_dock_message_handler,0,uVar3);
    if (sVar4 != 0) {
      __picsymbolstub1::_fprintf_LDBL128
                (__nl_symbol_ptr::___sF + 0xb0,"couldn\'t register with dock: %d\n");
    }
    __xp_dock_rect_valid = 0;
  }
  return;
}



undefined4 _qwm_dock_get_orientation(void)

{
  undefined4 local_28;
  undefined auStack36 [36];
  
  __picsymbolstub1::_CoreDockGetOrientationAndPinning(&local_28,auStack36);
  return local_28;
}



void _qwm_dock_event_set_handler(int param_1)

{
  if (param_1 == 0) {
    param_1 = ___eprintf("%s:%u: failed assertion `%s\'\n","dock-support.c",0x17b,"new_handler");
  }
  _dock_event_handler = param_1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint * _qwm_dock_get_rect(uint *param_1)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  uint local_68;
  int local_64;
  undefined auStack96 [4];
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  uint local_38;
  
  if (__xp_dock_rect_valid == 0) {
    __picsymbolstub1::_CoreDockGetRect(&local_5c);
    __picsymbolstub1::_CoreDockGetOrientationAndPinning(&local_64,auStack96);
    __picsymbolstub1::_CGGetActiveDisplayList(0,0,&local_68);
    pvVar1 = __picsymbolstub1::_malloc(local_68 << 2);
    if (pvVar1 == (void *)0x0) {
      ___eprintf("%s:%u: failed assertion `%s\'\n","dock-support.c",0x21b,"displayList");
    }
    uVar3 = 0;
    __picsymbolstub1::_CGGetActiveDisplayList(local_68,pvVar1,&local_68);
    while (uVar3 < local_68) {
      __picsymbolstub1::_CGDisplayBounds(&local_4c,*(undefined4 *)((int)pvVar1 + uVar3 * 4));
      iVar2 = __picsymbolstub1::_CGRectContainsPoint
                        (local_4c,local_48,local_44,local_40,local_5c,local_58);
      if (iVar2 != 0) {
        if (local_64 == 3) {
          local_50 = local_40;
          local_58 = local_48;
        }
        else {
          if (local_64 == 4) {
            local_50 = local_40;
            local_58 = local_48;
            if (___os_major_version < 10) {
              local_54 = local_54 + 1.0;
            }
          }
          else {
            if (local_64 == 2) {
              local_54 = local_44;
              local_5c = local_4c;
              if (___os_major_version < 10) {
                local_50 = local_50 + 1.0;
              }
            }
            else {
              __picsymbolstub1::_fprintf_LDBL128
                        (__nl_symbol_ptr::___sF + 0xb0,
                         "Invalid response from qwm_dock_get_orientation(): %d\n");
            }
          }
        }
      }
      uVar3 = uVar3 + 1;
    }
    local_38 = (uint)(local_58 + local_50);
    __xp_dock_rect_valid = 1;
    ___xp_dock_rect = (int)local_58 & 0xffffU | (int)local_5c << 0x10;
    _DAT_000040bc = local_38 & 0xffff | (int)(local_5c + local_54) << 0x10;
    __picsymbolstub1::_free(pvVar1);
  }
  uVar3 = _DAT_000040bc;
  *param_1 = ___xp_dock_rect;
  param_1[1] = uVar3;
  return param_1;
}



char _qwm_dock_restore_item_async(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = __picsymbolstub1::_CoreDockRestoreItemAsync();
  __picsymbolstub1::_asl_log_LDBL128(0,0,7,"window_id: %d err: %d\n",param_1,iVar1);
  return (iVar1 != 0) * '\x02';
}



char _qwm_dock_minimize_item_with_title_async(undefined4 param_1,char *param_2)

{
  size_t sVar1;
  undefined4 uVar2;
  int iVar3;
  
  sVar1 = __picsymbolstub1::_strlen(param_2);
  uVar2 = __picsymbolstub1::_CFStringCreateWithBytes(0,param_2,sVar1,0x8000100,0);
  iVar3 = __picsymbolstub1::_CoreDockMinimizeItemWithTitleAsync(param_1,uVar2);
  __picsymbolstub1::_CFRelease(uVar2);
  return (iVar3 != 0) * '\x02';
}



char _qwm_dock_drag_end(void)

{
  int iVar1;
  char cVar2;
  
  cVar2 = '\0';
  if (__nl_symbol_ptr::_CoreDockSendDragWindowMessage != (undefined *)0x0) {
    iVar1 = __picsymbolstub1::_CoreDockSendDragWindowMessage(2);
    cVar2 = (iVar1 != 0) * '\x02';
  }
  return cVar2;
}



char _qwm_dock_drag_begin(void)

{
  int iVar1;
  char cVar2;
  
  cVar2 = '\0';
  if (__nl_symbol_ptr::_CoreDockSendDragWindowMessage != (undefined *)0x0) {
    iVar1 = __picsymbolstub1::_CoreDockSendDragWindowMessage(1);
    cVar2 = (iVar1 != 0) * '\x02';
  }
  return cVar2;
}



char _qwm_dock_remove_item(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = __picsymbolstub1::_CoreDockRemoveItem();
  __picsymbolstub1::_asl_log_LDBL128(0,0,7,"window_id: %d err: %d\n",param_1,iVar1);
  return (iVar1 != 0) * '\x02';
}



undefined4 _qwm_dock_is_window_visible(undefined4 param_1,uint *param_2)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint local_28;
  uint local_24 [5];
  
  uVar3 = __picsymbolstub1::__CGSDefaultConnection();
  iVar4 = __picsymbolstub1::_CGSGetWorkspace(uVar3,local_24);
  bVar1 = iVar4 == 0;
  if (bVar1) {
    iVar4 = __picsymbolstub1::_CGSGetWindowWorkspace(uVar3,param_1,&local_28);
    bVar1 = iVar4 == 0;
    if (bVar1) {
      uVar2 = countLeadingZeros(local_24[0] ^ local_28);
      *param_2 = uVar2 >> 5;
      return 0;
    }
  }
  if (iVar4 != 0x3ee) {
    if (iVar4 < 0x3ef) {
      if (bVar1) {
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



void ___eprintf(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(__nl_symbol_ptr::___sF + 0xb0);
  __picsymbolstub1::_fprintf(pFVar1,param_1,param_2,param_3,param_4);
  __picsymbolstub1::_fflush(pFVar1);
                    // WARNING: Subroutine does not return
  __picsymbolstub1::_abort();
}



// /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation

void __picsymbolstub1::_CFMachPortCreateRunLoopSource(void)

{
                    // WARNING: Could not recover jumptable at 0x000037ec. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CFMachPortCreateRunLoopSource)();
  return;
}



// /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation

void __picsymbolstub1::_CFMachPortCreateWithPort(void)

{
                    // WARNING: Could not recover jumptable at 0x0000380c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CFMachPortCreateWithPort)();
  return;
}



// /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation

void __picsymbolstub1::_CFRelease(void)

{
                    // WARNING: Could not recover jumptable at 0x0000382c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CFRelease)();
  return;
}



// /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation

void __picsymbolstub1::_CFRunLoopAddSource(void)

{
                    // WARNING: Could not recover jumptable at 0x0000384c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CFRunLoopAddSource)();
  return;
}



// /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation

void __picsymbolstub1::_CFRunLoopGetCurrent(void)

{
                    // WARNING: Could not recover jumptable at 0x0000386c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CFRunLoopGetCurrent)();
  return;
}



// /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation

void __picsymbolstub1::_CFStringCreateWithBytes(void)

{
                    // WARNING: Could not recover jumptable at 0x0000388c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CFStringCreateWithBytes)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __picsymbolstub1::_CGDisplayBounds(void)

{
                    // WARNING: Could not recover jumptable at 0x000038ac. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CGDisplayBounds)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __picsymbolstub1::_CGGetActiveDisplayList(void)

{
                    // WARNING: Could not recover jumptable at 0x000038cc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CGGetActiveDisplayList)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __picsymbolstub1::_CGRectContainsPoint(void)

{
                    // WARNING: Could not recover jumptable at 0x000038ec. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CGRectContainsPoint)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __picsymbolstub1::_CGSGetEventPort(void)

{
                    // WARNING: Could not recover jumptable at 0x0000390c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CGSGetEventPort)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __picsymbolstub1::_CGSGetNextEventRecordFromMessage(void)

{
                    // WARNING: Could not recover jumptable at 0x0000392c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CGSGetNextEventRecordFromMessage)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __picsymbolstub1::_CGSGetWindowWorkspace(void)

{
                    // WARNING: Could not recover jumptable at 0x0000394c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CGSGetWindowWorkspace)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __picsymbolstub1::_CGSGetWorkspace(void)

{
                    // WARNING: Could not recover jumptable at 0x0000396c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CGSGetWorkspace)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __picsymbolstub1::_CPSRegisterWithServer(void)

{
                    // WARNING: Could not recover jumptable at 0x0000398c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CPSRegisterWithServer)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __picsymbolstub1::_CoreDockGetOrientationAndPinning(void)

{
                    // WARNING: Could not recover jumptable at 0x000039ac. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CoreDockGetOrientationAndPinning)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __picsymbolstub1::_CoreDockGetRect(void)

{
                    // WARNING: Could not recover jumptable at 0x000039cc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CoreDockGetRect)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __picsymbolstub1::_CoreDockMinimizeItemWithTitleAsync(void)

{
                    // WARNING: Could not recover jumptable at 0x000039ec. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CoreDockMinimizeItemWithTitleAsync)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __picsymbolstub1::_CoreDockRegisterClientWithRunLoop(void)

{
                    // WARNING: Could not recover jumptable at 0x00003a0c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CoreDockRegisterClientWithRunLoop)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __picsymbolstub1::_CoreDockRemoveItem(void)

{
                    // WARNING: Could not recover jumptable at 0x00003a2c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CoreDockRemoveItem)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __picsymbolstub1::_CoreDockRestoreItemAsync(void)

{
                    // WARNING: Could not recover jumptable at 0x00003a4c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CoreDockRestoreItemAsync)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __picsymbolstub1::_CoreDockSendDragWindowMessage(void)

{
                    // WARNING: Could not recover jumptable at 0x00003a6c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CoreDockSendDragWindowMessage)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __picsymbolstub1::__CGSDefaultConnection(void)

{
                    // WARNING: Could not recover jumptable at 0x00003a8c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::__CGSDefaultConnection)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __picsymbolstub1::__RegisterApplication(void)

{
                    // WARNING: Could not recover jumptable at 0x00003aac. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::__RegisterApplication)();
  return;
}



// /usr/lib/libSystem.B.dylib

void __picsymbolstub1::_abort(void)

{
                    // WARNING: Could not recover jumptable at 0x00003acc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_abort)();
  return;
}



// /usr/lib/libSystem.B.dylib

void __picsymbolstub1::_asl_log_LDBL128(void)

{
                    // WARNING: Could not recover jumptable at 0x00003aec. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_asl_log_LDBL128)();
  return;
}



// /usr/lib/libSystem.B.dylib

int __picsymbolstub1::_atoi(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00003b0c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)__la_symbol_ptr::_atoi)();
  return iVar1;
}



// /usr/lib/libSystem.B.dylib

void * __picsymbolstub1::_calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00003b2c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)__la_symbol_ptr::_calloc)();
  return pvVar1;
}



// /usr/lib/libSystem.B.dylib

int __picsymbolstub1::_fflush(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00003b4c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)__la_symbol_ptr::_fflush)();
  return iVar1;
}



// /usr/lib/libSystem.B.dylib

int __picsymbolstub1::_fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00003b6c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)__la_symbol_ptr::_fprintf)();
  return iVar1;
}



// /usr/lib/libSystem.B.dylib

void __picsymbolstub1::_fprintf_LDBL128(void)

{
                    // WARNING: Could not recover jumptable at 0x00003b8c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_fprintf_LDBL128)();
  return;
}



// /usr/lib/libSystem.B.dylib

void __picsymbolstub1::_free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x00003bac. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_free)();
  return;
}



// /usr/lib/libSystem.B.dylib

void * __picsymbolstub1::_malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00003bcc. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)__la_symbol_ptr::_malloc)();
  return pvVar1;
}



// /usr/lib/libSystem.B.dylib

void __picsymbolstub1::_perror(char *param_1)

{
                    // WARNING: Could not recover jumptable at 0x00003bec. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_perror)();
  return;
}



// /usr/lib/libSystem.B.dylib

size_t __picsymbolstub1::_strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x00003c0c. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)__la_symbol_ptr::_strlen)();
  return sVar1;
}



// /usr/lib/libSystem.B.dylib

int __picsymbolstub1::_sysctlbyname
              (char *param_1,void *param_2,size_t *param_3,void *param_4,size_t param_5)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00003c2c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)__la_symbol_ptr::_sysctlbyname)();
  return iVar1;
}


