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

// Function: sub_01CA5054
// Address: 0x1ca5054 - 0x1ca5064
void sub_01CA5054_0x1ca5054(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CA5054_0x1ca5054");
#endif

    ctx->pc = 0x1ca5054u;

    // 0x1ca5054: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA5054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA5054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA505Cu;
    // 0x1ca505c: 0x0  nop
    ctx->pc = 0x1ca505cu;
    // NOP
    // 0x1ca5060: 0x0  nop
    ctx->pc = 0x1ca5060u;
    // NOP
    ctx->pc = 0x1ca5064u;
}
