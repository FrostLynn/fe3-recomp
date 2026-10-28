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

// Function: sub_01DB2D60
// Address: 0x1db2d60 - 0x1db2e48
void sub_01DB2D60_0x1db2d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB2D60_0x1db2d60");
#endif

    switch (ctx->pc) {
        case 0x1db2d74u: goto label_1db2d74;
        case 0x1db2d88u: goto label_1db2d88;
        case 0x1db2d8cu: goto label_1db2d8c;
        case 0x1db2da8u: goto label_1db2da8;
        case 0x1db2db4u: goto label_1db2db4;
        case 0x1db2df4u: goto label_1db2df4;
        case 0x1db2e20u: goto label_1db2e20;
        case 0x1db2e2cu: goto label_1db2e2c;
        case 0x1db2e38u: goto label_1db2e38;
        default: break;
    }

    ctx->pc = 0x1db2d60u;

    // 0x1db2d60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1db2d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1db2d64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1db2d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1db2d68: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1db2d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1db2d6c: 0xc76c3d2  jal         func_1DB0F48
    ctx->pc = 0x1DB2D6Cu;
    SET_GPR_U32(ctx, 31, 0x1DB2D74u);
    ctx->pc = 0x1DB2D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB2D6Cu;
    // 0x1db2d70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F48u, 0x1DB2D6Cu, 0x1DB2D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB2D74u;
label_1db2d74:
    // 0x1db2d74: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1db2d74u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db2d78: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DB2D78u;
    {
        const bool branch_taken_0x1db2d78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1DB2D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB2D78u;
        // 0x1db2d7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db2d78) {
            ctx->pc = 0x1DB2D9Cu;
            goto label_1db2d9c;
        }
    }
    ctx->pc = 0x1DB2D80u;
    // 0x1db2d80: 0xc76c3d4  jal         func_1DB0F50
    ctx->pc = 0x1DB2D80u;
    SET_GPR_U32(ctx, 31, 0x1DB2D88u);
    ctx->pc = 0x1DB0F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F50u, 0x1DB2D80u, 0x1DB2D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB2D88u;
label_1db2d88:
    // 0x1db2d88: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1db2d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1db2d8c:
    // 0x1db2d8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1db2d8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db2d90: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1db2d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1db2d94: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB2D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB2D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB2D94u;
        // 0x1db2d98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB2D94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB2D9Cu;
label_1db2d9c:
    // 0x1db2d9c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1db2d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1db2da0: 0xc76c3d6  jal         func_1DB0F58
    ctx->pc = 0x1DB2DA0u;
    SET_GPR_U32(ctx, 31, 0x1DB2DA8u);
    ctx->pc = 0x1DB2DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB2DA0u;
    // 0x1db2da4: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F58u, 0x1DB2DA0u, 0x1DB2DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB2DA8u;
label_1db2da8:
    // 0x1db2da8: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1db2da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1db2dac: 0xc76c3e4  jal         func_1DB0F90
    ctx->pc = 0x1DB2DACu;
    SET_GPR_U32(ctx, 31, 0x1DB2DB4u);
    ctx->pc = 0x1DB2DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB2DACu;
    // 0x1db2db0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F90u, 0x1DB2DACu, 0x1DB2DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB2DB4u;
label_1db2db4:
    // 0x1db2db4: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1DB2DB4u;
    {
        const bool branch_taken_0x1db2db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB2DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB2DB4u;
        // 0x1db2db8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db2db4) {
            ctx->pc = 0x1DB2D8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1db2d8c;
        }
    }
    ctx->pc = 0x1DB2DBCu;
    // 0x1db2dbc: 0x0  nop
    ctx->pc = 0x1db2dbcu;
    // NOP
    // 0x1db2dc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1db2dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1db2dc4: 0x3c0f01dc  lui         $t7, 0x1DC
    ctx->pc = 0x1db2dc4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)476 << 16));
    // 0x1db2dc8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1db2dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1db2dcc: 0x25eeb7b0  addiu       $t6, $t7, -0x4850
    ctx->pc = 0x1db2dccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 4294948784));
    // 0x1db2dd0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1db2dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1db2dd4: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1db2dd4u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1DBB7B4u));
    // 0x1db2dd8: 0x8dedb7b0  lw          $t5, -0x4850($t7)
    ctx->pc = 0x1db2dd8u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1DBB7B0u));
    // 0x1db2ddc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1db2ddcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2de0: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1db2de0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1db2de4: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1db2de4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1db2de8: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1db2de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1db2dec: 0xc76c3d6  jal         func_1DB0F58
    ctx->pc = 0x1DB2DECu;
    SET_GPR_U32(ctx, 31, 0x1DB2DF4u);
    ctx->pc = 0x1DB2DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB2DECu;
    // 0x1db2df0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F58u, 0x1DB2DECu, 0x1DB2DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB2DF4u;
label_1db2df4:
    // 0x1db2df4: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1db2df4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1db2df8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1db2df8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db2dfc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1db2dfcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2e00: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1db2e00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db2e04: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1db2e04u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1db2e08: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1db2e08u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2e0c: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1db2e0cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1db2e10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db2e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2e14: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1db2e14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1db2e18: 0xc76c3e2  jal         func_1DB0F88
    ctx->pc = 0x1DB2E18u;
    SET_GPR_U32(ctx, 31, 0x1DB2E20u);
    ctx->pc = 0x1DB2E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB2E18u;
    // 0x1db2e1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F88u, 0x1DB2E18u, 0x1DB2E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB2E20u;
label_1db2e20:
    // 0x1db2e20: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1db2e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1db2e24: 0xc76c3d6  jal         func_1DB0F58
    ctx->pc = 0x1DB2E24u;
    SET_GPR_U32(ctx, 31, 0x1DB2E2Cu);
    ctx->pc = 0x1DB2E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB2E24u;
    // 0x1db2e28: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F58u, 0x1DB2E24u, 0x1DB2E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB2E2Cu;
label_1db2e2c:
    // 0x1db2e2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1db2e2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2e30: 0xc76c3e6  jal         func_1DB0F98
    ctx->pc = 0x1DB2E30u;
    SET_GPR_U32(ctx, 31, 0x1DB2E38u);
    ctx->pc = 0x1DB2E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB2E30u;
    // 0x1db2e34: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F98u, 0x1DB2E30u, 0x1DB2E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB2E38u;
label_1db2e38:
    // 0x1db2e38: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1db2e38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db2e3c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1db2e3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1db2e40: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB2E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB2E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB2E40u;
        // 0x1db2e44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB2E40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB2E48u;
}
