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

// Function: sub_01DE018C
// Address: 0x1de018c - 0x1de019c
void sub_01DE018C_0x1de018c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE018C_0x1de018c");
#endif

    ctx->pc = 0x1de018cu;

    // 0x1de018c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE018Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE018Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE0194u;
    // 0x1de0194: 0x0  nop
    ctx->pc = 0x1de0194u;
    // NOP
    // 0x1de0198: 0x0  nop
    ctx->pc = 0x1de0198u;
    // NOP
    ctx->pc = 0x1de019cu;
}
