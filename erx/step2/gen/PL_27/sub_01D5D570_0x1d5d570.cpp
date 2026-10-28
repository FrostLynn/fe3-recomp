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

// Function: sub_01D5D570
// Address: 0x1d5d570 - 0x1d5d578
void sub_01D5D570_0x1d5d570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D5D570_0x1d5d570");
#endif

    ctx->pc = 0x1d5d570u;

    // 0x1d5d570: 0x80b26b6  j           func_2C9AD8
    ctx->pc = 0x1D5D570u;
    ctx->pc = 0x2C9AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9AD8u, 0x1D5D570u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D5D578u;
}
