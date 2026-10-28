#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_01C106F8
// Address: 0x1c106f8 - 0x1c10768
void sub_01C106F8_0x1c106f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C106F8_0x1c106f8");
#endif

    switch (ctx->pc) {
        case 0x1c1071cu: goto label_1c1071c;
        case 0x1c1072cu: goto label_1c1072c;
        case 0x1c10738u: goto label_1c10738;
        case 0x1c10748u: goto label_1c10748;
        default: break;
    }

    ctx->pc = 0x1c106f8u;

    // 0x1c106f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c106f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c106fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c106fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c10700: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c10700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c10704: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c10704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c10708: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c10708u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1070c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c1070cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c10710: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c10710u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c10714: 0xc703dd6  jal         func_1C0F758
    ctx->pc = 0x1C10714u;
    SET_GPR_U32(ctx, 31, 0x1C1071Cu);
    ctx->pc = 0x1C10718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C10714u;
    // 0x1c10718: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F758u, 0x1C10714u, 0x1C1071Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1071Cu;
label_1c1071c:
    // 0x1c1071c: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c1071cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c10720: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c10720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c10724: 0xc704084  jal         func_1C10210
    ctx->pc = 0x1C10724u;
    SET_GPR_U32(ctx, 31, 0x1C1072Cu);
    ctx->pc = 0x1C10728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C10724u;
    // 0x1c10728: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C10210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C10210u, 0x1C10724u, 0x1C1072Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1072Cu;
label_1c1072c:
    // 0x1c1072c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c1072cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c10730: 0xc703dd6  jal         func_1C0F758
    ctx->pc = 0x1C10730u;
    SET_GPR_U32(ctx, 31, 0x1C10738u);
    ctx->pc = 0x1C10734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C10730u;
    // 0x1c10734: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F758u, 0x1C10730u, 0x1C10738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C10738u;
label_1c10738:
    // 0x1c10738: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c10738u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c1073c: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c1073cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c10740: 0xc704084  jal         func_1C10210
    ctx->pc = 0x1C10740u;
    SET_GPR_U32(ctx, 31, 0x1C10748u);
    ctx->pc = 0x1C10744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C10740u;
    // 0x1c10744: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C10210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C10210u, 0x1C10740u, 0x1C10748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C10748u;
label_1c10748:
    // 0x1c10748: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1c10748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1c1074c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1074cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c10750: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c10750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c10754: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c10754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c10758: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c10758u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1075c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c1075cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c10760: 0x8703dea  j           func_1C0F7A8
    ctx->pc = 0x1C10760u;
    ctx->pc = 0x1C10764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C10760u;
    // 0x1c10764: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F7A8u;
    sub_01C0F7A8_0x1c0f7a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1C10768u;
}
