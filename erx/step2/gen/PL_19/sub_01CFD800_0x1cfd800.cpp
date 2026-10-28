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

// Function: sub_01CFD800
// Address: 0x1cfd800 - 0x1cfd808
void sub_01CFD800_0x1cfd800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFD800_0x1cfd800");
#endif

    ctx->pc = 0x1cfd800u;

    // 0x1cfd800: 0x80b141a  j           func_2C5068
    ctx->pc = 0x1CFD800u;
    ctx->pc = 0x2C5068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5068u, 0x1CFD800u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CFD808u;
}
