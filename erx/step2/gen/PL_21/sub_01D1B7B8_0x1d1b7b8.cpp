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

// Function: sub_01D1B7B8
// Address: 0x1d1b7b8 - 0x1d1b7f8
void sub_01D1B7B8_0x1d1b7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D1B7B8_0x1d1b7b8");
#endif

    switch (ctx->pc) {
        case 0x1d1b7ccu: goto label_1d1b7cc;
        case 0x1d1b7e0u: goto label_1d1b7e0;
        default: break;
    }

    ctx->pc = 0x1d1b7b8u;

    // 0x1d1b7b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d1b7b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d1b7bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d1b7bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d1b7c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d1b7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d1b7c4: 0xc7467e2  jal         func_1D19F88
    ctx->pc = 0x1D1B7C4u;
    SET_GPR_U32(ctx, 31, 0x1D1B7CCu);
    ctx->pc = 0x1D1B7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1B7C4u;
    // 0x1d1b7c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19F88u, 0x1D1B7C4u, 0x1D1B7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B7CCu;
label_1d1b7cc:
    // 0x1d1b7cc: 0x8e0f0018  lw          $t7, 0x18($s0)
    ctx->pc = 0x1d1b7ccu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1d1b7d0: 0x19e00003  blez        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1B7D0u;
    {
        const bool branch_taken_0x1d1b7d0 = (GPR_S32(ctx, 15) <= 0);
        ctx->pc = 0x1D1B7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B7D0u;
        // 0x1d1b7d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b7d0) {
            ctx->pc = 0x1D1B7E0u;
            goto label_1d1b7e0;
        }
    }
    ctx->pc = 0x1D1B7D8u;
    // 0x1d1b7d8: 0xc7466da  jal         func_1D19B68
    ctx->pc = 0x1D1B7D8u;
    SET_GPR_U32(ctx, 31, 0x1D1B7E0u);
    ctx->pc = 0x1D19B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19B68u, 0x1D1B7D8u, 0x1D1B7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B7E0u;
label_1d1b7e0:
    // 0x1d1b7e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d1b7e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1b7e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d1b7e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1b7e8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d1b7e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d1b7ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1B7ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1B7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B7ECu;
        // 0x1d1b7f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1B7ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1B7F4u;
    // 0x1d1b7f4: 0x0  nop
    ctx->pc = 0x1d1b7f4u;
    // NOP
    ctx->pc = 0x1d1b7f8u;
}
