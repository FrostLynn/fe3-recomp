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

// Function: sub_01D5D218
// Address: 0x1d5d218 - 0x1d5d220
void sub_01D5D218_0x1d5d218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D5D218_0x1d5d218");
#endif

    ctx->pc = 0x1d5d218u;

    // 0x1d5d218: 0x80b11c6  j           func_2C4718
    ctx->pc = 0x1D5D218u;
    ctx->pc = 0x2C4718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4718u, 0x1D5D218u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D5D220u;
}
