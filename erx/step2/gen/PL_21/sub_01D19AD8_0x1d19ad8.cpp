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

// Function: sub_01D19AD8
// Address: 0x1d19ad8 - 0x1d19ae0
void sub_01D19AD8_0x1d19ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D19AD8_0x1d19ad8");
#endif

    ctx->pc = 0x1d19ad8u;

    // 0x1d19ad8: 0x80ae04e  j           func_2B8138
    ctx->pc = 0x1D19AD8u;
    ctx->pc = 0x2B8138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8138u, 0x1D19AD8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D19AE0u;
}
