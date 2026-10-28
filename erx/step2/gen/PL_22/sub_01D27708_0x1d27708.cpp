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

// Function: sub_01D27708
// Address: 0x1d27708 - 0x1d27710
void sub_01D27708_0x1d27708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D27708_0x1d27708");
#endif

    ctx->pc = 0x1d27708u;

    // 0x1d27708: 0x80b1a4c  j           func_2C6930
    ctx->pc = 0x1D27708u;
    ctx->pc = 0x2C6930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6930u, 0x1D27708u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D27710u;
}
