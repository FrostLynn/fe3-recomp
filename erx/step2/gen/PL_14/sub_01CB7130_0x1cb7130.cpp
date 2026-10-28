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

// Function: sub_01CB7130
// Address: 0x1cb7130 - 0x1cb7138
void sub_01CB7130_0x1cb7130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB7130_0x1cb7130");
#endif

    ctx->pc = 0x1cb7130u;

    // 0x1cb7130: 0x80b0f40  j           func_2C3D00
    ctx->pc = 0x1CB7130u;
    ctx->pc = 0x2C3D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3D00u, 0x1CB7130u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CB7138u;
}
