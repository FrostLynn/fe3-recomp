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

// Function: sub_01D714F8
// Address: 0x1d714f8 - 0x1d71518
void sub_01D714F8_0x1d714f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D714F8_0x1d714f8");
#endif

    switch (ctx->pc) {
        case 0x1d71508u: goto label_1d71508;
        default: break;
    }

    ctx->pc = 0x1d714f8u;

    // 0x1d714f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d714f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d714fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d714fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d71500: 0xc75c29e  jal         func_1D70A78
    ctx->pc = 0x1D71500u;
    SET_GPR_U32(ctx, 31, 0x1D71508u);
    ctx->pc = 0x1D70A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70A78u, 0x1D71500u, 0x1D71508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D71508u;
label_1d71508:
    // 0x1d71508: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d71508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7150c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d7150cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d71510: 0x3e00008  jr          $ra
    ctx->pc = 0x1D71510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D71514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D71510u;
        // 0x1d71514: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D71510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D71518u;
}
