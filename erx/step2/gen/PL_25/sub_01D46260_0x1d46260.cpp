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

// Function: sub_01D46260
// Address: 0x1d46260 - 0x1d46268
void sub_01D46260_0x1d46260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D46260_0x1d46260");
#endif

    ctx->pc = 0x1d46260u;

    // 0x1d46260: 0x80b120e  j           func_2C4838
    ctx->pc = 0x1D46260u;
    ctx->pc = 0x2C4838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4838u, 0x1D46260u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D46268u;
}
