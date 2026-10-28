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

// Function: sub_01DE4E58
// Address: 0x1de4e58 - 0x1de4e60
void sub_01DE4E58_0x1de4e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE4E58_0x1de4e58");
#endif

    ctx->pc = 0x1de4e58u;

    // 0x1de4e58: 0x80a6402  j           func_299008
    ctx->pc = 0x1DE4E58u;
    ctx->pc = 0x299008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299008u, 0x1DE4E58u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DE4E60u;
}
