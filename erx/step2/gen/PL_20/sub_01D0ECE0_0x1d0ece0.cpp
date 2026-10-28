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

// Function: sub_01D0ECE0
// Address: 0x1d0ece0 - 0x1d0eda8
void sub_01D0ECE0_0x1d0ece0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0ECE0_0x1d0ece0");
#endif

    switch (ctx->pc) {
        case 0x1d0ed08u: goto label_1d0ed08;
        case 0x1d0ed1cu: goto label_1d0ed1c;
        case 0x1d0ed20u: goto label_1d0ed20;
        case 0x1d0ed3cu: goto label_1d0ed3c;
        case 0x1d0ed64u: goto label_1d0ed64;
        case 0x1d0ed80u: goto label_1d0ed80;
        case 0x1d0ed9cu: goto label_1d0ed9c;
        default: break;
    }

    ctx->pc = 0x1d0ece0u;

    // 0x1d0ece0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d0ece0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d0ece4: 0x240f0116  addiu       $t7, $zero, 0x116
    ctx->pc = 0x1d0ece4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    // 0x1d0ece8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d0ece8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d0ecec: 0x108f0026  beq         $a0, $t7, . + 4 + (0x26 << 2)
    ctx->pc = 0x1D0ECECu;
    {
        const bool branch_taken_0x1d0ecec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 15));
        ctx->pc = 0x1D0ECF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0ECECu;
        // 0x1d0ecf0: 0x288f0117  slti        $t7, $a0, 0x117 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)279) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0ecec) {
            ctx->pc = 0x1D0ED88u;
            goto label_1d0ed88;
        }
    }
    ctx->pc = 0x1D0ECF4u;
    // 0x1d0ecf4: 0x11e00013  beqz        $t7, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D0ECF4u;
    {
        const bool branch_taken_0x1d0ecf4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0ECF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0ECF4u;
        // 0x1d0ecf8: 0x240f0115  addiu       $t7, $zero, 0x115 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 277));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0ecf4) {
            ctx->pc = 0x1D0ED44u;
            goto label_1d0ed44;
        }
    }
    ctx->pc = 0x1D0ECFCu;
    // 0x1d0ecfc: 0x108f000b  beq         $a0, $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x1D0ECFCu;
    {
        const bool branch_taken_0x1d0ecfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 15));
        ctx->pc = 0x1D0ED00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0ECFCu;
        // 0x1d0ed00: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0ecfc) {
            ctx->pc = 0x1D0ED2Cu;
            goto label_1d0ed2c;
        }
    }
    ctx->pc = 0x1D0ED04u;
    // 0x1d0ed04: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x1d0ed04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)0 << 16));
label_1d0ed08:
    // 0x1d0ed08: 0x3c0501d1  lui         $a1, 0x1D1
    ctx->pc = 0x1d0ed08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)465 << 16));
    // 0x1d0ed0c: 0x2484bdc0  addiu       $a0, $a0, -0x4240
    ctx->pc = 0x1d0ed0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950336));
    // 0x1d0ed10: 0x24a5fc20  addiu       $a1, $a1, -0x3E0
    ctx->pc = 0x1d0ed10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966304));
    // 0x1d0ed14: 0xc742f72  jal         func_1D0BDC8
    ctx->pc = 0x1D0ED14u;
    SET_GPR_U32(ctx, 31, 0x1D0ED1Cu);
    ctx->pc = 0x1D0ED18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0ED14u;
    // 0x1d0ed18: 0x2406049e  addiu       $a2, $zero, 0x49E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1182));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BDC8u, 0x1D0ED14u, 0x1D0ED1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0ED1Cu;
label_1d0ed1c:
    // 0x1d0ed1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d0ed1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0ed20:
    // 0x1d0ed20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d0ed20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0ed24: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0ED24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0ED28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0ED24u;
        // 0x1d0ed28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0ED24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0ED2Cu;
label_1d0ed2c:
    // 0x1d0ed2c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1d0ed2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0ed30: 0x3c0601d1  lui         $a2, 0x1D1
    ctx->pc = 0x1d0ed30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)465 << 16));
    // 0x1d0ed34: 0xc7434e4  jal         func_1D0D390
    ctx->pc = 0x1D0ED34u;
    SET_GPR_U32(ctx, 31, 0x1D0ED3Cu);
    ctx->pc = 0x1D0ED38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0ED34u;
    // 0x1d0ed38: 0x24c65470  addiu       $a2, $a2, 0x5470 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D390u, 0x1D0ED34u, 0x1D0ED3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0ED3Cu;
label_1d0ed3c:
    // 0x1d0ed3c: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D0ED3Cu;
    {
        const bool branch_taken_0x1d0ed3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0ED40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0ED3Cu;
        // 0x1d0ed40: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0ed3c) {
            ctx->pc = 0x1D0ED20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0ed20;
        }
    }
    ctx->pc = 0x1D0ED44u;
label_1d0ed44:
    // 0x1d0ed44: 0x240f0117  addiu       $t7, $zero, 0x117
    ctx->pc = 0x1d0ed44u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 279));
    // 0x1d0ed48: 0x108f0008  beq         $a0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D0ED48u;
    {
        const bool branch_taken_0x1d0ed48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 15));
        ctx->pc = 0x1D0ED4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0ED48u;
        // 0x1d0ed4c: 0x240f0118  addiu       $t7, $zero, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0ed48) {
            ctx->pc = 0x1D0ED6Cu;
            goto label_1d0ed6c;
        }
    }
    ctx->pc = 0x1D0ED50u;
    // 0x1d0ed50: 0x148fffed  bne         $a0, $t7, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1D0ED50u;
    {
        const bool branch_taken_0x1d0ed50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D0ED54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0ED50u;
        // 0x1d0ed54: 0x3c0401d1  lui         $a0, 0x1D1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)465 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0ed50) {
            ctx->pc = 0x1D0ED08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0ed08;
        }
    }
    ctx->pc = 0x1D0ED58u;
    // 0x1d0ed58: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d0ed58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0ed5c: 0xc743b00  jal         func_1D0EC00
    ctx->pc = 0x1D0ED5Cu;
    SET_GPR_U32(ctx, 31, 0x1D0ED64u);
    ctx->pc = 0x1D0ED60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0ED5Cu;
    // 0x1d0ed60: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0EC00u, 0x1D0ED5Cu, 0x1D0ED64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0ED64u;
label_1d0ed64:
    // 0x1d0ed64: 0x1000ffee  b           . + 4 + (-0x12 << 2)
    ctx->pc = 0x1D0ED64u;
    {
        const bool branch_taken_0x1d0ed64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0ED68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0ED64u;
        // 0x1d0ed68: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0ed64) {
            ctx->pc = 0x1D0ED20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0ed20;
        }
    }
    ctx->pc = 0x1D0ED6Cu;
label_1d0ed6c:
    // 0x1d0ed6c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d0ed6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0ed70: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1d0ed70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0ed74: 0x3c0601d1  lui         $a2, 0x1D1
    ctx->pc = 0x1d0ed74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)465 << 16));
    // 0x1d0ed78: 0xc7435ce  jal         func_1D0D738
    ctx->pc = 0x1D0ED78u;
    SET_GPR_U32(ctx, 31, 0x1D0ED80u);
    ctx->pc = 0x1D0ED7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0ED78u;
    // 0x1d0ed7c: 0x24c654a0  addiu       $a2, $a2, 0x54A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D738u, 0x1D0ED78u, 0x1D0ED80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0ED80u;
label_1d0ed80:
    // 0x1d0ed80: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x1D0ED80u;
    {
        const bool branch_taken_0x1d0ed80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0ED84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0ED80u;
        // 0x1d0ed84: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0ed80) {
            ctx->pc = 0x1D0ED20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0ed20;
        }
    }
    ctx->pc = 0x1D0ED88u;
label_1d0ed88:
    // 0x1d0ed88: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d0ed88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0ed8c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1d0ed8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0ed90: 0x3c0601d1  lui         $a2, 0x1D1
    ctx->pc = 0x1d0ed90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)465 << 16));
    // 0x1d0ed94: 0xc74336c  jal         func_1D0CDB0
    ctx->pc = 0x1D0ED94u;
    SET_GPR_U32(ctx, 31, 0x1D0ED9Cu);
    ctx->pc = 0x1D0ED98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0ED94u;
    // 0x1d0ed98: 0x24c65440  addiu       $a2, $a2, 0x5440 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0CDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0CDB0u, 0x1D0ED94u, 0x1D0ED9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0ED9Cu;
label_1d0ed9c:
    // 0x1d0ed9c: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x1D0ED9Cu;
    {
        const bool branch_taken_0x1d0ed9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0EDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0ED9Cu;
        // 0x1d0eda0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0ed9c) {
            ctx->pc = 0x1D0ED20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0ed20;
        }
    }
    ctx->pc = 0x1D0EDA4u;
    // 0x1d0eda4: 0x0  nop
    ctx->pc = 0x1d0eda4u;
    // NOP
    ctx->pc = 0x1d0eda8u;
}
