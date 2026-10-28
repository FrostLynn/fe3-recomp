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

// Function: sub_01CB6F68
// Address: 0x1cb6f68 - 0x1cb6f70
void sub_01CB6F68_0x1cb6f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB6F68_0x1cb6f68");
#endif

    ctx->pc = 0x1cb6f68u;

    // 0x1cb6f68: 0x80b2532  j           func_2C94C8
    ctx->pc = 0x1CB6F68u;
    ctx->pc = 0x2C94C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C94C8u, 0x1CB6F68u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CB6F70u;
}
