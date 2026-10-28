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

// Function: sub_01DCF8BC
// Address: 0x1dcf8bc - 0x1dcf8cc
void sub_01DCF8BC_0x1dcf8bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DCF8BC_0x1dcf8bc");
#endif

    ctx->pc = 0x1dcf8bcu;

    // 0x1dcf8bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCF8BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCF8BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCF8C4u;
    // 0x1dcf8c4: 0x0  nop
    ctx->pc = 0x1dcf8c4u;
    // NOP
    // 0x1dcf8c8: 0x0  nop
    ctx->pc = 0x1dcf8c8u;
    // NOP
    ctx->pc = 0x1dcf8ccu;
}
