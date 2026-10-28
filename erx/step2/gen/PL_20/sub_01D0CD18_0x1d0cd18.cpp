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

// Function: sub_01D0CD18
// Address: 0x1d0cd18 - 0x1d0cd88
void sub_01D0CD18_0x1d0cd18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0CD18_0x1d0cd18");
#endif

    switch (ctx->pc) {
        case 0x1d0cd3cu: goto label_1d0cd3c;
        case 0x1d0cd4cu: goto label_1d0cd4c;
        case 0x1d0cd58u: goto label_1d0cd58;
        case 0x1d0cd68u: goto label_1d0cd68;
        default: break;
    }

    ctx->pc = 0x1d0cd18u;

    // 0x1d0cd18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d0cd18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d0cd1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d0cd1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d0cd20: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d0cd20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d0cd24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d0cd24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d0cd28: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d0cd28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0cd2c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d0cd2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d0cd30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d0cd30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0cd34: 0xc742f56  jal         func_1D0BD58
    ctx->pc = 0x1D0CD34u;
    SET_GPR_U32(ctx, 31, 0x1D0CD3Cu);
    ctx->pc = 0x1D0CD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0CD34u;
    // 0x1d0cd38: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD58u, 0x1D0CD34u, 0x1D0CD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0CD3Cu;
label_1d0cd3c:
    // 0x1d0cd3c: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d0cd3cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d0cd40: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d0cd40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d0cd44: 0xc74320c  jal         func_1D0C830
    ctx->pc = 0x1D0CD44u;
    SET_GPR_U32(ctx, 31, 0x1D0CD4Cu);
    ctx->pc = 0x1D0CD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0CD44u;
    // 0x1d0cd48: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0C830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0C830u, 0x1D0CD44u, 0x1D0CD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0CD4Cu;
label_1d0cd4c:
    // 0x1d0cd4c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d0cd4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d0cd50: 0xc742f56  jal         func_1D0BD58
    ctx->pc = 0x1D0CD50u;
    SET_GPR_U32(ctx, 31, 0x1D0CD58u);
    ctx->pc = 0x1D0CD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0CD50u;
    // 0x1d0cd54: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD58u, 0x1D0CD50u, 0x1D0CD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0CD58u;
label_1d0cd58:
    // 0x1d0cd58: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d0cd58u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d0cd5c: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d0cd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d0cd60: 0xc74320c  jal         func_1D0C830
    ctx->pc = 0x1D0CD60u;
    SET_GPR_U32(ctx, 31, 0x1D0CD68u);
    ctx->pc = 0x1D0CD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0CD60u;
    // 0x1d0cd64: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0C830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0C830u, 0x1D0CD60u, 0x1D0CD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0CD68u;
label_1d0cd68:
    // 0x1d0cd68: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1d0cd68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1d0cd6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0cd6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0cd70: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d0cd70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0cd74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d0cd74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0cd78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d0cd78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0cd7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d0cd7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d0cd80: 0x8742f6a  j           func_1D0BDA8
    ctx->pc = 0x1D0CD80u;
    ctx->pc = 0x1D0CD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0CD80u;
    // 0x1d0cd84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BDA8u;
    sub_01D0BDA8_0x1d0bda8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D0CD88u;
}
