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

// Function: sub_01D45F60
// Address: 0x1d45f60 - 0x1d45f68
void sub_01D45F60_0x1d45f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D45F60_0x1d45f60");
#endif

    ctx->pc = 0x1d45f60u;

    // 0x1d45f60: 0x80b1c14  j           func_2C7050
    ctx->pc = 0x1D45F60u;
    ctx->pc = 0x2C7050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7050u, 0x1D45F60u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D45F68u;
}
