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

// Function: sub_01CB7700
// Address: 0x1cb7700 - 0x1cb7770
void sub_01CB7700_0x1cb7700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB7700_0x1cb7700");
#endif

    switch (ctx->pc) {
        case 0x1cb7724u: goto label_1cb7724;
        case 0x1cb7734u: goto label_1cb7734;
        case 0x1cb7740u: goto label_1cb7740;
        case 0x1cb7750u: goto label_1cb7750;
        default: break;
    }

    ctx->pc = 0x1cb7700u;

    // 0x1cb7700: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cb7700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cb7704: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cb7704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cb7708: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cb7708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cb770c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cb770cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cb7710: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1cb7710u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb7714: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cb7714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cb7718: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cb7718u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb771c: 0xc72d9d6  jal         func_1CB6758
    ctx->pc = 0x1CB771Cu;
    SET_GPR_U32(ctx, 31, 0x1CB7724u);
    ctx->pc = 0x1CB7720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB771Cu;
    // 0x1cb7720: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6758u, 0x1CB771Cu, 0x1CB7724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB7724u;
label_1cb7724:
    // 0x1cb7724: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1cb7724u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1cb7728: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1cb7728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1cb772c: 0xc72dc86  jal         func_1CB7218
    ctx->pc = 0x1CB772Cu;
    SET_GPR_U32(ctx, 31, 0x1CB7734u);
    ctx->pc = 0x1CB7730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB772Cu;
    // 0x1cb7730: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB7218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB7218u, 0x1CB772Cu, 0x1CB7734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB7734u;
label_1cb7734:
    // 0x1cb7734: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1cb7734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cb7738: 0xc72d9d6  jal         func_1CB6758
    ctx->pc = 0x1CB7738u;
    SET_GPR_U32(ctx, 31, 0x1CB7740u);
    ctx->pc = 0x1CB773Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB7738u;
    // 0x1cb773c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6758u, 0x1CB7738u, 0x1CB7740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB7740u;
label_1cb7740:
    // 0x1cb7740: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1cb7740u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1cb7744: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1cb7744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1cb7748: 0xc72dc86  jal         func_1CB7218
    ctx->pc = 0x1CB7748u;
    SET_GPR_U32(ctx, 31, 0x1CB7750u);
    ctx->pc = 0x1CB774Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB7748u;
    // 0x1cb774c: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB7218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB7218u, 0x1CB7748u, 0x1CB7750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB7750u;
label_1cb7750:
    // 0x1cb7750: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1cb7750u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1cb7754: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb7754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb7758: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cb7758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb775c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cb775cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cb7760: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cb7760u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb7764: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cb7764u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cb7768: 0x872d9ea  j           func_1CB67A8
    ctx->pc = 0x1CB7768u;
    ctx->pc = 0x1CB776Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB7768u;
    // 0x1cb776c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB67A8u;
    sub_01CB67A8_0x1cb67a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1CB7770u;
}
