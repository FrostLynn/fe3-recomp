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

// Function: sub_01D2899C
// Address: 0x1d2899c - 0x1d289e8
void sub_01D2899C_0x1d2899c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D2899C_0x1d2899c");
#endif

    switch (ctx->pc) {
        case 0x1d289acu: goto label_1d289ac;
        case 0x1d289bcu: goto label_1d289bc;
        default: break;
    }

    ctx->pc = 0x1d2899cu;

    // 0x1d2899c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2899cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d289a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d289a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d289a4: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
    ctx->pc = 0x1D289A4u;
    {
        const bool branch_taken_0x1d289a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D289A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D289A4u;
        // 0x1d289a8: 0x2406004a  addiu       $a2, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d289a4) {
            ctx->pc = 0x1D28930u;
            return;
        }
    }
    ctx->pc = 0x1D289ACu;
label_1d289ac:
    // 0x1d289ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d289acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d289b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d289b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d289b4: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x1D289B4u;
    {
        const bool branch_taken_0x1d289b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D289B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D289B4u;
        // 0x1d289b8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d289b4) {
            ctx->pc = 0x1D28930u;
            return;
        }
    }
    ctx->pc = 0x1D289BCu;
label_1d289bc:
    // 0x1d289bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d289bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d289c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d289c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d289c4: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x1D289C4u;
    {
        const bool branch_taken_0x1d289c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D289C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D289C4u;
        // 0x1d289c8: 0x2406004c  addiu       $a2, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d289c4) {
            ctx->pc = 0x1D28930u;
            return;
        }
    }
    ctx->pc = 0x1D289CCu;
    // 0x1d289cc: 0x0  nop
    ctx->pc = 0x1d289ccu;
    // NOP
    // 0x1d289d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d289d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d289d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d289d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d289d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d289d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d289dc: 0x8749b24  j           func_1D26C90
    ctx->pc = 0x1D289DCu;
    ctx->pc = 0x1D289E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D289DCu;
    // 0x1d289e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C90u;
    sub_01D26C90_0x1d26c90(rdram, ctx, runtime); return;
    ctx->pc = 0x1D289E4u;
    // 0x1d289e4: 0x0  nop
    ctx->pc = 0x1d289e4u;
    // NOP
    ctx->pc = 0x1d289e8u;
}
