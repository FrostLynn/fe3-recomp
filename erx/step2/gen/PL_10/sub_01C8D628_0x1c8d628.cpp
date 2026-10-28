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

// Function: sub_01C8D628
// Address: 0x1c8d628 - 0x1c8d630
void sub_01C8D628_0x1c8d628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C8D628_0x1c8d628");
#endif

    ctx->pc = 0x1c8d628u;

    // 0x1c8d628: 0x80b2052  j           func_2C8148
    ctx->pc = 0x1C8D628u;
    ctx->pc = 0x2C8148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8148u, 0x1C8D628u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C8D630u;
}
