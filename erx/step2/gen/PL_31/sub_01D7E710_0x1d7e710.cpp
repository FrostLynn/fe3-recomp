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

// Function: sub_01D7E710
// Address: 0x1d7e710 - 0x1d7e780
void sub_01D7E710_0x1d7e710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D7E710_0x1d7e710");
#endif

    switch (ctx->pc) {
        case 0x1d7e734u: goto label_1d7e734;
        case 0x1d7e744u: goto label_1d7e744;
        case 0x1d7e750u: goto label_1d7e750;
        case 0x1d7e760u: goto label_1d7e760;
        default: break;
    }

    ctx->pc = 0x1d7e710u;

    // 0x1d7e710: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d7e710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d7e714: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d7e714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d7e718: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d7e718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d7e71c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d7e71cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d7e720: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d7e720u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e724: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d7e724u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d7e728: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d7e728u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e72c: 0xc75f5d6  jal         func_1D7D758
    ctx->pc = 0x1D7E72Cu;
    SET_GPR_U32(ctx, 31, 0x1D7E734u);
    ctx->pc = 0x1D7E730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E72Cu;
    // 0x1d7e730: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D758u, 0x1D7E72Cu, 0x1D7E734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E734u;
label_1d7e734:
    // 0x1d7e734: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d7e734u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d7e738: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d7e738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d7e73c: 0xc75f88a  jal         func_1D7E228
    ctx->pc = 0x1D7E73Cu;
    SET_GPR_U32(ctx, 31, 0x1D7E744u);
    ctx->pc = 0x1D7E740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E73Cu;
    // 0x1d7e740: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7E228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7E228u, 0x1D7E73Cu, 0x1D7E744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E744u;
label_1d7e744:
    // 0x1d7e744: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d7e744u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d7e748: 0xc75f5d6  jal         func_1D7D758
    ctx->pc = 0x1D7E748u;
    SET_GPR_U32(ctx, 31, 0x1D7E750u);
    ctx->pc = 0x1D7E74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E748u;
    // 0x1d7e74c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D758u, 0x1D7E748u, 0x1D7E750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E750u;
label_1d7e750:
    // 0x1d7e750: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d7e750u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d7e754: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d7e754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d7e758: 0xc75f88a  jal         func_1D7E228
    ctx->pc = 0x1D7E758u;
    SET_GPR_U32(ctx, 31, 0x1D7E760u);
    ctx->pc = 0x1D7E75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E758u;
    // 0x1d7e75c: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7E228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7E228u, 0x1D7E758u, 0x1D7E760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E760u;
label_1d7e760:
    // 0x1d7e760: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1d7e760u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1d7e764: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d7e764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e768: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d7e768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e76c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d7e76cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7e770: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d7e770u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7e774: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d7e774u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d7e778: 0x875f5ea  j           func_1D7D7A8
    ctx->pc = 0x1D7E778u;
    ctx->pc = 0x1D7E77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E778u;
    // 0x1d7e77c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D7A8u;
    sub_01D7D7A8_0x1d7d7a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D7E780u;
}
