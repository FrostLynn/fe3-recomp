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

// Function: sub_01C10000
// Address: 0x1c10000 - 0x1c10008
void sub_01C10000_0x1c10000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C10000_0x1c10000");
#endif

    ctx->pc = 0x1c10000u;

    // 0x1c10000: 0x80b274e  j           func_2C9D38
    ctx->pc = 0x1C10000u;
    ctx->pc = 0x2C9D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9D38u, 0x1C10000u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C10008u;
}
