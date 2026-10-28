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

// Function: sub_01C9B758
// Address: 0x1c9b758 - 0x1c9b7d0
void sub_01C9B758_0x1c9b758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C9B758_0x1c9b758");
#endif

    switch (ctx->pc) {
        case 0x1c9b798u: goto label_1c9b798;
        case 0x1c9b79cu: goto label_1c9b79c;
        case 0x1c9b7b4u: goto label_1c9b7b4;
        case 0x1c9b7bcu: goto label_1c9b7bc;
        default: break;
    }

    ctx->pc = 0x1c9b758u;

    // 0x1c9b758: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c9b758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c9b75c: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x1c9b75cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9b760: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x1c9b760u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9b764: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c9b764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c9b768: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1c9b768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9b76c: 0x240f0136  addiu       $t7, $zero, 0x136
    ctx->pc = 0x1c9b76cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 310));
    // 0x1c9b770: 0x11cf0014  beq         $t6, $t7, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C9B770u;
    {
        const bool branch_taken_0x1c9b770 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1C9B774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B770u;
        // 0x1c9b774: 0x1a0202d  daddu       $a0, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9b770) {
            ctx->pc = 0x1C9B7C4u;
            goto label_1c9b7c4;
        }
    }
    ctx->pc = 0x1C9B778u;
    // 0x1c9b778: 0x240f0137  addiu       $t7, $zero, 0x137
    ctx->pc = 0x1c9b778u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 311));
    // 0x1c9b77c: 0x11cf000a  beq         $t6, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1C9B77Cu;
    {
        const bool branch_taken_0x1c9b77c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1C9B780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B77Cu;
        // 0x1c9b780: 0x3c0401ca  lui         $a0, 0x1CA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)458 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9b77c) {
            ctx->pc = 0x1C9B7A8u;
            goto label_1c9b7a8;
        }
    }
    ctx->pc = 0x1C9B784u;
    // 0x1c9b784: 0x3c0501ca  lui         $a1, 0x1CA
    ctx->pc = 0x1c9b784u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)458 << 16));
    // 0x1c9b788: 0x24848bb8  addiu       $a0, $a0, -0x7448
    ctx->pc = 0x1c9b788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937528));
    // 0x1c9b78c: 0x24a5c410  addiu       $a1, $a1, -0x3BF0
    ctx->pc = 0x1c9b78cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951952));
    // 0x1c9b790: 0xc7262f0  jal         func_1C98BC0
    ctx->pc = 0x1C9B790u;
    SET_GPR_U32(ctx, 31, 0x1C9B798u);
    ctx->pc = 0x1C9B794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9B790u;
    // 0x1c9b794: 0x240603d2  addiu       $a2, $zero, 0x3D2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 978));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98BC0u, 0x1C9B790u, 0x1C9B798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B798u;
label_1c9b798:
    // 0x1c9b798: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c9b798u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c9b79c:
    // 0x1c9b79c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c9b79cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9b7a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9B7A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9B7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B7A0u;
        // 0x1c9b7a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9B7A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9B7A8u;
label_1c9b7a8:
    // 0x1c9b7a8: 0x1a0202d  daddu       $a0, $t5, $zero
    ctx->pc = 0x1c9b7a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9b7ac: 0x3c0601ca  lui         $a2, 0x1CA
    ctx->pc = 0x1c9b7acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)458 << 16));
    // 0x1c9b7b0: 0x24c6e9a0  addiu       $a2, $a2, -0x1660
    ctx->pc = 0x1c9b7b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961568));
label_1c9b7b4:
    // 0x1c9b7b4: 0xc726d92  jal         func_1C9B648
    ctx->pc = 0x1C9B7B4u;
    SET_GPR_U32(ctx, 31, 0x1C9B7BCu);
    ctx->pc = 0x1C9B648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9B648u, 0x1C9B7B4u, 0x1C9B7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B7BCu;
label_1c9b7bc:
    // 0x1c9b7bc: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x1C9B7BCu;
    {
        const bool branch_taken_0x1c9b7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9B7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B7BCu;
        // 0x1c9b7c0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9b7bc) {
            ctx->pc = 0x1C9B79Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c9b79c;
        }
    }
    ctx->pc = 0x1C9B7C4u;
label_1c9b7c4:
    // 0x1c9b7c4: 0x3c0601ca  lui         $a2, 0x1CA
    ctx->pc = 0x1c9b7c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)458 << 16));
    // 0x1c9b7c8: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C9B7C8u;
    {
        const bool branch_taken_0x1c9b7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9B7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B7C8u;
        // 0x1c9b7cc: 0x24c6e920  addiu       $a2, $a2, -0x16E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9b7c8) {
            ctx->pc = 0x1C9B7B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c9b7b4;
        }
    }
    ctx->pc = 0x1C9B7D0u;
}
