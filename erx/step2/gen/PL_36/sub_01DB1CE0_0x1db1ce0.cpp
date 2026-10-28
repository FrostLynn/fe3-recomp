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

// Function: sub_01DB1CE0
// Address: 0x1db1ce0 - 0x1db1e08
void sub_01DB1CE0_0x1db1ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB1CE0_0x1db1ce0");
#endif

    switch (ctx->pc) {
        case 0x1db1d08u: goto label_1db1d08;
        case 0x1db1d1cu: goto label_1db1d1c;
        case 0x1db1d20u: goto label_1db1d20;
        case 0x1db1d40u: goto label_1db1d40;
        case 0x1db1d50u: goto label_1db1d50;
        case 0x1db1d84u: goto label_1db1d84;
        case 0x1db1dbcu: goto label_1db1dbc;
        case 0x1db1dc8u: goto label_1db1dc8;
        case 0x1db1dd8u: goto label_1db1dd8;
        case 0x1db1df0u: goto label_1db1df0;
        default: break;
    }

    ctx->pc = 0x1db1ce0u;

    // 0x1db1ce0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1db1ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1db1ce4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1db1ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1db1ce8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1db1ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1db1cec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1db1cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1db1cf0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1db1cf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db1cf4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1db1cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1db1cf8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1db1cf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db1cfc: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1db1cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1db1d00: 0xc76c3d6  jal         func_1DB0F58
    ctx->pc = 0x1DB1D00u;
    SET_GPR_U32(ctx, 31, 0x1DB1D08u);
    ctx->pc = 0x1DB1D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB1D00u;
    // 0x1db1d04: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F58u, 0x1DB1D00u, 0x1DB1D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB1D08u;
label_1db1d08:
    // 0x1db1d08: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1db1d08u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1db1d0c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1DB1D0Cu;
    {
        const bool branch_taken_0x1db1d0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB1D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB1D0Cu;
        // 0x1db1d10: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db1d0c) {
            ctx->pc = 0x1DB1D58u;
            goto label_1db1d58;
        }
    }
    ctx->pc = 0x1DB1D14u;
    // 0x1db1d14: 0x120f0008  beq         $s0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DB1D14u;
    {
        const bool branch_taken_0x1db1d14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1db1d14) {
            ctx->pc = 0x1DB1D38u;
            goto label_1db1d38;
        }
    }
    ctx->pc = 0x1DB1D1Cu;
label_1db1d1c:
    // 0x1db1d1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1db1d1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db1d20:
    // 0x1db1d20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1db1d20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db1d24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1db1d24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1db1d28: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1db1d28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db1d2c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1db1d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1db1d30: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB1D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB1D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB1D30u;
        // 0x1db1d34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB1D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB1D38u;
label_1db1d38:
    // 0x1db1d38: 0xc76c3d2  jal         func_1DB0F48
    ctx->pc = 0x1DB1D38u;
    SET_GPR_U32(ctx, 31, 0x1DB1D40u);
    ctx->pc = 0x1DB1D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB1D38u;
    // 0x1db1d3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F48u, 0x1DB1D38u, 0x1DB1D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB1D40u;
label_1db1d40:
    // 0x1db1d40: 0x1450fff6  bne         $v0, $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1DB1D40u;
    {
        const bool branch_taken_0x1db1d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1DB1D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB1D40u;
        // 0x1db1d44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db1d40) {
            ctx->pc = 0x1DB1D1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1db1d1c;
        }
    }
    ctx->pc = 0x1DB1D48u;
    // 0x1db1d48: 0xc76c3d4  jal         func_1DB0F50
    ctx->pc = 0x1DB1D48u;
    SET_GPR_U32(ctx, 31, 0x1DB1D50u);
    ctx->pc = 0x1DB0F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F50u, 0x1DB1D48u, 0x1DB1D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB1D50u;
label_1db1d50:
    // 0x1db1d50: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1DB1D50u;
    {
        const bool branch_taken_0x1db1d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB1D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB1D50u;
        // 0x1db1d54: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db1d50) {
            ctx->pc = 0x1DB1D20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1db1d20;
        }
    }
    ctx->pc = 0x1DB1D58u;
label_1db1d58:
    // 0x1db1d58: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1db1d58u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1db1d5c: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1DB1D5Cu;
    {
        const bool branch_taken_0x1db1d5c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB1D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB1D5Cu;
        // 0x1db1d60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db1d5c) {
            ctx->pc = 0x1DB1D20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1db1d20;
        }
    }
    ctx->pc = 0x1DB1D64u;
    // 0x1db1d64: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1db1d64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db1d68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1db1d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db1d6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1db1d6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db1d70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1db1d70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db1d74: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1db1d74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db1d78: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1db1d78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db1d7c: 0xc76c3e2  jal         func_1DB0F88
    ctx->pc = 0x1DB1D7Cu;
    SET_GPR_U32(ctx, 31, 0x1DB1D84u);
    ctx->pc = 0x1DB1D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB1D7Cu;
    // 0x1db1d80: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F88u, 0x1DB1D7Cu, 0x1DB1D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB1D84u;
label_1db1d84:
    // 0x1db1d84: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1db1d84u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db1d88: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x1DB1D88u;
    {
        const bool branch_taken_0x1db1d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB1D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB1D88u;
        // 0x1db1d8c: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db1d88) {
            ctx->pc = 0x1DB1D1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1db1d1c;
        }
    }
    ctx->pc = 0x1DB1D90u;
    // 0x1db1d90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1db1d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1db1d94: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1db1d94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1db1d98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1db1d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1db1d9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1db1d9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db1da0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1db1da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1db1da4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1db1da4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db1da8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1db1da8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db1dac: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1db1dacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db1db0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1db1db0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db1db4: 0xc76c3e2  jal         func_1DB0F88
    ctx->pc = 0x1DB1DB4u;
    SET_GPR_U32(ctx, 31, 0x1DB1DBCu);
    ctx->pc = 0x1DB1DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB1DB4u;
    // 0x1db1db8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F88u, 0x1DB1DB4u, 0x1DB1DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB1DBCu;
label_1db1dbc:
    // 0x1db1dbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db1dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db1dc0: 0xc76c3da  jal         func_1DB0F68
    ctx->pc = 0x1DB1DC0u;
    SET_GPR_U32(ctx, 31, 0x1DB1DC8u);
    ctx->pc = 0x1DB1DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB1DC0u;
    // 0x1db1dc4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F68u, 0x1DB1DC0u, 0x1DB1DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB1DC8u;
label_1db1dc8:
    // 0x1db1dc8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1db1dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1db1dcc: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1db1dccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1db1dd0: 0xc76c3d6  jal         func_1DB0F58
    ctx->pc = 0x1DB1DD0u;
    SET_GPR_U32(ctx, 31, 0x1DB1DD8u);
    ctx->pc = 0x1DB1DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB1DD0u;
    // 0x1db1dd4: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F58u, 0x1DB1DD0u, 0x1DB1DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB1DD8u;
label_1db1dd8:
    // 0x1db1dd8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1db1dd8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db1ddc: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1db1ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1db1de0: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1db1de0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1db1de4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1db1de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1db1de8: 0xc76c3d6  jal         func_1DB0F58
    ctx->pc = 0x1DB1DE8u;
    SET_GPR_U32(ctx, 31, 0x1DB1DF0u);
    ctx->pc = 0x1DB1DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB1DE8u;
    // 0x1db1dec: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F58u, 0x1DB1DE8u, 0x1DB1DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB1DF0u;
label_1db1df0:
    // 0x1db1df0: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1db1df0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1db1df4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1db1df4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db1df8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1db1df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1db1dfc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB1DFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB1E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB1DFCu;
        // 0x1db1e00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB1DFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB1E04u;
    // 0x1db1e04: 0x0  nop
    ctx->pc = 0x1db1e04u;
    // NOP
    ctx->pc = 0x1db1e08u;
}
