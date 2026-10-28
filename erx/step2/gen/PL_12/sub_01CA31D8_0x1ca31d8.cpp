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

// Function: sub_01CA31D8
// Address: 0x1ca31d8 - 0x1ca31e0
void sub_01CA31D8_0x1ca31d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CA31D8_0x1ca31d8");
#endif

    ctx->pc = 0x1ca31d8u;

    // 0x1ca31d8: 0x8099f70  j           func_267DC0
    ctx->pc = 0x1CA31D8u;
    ctx->pc = 0x267DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267DC0u, 0x1CA31D8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CA31E0u;
}
