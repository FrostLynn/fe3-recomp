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

// Function: sub_01D47DA0
// Address: 0x1d47da0 - 0x1d47e88
void sub_01D47DA0_0x1d47da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D47DA0_0x1d47da0");
#endif

    switch (ctx->pc) {
        case 0x1d47db4u: goto label_1d47db4;
        case 0x1d47dc8u: goto label_1d47dc8;
        case 0x1d47dccu: goto label_1d47dcc;
        case 0x1d47de8u: goto label_1d47de8;
        case 0x1d47df4u: goto label_1d47df4;
        case 0x1d47e34u: goto label_1d47e34;
        case 0x1d47e60u: goto label_1d47e60;
        case 0x1d47e6cu: goto label_1d47e6c;
        case 0x1d47e78u: goto label_1d47e78;
        default: break;
    }

    ctx->pc = 0x1d47da0u;

    // 0x1d47da0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d47da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d47da4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d47da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d47da8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d47da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d47dac: 0xc751752  jal         func_1D45D48
    ctx->pc = 0x1D47DACu;
    SET_GPR_U32(ctx, 31, 0x1D47DB4u);
    ctx->pc = 0x1D47DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D47DACu;
    // 0x1d47db0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D48u, 0x1D47DACu, 0x1D47DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D47DB4u;
label_1d47db4:
    // 0x1d47db4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d47db4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d47db8: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D47DB8u;
    {
        const bool branch_taken_0x1d47db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D47DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47DB8u;
        // 0x1d47dbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d47db8) {
            ctx->pc = 0x1D47DDCu;
            goto label_1d47ddc;
        }
    }
    ctx->pc = 0x1D47DC0u;
    // 0x1d47dc0: 0xc751754  jal         func_1D45D50
    ctx->pc = 0x1D47DC0u;
    SET_GPR_U32(ctx, 31, 0x1D47DC8u);
    ctx->pc = 0x1D45D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D50u, 0x1D47DC0u, 0x1D47DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D47DC8u;
label_1d47dc8:
    // 0x1d47dc8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d47dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d47dcc:
    // 0x1d47dcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d47dccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d47dd0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d47dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d47dd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D47DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D47DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47DD4u;
        // 0x1d47dd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D47DD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D47DDCu;
label_1d47ddc:
    // 0x1d47ddc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d47ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d47de0: 0xc751756  jal         func_1D45D58
    ctx->pc = 0x1D47DE0u;
    SET_GPR_U32(ctx, 31, 0x1D47DE8u);
    ctx->pc = 0x1D47DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D47DE0u;
    // 0x1d47de4: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D58u, 0x1D47DE0u, 0x1D47DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D47DE8u;
label_1d47de8:
    // 0x1d47de8: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1d47de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1d47dec: 0xc751764  jal         func_1D45D90
    ctx->pc = 0x1D47DECu;
    SET_GPR_U32(ctx, 31, 0x1D47DF4u);
    ctx->pc = 0x1D47DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D47DECu;
    // 0x1d47df0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D90u, 0x1D47DECu, 0x1D47DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D47DF4u;
label_1d47df4:
    // 0x1d47df4: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1D47DF4u;
    {
        const bool branch_taken_0x1d47df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D47DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47DF4u;
        // 0x1d47df8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d47df4) {
            ctx->pc = 0x1D47DCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d47dcc;
        }
    }
    ctx->pc = 0x1D47DFCu;
    // 0x1d47dfc: 0x0  nop
    ctx->pc = 0x1d47dfcu;
    // NOP
    // 0x1d47e00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d47e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d47e04: 0x3c0f01d5  lui         $t7, 0x1D5
    ctx->pc = 0x1d47e04u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)469 << 16));
    // 0x1d47e08: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d47e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d47e0c: 0x25ee0e28  addiu       $t6, $t7, 0xE28
    ctx->pc = 0x1d47e0cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 3624));
    // 0x1d47e10: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1d47e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1d47e14: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1d47e14u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1D50E2Cu));
    // 0x1d47e18: 0x8ded0e28  lw          $t5, 0xE28($t7)
    ctx->pc = 0x1d47e18u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1D50E28u));
    // 0x1d47e1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d47e1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47e20: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1d47e20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1d47e24: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1d47e24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1d47e28: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1d47e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d47e2c: 0xc751756  jal         func_1D45D58
    ctx->pc = 0x1D47E2Cu;
    SET_GPR_U32(ctx, 31, 0x1D47E34u);
    ctx->pc = 0x1D47E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D47E2Cu;
    // 0x1d47e30: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D58u, 0x1D47E2Cu, 0x1D47E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D47E34u;
label_1d47e34:
    // 0x1d47e34: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1d47e34u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1d47e38: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d47e38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d47e3c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d47e3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47e40: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d47e40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d47e44: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d47e44u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d47e48: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d47e48u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47e4c: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1d47e4cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1d47e50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d47e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47e54: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d47e54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d47e58: 0xc751762  jal         func_1D45D88
    ctx->pc = 0x1D47E58u;
    SET_GPR_U32(ctx, 31, 0x1D47E60u);
    ctx->pc = 0x1D47E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D47E58u;
    // 0x1d47e5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D88u, 0x1D47E58u, 0x1D47E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D47E60u;
label_1d47e60:
    // 0x1d47e60: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d47e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d47e64: 0xc751756  jal         func_1D45D58
    ctx->pc = 0x1D47E64u;
    SET_GPR_U32(ctx, 31, 0x1D47E6Cu);
    ctx->pc = 0x1D47E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D47E64u;
    // 0x1d47e68: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D58u, 0x1D47E64u, 0x1D47E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D47E6Cu;
label_1d47e6c:
    // 0x1d47e6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d47e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47e70: 0xc751766  jal         func_1D45D98
    ctx->pc = 0x1D47E70u;
    SET_GPR_U32(ctx, 31, 0x1D47E78u);
    ctx->pc = 0x1D47E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D47E70u;
    // 0x1d47e74: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D98u, 0x1D47E70u, 0x1D47E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D47E78u;
label_1d47e78:
    // 0x1d47e78: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1d47e78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d47e7c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d47e7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d47e80: 0x3e00008  jr          $ra
    ctx->pc = 0x1D47E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D47E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47E80u;
        // 0x1d47e84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D47E80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D47E88u;
}
