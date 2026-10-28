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

// Function: sub_01C50080
// Address: 0x1c50080 - 0x1c50088
void sub_01C50080_0x1c50080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C50080_0x1c50080");
#endif

    ctx->pc = 0x1c50080u;

    // 0x1c50080: 0x80b2120  j           func_2C8480
    ctx->pc = 0x1C50080u;
    ctx->pc = 0x2C8480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8480u, 0x1C50080u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C50088u;
}
