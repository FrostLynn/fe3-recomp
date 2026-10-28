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

// Function: sub_01CFDD48
// Address: 0x1cfdd48 - 0x1cfdd50
void sub_01CFDD48_0x1cfdd48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFDD48_0x1cfdd48");
#endif

    ctx->pc = 0x1cfdd48u;

    // 0x1cfdd48: 0x8086ef6  j           func_21BBD8
    ctx->pc = 0x1CFDD48u;
    ctx->pc = 0x21BBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21BBD8u, 0x1CFDD48u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CFDD50u;
}
