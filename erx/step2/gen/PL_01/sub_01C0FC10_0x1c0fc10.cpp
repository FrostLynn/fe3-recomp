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

// Function: sub_01C0FC10
// Address: 0x1c0fc10 - 0x1c0fc18
void sub_01C0FC10_0x1c0fc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C0FC10_0x1c0fc10");
#endif

    ctx->pc = 0x1c0fc10u;

    // 0x1c0fc10: 0x80b113e  j           func_2C44F8
    ctx->pc = 0x1C0FC10u;
    ctx->pc = 0x2C44F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C44F8u, 0x1C0FC10u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C0FC18u;
}
