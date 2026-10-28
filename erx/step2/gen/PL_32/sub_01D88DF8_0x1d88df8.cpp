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

// Function: sub_01D88DF8
// Address: 0x1d88df8 - 0x1d88e00
void sub_01D88DF8_0x1d88df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D88DF8_0x1d88df8");
#endif

    ctx->pc = 0x1d88df8u;

    // 0x1d88df8: 0x80b112a  j           func_2C44A8
    ctx->pc = 0x1D88DF8u;
    ctx->pc = 0x2C44A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C44A8u, 0x1D88DF8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D88E00u;
}
