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

// Function: sub_01CEF780
// Address: 0x1cef780 - 0x1cef788
void sub_01CEF780_0x1cef780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CEF780_0x1cef780");
#endif

    ctx->pc = 0x1cef780u;

    // 0x1cef780: 0x80b1be0  j           func_2C6F80
    ctx->pc = 0x1CEF780u;
    ctx->pc = 0x2C6F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6F80u, 0x1CEF780u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CEF788u;
}
