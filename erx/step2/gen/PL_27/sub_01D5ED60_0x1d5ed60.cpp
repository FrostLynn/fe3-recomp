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

// Function: sub_01D5ED60
// Address: 0x1d5ed60 - 0x1d5ee48
void sub_01D5ED60_0x1d5ed60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D5ED60_0x1d5ed60");
#endif

    switch (ctx->pc) {
        case 0x1d5ed74u: goto label_1d5ed74;
        case 0x1d5ed88u: goto label_1d5ed88;
        case 0x1d5ed8cu: goto label_1d5ed8c;
        case 0x1d5eda8u: goto label_1d5eda8;
        case 0x1d5edb4u: goto label_1d5edb4;
        case 0x1d5edf4u: goto label_1d5edf4;
        case 0x1d5ee20u: goto label_1d5ee20;
        case 0x1d5ee2cu: goto label_1d5ee2c;
        case 0x1d5ee38u: goto label_1d5ee38;
        default: break;
    }

    ctx->pc = 0x1d5ed60u;

    // 0x1d5ed60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d5ed60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d5ed64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d5ed64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d5ed68: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d5ed68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d5ed6c: 0xc757352  jal         func_1D5CD48
    ctx->pc = 0x1D5ED6Cu;
    SET_GPR_U32(ctx, 31, 0x1D5ED74u);
    ctx->pc = 0x1D5ED70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5ED6Cu;
    // 0x1d5ed70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD48u, 0x1D5ED6Cu, 0x1D5ED74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5ED74u;
label_1d5ed74:
    // 0x1d5ed74: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d5ed74u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5ed78: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D5ED78u;
    {
        const bool branch_taken_0x1d5ed78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D5ED7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5ED78u;
        // 0x1d5ed7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5ed78) {
            ctx->pc = 0x1D5ED9Cu;
            goto label_1d5ed9c;
        }
    }
    ctx->pc = 0x1D5ED80u;
    // 0x1d5ed80: 0xc757354  jal         func_1D5CD50
    ctx->pc = 0x1D5ED80u;
    SET_GPR_U32(ctx, 31, 0x1D5ED88u);
    ctx->pc = 0x1D5CD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD50u, 0x1D5ED80u, 0x1D5ED88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5ED88u;
label_1d5ed88:
    // 0x1d5ed88: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d5ed88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d5ed8c:
    // 0x1d5ed8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d5ed8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5ed90: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d5ed90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d5ed94: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5ED94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5ED98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5ED94u;
        // 0x1d5ed98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5ED94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5ED9Cu;
label_1d5ed9c:
    // 0x1d5ed9c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d5ed9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d5eda0: 0xc757356  jal         func_1D5CD58
    ctx->pc = 0x1D5EDA0u;
    SET_GPR_U32(ctx, 31, 0x1D5EDA8u);
    ctx->pc = 0x1D5EDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5EDA0u;
    // 0x1d5eda4: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD58u, 0x1D5EDA0u, 0x1D5EDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5EDA8u;
label_1d5eda8:
    // 0x1d5eda8: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1d5eda8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1d5edac: 0xc757364  jal         func_1D5CD90
    ctx->pc = 0x1D5EDACu;
    SET_GPR_U32(ctx, 31, 0x1D5EDB4u);
    ctx->pc = 0x1D5EDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5EDACu;
    // 0x1d5edb0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD90u, 0x1D5EDACu, 0x1D5EDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5EDB4u;
label_1d5edb4:
    // 0x1d5edb4: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1D5EDB4u;
    {
        const bool branch_taken_0x1d5edb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5EDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5EDB4u;
        // 0x1d5edb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5edb4) {
            ctx->pc = 0x1D5ED8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5ed8c;
        }
    }
    ctx->pc = 0x1D5EDBCu;
    // 0x1d5edbc: 0x0  nop
    ctx->pc = 0x1d5edbcu;
    // NOP
    // 0x1d5edc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d5edc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d5edc4: 0x3c0f01d6  lui         $t7, 0x1D6
    ctx->pc = 0x1d5edc4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)470 << 16));
    // 0x1d5edc8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d5edc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d5edcc: 0x25ee66a0  addiu       $t6, $t7, 0x66A0
    ctx->pc = 0x1d5edccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 26272));
    // 0x1d5edd0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1d5edd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1d5edd4: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1d5edd4u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1D666A4u));
    // 0x1d5edd8: 0x8ded66a0  lw          $t5, 0x66A0($t7)
    ctx->pc = 0x1d5edd8u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1D666A0u));
    // 0x1d5eddc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d5eddcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ede0: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1d5ede0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1d5ede4: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1d5ede4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1d5ede8: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1d5ede8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d5edec: 0xc757356  jal         func_1D5CD58
    ctx->pc = 0x1D5EDECu;
    SET_GPR_U32(ctx, 31, 0x1D5EDF4u);
    ctx->pc = 0x1D5EDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5EDECu;
    // 0x1d5edf0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD58u, 0x1D5EDECu, 0x1D5EDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5EDF4u;
label_1d5edf4:
    // 0x1d5edf4: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1d5edf4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1d5edf8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d5edf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5edfc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d5edfcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ee00: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d5ee00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5ee04: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d5ee04u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d5ee08: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d5ee08u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ee0c: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1d5ee0cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1d5ee10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5ee10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ee14: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d5ee14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d5ee18: 0xc757362  jal         func_1D5CD88
    ctx->pc = 0x1D5EE18u;
    SET_GPR_U32(ctx, 31, 0x1D5EE20u);
    ctx->pc = 0x1D5EE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5EE18u;
    // 0x1d5ee1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD88u, 0x1D5EE18u, 0x1D5EE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5EE20u;
label_1d5ee20:
    // 0x1d5ee20: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d5ee20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d5ee24: 0xc757356  jal         func_1D5CD58
    ctx->pc = 0x1D5EE24u;
    SET_GPR_U32(ctx, 31, 0x1D5EE2Cu);
    ctx->pc = 0x1D5EE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5EE24u;
    // 0x1d5ee28: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD58u, 0x1D5EE24u, 0x1D5EE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5EE2Cu;
label_1d5ee2c:
    // 0x1d5ee2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d5ee2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ee30: 0xc757366  jal         func_1D5CD98
    ctx->pc = 0x1D5EE30u;
    SET_GPR_U32(ctx, 31, 0x1D5EE38u);
    ctx->pc = 0x1D5EE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5EE30u;
    // 0x1d5ee34: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD98u, 0x1D5EE30u, 0x1D5EE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5EE38u;
label_1d5ee38:
    // 0x1d5ee38: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1d5ee38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5ee3c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d5ee3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d5ee40: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5EE40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5EE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5EE40u;
        // 0x1d5ee44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5EE40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5EE48u;
}
