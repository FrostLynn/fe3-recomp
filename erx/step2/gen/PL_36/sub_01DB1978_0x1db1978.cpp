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

// Function: sub_01DB1978
// Address: 0x1db1978 - 0x1db1980
void sub_01DB1978_0x1db1978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB1978_0x1db1978");
#endif

    ctx->pc = 0x1db1978u;

    // 0x1db1978: 0x80b29dc  j           func_2CA770
    ctx->pc = 0x1DB1978u;
    ctx->pc = 0x2CA770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA770u, 0x1DB1978u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DB1980u;
}
