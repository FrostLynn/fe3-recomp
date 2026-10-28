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

// Function: sub_01C61E64
// Address: 0x1c61e64 - 0x1c61e74
void sub_01C61E64_0x1c61e64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C61E64_0x1c61e64");
#endif

    ctx->pc = 0x1c61e64u;

    // 0x1c61e64: 0x3e00008  jr          $ra
    ctx->pc = 0x1C61E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C61E64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C61E6Cu;
    // 0x1c61e6c: 0x0  nop
    ctx->pc = 0x1c61e6cu;
    // NOP
    // 0x1c61e70: 0x0  nop
    ctx->pc = 0x1c61e70u;
    // NOP
    ctx->pc = 0x1c61e74u;
}
