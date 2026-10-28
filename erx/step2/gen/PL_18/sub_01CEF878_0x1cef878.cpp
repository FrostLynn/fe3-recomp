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

// Function: sub_01CEF878
// Address: 0x1cef878 - 0x1cef880
void sub_01CEF878_0x1cef878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CEF878_0x1cef878");
#endif

    ctx->pc = 0x1cef878u;

    // 0x1cef878: 0x80b1584  j           func_2C5610
    ctx->pc = 0x1CEF878u;
    ctx->pc = 0x2C5610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5610u, 0x1CEF878u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CEF880u;
}
