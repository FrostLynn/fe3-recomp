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

// Function: sub_01C00368
// Address: 0x1c00368 - 0x1c00370
void sub_01C00368_0x1c00368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C00368_0x1c00368");
#endif

    ctx->pc = 0x1c00368u;

    // 0x1c00368: 0x80b155a  j           func_2C5568
    ctx->pc = 0x1C00368u;
    ctx->pc = 0x2C5568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5568u, 0x1C00368u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C00370u;
}
