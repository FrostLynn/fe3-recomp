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

// Function: sub_01DD6C18
// Address: 0x1dd6c18 - 0x1dd6c20
void sub_01DD6C18_0x1dd6c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD6C18_0x1dd6c18");
#endif

    ctx->pc = 0x1dd6c18u;

    // 0x1dd6c18: 0x80a96ba  j           func_2A5AE8
    ctx->pc = 0x1DD6C18u;
    ctx->pc = 0x2A5AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5AE8u, 0x1DD6C18u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DD6C20u;
}
