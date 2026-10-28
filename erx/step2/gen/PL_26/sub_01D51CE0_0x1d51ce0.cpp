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

// Function: sub_01D51CE0
// Address: 0x1d51ce0 - 0x1d51e08
void sub_01D51CE0_0x1d51ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D51CE0_0x1d51ce0");
#endif

    switch (ctx->pc) {
        case 0x1d51d08u: goto label_1d51d08;
        case 0x1d51d1cu: goto label_1d51d1c;
        case 0x1d51d20u: goto label_1d51d20;
        case 0x1d51d40u: goto label_1d51d40;
        case 0x1d51d50u: goto label_1d51d50;
        case 0x1d51d84u: goto label_1d51d84;
        case 0x1d51dbcu: goto label_1d51dbc;
        case 0x1d51dc8u: goto label_1d51dc8;
        case 0x1d51dd8u: goto label_1d51dd8;
        case 0x1d51df0u: goto label_1d51df0;
        default: break;
    }

    ctx->pc = 0x1d51ce0u;

    // 0x1d51ce0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d51ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d51ce4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d51ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d51ce8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d51ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d51cec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d51cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d51cf0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1d51cf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d51cf4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d51cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d51cf8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d51cf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d51cfc: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d51cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d51d00: 0xc7543d6  jal         func_1D50F58
    ctx->pc = 0x1D51D00u;
    SET_GPR_U32(ctx, 31, 0x1D51D08u);
    ctx->pc = 0x1D51D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D51D00u;
    // 0x1d51d04: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F58u, 0x1D51D00u, 0x1D51D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D51D08u;
label_1d51d08:
    // 0x1d51d08: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1d51d08u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d51d0c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D51D0Cu;
    {
        const bool branch_taken_0x1d51d0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D51D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D51D0Cu;
        // 0x1d51d10: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d51d0c) {
            ctx->pc = 0x1D51D58u;
            goto label_1d51d58;
        }
    }
    ctx->pc = 0x1D51D14u;
    // 0x1d51d14: 0x120f0008  beq         $s0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D51D14u;
    {
        const bool branch_taken_0x1d51d14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1d51d14) {
            ctx->pc = 0x1D51D38u;
            goto label_1d51d38;
        }
    }
    ctx->pc = 0x1D51D1Cu;
label_1d51d1c:
    // 0x1d51d1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d51d1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d51d20:
    // 0x1d51d20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d51d20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d51d24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d51d24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d51d28: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d51d28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d51d2c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d51d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d51d30: 0x3e00008  jr          $ra
    ctx->pc = 0x1D51D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D51D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D51D30u;
        // 0x1d51d34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D51D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D51D38u;
label_1d51d38:
    // 0x1d51d38: 0xc7543d2  jal         func_1D50F48
    ctx->pc = 0x1D51D38u;
    SET_GPR_U32(ctx, 31, 0x1D51D40u);
    ctx->pc = 0x1D51D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D51D38u;
    // 0x1d51d3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F48u, 0x1D51D38u, 0x1D51D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D51D40u;
label_1d51d40:
    // 0x1d51d40: 0x1450fff6  bne         $v0, $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1D51D40u;
    {
        const bool branch_taken_0x1d51d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1D51D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D51D40u;
        // 0x1d51d44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d51d40) {
            ctx->pc = 0x1D51D1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d51d1c;
        }
    }
    ctx->pc = 0x1D51D48u;
    // 0x1d51d48: 0xc7543d4  jal         func_1D50F50
    ctx->pc = 0x1D51D48u;
    SET_GPR_U32(ctx, 31, 0x1D51D50u);
    ctx->pc = 0x1D50F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F50u, 0x1D51D48u, 0x1D51D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D51D50u;
label_1d51d50:
    // 0x1d51d50: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1D51D50u;
    {
        const bool branch_taken_0x1d51d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D51D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D51D50u;
        // 0x1d51d54: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d51d50) {
            ctx->pc = 0x1D51D20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d51d20;
        }
    }
    ctx->pc = 0x1D51D58u;
label_1d51d58:
    // 0x1d51d58: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1d51d58u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1d51d5c: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D51D5Cu;
    {
        const bool branch_taken_0x1d51d5c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D51D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D51D5Cu;
        // 0x1d51d60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d51d5c) {
            ctx->pc = 0x1D51D20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d51d20;
        }
    }
    ctx->pc = 0x1D51D64u;
    // 0x1d51d64: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1d51d64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d51d68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d51d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d51d6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d51d6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d51d70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d51d70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d51d74: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d51d74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d51d78: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d51d78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d51d7c: 0xc7543e2  jal         func_1D50F88
    ctx->pc = 0x1D51D7Cu;
    SET_GPR_U32(ctx, 31, 0x1D51D84u);
    ctx->pc = 0x1D51D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D51D7Cu;
    // 0x1d51d80: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F88u, 0x1D51D7Cu, 0x1D51D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D51D84u;
label_1d51d84:
    // 0x1d51d84: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d51d84u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d51d88: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x1D51D88u;
    {
        const bool branch_taken_0x1d51d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D51D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D51D88u;
        // 0x1d51d8c: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d51d88) {
            ctx->pc = 0x1D51D1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d51d1c;
        }
    }
    ctx->pc = 0x1D51D90u;
    // 0x1d51d90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d51d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d51d94: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d51d94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d51d98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d51d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d51d9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d51d9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d51da0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d51da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d51da4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d51da4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d51da8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d51da8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d51dac: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d51dacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d51db0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d51db0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d51db4: 0xc7543e2  jal         func_1D50F88
    ctx->pc = 0x1D51DB4u;
    SET_GPR_U32(ctx, 31, 0x1D51DBCu);
    ctx->pc = 0x1D51DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D51DB4u;
    // 0x1d51db8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F88u, 0x1D51DB4u, 0x1D51DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D51DBCu;
label_1d51dbc:
    // 0x1d51dbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d51dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d51dc0: 0xc7543da  jal         func_1D50F68
    ctx->pc = 0x1D51DC0u;
    SET_GPR_U32(ctx, 31, 0x1D51DC8u);
    ctx->pc = 0x1D51DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D51DC0u;
    // 0x1d51dc4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F68u, 0x1D51DC0u, 0x1D51DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D51DC8u;
label_1d51dc8:
    // 0x1d51dc8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d51dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d51dcc: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d51dccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d51dd0: 0xc7543d6  jal         func_1D50F58
    ctx->pc = 0x1D51DD0u;
    SET_GPR_U32(ctx, 31, 0x1D51DD8u);
    ctx->pc = 0x1D51DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D51DD0u;
    // 0x1d51dd4: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F58u, 0x1D51DD0u, 0x1D51DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D51DD8u;
label_1d51dd8:
    // 0x1d51dd8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d51dd8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d51ddc: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d51ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d51de0: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1d51de0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1d51de4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d51de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d51de8: 0xc7543d6  jal         func_1D50F58
    ctx->pc = 0x1D51DE8u;
    SET_GPR_U32(ctx, 31, 0x1D51DF0u);
    ctx->pc = 0x1D51DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D51DE8u;
    // 0x1d51dec: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F58u, 0x1D51DE8u, 0x1D51DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D51DF0u;
label_1d51df0:
    // 0x1d51df0: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d51df0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d51df4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d51df4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d51df8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d51df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d51dfc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D51DFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D51E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D51DFCu;
        // 0x1d51e00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D51DFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D51E04u;
    // 0x1d51e04: 0x0  nop
    ctx->pc = 0x1d51e04u;
    // NOP
    ctx->pc = 0x1d51e08u;
}
