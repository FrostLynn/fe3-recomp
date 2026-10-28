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

// Function: sub_01DD9658
// Address: 0x1dd9658 - 0x1dd9660
void sub_01DD9658_0x1dd9658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD9658_0x1dd9658");
#endif

    ctx->pc = 0x1dd9658u;

    // 0x1dd9658: 0x80a63b0  j           func_298EC0
    ctx->pc = 0x1DD9658u;
    ctx->pc = 0x298EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298EC0u, 0x1DD9658u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DD9660u;
}
