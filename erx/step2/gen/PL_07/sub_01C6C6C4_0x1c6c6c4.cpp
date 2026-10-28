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

// Function: sub_01C6C6C4
// Address: 0x1c6c6c4 - 0x1c6c6d4
void sub_01C6C6C4_0x1c6c6c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C6C6C4_0x1c6c6c4");
#endif

    ctx->pc = 0x1c6c6c4u;

    // 0x1c6c6c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6C6C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6C6C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6C6CCu;
    // 0x1c6c6cc: 0x0  nop
    ctx->pc = 0x1c6c6ccu;
    // NOP
    // 0x1c6c6d0: 0x0  nop
    ctx->pc = 0x1c6c6d0u;
    // NOP
    ctx->pc = 0x1c6c6d4u;
}
