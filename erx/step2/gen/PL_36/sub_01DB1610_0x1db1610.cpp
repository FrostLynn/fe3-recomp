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

// Function: sub_01DB1610
// Address: 0x1db1610 - 0x1db1618
void sub_01DB1610_0x1db1610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB1610_0x1db1610");
#endif

    ctx->pc = 0x1db1610u;

    // 0x1db1610: 0x80b2052  j           func_2C8148
    ctx->pc = 0x1DB1610u;
    ctx->pc = 0x2C8148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8148u, 0x1DB1610u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DB1618u;
}
