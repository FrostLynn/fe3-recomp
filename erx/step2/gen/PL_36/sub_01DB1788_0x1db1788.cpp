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

// Function: sub_01DB1788
// Address: 0x1db1788 - 0x1db1790
void sub_01DB1788_0x1db1788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB1788_0x1db1788");
#endif

    ctx->pc = 0x1db1788u;

    // 0x1db1788: 0x80b2610  j           func_2C9840
    ctx->pc = 0x1DB1788u;
    ctx->pc = 0x2C9840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9840u, 0x1DB1788u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DB1790u;
}
