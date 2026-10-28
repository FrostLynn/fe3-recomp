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

// Function: sub_01D70F88
// Address: 0x1d70f88 - 0x1d71070
void sub_01D70F88_0x1d70f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D70F88_0x1d70f88");
#endif

    switch (ctx->pc) {
        case 0x1d70f9cu: goto label_1d70f9c;
        case 0x1d70fb0u: goto label_1d70fb0;
        case 0x1d70fb4u: goto label_1d70fb4;
        case 0x1d70fd0u: goto label_1d70fd0;
        case 0x1d70fdcu: goto label_1d70fdc;
        case 0x1d7101cu: goto label_1d7101c;
        case 0x1d71048u: goto label_1d71048;
        case 0x1d71054u: goto label_1d71054;
        case 0x1d71060u: goto label_1d71060;
        default: break;
    }

    ctx->pc = 0x1d70f88u;

    // 0x1d70f88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d70f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d70f8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d70f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d70f90: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d70f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d70f94: 0xc75c008  jal         func_1D70020
    ctx->pc = 0x1D70F94u;
    SET_GPR_U32(ctx, 31, 0x1D70F9Cu);
    ctx->pc = 0x1D70F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D70F94u;
    // 0x1d70f98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70020u, 0x1D70F94u, 0x1D70F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D70F9Cu;
label_1d70f9c:
    // 0x1d70f9c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d70f9cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d70fa0: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D70FA0u;
    {
        const bool branch_taken_0x1d70fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D70FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D70FA0u;
        // 0x1d70fa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d70fa0) {
            ctx->pc = 0x1D70FC4u;
            goto label_1d70fc4;
        }
    }
    ctx->pc = 0x1D70FA8u;
    // 0x1d70fa8: 0xc75c00a  jal         func_1D70028
    ctx->pc = 0x1D70FA8u;
    SET_GPR_U32(ctx, 31, 0x1D70FB0u);
    ctx->pc = 0x1D70028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70028u, 0x1D70FA8u, 0x1D70FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D70FB0u;
label_1d70fb0:
    // 0x1d70fb0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d70fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d70fb4:
    // 0x1d70fb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d70fb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d70fb8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d70fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d70fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D70FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D70FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D70FBCu;
        // 0x1d70fc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D70FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D70FC4u;
label_1d70fc4:
    // 0x1d70fc4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d70fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d70fc8: 0xc75c00c  jal         func_1D70030
    ctx->pc = 0x1D70FC8u;
    SET_GPR_U32(ctx, 31, 0x1D70FD0u);
    ctx->pc = 0x1D70FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D70FC8u;
    // 0x1d70fcc: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70030u, 0x1D70FC8u, 0x1D70FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D70FD0u;
label_1d70fd0:
    // 0x1d70fd0: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1d70fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1d70fd4: 0xc75c01a  jal         func_1D70068
    ctx->pc = 0x1D70FD4u;
    SET_GPR_U32(ctx, 31, 0x1D70FDCu);
    ctx->pc = 0x1D70FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D70FD4u;
    // 0x1d70fd8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70068u, 0x1D70FD4u, 0x1D70FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D70FDCu;
label_1d70fdc:
    // 0x1d70fdc: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1D70FDCu;
    {
        const bool branch_taken_0x1d70fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D70FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D70FDCu;
        // 0x1d70fe0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d70fdc) {
            ctx->pc = 0x1D70FB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d70fb4;
        }
    }
    ctx->pc = 0x1D70FE4u;
    // 0x1d70fe4: 0x0  nop
    ctx->pc = 0x1d70fe4u;
    // NOP
    // 0x1d70fe8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d70fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d70fec: 0x3c0f01d7  lui         $t7, 0x1D7
    ctx->pc = 0x1d70fecu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)471 << 16));
    // 0x1d70ff0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d70ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d70ff4: 0x25ee7ab8  addiu       $t6, $t7, 0x7AB8
    ctx->pc = 0x1d70ff4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 31416));
    // 0x1d70ff8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1d70ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1d70ffc: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1d70ffcu;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1D77ABCu));
    // 0x1d71000: 0x8ded7ab8  lw          $t5, 0x7AB8($t7)
    ctx->pc = 0x1d71000u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1D77AB8u));
    // 0x1d71004: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d71004u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d71008: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1d71008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1d7100c: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1d7100cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1d71010: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1d71010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d71014: 0xc75c00c  jal         func_1D70030
    ctx->pc = 0x1D71014u;
    SET_GPR_U32(ctx, 31, 0x1D7101Cu);
    ctx->pc = 0x1D71018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D71014u;
    // 0x1d71018: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70030u, 0x1D71014u, 0x1D7101Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7101Cu;
label_1d7101c:
    // 0x1d7101c: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1d7101cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1d71020: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d71020u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d71024: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d71024u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d71028: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d71028u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7102c: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d7102cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d71030: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d71030u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d71034: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1d71034u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1d71038: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d71038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7103c: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d7103cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d71040: 0xc75c018  jal         func_1D70060
    ctx->pc = 0x1D71040u;
    SET_GPR_U32(ctx, 31, 0x1D71048u);
    ctx->pc = 0x1D71044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D71040u;
    // 0x1d71044: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70060u, 0x1D71040u, 0x1D71048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D71048u;
label_1d71048:
    // 0x1d71048: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d71048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d7104c: 0xc75c00c  jal         func_1D70030
    ctx->pc = 0x1D7104Cu;
    SET_GPR_U32(ctx, 31, 0x1D71054u);
    ctx->pc = 0x1D71050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7104Cu;
    // 0x1d71050: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70030u, 0x1D7104Cu, 0x1D71054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D71054u;
label_1d71054:
    // 0x1d71054: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d71054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d71058: 0xc75c01c  jal         func_1D70070
    ctx->pc = 0x1D71058u;
    SET_GPR_U32(ctx, 31, 0x1D71060u);
    ctx->pc = 0x1D7105Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D71058u;
    // 0x1d7105c: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70070u, 0x1D71058u, 0x1D71060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D71060u;
label_1d71060:
    // 0x1d71060: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1d71060u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d71064: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d71064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d71068: 0x3e00008  jr          $ra
    ctx->pc = 0x1D71068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7106Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D71068u;
        // 0x1d7106c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D71068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D71070u;
}
