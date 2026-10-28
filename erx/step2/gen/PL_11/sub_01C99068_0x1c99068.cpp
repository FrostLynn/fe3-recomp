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

// Function: sub_01C99068
// Address: 0x1c99068 - 0x1c99070
void sub_01C99068_0x1c99068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C99068_0x1c99068");
#endif

    ctx->pc = 0x1c99068u;

    // 0x1c99068: 0x80b11fc  j           func_2C47F0
    ctx->pc = 0x1C99068u;
    ctx->pc = 0x2C47F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C47F0u, 0x1C99068u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C99070u;
}
