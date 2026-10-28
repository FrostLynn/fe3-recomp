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

// Function: sub_01CCFD48
// Address: 0x1ccfd48 - 0x1ccfdf0
void sub_01CCFD48_0x1ccfd48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCFD48_0x1ccfd48");
#endif

    switch (ctx->pc) {
        case 0x1ccfd70u: goto label_1ccfd70;
        case 0x1ccfd84u: goto label_1ccfd84;
        case 0x1ccfd88u: goto label_1ccfd88;
        case 0x1ccfda0u: goto label_1ccfda0;
        case 0x1ccfda8u: goto label_1ccfda8;
        case 0x1ccfdd0u: goto label_1ccfdd0;
        default: break;
    }

    ctx->pc = 0x1ccfd48u;

    // 0x1ccfd48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ccfd48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ccfd4c: 0x240f0107  addiu       $t7, $zero, 0x107
    ctx->pc = 0x1ccfd4cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 263));
    // 0x1ccfd50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ccfd50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ccfd54: 0x108f0020  beq         $a0, $t7, . + 4 + (0x20 << 2)
    ctx->pc = 0x1CCFD54u;
    {
        const bool branch_taken_0x1ccfd54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 15));
        ctx->pc = 0x1CCFD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCFD54u;
        // 0x1ccfd58: 0x288f0108  slti        $t7, $a0, 0x108 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)264) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccfd54) {
            ctx->pc = 0x1CCFDD8u;
            goto label_1ccfdd8;
        }
    }
    ctx->pc = 0x1CCFD5Cu;
    // 0x1ccfd5c: 0x11e00014  beqz        $t7, . + 4 + (0x14 << 2)
    ctx->pc = 0x1CCFD5Cu;
    {
        const bool branch_taken_0x1ccfd5c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCFD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCFD5Cu;
        // 0x1ccfd60: 0x240f0106  addiu       $t7, $zero, 0x106 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 262));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccfd5c) {
            ctx->pc = 0x1CCFDB0u;
            goto label_1ccfdb0;
        }
    }
    ctx->pc = 0x1CCFD64u;
    // 0x1ccfd64: 0x108f000b  beq         $a0, $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x1CCFD64u;
    {
        const bool branch_taken_0x1ccfd64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 15));
        ctx->pc = 0x1CCFD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCFD64u;
        // 0x1ccfd68: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccfd64) {
            ctx->pc = 0x1CCFD94u;
            goto label_1ccfd94;
        }
    }
    ctx->pc = 0x1CCFD6Cu;
    // 0x1ccfd6c: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x1ccfd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)0 << 16));
label_1ccfd70:
    // 0x1ccfd70: 0x3c0501cd  lui         $a1, 0x1CD
    ctx->pc = 0x1ccfd70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)461 << 16));
    // 0x1ccfd74: 0x2484d4b8  addiu       $a0, $a0, -0x2B48
    ctx->pc = 0x1ccfd74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956216));
    // 0x1ccfd78: 0x24a50b70  addiu       $a1, $a1, 0xB70
    ctx->pc = 0x1ccfd78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2928));
    // 0x1ccfd7c: 0xc733530  jal         func_1CCD4C0
    ctx->pc = 0x1CCFD7Cu;
    SET_GPR_U32(ctx, 31, 0x1CCFD84u);
    ctx->pc = 0x1CCFD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCFD7Cu;
    // 0x1ccfd80: 0x2406034e  addiu       $a2, $zero, 0x34E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 846));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD4C0u, 0x1CCFD7Cu, 0x1CCFD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCFD84u;
label_1ccfd84:
    // 0x1ccfd84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ccfd84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ccfd88:
    // 0x1ccfd88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ccfd88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ccfd8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCFD8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCFD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCFD8Cu;
        // 0x1ccfd90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCFD8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCFD94u;
label_1ccfd94:
    // 0x1ccfd94: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1ccfd94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccfd98: 0x3c0601cd  lui         $a2, 0x1CD
    ctx->pc = 0x1ccfd98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)461 << 16));
    // 0x1ccfd9c: 0x24c66700  addiu       $a2, $a2, 0x6700
    ctx->pc = 0x1ccfd9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26368));
label_1ccfda0:
    // 0x1ccfda0: 0xc733922  jal         func_1CCE488
    ctx->pc = 0x1CCFDA0u;
    SET_GPR_U32(ctx, 31, 0x1CCFDA8u);
    ctx->pc = 0x1CCE488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCE488u, 0x1CCFDA0u, 0x1CCFDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCFDA8u;
label_1ccfda8:
    // 0x1ccfda8: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x1CCFDA8u;
    {
        const bool branch_taken_0x1ccfda8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCFDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCFDA8u;
        // 0x1ccfdac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccfda8) {
            ctx->pc = 0x1CCFD88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ccfd88;
        }
    }
    ctx->pc = 0x1CCFDB0u;
label_1ccfdb0:
    // 0x1ccfdb0: 0x240f0108  addiu       $t7, $zero, 0x108
    ctx->pc = 0x1ccfdb0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 264));
    // 0x1ccfdb4: 0x148fffee  bne         $a0, $t7, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1CCFDB4u;
    {
        const bool branch_taken_0x1ccfdb4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CCFDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCFDB4u;
        // 0x1ccfdb8: 0x3c0401cd  lui         $a0, 0x1CD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)461 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccfdb4) {
            ctx->pc = 0x1CCFD70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ccfd70;
        }
    }
    ctx->pc = 0x1CCFDBCu;
    // 0x1ccfdbc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1ccfdbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccfdc0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1ccfdc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccfdc4: 0x3c0601cd  lui         $a2, 0x1CD
    ctx->pc = 0x1ccfdc4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)461 << 16));
    // 0x1ccfdc8: 0xc733aca  jal         func_1CCEB28
    ctx->pc = 0x1CCFDC8u;
    SET_GPR_U32(ctx, 31, 0x1CCFDD0u);
    ctx->pc = 0x1CCFDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCFDC8u;
    // 0x1ccfdcc: 0x24c66730  addiu       $a2, $a2, 0x6730 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCEB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCEB28u, 0x1CCFDC8u, 0x1CCFDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCFDD0u;
label_1ccfdd0:
    // 0x1ccfdd0: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x1CCFDD0u;
    {
        const bool branch_taken_0x1ccfdd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCFDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCFDD0u;
        // 0x1ccfdd4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccfdd0) {
            ctx->pc = 0x1CCFD88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ccfd88;
        }
    }
    ctx->pc = 0x1CCFDD8u;
label_1ccfdd8:
    // 0x1ccfdd8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1ccfdd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccfddc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1ccfddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccfde0: 0x3c0601cd  lui         $a2, 0x1CD
    ctx->pc = 0x1ccfde0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)461 << 16));
    // 0x1ccfde4: 0x1000ffee  b           . + 4 + (-0x12 << 2)
    ctx->pc = 0x1CCFDE4u;
    {
        const bool branch_taken_0x1ccfde4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCFDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCFDE4u;
        // 0x1ccfde8: 0x24c666d0  addiu       $a2, $a2, 0x66D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccfde4) {
            ctx->pc = 0x1CCFDA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ccfda0;
        }
    }
    ctx->pc = 0x1CCFDECu;
    // 0x1ccfdec: 0x0  nop
    ctx->pc = 0x1ccfdecu;
    // NOP
    ctx->pc = 0x1ccfdf0u;
}
