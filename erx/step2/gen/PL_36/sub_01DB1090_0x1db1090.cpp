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

// Function: sub_01DB1090
// Address: 0x1db1090 - 0x1db1098
void sub_01DB1090_0x1db1090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB1090_0x1db1090");
#endif

    ctx->pc = 0x1db1090u;

    // 0x1db1090: 0x80b0f02  j           func_2C3C08
    ctx->pc = 0x1DB1090u;
    ctx->pc = 0x2C3C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C08u, 0x1DB1090u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DB1098u;
}
