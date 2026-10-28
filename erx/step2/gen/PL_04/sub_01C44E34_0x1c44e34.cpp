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

// Function: sub_01C44E34
// Address: 0x1c44e34 - 0x1c44f10
void sub_01C44E34_0x1c44e34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C44E34_0x1c44e34");
#endif

    switch (ctx->pc) {
        case 0x1c44e44u: goto label_1c44e44;
        case 0x1c44e4cu: goto label_1c44e4c;
        case 0x1c44e54u: goto label_1c44e54;
        case 0x1c44e68u: goto label_1c44e68;
        case 0x1c44e78u: goto label_1c44e78;
        case 0x1c44e80u: goto label_1c44e80;
        case 0x1c44e88u: goto label_1c44e88;
        case 0x1c44e9cu: goto label_1c44e9c;
        case 0x1c44eacu: goto label_1c44eac;
        case 0x1c44eb4u: goto label_1c44eb4;
        case 0x1c44ebcu: goto label_1c44ebc;
        case 0x1c44ed0u: goto label_1c44ed0;
        case 0x1c44ee4u: goto label_1c44ee4;
        case 0x1c44eecu: goto label_1c44eec;
        case 0x1c44f04u: goto label_1c44f04;
        default: break;
    }

    ctx->pc = 0x1c44e34u;

    // 0x1c44e34: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1c44e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44e38: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1c44e38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44e3c: 0x3c0601c5  lui         $a2, 0x1C5
    ctx->pc = 0x1c44e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)453 << 16));
    // 0x1c44e40: 0x24c6ba00  addiu       $a2, $a2, -0x4600
    ctx->pc = 0x1c44e40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949376));
label_1c44e44:
    // 0x1c44e44: 0xc710d6a  jal         func_1C435A8
    ctx->pc = 0x1C44E44u;
    SET_GPR_U32(ctx, 31, 0x1C44E4Cu);
    ctx->pc = 0x1C435A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C435A8u, 0x1C44E44u, 0x1C44E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C44E4Cu;
label_1c44e4c:
    // 0x1c44e4c: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x1C44E4Cu;
    {
        const bool branch_taken_0x1c44e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C44E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C44E4Cu;
        // 0x1c44e50: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c44e4c) {
            ctx->pc = 0x1C44E28u;
            return;
        }
    }
    ctx->pc = 0x1C44E54u;
label_1c44e54:
    // 0x1c44e54: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1c44e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44e58: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1c44e58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44e5c: 0x3c0601c5  lui         $a2, 0x1C5
    ctx->pc = 0x1c44e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)453 << 16));
    // 0x1c44e60: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x1C44E60u;
    {
        const bool branch_taken_0x1c44e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C44E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C44E60u;
        // 0x1c44e64: 0x24c6b9b0  addiu       $a2, $a2, -0x4650 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c44e60) {
            ctx->pc = 0x1C44E44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c44e44;
        }
    }
    ctx->pc = 0x1C44E68u;
label_1c44e68:
    // 0x1c44e68: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1c44e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44e6c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1c44e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44e70: 0x3c0601c5  lui         $a2, 0x1C5
    ctx->pc = 0x1c44e70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)453 << 16));
    // 0x1c44e74: 0x24c6bb20  addiu       $a2, $a2, -0x44E0
    ctx->pc = 0x1c44e74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949664));
label_1c44e78:
    // 0x1c44e78: 0xc710f38  jal         func_1C43CE0
    ctx->pc = 0x1C44E78u;
    SET_GPR_U32(ctx, 31, 0x1C44E80u);
    ctx->pc = 0x1C43CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C43CE0u, 0x1C44E78u, 0x1C44E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C44E80u;
label_1c44e80:
    // 0x1c44e80: 0x1000ffe9  b           . + 4 + (-0x17 << 2)
    ctx->pc = 0x1C44E80u;
    {
        const bool branch_taken_0x1c44e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C44E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C44E80u;
        // 0x1c44e84: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c44e80) {
            ctx->pc = 0x1C44E28u;
            return;
        }
    }
    ctx->pc = 0x1C44E88u;
label_1c44e88:
    // 0x1c44e88: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1c44e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44e8c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1c44e8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44e90: 0x3c0601c5  lui         $a2, 0x1C5
    ctx->pc = 0x1c44e90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)453 << 16));
    // 0x1c44e94: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x1C44E94u;
    {
        const bool branch_taken_0x1c44e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C44E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C44E94u;
        // 0x1c44e98: 0x24c6bcc0  addiu       $a2, $a2, -0x4340 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950080));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c44e94) {
            ctx->pc = 0x1C44E78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c44e78;
        }
    }
    ctx->pc = 0x1C44E9Cu;
label_1c44e9c:
    // 0x1c44e9c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1c44e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44ea0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1c44ea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44ea4: 0x3c0601c5  lui         $a2, 0x1C5
    ctx->pc = 0x1c44ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)453 << 16));
    // 0x1c44ea8: 0x24c6ba80  addiu       $a2, $a2, -0x4580
    ctx->pc = 0x1c44ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949504));
label_1c44eac:
    // 0x1c44eac: 0xc710d30  jal         func_1C434C0
    ctx->pc = 0x1C44EACu;
    SET_GPR_U32(ctx, 31, 0x1C44EB4u);
    ctx->pc = 0x1C434C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C434C0u, 0x1C44EACu, 0x1C44EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C44EB4u;
label_1c44eb4:
    // 0x1c44eb4: 0x1000ffdc  b           . + 4 + (-0x24 << 2)
    ctx->pc = 0x1C44EB4u;
    {
        const bool branch_taken_0x1c44eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C44EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C44EB4u;
        // 0x1c44eb8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c44eb4) {
            ctx->pc = 0x1C44E28u;
            return;
        }
    }
    ctx->pc = 0x1C44EBCu;
label_1c44ebc:
    // 0x1c44ebc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1c44ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44ec0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1c44ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44ec4: 0x3c0601c5  lui         $a2, 0x1C5
    ctx->pc = 0x1c44ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)453 << 16));
    // 0x1c44ec8: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x1C44EC8u;
    {
        const bool branch_taken_0x1c44ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C44ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C44EC8u;
        // 0x1c44ecc: 0x24c6ba50  addiu       $a2, $a2, -0x45B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c44ec8) {
            ctx->pc = 0x1C44EACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c44eac;
        }
    }
    ctx->pc = 0x1C44ED0u;
label_1c44ed0:
    // 0x1c44ed0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1c44ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44ed4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1c44ed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44ed8: 0x3c0601c5  lui         $a2, 0x1C5
    ctx->pc = 0x1c44ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)453 << 16));
    // 0x1c44edc: 0xc710e38  jal         func_1C438E0
    ctx->pc = 0x1C44EDCu;
    SET_GPR_U32(ctx, 31, 0x1C44EE4u);
    ctx->pc = 0x1C44EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C44EDCu;
    // 0x1c44ee0: 0x24c6be60  addiu       $a2, $a2, -0x41A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C438E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C438E0u, 0x1C44EDCu, 0x1C44EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C44EE4u;
label_1c44ee4:
    // 0x1c44ee4: 0x1000ffd0  b           . + 4 + (-0x30 << 2)
    ctx->pc = 0x1C44EE4u;
    {
        const bool branch_taken_0x1c44ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C44EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C44EE4u;
        // 0x1c44ee8: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c44ee4) {
            ctx->pc = 0x1C44E28u;
            return;
        }
    }
    ctx->pc = 0x1C44EECu;
label_1c44eec:
    // 0x1c44eec: 0x3c0401c4  lui         $a0, 0x1C4
    ctx->pc = 0x1c44eecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)452 << 16));
    // 0x1c44ef0: 0x3c0501c4  lui         $a1, 0x1C4
    ctx->pc = 0x1c44ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)452 << 16));
    // 0x1c44ef4: 0x248424c8  addiu       $a0, $a0, 0x24C8
    ctx->pc = 0x1c44ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9416));
    // 0x1c44ef8: 0x24a55ce0  addiu       $a1, $a1, 0x5CE0
    ctx->pc = 0x1c44ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23776));
    // 0x1c44efc: 0xc710934  jal         func_1C424D0
    ctx->pc = 0x1C44EFCu;
    SET_GPR_U32(ctx, 31, 0x1C44F04u);
    ctx->pc = 0x1C44F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C44EFCu;
    // 0x1c44f00: 0x2406038b  addiu       $a2, $zero, 0x38B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 907));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C424D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C424D0u, 0x1C44EFCu, 0x1C44F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C44F04u;
label_1c44f04:
    // 0x1c44f04: 0x1000ffc8  b           . + 4 + (-0x38 << 2)
    ctx->pc = 0x1C44F04u;
    {
        const bool branch_taken_0x1c44f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C44F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C44F04u;
        // 0x1c44f08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c44f04) {
            ctx->pc = 0x1C44E28u;
            return;
        }
    }
    ctx->pc = 0x1C44F0Cu;
    // 0x1c44f0c: 0x0  nop
    ctx->pc = 0x1c44f0cu;
    // NOP
    ctx->pc = 0x1c44f10u;
}
