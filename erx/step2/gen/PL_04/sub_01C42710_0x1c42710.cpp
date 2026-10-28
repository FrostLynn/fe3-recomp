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

// Function: sub_01C42710
// Address: 0x1c42710 - 0x1c42718
void sub_01C42710_0x1c42710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C42710_0x1c42710");
#endif

    ctx->pc = 0x1c42710u;

    // 0x1c42710: 0x80b194a  j           func_2C6528
    ctx->pc = 0x1C42710u;
    ctx->pc = 0x2C6528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6528u, 0x1C42710u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C42718u;
}
