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

// Function: sub_01CEF690
// Address: 0x1cef690 - 0x1cef698
void sub_01CEF690_0x1cef690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CEF690_0x1cef690");
#endif

    ctx->pc = 0x1cef690u;

    // 0x1cef690: 0x80b0ee2  j           func_2C3B88
    ctx->pc = 0x1CEF690u;
    ctx->pc = 0x2C3B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3B88u, 0x1CEF690u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CEF698u;
}
