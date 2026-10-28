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

// Function: sub_01C81970
// Address: 0x1c81970 - 0x1c81978
void sub_01C81970_0x1c81970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C81970_0x1c81970");
#endif

    ctx->pc = 0x1c81970u;

    // 0x1c81970: 0x80b2aee  j           func_2CABB8
    ctx->pc = 0x1C81970u;
    ctx->pc = 0x2CABB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABB8u, 0x1C81970u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C81978u;
}
