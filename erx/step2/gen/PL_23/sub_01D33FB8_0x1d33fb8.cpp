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

// Function: sub_01D33FB8
// Address: 0x1d33fb8 - 0x1d33fc0
void sub_01D33FB8_0x1d33fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D33FB8_0x1d33fb8");
#endif

    ctx->pc = 0x1d33fb8u;

    // 0x1d33fb8: 0x80b2e78  j           func_2CB9E0
    ctx->pc = 0x1D33FB8u;
    ctx->pc = 0x2CB9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB9E0u, 0x1D33FB8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D33FC0u;
}
