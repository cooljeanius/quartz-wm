typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef ulong __darwin_size_t;

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

typedef struct dispatch_queue_attr_s dispatch_queue_attr_s, *Pdispatch_queue_attr_s;

typedef struct dispatch_queue_attr_s * dispatch_queue_attr_t;

struct dispatch_queue_attr_s {
};

typedef struct dispatch_queue_s dispatch_queue_s, *Pdispatch_queue_s;

typedef struct dispatch_queue_s * dispatch_queue_t;

struct dispatch_queue_s {
};

typedef __darwin_size_t size_t;

typedef int xp_bool;

typedef enum xp_dock_orientation_enum {
    XP_DOCK_ORIENTATION_BOTTOM=2,
    XP_DOCK_ORIENTATION_LEFT=3,
    XP_DOCK_ORIENTATION_RIGHT=4
} xp_dock_orientation_enum;

typedef enum xp_dock_orientation_enum xp_dock_orientation;

typedef struct xp_box_struct xp_box_struct, *Pxp_box_struct;

typedef struct xp_box_struct xp_box;

struct xp_box_struct {
    short x1;
    short y1;
    short x2;
    short y2;
};

typedef int xp_error;

typedef uint xp_native_window_id;

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




undefined4 __regparm3 dyld_stub_binding_helper(undefined4 param_1)

{
  return param_1;
}



void __dyld_func_lookup(void)

{
                    // WARNING: Could not recover jumptable at 0x00002a80. Too many branches
                    // WARNING: Treating indirect jump as call
  (*pcRam00004004)();
  return;
}



void FUN_00002a79(void)

{
  int unaff_retaddr;
  
                    // WARNING: Could not recover jumptable at 0x00002a80. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(&DAT_0000158b + unaff_retaddr))();
  return;
}



xp_error _qwm_dock_is_window_visible(xp_native_window_id param_1,uint *param_2)

{
  xp_error xVar1;
  undefined4 uVar2;
  int iVar3;
  int local_1c;
  int local_18;
  byte local_11;
  
  if (__nl_symbol_ptr::_xp_dock_is_window_visible != (undefined *)0x0) {
    xVar1 = __symbol_stub::_xp_dock_is_window_visible(param_1,(xp_bool *)param_2);
    return xVar1;
  }
  uVar2 = __symbol_stub::__CGSDefaultConnection();
  if (__nl_symbol_ptr::_CGSWindowIsVisible == (undefined *)0x0) {
    if (__nl_symbol_ptr::_CGSGetWorkspace == (undefined *)0x0 ||
        __nl_symbol_ptr::_CGSGetWindowWorkspace == (undefined *)0x0) {
      return 2;
    }
    iVar3 = __symbol_stub::_CGSGetWorkspace(uVar2,&local_1c);
    if (iVar3 < 1000) {
      if (iVar3 != 0) {
        return 2;
      }
      iVar3 = __symbol_stub::_CGSGetWindowWorkspace(uVar2,param_1,&local_18);
      if (iVar3 < 1000) {
        if (iVar3 != 0) {
          return 2;
        }
        *param_2 = (uint)(local_1c == local_18);
        return 0;
      }
    }
    if (iVar3 < 0x3ee) {
      if (iVar3 == 1000) {
        return 0x11;
      }
    }
    else {
      if (iVar3 == 0x3ee) {
        return 0x11;
      }
      if (iVar3 == 0x3f3) {
        return 0x11;
      }
      if (iVar3 == 0x3f2) {
        return 1;
      }
    }
  }
  else {
    iVar3 = __symbol_stub::_CGSWindowIsVisible(uVar2,param_1,&local_11);
    *param_2 = (uint)local_11;
    if (iVar3 < 1000) {
      if (iVar3 == 0) {
        return 0;
      }
    }
    else {
      if (0x3ed < iVar3) {
        if (iVar3 == 0x3ee) {
          return 0x11;
        }
        if (iVar3 == 0x3f2) {
          return 1;
        }
        if (iVar3 == 0x3f3) {
          return 0x11;
        }
        return 2;
      }
      if (iVar3 == 1000) {
        return 0x11;
      }
    }
  }
  return 2;
}



xp_dock_orientation _qwm_dock_get_orientation(void)

{
  undefined local_c [4];
  xp_dock_orientation local_8;
  
  if (__nl_symbol_ptr::_xp_dock_get_orientation == (undefined *)0x0) {
    __symbol_stub::_CoreDockGetOrientationAndPinning(&local_8,local_c);
  }
  else {
    local_8 = __symbol_stub::_xp_dock_get_orientation();
  }
  return local_8;
}



int _qwm_dock_minimize_item_with_title_async(undefined4 param_1,char *param_2)

{
  size_t sVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (__nl_symbol_ptr::_xp_dock_minimize_item_with_title_async == (undefined *)0x0) {
    sVar1 = __symbol_stub::_strlen(param_2);
    uVar2 = __symbol_stub::_CFStringCreateWithBytes(0,param_2,sVar1,0x8000100,0);
    iVar3 = __symbol_stub::_CoreDockMinimizeItemWithTitleAsync(param_1,uVar2);
    __symbol_stub::_CFRelease(uVar2);
    return (uint)(iVar3 != 0) * 2;
  }
                    // WARNING: Could not recover jumptable at 0x000039d8. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar3 = (*(code *)__la_symbol_ptr::_xp_dock_minimize_item_with_title_async)();
  return iVar3;
}



int _qwm_dock_restore_item_async(xp_native_window_id param_1)

{
  int iVar1;
  undefined *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  code *local_20;
  undefined *local_1c;
  xp_native_window_id local_18;
  
  if (__nl_symbol_ptr::_xp_dock_restore_item_async == (undefined *)0x0) {
    if (___os_major_version < 0xb) {
      iVar1 = __symbol_stub::_CoreDockRestoreItemAsync(param_1);
    }
    else {
      local_2c = __nl_symbol_ptr::__NSConcreteStackBlock;
      local_28 = 0x40000000;
      local_24 = 0;
      local_20 = ___qwm_dock_restore_item_async_block_invoke_0;
      local_1c = &___block_descriptor_tmp1;
      local_18 = param_1;
      __symbol_stub::_dispatch_async(_PR9379322_queue,&local_2c);
      iVar1 = 0;
    }
    __symbol_stub::_asl_log(0,0,7,"window_id: %d err: %d\n",param_1,iVar1);
    iVar1 = (uint)(iVar1 != 0) * 2;
  }
  else {
    iVar1 = __symbol_stub::_xp_dock_restore_item_async(param_1);
  }
  return iVar1;
}



void ___qwm_dock_restore_item_async_block_invoke_0(int param_1)

{
  undefined *puStack44;
  undefined4 uStack40;
  undefined4 uStack36;
  code *pcStack32;
  undefined *puStack28;
  undefined4 uStack24;
  undefined4 uStack20;
  
  uStack24 = __symbol_stub::_CoreDockRestoreItem(*(undefined4 *)(param_1 + 0x14));
  puStack44 = __nl_symbol_ptr::__NSConcreteStackBlock;
  uStack40 = 0x40000000;
  uStack36 = 0;
  pcStack32 = ___block_global_0;
  puStack28 = &___block_descriptor_tmp;
  uStack20 = *(undefined4 *)(param_1 + 0x14);
  __symbol_stub::_dispatch_async(__nl_symbol_ptr::__dispatch_main_q,&puStack44);
  return;
}



void ___block_global_0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    uVar1 = 8;
  }
  else {
    uVar1 = 0x12;
  }
  _dock_message_handler(uVar1,*(undefined4 *)(param_1 + 0x18),0,0);
  return;
}



undefined4 _dock_message_handler(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  dispatch_queue_t pdVar2;
  char *pcVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  bool bVar10;
  uint local_1c;
  undefined4 *local_18;
  uint local_14;
  
  local_18 = (undefined4 *)0x0;
  local_1c = 0;
  local_14 = 0;
  if ((10 < ___os_major_version) &&
     (pdVar2 = __symbol_stub::_dispatch_get_current_queue(), pdVar2 == _PR9379322_queue)) {
    return 0;
  }
  if (0x17 < param_1 - 1U) {
    pcVar3 = "UNKNOWN";
    goto LAB_00003138;
  }
  pcVar5 = "kCoreDockMsgSelectWindows";
  pcVar7 = "kCoreDockMsgRestoreEffectDone";
  pcVar8 = "kCoreDockMsgMinimizeEffectDone";
  pcVar3 = "kCoreDockMsgDockAlive";
  switch(param_1) {
  case 1:
    __symbol_stub::_asl_log(0,0,7,"<DockMessage id:%s wid:%x>\n","kCoreDockMsgSelectWindow",param_2)
    ;
    local_1c = 3;
    local_18 = (undefined4 *)__symbol_stub::_calloc(2,4);
    if (local_18 == (undefined4 *)0x0) {
      return 0xffffff69;
    }
    *local_18 = param_2;
    goto LAB_000031c6;
  case 3:
    __symbol_stub::_asl_log(0,0,7,"<DockMessage id:%s wid:%x>\n","kCoreDockMsgDockDied",param_2);
    local_1c = 1;
    goto LAB_000031c6;
  case 4:
    pcVar3 = "kCoreDockMsgSingleWindowModeOn";
    break;
  case 5:
    pcVar3 = "kCoreDockMsgSingleWindowModeOff";
    break;
  case 6:
    pcVar3 = "kCoreDockMsgMinimizeAll";
    break;
  case 9:
    pcVar3 = "kCoreDockMsgTransitionsDone";
    break;
  case 10:
    __symbol_stub::_asl_log(0,0,7,"<DockMessage id:%s wid:%x>\n","kCoreDockMsgRectChanged",param_2);
    __xp_dock_rect_valid_b = 0;
    return 0;
  case 0xb:
    pcVar3 = "kCoreDockMsgGetAppMenu";
    break;
  case 0xc:
    pcVar3 = "kCoreDockMsgDoMenuCommand";
    break;
  case 0xd:
    pcVar3 = "kCoreDockMsgGetWindowMenu";
    break;
  case 0xe:
    pcVar3 = "kCoreDockMsgCloseWindow";
    break;
  case 0x10:
    pcVar8 = "kCoreDockMsgMinimizeFailed";
  case 7:
    __symbol_stub::_asl_log(0,0,7,"<DockMessage id:%s wid:%x>\n",pcVar8,param_2);
    local_1c = 5;
    local_18 = (undefined4 *)__symbol_stub::_calloc(2,4);
    if (local_18 == (undefined4 *)0x0) {
      return 0xffffff69;
    }
    *local_18 = param_2;
    bVar10 = param_1 == 7;
    goto LAB_00003120;
  case 0x11:
    pcVar3 = "kCoreDockMsgMinimizeManyFailed";
    break;
  case 0x12:
    pcVar7 = "kCoreDockMsgMaximizeFailed";
  case 8:
    __symbol_stub::_asl_log(0,0,7,"<DockMessage id:%s wid:%x>\n",pcVar7,param_2);
    local_1c = 4;
    local_18 = (undefined4 *)__symbol_stub::_calloc(2,4);
    if (local_18 == (undefined4 *)0x0) {
      return 0xffffff69;
    }
    *local_18 = param_2;
    bVar10 = param_1 == 8;
LAB_00003120:
    local_14 = (uint)bVar10;
    goto LAB_000031c6;
  case 0x13:
    pcVar3 = "kCoreDockMsgMaximizeManyFailed";
    break;
  case 0x14:
    pcVar5 = "kCoreDockMsgMaximizedWindows";
  case 0xf:
    __symbol_stub::_asl_log(0,0,7,"<DockMessage id:%s wid:%x>\n",pcVar5,param_2);
    iVar9 = *param_3;
    iVar1 = param_3[1];
    local_1c = param_1 != 0x14 | 2;
    local_18 = (undefined4 *)__symbol_stub::_calloc(iVar9 + 1,4);
    if (local_18 == (undefined4 *)0x0) {
      return 0xffffff69;
    }
    puVar6 = local_18;
    if (0 < iVar9) {
      do {
        *puVar6 = *(undefined4 *)(iVar1 + -4 + iVar9 * 4);
        puVar6 = puVar6 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    goto LAB_000031c6;
  case 0x15:
    pcVar3 = "kCoreDockMsgMiniViewShown";
    break;
  case 0x16:
    pcVar3 = "kCoreDockMsgMiniViewHidden";
    break;
  case 0x17:
    pcVar3 = "kCoreDockMsgPushToken";
    break;
  case 0x18:
    pcVar3 = "kCoreDockMsgPushMessage";
  }
LAB_00003138:
  __symbol_stub::_asl_log(0,0,7,"<DockMessage id:%s wid:%x>\n",pcVar3,param_2);
LAB_000031c6:
  if ((local_1c == 0) || (_dock_event_handler == (code *)0x0)) {
    uVar4 = 0xfffffffc;
    if (local_18 != (undefined4 *)0x0) {
      __symbol_stub::_free(local_18);
      uVar4 = 0xfffffffc;
    }
  }
  else {
    (*_dock_event_handler)(&local_1c);
    uVar4 = 0;
    if (local_18 != (undefined4 *)0x0) {
      __symbol_stub::_free(local_18);
      uVar4 = 0;
    }
  }
  return uVar4;
}



int _qwm_dock_remove_item(undefined4 param_1)

{
  int iVar1;
  
  if (__nl_symbol_ptr::_xp_dock_remove_item == (undefined *)0x0) {
    iVar1 = __symbol_stub::_CoreDockRemoveItem(param_1);
    __symbol_stub::_asl_log(0,0,7,"window_id: %d err: %d\n",param_1,iVar1);
    return (uint)(iVar1 != 0) * 2;
  }
                    // WARNING: Could not recover jumptable at 0x000039de. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)__la_symbol_ptr::_xp_dock_remove_item)();
  return iVar1;
}



int _qwm_dock_drag_begin(undefined4 param_1)

{
  int iVar1;
  
  if (__nl_symbol_ptr::_xp_dock_drag_begin == (undefined *)0x0) {
    iVar1 = 0;
    if (__nl_symbol_ptr::_CoreDockSendDragWindowMessage != (undefined *)0x0) {
      iVar1 = __symbol_stub::_CoreDockSendDragWindowMessage(1,param_1);
      iVar1 = (uint)(iVar1 != 0) * 2;
    }
    return iVar1;
  }
                    // WARNING: Could not recover jumptable at 0x000039b4. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)__la_symbol_ptr::_xp_dock_drag_begin)();
  return iVar1;
}



int _qwm_dock_drag_end(undefined4 param_1)

{
  int iVar1;
  
  if (__nl_symbol_ptr::_xp_dock_drag_end == (undefined *)0x0) {
    iVar1 = 0;
    if (__nl_symbol_ptr::_CoreDockSendDragWindowMessage != (undefined *)0x0) {
      iVar1 = __symbol_stub::_CoreDockSendDragWindowMessage(2,param_1);
      iVar1 = (uint)(iVar1 != 0) * 2;
    }
    return iVar1;
  }
                    // WARNING: Could not recover jumptable at 0x000039ba. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)__la_symbol_ptr::_xp_dock_drag_end)();
  return iVar1;
}



void _qwm_dock_event_set_handler(int param_1)

{
  if (__nl_symbol_ptr::_xp_dock_event_set_handler != (undefined *)0x0) {
                    // WARNING: Could not recover jumptable at 0x000039c0. Too many branches
                    // WARNING: Treating indirect jump as call
    (*(code *)__la_symbol_ptr::_xp_dock_event_set_handler)();
    return;
  }
  if (param_1 != 0) {
    _dock_event_handler = param_1;
    return;
  }
                    // WARNING: Subroutine does not return
  ___eprintf("%s:%u: failed assertion `%s\'\n","dock-support.c",0x17b,"new_handler");
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

xp_box _qwm_dock_get_rect(void)

{
  char cVar1;
  dword *pdVar2;
  uint uVar3;
  dword **ppdVar4;
  dword **ppdVar5;
  xp_box xVar6;
  dword *pdStack88;
  uint *puStack84;
  dword *apdStack80 [5];
  float fStack60;
  float fStack56;
  dword dStack48;
  dword *pdStack44;
  uint uStack40;
  dword *pdStack36;
  dword *pdStack32;
  float fStack28;
  float fStack24;
  
  ppdVar5 = (dword **)&stack0xffffffa4;
  if (__nl_symbol_ptr::_xp_dock_get_rect == (undefined *)0x0) {
    if (__xp_dock_rect_valid_b == '\0') {
      __symbol_stub::_CoreDockGetRect();
      pdStack88 = &dStack48;
      __symbol_stub::_CoreDockGetOrientationAndPinning();
      puStack84 = &uStack40;
      pdStack88 = (dword *)0x0;
      __symbol_stub::_CGGetActiveDisplayList();
      pdVar2 = (dword *)__symbol_stub::_malloc(uStack40 * 4);
      if (pdVar2 == (dword *)0x0) {
        apdStack80[0] = (dword *)0x3c96;
        pdStack88 = (dword *)0x3c7b;
        puStack84 = (uint *)0x21b;
                    // WARNING: Subroutine does not return
        ___eprintf();
      }
      puStack84 = &uStack40;
      pdStack88 = pdVar2;
      __symbol_stub::_CGGetActiveDisplayList();
      if (uStack40 != 0) {
        uVar3 = 0;
        ppdVar4 = (dword **)&stack0xffffffa4;
        do {
          ppdVar4[1] = (dword *)pdVar2[uVar3];
          *ppdVar4 = (dword *)(&pdStack88 + 5);
          ppdVar4[-1] = (dword *)0x349f;
          __symbol_stub::_CGDisplayBounds();
          ppdVar5 = ppdVar4 + -1;
          *(ulonglong *)(ppdVar4 + 1) = CONCAT44(fStack56,fStack60);
          *(ulonglong *)(ppdVar4 + -1) = CONCAT44(apdStack80[4],apdStack80[3]);
          ppdVar4[4] = pdStack32;
          ppdVar4[3] = pdStack36;
          ppdVar4[-2] = (dword *)0x34d2;
          cVar1 = __symbol_stub::_CGRectContainsPoint();
          if (cVar1 == '\x01') {
            if (pdStack44 == &mach_header_00000000.cputype) {
              fStack24 = fStack56;
              pdStack32 = apdStack80[4];
              if (___os_major_version < 10) {
                fStack28 = fStack28 + 1.0;
              }
            }
            else {
              if (pdStack44 == (dword *)((int)&mach_header_00000000.magic + 3)) {
                fStack24 = fStack56;
                pdStack32 = apdStack80[4];
              }
              else {
                if (pdStack44 == (dword *)((int)&mach_header_00000000.magic + 2)) {
                  fStack28 = fStack60;
                  pdStack36 = apdStack80[3];
                  if (___os_major_version < 10) {
                    fStack24 = fStack24 + 1.0;
                  }
                }
                else {
                  ppdVar4[1] = pdStack44;
                  *ppdVar4 = (dword *)"Invalid response from qwm_dock_get_orientation(): %d\n";
                  ppdVar4[-1] = (dword *)(__nl_symbol_ptr::___sF + 0xb0);
                  ppdVar4[-2] = (dword *)&LAB_00003595;
                  __symbol_stub::_fprintf((FILE *)ppdVar4[-1],(char *)*ppdVar4);
                }
              }
            }
          }
          uVar3 = uVar3 + 1;
          ppdVar4 = ppdVar4 + -1;
        } while (uVar3 < uStack40);
      }
      ___xp_dock_rect = (undefined2)(int)(float)pdStack36;
      uRam0000415a = (undefined2)(int)(float)pdStack32;
      uRam0000415c = (undefined2)(int)((float)pdStack36 + fStack28);
      uRam0000415e = (undefined2)(int)((float)pdStack32 + fStack24);
      __xp_dock_rect_valid_b = '\x01';
      *ppdVar5 = pdVar2;
      ppdVar5[-1] = (dword *)&LAB_000035ee;
      __symbol_stub::_free(*ppdVar5);
    }
    xVar6 = (xp_box)CONCAT26(uRam0000415e,
                             CONCAT24(uRam0000415c,CONCAT22(uRam0000415a,___xp_dock_rect)));
  }
  else {
    xVar6 = __symbol_stub::_xp_dock_get_rect();
  }
  return xVar6;
}



void _qwm_dock_init(char param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  size_t local_44;
  char local_40 [32];
  undefined4 local_20;
  undefined local_1c [12];
  
  local_44 = 0x20;
  if (__nl_symbol_ptr::_xp_dock_event_set_handler == (undefined *)0x0) {
    pcVar4 = local_40;
    iVar2 = __symbol_stub::_sysctlbyname("kern.osrelease",pcVar4,&local_44,(void *)0x0,0);
    if (iVar2 == -1) {
      __symbol_stub::_perror("sysctl");
      ___os_major_version = 10;
    }
    else {
      while ((*pcVar4 != '\0' && (*pcVar4 != '.'))) {
        pcVar4 = pcVar4 + 1;
      }
      *pcVar4 = '\0';
      ___os_major_version = __symbol_stub::_atoi(local_40);
    }
    uVar3 = __symbol_stub::__CGSDefaultConnection();
    iVar2 = __symbol_stub::_CGSGetEventPort(uVar3,&local_20);
    if (iVar2 == 0) {
      uVar3 = *(undefined4 *)__nl_symbol_ptr::_kCFAllocatorDefault;
      iVar2 = __symbol_stub::_CFMachPortCreateWithPort(uVar3,local_20,_cg_input_callback,0,0);
      if (iVar2 != 0) {
        _cg_input_source = __symbol_stub::_CFMachPortCreateRunLoopSource(uVar3,iVar2,0);
        __symbol_stub::_CFRelease(iVar2);
        if (_cg_input_source != 0) {
          uVar3 = __symbol_stub::_CFRunLoopGetCurrent();
          __symbol_stub::_CFRunLoopAddSource
                    (uVar3,_cg_input_source,*(undefined4 *)__nl_symbol_ptr::_kCFRunLoopDefaultMode);
        }
      }
    }
    if (param_1 == '\0') {
      if (10 < ___os_major_version) {
        _PR9379322_queue =
             __symbol_stub::_dispatch_queue_create((char *)0x0,(dispatch_queue_attr_t)0x0);
      }
      if (__nl_symbol_ptr::__RegisterApplication == (undefined *)0x0) {
        __symbol_stub::_CPSRegisterWithServer(4);
      }
      else {
        __symbol_stub::__RegisterApplication(0,local_1c);
      }
      uVar3 = __symbol_stub::_CFRunLoopGetCurrent();
      sVar1 = __symbol_stub::_CoreDockRegisterClientWithRunLoop(_dock_message_handler,0,uVar3);
      if (sVar1 != 0) {
        __symbol_stub::_fprintf
                  ((FILE *)(__nl_symbol_ptr::___sF + 0xb0),"couldn\'t register with dock: %d\n",
                   (int)sVar1);
      }
      __xp_dock_rect_valid_b = 0;
    }
  }
  else {
    __symbol_stub::_xp_init((uint)(param_1 == '\0') * 4 + 1);
  }
  return;
}



void _cg_input_callback(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined local_dc [8];
  int local_d4;
  
  uVar1 = __symbol_stub::__CGSDefaultConnection();
  do {
    iVar2 = __symbol_stub::_CGSGetNextEventRecordFromMessage(uVar1,param_2,local_dc,0xcc);
    if (iVar2 != 0) {
      return;
    }
  } while (local_d4 != 0);
  return;
}



void ___eprintf(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(__nl_symbol_ptr::___sF + 0xb0);
  __symbol_stub::_fprintf(pFVar1,param_1,param_2,param_3,param_4);
  __symbol_stub::_fflush(pFVar1);
                    // WARNING: Subroutine does not return
  __symbol_stub::_abort();
}



// /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation

void __symbol_stub::_CFMachPortCreateRunLoopSource(void)

{
                    // WARNING: Could not recover jumptable at 0x000038ca. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CFMachPortCreateRunLoopSource)();
  return;
}



// /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation

void __symbol_stub::_CFMachPortCreateWithPort(void)

{
                    // WARNING: Could not recover jumptable at 0x000038d0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CFMachPortCreateWithPort)();
  return;
}



// /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation

void __symbol_stub::_CFRelease(void)

{
                    // WARNING: Could not recover jumptable at 0x000038d6. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CFRelease)();
  return;
}



// /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation

void __symbol_stub::_CFRunLoopAddSource(void)

{
                    // WARNING: Could not recover jumptable at 0x000038dc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CFRunLoopAddSource)();
  return;
}



// /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation

void __symbol_stub::_CFRunLoopGetCurrent(void)

{
                    // WARNING: Could not recover jumptable at 0x000038e2. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CFRunLoopGetCurrent)();
  return;
}



// /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation

void __symbol_stub::_CFStringCreateWithBytes(void)

{
                    // WARNING: Could not recover jumptable at 0x000038e8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CFStringCreateWithBytes)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __symbol_stub::_CGDisplayBounds(void)

{
                    // WARNING: Could not recover jumptable at 0x000038ee. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CGDisplayBounds)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __symbol_stub::_CGGetActiveDisplayList(void)

{
                    // WARNING: Could not recover jumptable at 0x000038f4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CGGetActiveDisplayList)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __symbol_stub::_CGRectContainsPoint(void)

{
                    // WARNING: Could not recover jumptable at 0x000038fa. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CGRectContainsPoint)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __symbol_stub::_CGSGetEventPort(void)

{
                    // WARNING: Could not recover jumptable at 0x00003900. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CGSGetEventPort)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __symbol_stub::_CGSGetNextEventRecordFromMessage(void)

{
                    // WARNING: Could not recover jumptable at 0x00003906. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CGSGetNextEventRecordFromMessage)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __symbol_stub::_CGSGetWindowWorkspace(void)

{
                    // WARNING: Could not recover jumptable at 0x0000390c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CGSGetWindowWorkspace)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __symbol_stub::_CGSGetWorkspace(void)

{
                    // WARNING: Could not recover jumptable at 0x00003912. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CGSGetWorkspace)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __symbol_stub::_CGSWindowIsVisible(void)

{
                    // WARNING: Could not recover jumptable at 0x00003918. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CGSWindowIsVisible)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __symbol_stub::_CPSRegisterWithServer(void)

{
                    // WARNING: Could not recover jumptable at 0x0000391e. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CPSRegisterWithServer)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __symbol_stub::_CoreDockGetOrientationAndPinning(void)

{
                    // WARNING: Could not recover jumptable at 0x00003924. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CoreDockGetOrientationAndPinning)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __symbol_stub::_CoreDockGetRect(void)

{
                    // WARNING: Could not recover jumptable at 0x0000392a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CoreDockGetRect)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __symbol_stub::_CoreDockMinimizeItemWithTitleAsync(void)

{
                    // WARNING: Could not recover jumptable at 0x00003930. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CoreDockMinimizeItemWithTitleAsync)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __symbol_stub::_CoreDockRegisterClientWithRunLoop(void)

{
                    // WARNING: Could not recover jumptable at 0x00003936. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CoreDockRegisterClientWithRunLoop)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __symbol_stub::_CoreDockRemoveItem(void)

{
                    // WARNING: Could not recover jumptable at 0x0000393c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CoreDockRemoveItem)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __symbol_stub::_CoreDockRestoreItem(void)

{
                    // WARNING: Could not recover jumptable at 0x00003942. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CoreDockRestoreItem)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __symbol_stub::_CoreDockRestoreItemAsync(void)

{
                    // WARNING: Could not recover jumptable at 0x00003948. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CoreDockRestoreItemAsync)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __symbol_stub::_CoreDockSendDragWindowMessage(void)

{
                    // WARNING: Could not recover jumptable at 0x0000394e. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CoreDockSendDragWindowMessage)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __symbol_stub::__CGSDefaultConnection(void)

{
                    // WARNING: Could not recover jumptable at 0x00003954. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::__CGSDefaultConnection)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __symbol_stub::__RegisterApplication(void)

{
                    // WARNING: Could not recover jumptable at 0x0000395a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::__RegisterApplication)();
  return;
}



// /usr/lib/libSystem.B.dylib

void __symbol_stub::_abort(void)

{
                    // WARNING: Could not recover jumptable at 0x00003960. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_abort)();
  return;
}



// /usr/lib/libSystem.B.dylib

void __symbol_stub::_asl_log(void)

{
                    // WARNING: Could not recover jumptable at 0x00003966. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_asl_log)();
  return;
}



// /usr/lib/libSystem.B.dylib

int __symbol_stub::_atoi(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x0000396c. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)__la_symbol_ptr::_atoi)();
  return iVar1;
}



// /usr/lib/libSystem.B.dylib

void * __symbol_stub::_calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x00003972. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)__la_symbol_ptr::_calloc)();
  return pvVar1;
}



// /usr/lib/libSystem.B.dylib

void __symbol_stub::_dispatch_async(void)

{
                    // WARNING: Could not recover jumptable at 0x00003978. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_dispatch_async)();
  return;
}



// /usr/lib/libSystem.B.dylib

dispatch_queue_t __symbol_stub::_dispatch_get_current_queue(void)

{
  dispatch_queue_t pdVar1;
  
                    // WARNING: Could not recover jumptable at 0x0000397e. Too many branches
                    // WARNING: Treating indirect jump as call
  pdVar1 = (dispatch_queue_t)(*(code *)__la_symbol_ptr::_dispatch_get_current_queue)();
  return pdVar1;
}



// /usr/lib/libSystem.B.dylib

dispatch_queue_t __symbol_stub::_dispatch_queue_create(char *label,dispatch_queue_attr_t attr)

{
  dispatch_queue_t pdVar1;
  
                    // WARNING: Could not recover jumptable at 0x00003984. Too many branches
                    // WARNING: Treating indirect jump as call
  pdVar1 = (dispatch_queue_t)(*(code *)__la_symbol_ptr::_dispatch_queue_create)();
  return pdVar1;
}



// /usr/lib/libSystem.B.dylib

int __symbol_stub::_fflush(FILE *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x0000398a. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)__la_symbol_ptr::_fflush)();
  return iVar1;
}



// /usr/lib/libSystem.B.dylib

int __symbol_stub::_fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x00003990. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)__la_symbol_ptr::_fprintf)();
  return iVar1;
}



// /usr/lib/libSystem.B.dylib

void __symbol_stub::_free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x00003996. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_free)();
  return;
}



// /usr/lib/libSystem.B.dylib

void * __symbol_stub::_malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x0000399c. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)__la_symbol_ptr::_malloc)();
  return pvVar1;
}



// /usr/lib/libSystem.B.dylib

void __symbol_stub::_perror(char *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000039a2. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_perror)();
  return;
}



// /usr/lib/libSystem.B.dylib

size_t __symbol_stub::_strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000039a8. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)__la_symbol_ptr::_strlen)();
  return sVar1;
}



// /usr/lib/libSystem.B.dylib

int __symbol_stub::_sysctlbyname
              (char *param_1,void *param_2,size_t *param_3,void *param_4,size_t param_5)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000039ae. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)__la_symbol_ptr::_sysctlbyname)();
  return iVar1;
}



// /usr/lib/libXplugin.1.dylib

xp_dock_orientation __symbol_stub::_xp_dock_get_orientation(void)

{
  xp_dock_orientation xVar1;
  
                    // WARNING: Could not recover jumptable at 0x000039c6. Too many branches
                    // WARNING: Treating indirect jump as call
  xVar1 = (*(code *)__la_symbol_ptr::_xp_dock_get_orientation)();
  return xVar1;
}



// /usr/lib/libXplugin.1.dylib

xp_box __symbol_stub::_xp_dock_get_rect(void)

{
  xp_box xVar1;
  
                    // WARNING: Could not recover jumptable at 0x000039cc. Too many branches
                    // WARNING: Treating indirect jump as call
  xVar1 = (xp_box)(*(code *)__la_symbol_ptr::_xp_dock_get_rect)();
  return xVar1;
}



// /usr/lib/libXplugin.1.dylib

xp_error __symbol_stub::_xp_dock_is_window_visible
                   (xp_native_window_id osxwindow_id,xp_bool *is_visible)

{
  xp_error xVar1;
  
                    // WARNING: Could not recover jumptable at 0x000039d2. Too many branches
                    // WARNING: Treating indirect jump as call
  xVar1 = (*(code *)__la_symbol_ptr::_xp_dock_is_window_visible)();
  return xVar1;
}



// /usr/lib/libXplugin.1.dylib

xp_error __symbol_stub::_xp_dock_restore_item_async(xp_native_window_id osxwindow_id)

{
  xp_error xVar1;
  
                    // WARNING: Could not recover jumptable at 0x000039e4. Too many branches
                    // WARNING: Treating indirect jump as call
  xVar1 = (*(code *)__la_symbol_ptr::_xp_dock_restore_item_async)();
  return xVar1;
}



// /usr/lib/libXplugin.1.dylib

xp_error __symbol_stub::_xp_init(uint options)

{
  xp_error xVar1;
  
                    // WARNING: Could not recover jumptable at 0x000039ea. Too many branches
                    // WARNING: Treating indirect jump as call
  xVar1 = (*(code *)__la_symbol_ptr::_xp_init)();
  return xVar1;
}


