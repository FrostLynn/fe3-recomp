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

// Function: sub_01C78AAC
// Address: 0x1c78aac - 0x1c78abc
void sub_01C78AAC_0x1c78aac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C78AAC_0x1c78aac");
#endif

    ctx->pc = 0x1c78aacu;

    // 0x1c78aac: 0x3e00008  jr          $ra
    ctx->pc = 0x1C78AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C78AACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C78AB4u;
    // 0x1c78ab4: 0x0  nop
    ctx->pc = 0x1c78ab4u;
    // NOP
    // 0x1c78ab8: 0x0  nop
    ctx->pc = 0x1c78ab8u;
    // NOP
    ctx->pc = 0x1c78abcu;
}
