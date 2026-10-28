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

// Function: sub_01D19B08
// Address: 0x1d19b08 - 0x1d19b10
void sub_01D19B08_0x1d19b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D19B08_0x1d19b08");
#endif

    ctx->pc = 0x1d19b08u;

    // 0x1d19b08: 0x80b3100  j           func_2CC400
    ctx->pc = 0x1D19B08u;
    ctx->pc = 0x2CC400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC400u, 0x1D19B08u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D19B10u;
}
