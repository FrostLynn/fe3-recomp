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

// Function: sub_01CDA278
// Address: 0x1cda278 - 0x1cda280
void sub_01CDA278_0x1cda278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDA278_0x1cda278");
#endif

    ctx->pc = 0x1cda278u;

    // 0x1cda278: 0x80b2bda  j           func_2CAF68
    ctx->pc = 0x1CDA278u;
    ctx->pc = 0x2CAF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAF68u, 0x1CDA278u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CDA280u;
}
