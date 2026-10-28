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

// Function: sub_01C75970
// Address: 0x1c75970 - 0x1c75978
void sub_01C75970_0x1c75970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C75970_0x1c75970");
#endif

    ctx->pc = 0x1c75970u;

    // 0x1c75970: 0x80ad7e2  j           func_2B5F88
    ctx->pc = 0x1C75970u;
    ctx->pc = 0x2B5F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5F88u, 0x1C75970u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C75978u;
}
