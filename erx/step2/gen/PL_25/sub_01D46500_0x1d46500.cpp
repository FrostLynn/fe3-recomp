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

// Function: sub_01D46500
// Address: 0x1d46500 - 0x1d46508
void sub_01D46500_0x1d46500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D46500_0x1d46500");
#endif

    ctx->pc = 0x1d46500u;

    // 0x1d46500: 0x80b2480  j           func_2C9200
    ctx->pc = 0x1D46500u;
    ctx->pc = 0x2C9200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9200u, 0x1D46500u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D46508u;
}
