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

// Function: sub_01DA77B8
// Address: 0x1da77b8 - 0x1da77c0
void sub_01DA77B8_0x1da77b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DA77B8_0x1da77b8");
#endif

    ctx->pc = 0x1da77b8u;

    // 0x1da77b8: 0x80b0f6c  j           func_2C3DB0
    ctx->pc = 0x1DA77B8u;
    ctx->pc = 0x2C3DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3DB0u, 0x1DA77B8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DA77C0u;
}
