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

// Function: sub_01D5D028
// Address: 0x1d5d028 - 0x1d5d030
void sub_01D5D028_0x1d5d028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D5D028_0x1d5d028");
#endif

    ctx->pc = 0x1d5d028u;

    // 0x1d5d028: 0x80b1d54  j           func_2C7550
    ctx->pc = 0x1D5D028u;
    ctx->pc = 0x2C7550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7550u, 0x1D5D028u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D5D030u;
}
