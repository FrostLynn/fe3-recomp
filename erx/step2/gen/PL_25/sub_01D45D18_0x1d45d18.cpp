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

// Function: sub_01D45D18
// Address: 0x1d45d18 - 0x1d45d20
void sub_01D45D18_0x1d45d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D45D18_0x1d45d18");
#endif

    ctx->pc = 0x1d45d18u;

    // 0x1d45d18: 0x80d97d4  j           func_365F50
    ctx->pc = 0x1D45D18u;
    ctx->pc = 0x365F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x365F50u, 0x1D45D18u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D45D20u;
}
