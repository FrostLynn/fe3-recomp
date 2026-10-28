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

// Function: sub_01DD8368
// Address: 0x1dd8368 - 0x1dd8370
void sub_01DD8368_0x1dd8368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD8368_0x1dd8368");
#endif

    ctx->pc = 0x1dd8368u;

    // 0x1dd8368: 0x80a627a  j           func_2989E8
    ctx->pc = 0x1DD8368u;
    ctx->pc = 0x2989E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2989E8u, 0x1DD8368u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DD8370u;
}
