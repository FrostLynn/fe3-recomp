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

// Function: sub_01DA8D88
// Address: 0x1da8d88 - 0x1da8e98
void sub_01DA8D88_0x1da8d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DA8D88_0x1da8d88");
#endif

    switch (ctx->pc) {
        case 0x1da8da8u: goto label_1da8da8;
        case 0x1da8dbcu: goto label_1da8dbc;
        case 0x1da8dc0u: goto label_1da8dc0;
        case 0x1da8ddcu: goto label_1da8ddc;
        case 0x1da8decu: goto label_1da8dec;
        case 0x1da8e38u: goto label_1da8e38;
        case 0x1da8e74u: goto label_1da8e74;
        case 0x1da8e80u: goto label_1da8e80;
        default: break;
    }

    ctx->pc = 0x1da8d88u;

    // 0x1da8d88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1da8d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1da8d8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1da8d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1da8d90: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1da8d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1da8d94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1da8d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1da8d98: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1da8d98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8d9c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1da8d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1da8da0: 0xc769b98  jal         func_1DA6E60
    ctx->pc = 0x1DA8DA0u;
    SET_GPR_U32(ctx, 31, 0x1DA8DA8u);
    ctx->pc = 0x1DA8DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA8DA0u;
    // 0x1da8da4: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E60u, 0x1DA8DA0u, 0x1DA8DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA8DA8u;
label_1da8da8:
    // 0x1da8da8: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1da8da8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1da8dac: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1DA8DACu;
    {
        const bool branch_taken_0x1da8dac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA8DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA8DACu;
        // 0x1da8db0: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da8dac) {
            ctx->pc = 0x1DA8DF8u;
            goto label_1da8df8;
        }
    }
    ctx->pc = 0x1DA8DB4u;
    // 0x1da8db4: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DA8DB4u;
    {
        const bool branch_taken_0x1da8db4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1da8db4) {
            ctx->pc = 0x1DA8DD4u;
            goto label_1da8dd4;
        }
    }
    ctx->pc = 0x1DA8DBCu;
label_1da8dbc:
    // 0x1da8dbc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1da8dbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da8dc0:
    // 0x1da8dc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1da8dc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da8dc4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1da8dc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1da8dc8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1da8dc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1da8dcc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA8DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA8DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA8DCCu;
        // 0x1da8dd0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA8DCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA8DD4u;
label_1da8dd4:
    // 0x1da8dd4: 0xc769b94  jal         func_1DA6E50
    ctx->pc = 0x1DA8DD4u;
    SET_GPR_U32(ctx, 31, 0x1DA8DDCu);
    ctx->pc = 0x1DA8DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA8DD4u;
    // 0x1da8dd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E50u, 0x1DA8DD4u, 0x1DA8DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA8DDCu;
label_1da8ddc:
    // 0x1da8ddc: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1DA8DDCu;
    {
        const bool branch_taken_0x1da8ddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1DA8DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA8DDCu;
        // 0x1da8de0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da8ddc) {
            ctx->pc = 0x1DA8DBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1da8dbc;
        }
    }
    ctx->pc = 0x1DA8DE4u;
    // 0x1da8de4: 0xc769b96  jal         func_1DA6E58
    ctx->pc = 0x1DA8DE4u;
    SET_GPR_U32(ctx, 31, 0x1DA8DECu);
    ctx->pc = 0x1DA6E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E58u, 0x1DA8DE4u, 0x1DA8DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA8DECu;
label_1da8dec:
    // 0x1da8dec: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1DA8DECu;
    {
        const bool branch_taken_0x1da8dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA8DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA8DECu;
        // 0x1da8df0: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da8dec) {
            ctx->pc = 0x1DA8DC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1da8dc0;
        }
    }
    ctx->pc = 0x1DA8DF4u;
    // 0x1da8df4: 0x0  nop
    ctx->pc = 0x1da8df4u;
    // NOP
label_1da8df8:
    // 0x1da8df8: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1da8df8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1da8dfc: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1DA8DFCu;
    {
        const bool branch_taken_0x1da8dfc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA8E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA8DFCu;
        // 0x1da8e00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da8dfc) {
            ctx->pc = 0x1DA8DC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1da8dc0;
        }
    }
    ctx->pc = 0x1DA8E04u;
    // 0x1da8e04: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1da8e04u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1da8e08: 0x3c0e01db  lui         $t6, 0x1DB
    ctx->pc = 0x1da8e08u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)475 << 16));
    // 0x1da8e0c: 0x25ceac40  addiu       $t6, $t6, -0x53C0
    ctx->pc = 0x1da8e0cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294945856));
    // 0x1da8e10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1da8e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8e14: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1da8e14u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1da8e18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1da8e18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8e1c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1da8e1cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1da8e20: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1da8e20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8e24: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1da8e24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1da8e28: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1da8e28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8e2c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1da8e2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da8e30: 0xc769ba4  jal         func_1DA6E90
    ctx->pc = 0x1DA8E30u;
    SET_GPR_U32(ctx, 31, 0x1DA8E38u);
    ctx->pc = 0x1DA8E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA8E30u;
    // 0x1da8e34: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E90u, 0x1DA8E30u, 0x1DA8E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA8E38u;
label_1da8e38:
    // 0x1da8e38: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1da8e38u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da8e3c: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1DA8E3Cu;
    {
        const bool branch_taken_0x1da8e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA8E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA8E3Cu;
        // 0x1da8e40: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da8e3c) {
            ctx->pc = 0x1DA8DBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1da8dbc;
        }
    }
    ctx->pc = 0x1DA8E44u;
    // 0x1da8e44: 0x0  nop
    ctx->pc = 0x1da8e44u;
    // NOP
    // 0x1da8e48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1da8e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1da8e4c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1da8e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1da8e50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1da8e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1da8e54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1da8e54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8e58: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1da8e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1da8e5c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1da8e5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8e60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1da8e60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8e64: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1da8e64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da8e68: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1da8e68u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8e6c: 0xc769ba4  jal         func_1DA6E90
    ctx->pc = 0x1DA8E6Cu;
    SET_GPR_U32(ctx, 31, 0x1DA8E74u);
    ctx->pc = 0x1DA8E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA8E6Cu;
    // 0x1da8e70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E90u, 0x1DA8E6Cu, 0x1DA8E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA8E74u;
label_1da8e74:
    // 0x1da8e74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da8e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8e78: 0xc769b9c  jal         func_1DA6E70
    ctx->pc = 0x1DA8E78u;
    SET_GPR_U32(ctx, 31, 0x1DA8E80u);
    ctx->pc = 0x1DA8E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA8E78u;
    // 0x1da8e7c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E70u, 0x1DA8E78u, 0x1DA8E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA8E80u;
label_1da8e80:
    // 0x1da8e80: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1da8e80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1da8e84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da8e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8e88: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1da8e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1da8e8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1da8e8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da8e90: 0x8769bb0  j           func_1DA6EC0
    ctx->pc = 0x1DA8E90u;
    ctx->pc = 0x1DA8E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA8E90u;
    // 0x1da8e94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6EC0u;
    sub_01DA6EC0_0x1da6ec0(rdram, ctx, runtime); return;
    ctx->pc = 0x1DA8E98u;
}
