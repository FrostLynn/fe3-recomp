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

// Function: sub_01C00E00
// Address: 0x1c00e00 - 0x1c00eb0
void sub_01C00E00_0x1c00e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C00E00_0x1c00e00");
#endif

    switch (ctx->pc) {
        case 0x1c00e28u: goto label_1c00e28;
        case 0x1c00e3cu: goto label_1c00e3c;
        case 0x1c00e40u: goto label_1c00e40;
        case 0x1c00e60u: goto label_1c00e60;
        case 0x1c00e70u: goto label_1c00e70;
        case 0x1c00ea4u: goto label_1c00ea4;
        default: break;
    }

    ctx->pc = 0x1c00e00u;

    // 0x1c00e00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c00e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c00e04: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c00e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c00e08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c00e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c00e0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c00e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c00e10: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c00e10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c00e14: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c00e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c00e18: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c00e18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c00e1c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c00e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c00e20: 0xc700018  jal         func_1C00060
    ctx->pc = 0x1C00E20u;
    SET_GPR_U32(ctx, 31, 0x1C00E28u);
    ctx->pc = 0x1C00E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C00E20u;
    // 0x1c00e24: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00060u, 0x1C00E20u, 0x1C00E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C00E28u;
label_1c00e28:
    // 0x1c00e28: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1c00e28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1c00e2c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C00E2Cu;
    {
        const bool branch_taken_0x1c00e2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C00E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C00E2Cu;
        // 0x1c00e30: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c00e2c) {
            ctx->pc = 0x1C00E78u;
            goto label_1c00e78;
        }
    }
    ctx->pc = 0x1C00E34u;
    // 0x1c00e34: 0x120f0008  beq         $s0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C00E34u;
    {
        const bool branch_taken_0x1c00e34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1c00e34) {
            ctx->pc = 0x1C00E58u;
            goto label_1c00e58;
        }
    }
    ctx->pc = 0x1C00E3Cu;
label_1c00e3c:
    // 0x1c00e3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c00e3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c00e40:
    // 0x1c00e40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c00e40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c00e44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c00e44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c00e48: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c00e48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c00e4c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c00e4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c00e50: 0x3e00008  jr          $ra
    ctx->pc = 0x1C00E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C00E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C00E50u;
        // 0x1c00e54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C00E50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C00E58u;
label_1c00e58:
    // 0x1c00e58: 0xc700014  jal         func_1C00050
    ctx->pc = 0x1C00E58u;
    SET_GPR_U32(ctx, 31, 0x1C00E60u);
    ctx->pc = 0x1C00E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C00E58u;
    // 0x1c00e5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00050u, 0x1C00E58u, 0x1C00E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C00E60u;
label_1c00e60:
    // 0x1c00e60: 0x1450fff6  bne         $v0, $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1C00E60u;
    {
        const bool branch_taken_0x1c00e60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1C00E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C00E60u;
        // 0x1c00e64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c00e60) {
            ctx->pc = 0x1C00E3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c00e3c;
        }
    }
    ctx->pc = 0x1C00E68u;
    // 0x1c00e68: 0xc700016  jal         func_1C00058
    ctx->pc = 0x1C00E68u;
    SET_GPR_U32(ctx, 31, 0x1C00E70u);
    ctx->pc = 0x1C00058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00058u, 0x1C00E68u, 0x1C00E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C00E70u;
label_1c00e70:
    // 0x1c00e70: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1C00E70u;
    {
        const bool branch_taken_0x1c00e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C00E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C00E70u;
        // 0x1c00e74: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c00e70) {
            ctx->pc = 0x1C00E40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c00e40;
        }
    }
    ctx->pc = 0x1C00E78u;
label_1c00e78:
    // 0x1c00e78: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1c00e78u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1c00e7c: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C00E7Cu;
    {
        const bool branch_taken_0x1c00e7c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C00E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C00E7Cu;
        // 0x1c00e80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c00e7c) {
            ctx->pc = 0x1C00E40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c00e40;
        }
    }
    ctx->pc = 0x1C00E84u;
    // 0x1c00e84: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1c00e84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c00e88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c00e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c00e8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c00e8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c00e90: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c00e90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c00e94: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c00e94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c00e98: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c00e98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c00e9c: 0xc700024  jal         func_1C00090
    ctx->pc = 0x1C00E9Cu;
    SET_GPR_U32(ctx, 31, 0x1C00EA4u);
    ctx->pc = 0x1C00EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C00E9Cu;
    // 0x1c00ea0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00090u, 0x1C00E9Cu, 0x1C00EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C00EA4u;
label_1c00ea4:
    // 0x1c00ea4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c00ea4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c00ea8: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x1C00EA8u;
    {
        const bool branch_taken_0x1c00ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C00EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C00EA8u;
        // 0x1c00eac: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c00ea8) {
            ctx->pc = 0x1C00E3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c00e3c;
        }
    }
    ctx->pc = 0x1C00EB0u;
}
