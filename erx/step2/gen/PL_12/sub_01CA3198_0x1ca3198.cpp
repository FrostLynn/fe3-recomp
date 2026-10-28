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

// Function: sub_01CA3198
// Address: 0x1ca3198 - 0x1ca31a0
void sub_01CA3198_0x1ca3198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CA3198_0x1ca3198");
#endif

    ctx->pc = 0x1ca3198u;

    // 0x1ca3198: 0x80b29f2  j           func_2CA7C8
    ctx->pc = 0x1CA3198u;
    ctx->pc = 0x2CA7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA7C8u, 0x1CA3198u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CA31A0u;
}
