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

// Function: sub_01D19B00
// Address: 0x1d19b00 - 0x1d19b08
void sub_01D19B00_0x1d19b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D19B00_0x1d19b00");
#endif

    ctx->pc = 0x1d19b00u;

    // 0x1d19b00: 0x80b2fc0  j           func_2CBF00
    ctx->pc = 0x1D19B00u;
    ctx->pc = 0x2CBF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBF00u, 0x1D19B00u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D19B08u;
}
