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

// Function: sub_01CDAAE8
// Address: 0x1cdaae8 - 0x1cdaaf0
void sub_01CDAAE8_0x1cdaae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDAAE8_0x1cdaae8");
#endif

    ctx->pc = 0x1cdaae8u;

    // 0x1cdaae8: 0x80b2730  j           func_2C9CC0
    ctx->pc = 0x1CDAAE8u;
    ctx->pc = 0x2C9CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9CC0u, 0x1CDAAE8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CDAAF0u;
}
