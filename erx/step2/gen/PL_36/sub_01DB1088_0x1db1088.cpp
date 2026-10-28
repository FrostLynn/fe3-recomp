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

// Function: sub_01DB1088
// Address: 0x1db1088 - 0x1db1090
void sub_01DB1088_0x1db1088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB1088_0x1db1088");
#endif

    ctx->pc = 0x1db1088u;

    // 0x1db1088: 0x80b0eee  j           func_2C3BB8
    ctx->pc = 0x1DB1088u;
    ctx->pc = 0x2C3BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3BB8u, 0x1DB1088u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DB1090u;
}
