typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned long    qword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned long    undefined8;
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




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void dyld_stub_binding_helper(void)

{
                    // WARNING: Could not recover jumptable at 0x00002a1b. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_00004000)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __dyld_func_lookup(void)

{
                    // WARNING: Could not recover jumptable at 0x00002a24. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_00004008)();
  return;
}



xp_error _qwm_dock_is_window_visible(xp_native_window_id param_1,uint *param_2)

{
  xp_error xVar1;
  undefined4 uVar2;
  int iVar3;
  int local_2c;
  int local_28;
  byte local_21;
  
  if (__got::_xp_dock_is_window_visible != (undefined *)0x0) {
    xVar1 = __stubs::_xp_dock_is_window_visible(param_1,(xp_bool *)param_2);
    return xVar1;
  }
  uVar2 = __stubs::__CGSDefaultConnection();
  if (__got::_CGSWindowIsVisible == (undefined *)0x0) {
    if (__got::_CGSGetWorkspace == (undefined *)0x0 ||
        __got::_CGSGetWindowWorkspace == (undefined *)0x0) {
      return 2;
    }
    iVar3 = __stubs::_CGSGetWorkspace(uVar2,&local_2c);
    if (iVar3 < 1000) {
      if (iVar3 != 0) {
        return 2;
      }
      iVar3 = __stubs::_CGSGetWindowWorkspace(uVar2,param_1,&local_28);
      if (iVar3 < 1000) {
        if (iVar3 != 0) {
          return 2;
        }
        *param_2 = (uint)(local_2c == local_28);
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
    iVar3 = __stubs::_CGSWindowIsVisible(uVar2,param_1,&local_21);
    *param_2 = (uint)local_21;
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
  undefined local_10 [4];
  xp_dock_orientation local_c;
  
  if (__got::_xp_dock_get_orientation == (undefined *)0x0) {
    __stubs::_CoreDockGetOrientationAndPinning(&local_c,local_10);
  }
  else {
    local_c = __stubs::_xp_dock_get_orientation();
  }
  return local_c;
}



ulong _qwm_dock_minimize_item_with_title_async(undefined4 param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (__got::_xp_dock_minimize_item_with_title_async == (undefined *)0x0) {
    sVar2 = __stubs::_strlen(param_2);
    uVar3 = __stubs::_CFStringCreateWithBytes(0,param_2,sVar2,0x8000100,0);
    iVar1 = __stubs::_CoreDockMinimizeItemWithTitleAsync(param_1,uVar3);
    __stubs::_CFRelease(uVar3);
    return (ulong)((uint)(iVar1 != 0) * 2);
  }
                    // WARNING: Could not recover jumptable at 0x00003726. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar4 = (*(code *)__la_symbol_ptr::_xp_dock_minimize_item_with_title_async)(param_1,param_2);
  return uVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int _qwm_dock_restore_item_async(xp_native_window_id param_1)

{
  int iVar1;
  undefined *local_40;
  undefined4 local_38;
  undefined4 local_34;
  code *local_30;
  undefined *local_28;
  xp_native_window_id local_20;
  
  if (__got::_xp_dock_restore_item_async == (undefined *)0x0) {
    if (____os_major_version < 0xb) {
      iVar1 = __stubs::_CoreDockRestoreItemAsync(param_1);
    }
    else {
      local_40 = __got::__NSConcreteStackBlock;
      local_38 = 0x40000000;
      local_34 = 0;
      local_30 = ___qwm_dock_restore_item_async_block_invoke_0;
      local_28 = &___block_descriptor_tmp1;
      local_20 = param_1;
      __stubs::_dispatch_async(_PR9379322_queue,&local_40);
      iVar1 = 0;
    }
    __stubs::_asl_log(0,0,7,"window_id: %d err: %d\n",param_1,iVar1);
    iVar1 = (uint)(iVar1 != 0) * 2;
  }
  else {
    iVar1 = __stubs::_xp_dock_restore_item_async(param_1);
  }
  return iVar1;
}



void ___qwm_dock_restore_item_async_block_invoke_0(long param_1)

{
  undefined *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  code *local_28;
  undefined *local_20;
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = __stubs::_CoreDockRestoreItem(*(undefined4 *)(param_1 + 0x20));
  local_38 = __got::__NSConcreteStackBlock;
  local_30 = 0x40000000;
  local_2c = 0;
  local_28 = ___block_global_0;
  local_20 = &___block_descriptor_tmp;
  local_14 = *(undefined4 *)(param_1 + 0x20);
  __stubs::_dispatch_async(__got::__dispatch_main_q,&local_38);
  return;
}



void ___block_global_0(long param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    uVar1 = 8;
  }
  else {
    uVar1 = 0x12;
  }
  _dock_message_handler(uVar1,*(undefined4 *)(param_1 + 0x24),0,0);
  return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 _dock_message_handler(int param_1,undefined4 param_2,int *param_3)

{
  long lVar1;
  dispatch_queue_t pdVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  bool bVar10;
  undefined8 local_40;
  undefined4 *local_38;
  ulong local_30;
  
  local_30 = 0;
  local_38 = (undefined4 *)0x0;
  local_40 = 0;
  if ((10 < ____os_major_version) &&
     (pdVar2 = __stubs::_dispatch_get_current_queue(), pdVar2 == _PR9379322_queue)) {
    return 0;
  }
  if (0x17 < param_1 - 1U) {
    pcVar7 = "UNKNOWN";
    goto LAB_00002ecc;
  }
  pcVar8 = "kCoreDockMsgSelectWindows";
  pcVar9 = "kCoreDockMsgRestoreEffectDone";
  pcVar3 = "kCoreDockMsgMinimizeEffectDone";
  pcVar7 = "kCoreDockMsgDockAlive";
  switch(param_1) {
  case 1:
    __stubs::_asl_log(0,0,7,"<DockMessage id:%s wid:%x>\n","kCoreDockMsgSelectWindow",param_2);
    local_40 = CONCAT44(local_40._4_4_,3);
    local_38 = (undefined4 *)__stubs::_calloc(2,4);
    if (local_38 == (undefined4 *)0x0) {
      return 0xffffff69;
    }
    *local_38 = param_2;
    goto LAB_0000307b;
  case 3:
    __stubs::_asl_log(0,0,7,"<DockMessage id:%s wid:%x>\n","kCoreDockMsgDockDied",param_2);
    local_40 = CONCAT44(local_40._4_4_,1);
    goto LAB_0000307b;
  case 4:
    pcVar7 = "kCoreDockMsgSingleWindowModeOn";
    break;
  case 5:
    pcVar7 = "kCoreDockMsgSingleWindowModeOff";
    break;
  case 6:
    pcVar7 = "kCoreDockMsgMinimizeAll";
    break;
  case 9:
    pcVar7 = "kCoreDockMsgTransitionsDone";
    break;
  case 10:
    __stubs::_asl_log(0,0,7,"<DockMessage id:%s wid:%x>\n","kCoreDockMsgRectChanged",param_2);
    __xp_dock_rect_valid_b = 0;
    return 0;
  case 0xb:
    pcVar7 = "kCoreDockMsgGetAppMenu";
    break;
  case 0xc:
    pcVar7 = "kCoreDockMsgDoMenuCommand";
    break;
  case 0xd:
    pcVar7 = "kCoreDockMsgGetWindowMenu";
    break;
  case 0xe:
    pcVar7 = "kCoreDockMsgCloseWindow";
    break;
  case 0x10:
    pcVar3 = "kCoreDockMsgMinimizeFailed";
  case 7:
    __stubs::_asl_log(0,0,7,"<DockMessage id:%s wid:%x>\n",pcVar3,param_2);
    local_40 = CONCAT44(local_40._4_4_,5);
    local_38 = (undefined4 *)__stubs::_calloc(2,4);
    if (local_38 == (undefined4 *)0x0) {
      return 0xffffff69;
    }
    *local_38 = param_2;
    bVar10 = param_1 == 7;
    goto LAB_00003013;
  case 0x11:
    pcVar7 = "kCoreDockMsgMinimizeManyFailed";
    break;
  case 0x12:
    pcVar9 = "kCoreDockMsgMaximizeFailed";
  case 8:
    __stubs::_asl_log(0,0,7,"<DockMessage id:%s wid:%x>\n",pcVar9,param_2);
    local_40 = CONCAT44(local_40._4_4_,4);
    local_38 = (undefined4 *)__stubs::_calloc(2,4);
    if (local_38 == (undefined4 *)0x0) {
      return 0xffffff69;
    }
    *local_38 = param_2;
    bVar10 = param_1 == 8;
LAB_00003013:
    local_30 = local_30 & 0xffffffff00000000 | (ulong)bVar10;
    goto LAB_0000307b;
  case 0x13:
    pcVar7 = "kCoreDockMsgMaximizeManyFailed";
    break;
  case 0x14:
    pcVar8 = "kCoreDockMsgMaximizedWindows";
  case 0xf:
    __stubs::_asl_log(0,0,7,"<DockMessage id:%s wid:%x>\n",pcVar8,param_2);
    lVar1 = *(long *)(param_3 + 2);
    iVar6 = *param_3;
    local_40 = local_40 & 0xffffffff00000000 | (ulong)(param_1 != 0x14) | 2;
    local_38 = (undefined4 *)__stubs::_calloc((long)(iVar6 + 1),4);
    if (local_38 == (undefined4 *)0x0) {
      return 0xffffff69;
    }
    puVar5 = local_38;
    if (0 < iVar6) {
      do {
        iVar6 = iVar6 + -1;
        *puVar5 = *(undefined4 *)(lVar1 + (long)iVar6 * 4);
        puVar5 = puVar5 + 1;
      } while (iVar6 != 0);
    }
    goto LAB_0000307b;
  case 0x15:
    pcVar7 = "kCoreDockMsgMiniViewShown";
    break;
  case 0x16:
    pcVar7 = "kCoreDockMsgMiniViewHidden";
    break;
  case 0x17:
    pcVar7 = "kCoreDockMsgPushToken";
    break;
  case 0x18:
    pcVar7 = "kCoreDockMsgPushMessage";
  }
LAB_00002ecc:
  __stubs::_asl_log(0,0,7,"<DockMessage id:%s wid:%x>\n",pcVar7,param_2);
LAB_0000307b:
  if (((int)local_40 == 0) || (_dock_event_handler == (code *)0x0)) {
    uVar4 = 0xfffffffc;
    if (local_38 != (undefined4 *)0x0) {
      __stubs::_free(local_38);
      uVar4 = 0xfffffffc;
    }
  }
  else {
    (*_dock_event_handler)(&local_40);
    uVar4 = 0;
    if (local_38 != (undefined4 *)0x0) {
      __stubs::_free(local_38);
      uVar4 = 0;
    }
  }
  return uVar4;
}



ulong _qwm_dock_remove_item(undefined4 param_1)

{
  int iVar1;
  ulong uVar2;
  
  if (__got::_xp_dock_remove_item == (undefined *)0x0) {
    iVar1 = __stubs::_CoreDockRemoveItem(param_1);
    __stubs::_asl_log(0,0,7,"window_id: %d err: %d\n",param_1,iVar1);
    return (ulong)((uint)(iVar1 != 0) * 2);
  }
                    // WARNING: Could not recover jumptable at 0x0000372c. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar2 = (*(code *)__la_symbol_ptr::_xp_dock_remove_item)(param_1);
  return uVar2;
}



ulong _qwm_dock_drag_begin(undefined4 param_1)

{
  int iVar1;
  ulong uVar2;
  
  if (__got::_xp_dock_drag_begin == (undefined *)0x0) {
    iVar1 = __stubs::_CoreDockSendDragWindowMessage(1,param_1);
    return (ulong)((uint)(iVar1 != 0) * 2);
  }
                    // WARNING: Could not recover jumptable at 0x00003702. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar2 = (*(code *)__la_symbol_ptr::_xp_dock_drag_begin)(param_1);
  return uVar2;
}



ulong _qwm_dock_drag_end(undefined4 param_1)

{
  int iVar1;
  ulong uVar2;
  
  if (__got::_xp_dock_drag_end == (undefined *)0x0) {
    iVar1 = __stubs::_CoreDockSendDragWindowMessage(2,param_1);
    return (ulong)((uint)(iVar1 != 0) * 2);
  }
                    // WARNING: Could not recover jumptable at 0x00003708. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar2 = (*(code *)__la_symbol_ptr::_xp_dock_drag_end)(param_1);
  return uVar2;
}



void _qwm_dock_event_set_handler(long param_1)

{
  if (__got::_xp_dock_event_set_handler != (undefined *)0x0) {
                    // WARNING: Could not recover jumptable at 0x0000370e. Too many branches
                    // WARNING: Treating indirect jump as call
    (*(code *)__la_symbol_ptr::_xp_dock_event_set_handler)();
    return;
  }
  if (param_1 != 0) {
    _dock_event_handler = param_1;
    return;
  }
                    // WARNING: Subroutine does not return
  __stubs::___assert_rtn("qwm_dock_event_set_handler","dock-support.c",0x17b,"new_handler");
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

xp_box _qwm_dock_get_rect(void)

{
  char cVar1;
  xp_box xVar2;
  void *pvVar3;
  uint uVar4;
  ulong uVar5;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  undefined local_54 [4];
  int local_50;
  uint local_4c;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  
  if (__got::_xp_dock_get_rect == (undefined *)0x0) {
    if (__xp_dock_rect_valid_b == '\0') {
      __stubs::_CoreDockGetRect(&local_48);
      __stubs::_CoreDockGetOrientationAndPinning(&local_50,local_54);
      __stubs::_CGGetActiveDisplayList(0,0,&local_4c);
      uVar5 = (ulong)local_4c;
      pvVar3 = __stubs::_malloc(uVar5 * 4);
      if (pvVar3 == (void *)0x0) {
                    // WARNING: Subroutine does not return
        __stubs::___assert_rtn("qwm_dock_get_rect","dock-support.c",0x21b,"displayList");
      }
      __stubs::_CGGetActiveDisplayList(uVar5,pvVar3,&local_4c);
      if (local_4c != 0) {
        uVar5 = 0;
        do {
          __stubs::_CGDisplayBounds(&local_78,*(undefined4 *)((long)pvVar3 + uVar5 * 4));
          cVar1 = __stubs::_CGRectContainsPoint(local_48,local_40);
          if (cVar1 == '\x01') {
            if (local_50 == 4) {
              local_30 = local_60;
              local_40 = local_70;
              if (____os_major_version < 10) {
                local_38 = local_38 + 1.0;
              }
            }
            else {
              if (local_50 == 3) {
                local_30 = local_60;
                local_40 = local_70;
              }
              else {
                if (local_50 == 2) {
                  local_38 = local_68;
                  local_48 = local_78;
                  if (____os_major_version < 10) {
                    local_30 = local_30 + 1.0;
                  }
                }
                else {
                  __stubs::_fprintf(*(FILE **)__got::___stderrp,
                                    "Invalid response from qwm_dock_get_orientation(): %d\n");
                }
              }
            }
          }
          uVar4 = (int)uVar5 + 1;
          uVar5 = (ulong)uVar4;
        } while (uVar4 < local_4c);
      }
      __xp_dock_rect._0_2_ = (undefined2)(int)local_48;
      __xp_dock_rect._2_2_ = (undefined2)(int)local_40;
      __xp_dock_rect._4_2_ = (undefined2)(int)(local_48 + local_38);
      __xp_dock_rect._6_2_ = (undefined2)(int)(local_40 + local_30);
      __xp_dock_rect_valid_b = '\x01';
      __stubs::_free(pvVar3);
    }
    xVar2 = (xp_box)CONCAT26(__xp_dock_rect._6_2_,
                             CONCAT24(__xp_dock_rect._4_2_,
                                      CONCAT22(__xp_dock_rect._2_2_,(undefined2)__xp_dock_rect)));
  }
  else {
    xVar2 = __stubs::_xp_dock_get_rect();
  }
  return xVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _qwm_dock_init(char param_1)

{
  short sVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  size_t local_60;
  undefined4 local_54;
  undefined local_50 [8];
  char local_48 [32];
  long local_28;
  
  local_28 = *(long *)__got::___stack_chk_guard;
  local_60 = 0x20;
  if (__got::_xp_dock_event_set_handler == (undefined *)0x0) {
    pcVar5 = local_48;
    iVar2 = __stubs::_sysctlbyname("kern.osrelease",pcVar5,&local_60,(void *)0x0,0);
    if (iVar2 == -1) {
      __stubs::_perror("sysctl");
      ____os_major_version = 10;
    }
    else {
      while ((*pcVar5 != '\0' && (*pcVar5 != '.'))) {
        pcVar5 = pcVar5 + 1;
      }
      *pcVar5 = '\0';
      ____os_major_version = __stubs::_atoi(local_48);
    }
    __stubs::__CGSDefaultConnection();
    iVar2 = __stubs::_CGSGetEventPort();
    if (iVar2 == 0) {
      uVar4 = *(undefined8 *)__got::_kCFAllocatorDefault;
      lVar3 = __stubs::_CFMachPortCreateWithPort(uVar4,local_54,&_cg_input_callback,0,0);
      if (lVar3 != 0) {
        _cg_input_source = __stubs::_CFMachPortCreateRunLoopSource(uVar4,lVar3,0);
        __stubs::_CFRelease();
        if (_cg_input_source != 0) {
          uVar4 = __stubs::_CFRunLoopGetCurrent();
          __stubs::_CFRunLoopAddSource
                    (uVar4,_cg_input_source,*(undefined8 *)__got::_kCFRunLoopDefaultMode);
        }
      }
    }
    if (param_1 == '\0') {
      if (10 < ____os_major_version) {
        _PR9379322_queue = __stubs::_dispatch_queue_create((char *)0x0,(dispatch_queue_attr_t)0x0);
      }
      __stubs::__RegisterApplication(0,local_50);
      uVar4 = __stubs::_CFRunLoopGetCurrent();
      sVar1 = __stubs::_CoreDockRegisterClientWithRunLoop(_dock_message_handler,0,uVar4);
      if (sVar1 != 0) {
        __stubs::_fprintf(*(FILE **)__got::___stderrp,"couldn\'t register with dock: %d\n",
                          (ulong)(uint)(int)sVar1);
      }
      __xp_dock_rect_valid_b = 0;
    }
  }
  else {
    __stubs::_xp_init((uint)(param_1 == '\0') * 4 + 1);
  }
  if (*(long *)__got::___stack_chk_guard == local_28) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stubs::___stack_chk_fail();
}



// /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation

void __stubs::_CFMachPortCreateRunLoopSource(void)

{
                    // WARNING: Could not recover jumptable at 0x0000361e. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CFMachPortCreateRunLoopSource)();
  return;
}



// /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation

void __stubs::_CFMachPortCreateWithPort(void)

{
                    // WARNING: Could not recover jumptable at 0x00003624. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CFMachPortCreateWithPort)();
  return;
}



// /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation

void __stubs::_CFRelease(void)

{
                    // WARNING: Could not recover jumptable at 0x0000362a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CFRelease)();
  return;
}



// /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation

void __stubs::_CFRunLoopAddSource(void)

{
                    // WARNING: Could not recover jumptable at 0x00003630. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CFRunLoopAddSource)();
  return;
}



// /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation

void __stubs::_CFRunLoopGetCurrent(void)

{
                    // WARNING: Could not recover jumptable at 0x00003636. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CFRunLoopGetCurrent)();
  return;
}



// /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation

void __stubs::_CFStringCreateWithBytes(void)

{
                    // WARNING: Could not recover jumptable at 0x0000363c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CFStringCreateWithBytes)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __stubs::_CGDisplayBounds(void)

{
                    // WARNING: Could not recover jumptable at 0x00003642. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CGDisplayBounds)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __stubs::_CGGetActiveDisplayList(void)

{
                    // WARNING: Could not recover jumptable at 0x00003648. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CGGetActiveDisplayList)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __stubs::_CGRectContainsPoint(void)

{
                    // WARNING: Could not recover jumptable at 0x0000364e. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CGRectContainsPoint)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __stubs::_CGSGetEventPort(void)

{
                    // WARNING: Could not recover jumptable at 0x00003654. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CGSGetEventPort)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __stubs::_CGSGetNextEventRecordFromMessage(void)

{
                    // WARNING: Could not recover jumptable at 0x0000365a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CGSGetNextEventRecordFromMessage)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __stubs::_CGSGetWindowWorkspace(void)

{
                    // WARNING: Could not recover jumptable at 0x00003660. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CGSGetWindowWorkspace)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __stubs::_CGSGetWorkspace(void)

{
                    // WARNING: Could not recover jumptable at 0x00003666. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CGSGetWorkspace)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __stubs::_CGSWindowIsVisible(void)

{
                    // WARNING: Could not recover jumptable at 0x0000366c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CGSWindowIsVisible)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __stubs::_CoreDockGetOrientationAndPinning(void)

{
                    // WARNING: Could not recover jumptable at 0x00003672. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CoreDockGetOrientationAndPinning)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __stubs::_CoreDockGetRect(void)

{
                    // WARNING: Could not recover jumptable at 0x00003678. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CoreDockGetRect)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __stubs::_CoreDockMinimizeItemWithTitleAsync(void)

{
                    // WARNING: Could not recover jumptable at 0x0000367e. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CoreDockMinimizeItemWithTitleAsync)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __stubs::_CoreDockRegisterClientWithRunLoop(void)

{
                    // WARNING: Could not recover jumptable at 0x00003684. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CoreDockRegisterClientWithRunLoop)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __stubs::_CoreDockRemoveItem(void)

{
                    // WARNING: Could not recover jumptable at 0x0000368a. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CoreDockRemoveItem)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __stubs::_CoreDockRestoreItem(void)

{
                    // WARNING: Could not recover jumptable at 0x00003690. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CoreDockRestoreItem)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __stubs::_CoreDockRestoreItemAsync(void)

{
                    // WARNING: Could not recover jumptable at 0x00003696. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CoreDockRestoreItemAsync)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __stubs::_CoreDockSendDragWindowMessage(void)

{
                    // WARNING: Could not recover jumptable at 0x0000369c. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_CoreDockSendDragWindowMessage)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __stubs::__CGSDefaultConnection(void)

{
                    // WARNING: Could not recover jumptable at 0x000036a2. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::__CGSDefaultConnection)();
  return;
}



// /System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices

void __stubs::__RegisterApplication(void)

{
                    // WARNING: Could not recover jumptable at 0x000036a8. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::__RegisterApplication)();
  return;
}



// /usr/lib/libSystem.B.dylib

void __stubs::___assert_rtn(char *param_1,char *param_2,int param_3,char *param_4)

{
                    // WARNING: Could not recover jumptable at 0x000036ae. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::___assert_rtn)();
  return;
}



// /usr/lib/libSystem.B.dylib

void __stubs::___stack_chk_fail(void)

{
                    // WARNING: Could not recover jumptable at 0x000036b4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::___stack_chk_fail)();
  return;
}



// /usr/lib/libSystem.B.dylib

void __stubs::_asl_log(void)

{
                    // WARNING: Could not recover jumptable at 0x000036ba. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_asl_log)();
  return;
}



// /usr/lib/libSystem.B.dylib

int __stubs::_atoi(char *param_1)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000036c0. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)__la_symbol_ptr::_atoi)();
  return iVar1;
}



// /usr/lib/libSystem.B.dylib

void * __stubs::_calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000036c6. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)__la_symbol_ptr::_calloc)();
  return pvVar1;
}



// /usr/lib/libSystem.B.dylib

void __stubs::_dispatch_async(void)

{
                    // WARNING: Could not recover jumptable at 0x000036cc. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_dispatch_async)();
  return;
}



// /usr/lib/libSystem.B.dylib

dispatch_queue_t __stubs::_dispatch_get_current_queue(void)

{
  dispatch_queue_t pdVar1;
  
                    // WARNING: Could not recover jumptable at 0x000036d2. Too many branches
                    // WARNING: Treating indirect jump as call
  pdVar1 = (dispatch_queue_t)(*(code *)__la_symbol_ptr::_dispatch_get_current_queue)();
  return pdVar1;
}



// /usr/lib/libSystem.B.dylib

dispatch_queue_t __stubs::_dispatch_queue_create(char *label,dispatch_queue_attr_t attr)

{
  dispatch_queue_t pdVar1;
  
                    // WARNING: Could not recover jumptable at 0x000036d8. Too many branches
                    // WARNING: Treating indirect jump as call
  pdVar1 = (dispatch_queue_t)(*(code *)__la_symbol_ptr::_dispatch_queue_create)();
  return pdVar1;
}



// /usr/lib/libSystem.B.dylib

int __stubs::_fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000036de. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)__la_symbol_ptr::_fprintf)();
  return iVar1;
}



// /usr/lib/libSystem.B.dylib

void __stubs::_free(void *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000036e4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_free)();
  return;
}



// /usr/lib/libSystem.B.dylib

void * __stubs::_malloc(size_t param_1)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x000036ea. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = (void *)(*(code *)__la_symbol_ptr::_malloc)();
  return pvVar1;
}



// /usr/lib/libSystem.B.dylib

void __stubs::_perror(char *param_1)

{
                    // WARNING: Could not recover jumptable at 0x000036f0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)__la_symbol_ptr::_perror)();
  return;
}



// /usr/lib/libSystem.B.dylib

size_t __stubs::_strlen(char *param_1)

{
  size_t sVar1;
  
                    // WARNING: Could not recover jumptable at 0x000036f6. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = (*(code *)__la_symbol_ptr::_strlen)();
  return sVar1;
}



// /usr/lib/libSystem.B.dylib

int __stubs::_sysctlbyname(char *param_1,void *param_2,size_t *param_3,void *param_4,size_t param_5)

{
  int iVar1;
  
                    // WARNING: Could not recover jumptable at 0x000036fc. Too many branches
                    // WARNING: Treating indirect jump as call
  iVar1 = (*(code *)__la_symbol_ptr::_sysctlbyname)();
  return iVar1;
}



// /usr/lib/libXplugin.1.dylib

xp_dock_orientation __stubs::_xp_dock_get_orientation(void)

{
  xp_dock_orientation xVar1;
  
                    // WARNING: Could not recover jumptable at 0x00003714. Too many branches
                    // WARNING: Treating indirect jump as call
  xVar1 = (*(code *)__la_symbol_ptr::_xp_dock_get_orientation)();
  return xVar1;
}



// /usr/lib/libXplugin.1.dylib

xp_box __stubs::_xp_dock_get_rect(void)

{
  xp_box xVar1;
  
                    // WARNING: Could not recover jumptable at 0x0000371a. Too many branches
                    // WARNING: Treating indirect jump as call
  xVar1 = (xp_box)(*(code *)__la_symbol_ptr::_xp_dock_get_rect)();
  return xVar1;
}



// /usr/lib/libXplugin.1.dylib

xp_error __stubs::_xp_dock_is_window_visible(xp_native_window_id osxwindow_id,xp_bool *is_visible)

{
  xp_error xVar1;
  
                    // WARNING: Could not recover jumptable at 0x00003720. Too many branches
                    // WARNING: Treating indirect jump as call
  xVar1 = (*(code *)__la_symbol_ptr::_xp_dock_is_window_visible)();
  return xVar1;
}



// /usr/lib/libXplugin.1.dylib

xp_error __stubs::_xp_dock_restore_item_async(xp_native_window_id osxwindow_id)

{
  xp_error xVar1;
  
                    // WARNING: Could not recover jumptable at 0x00003732. Too many branches
                    // WARNING: Treating indirect jump as call
  xVar1 = (*(code *)__la_symbol_ptr::_xp_dock_restore_item_async)();
  return xVar1;
}



// /usr/lib/libXplugin.1.dylib

xp_error __stubs::_xp_init(uint options)

{
  xp_error xVar1;
  
                    // WARNING: Could not recover jumptable at 0x00003738. Too many branches
                    // WARNING: Treating indirect jump as call
  xVar1 = (*(code *)__la_symbol_ptr::_xp_init)();
  return xVar1;
}


