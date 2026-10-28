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

// Function: sub_01C2F898
// Address: 0x1c2f898 - 0x1c2f8a0
void sub_01C2F898_0x1c2f898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C2F898_0x1c2f898");
#endif

    ctx->pc = 0x1c2f898u;

    // 0x1c2f898: 0x80b0eee  j           func_2C3BB8
    ctx->pc = 0x1C2F898u;
    ctx->pc = 0x2C3BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3BB8u, 0x1C2F898u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C2F8A0u;
}
