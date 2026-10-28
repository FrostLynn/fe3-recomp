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

// Function: sub_01D7DF08
// Address: 0x1d7df08 - 0x1d7df10
void sub_01D7DF08_0x1d7df08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D7DF08_0x1d7df08");
#endif

    ctx->pc = 0x1d7df08u;

    // 0x1d7df08: 0x80b246e  j           func_2C91B8
    ctx->pc = 0x1D7DF08u;
    ctx->pc = 0x2C91B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C91B8u, 0x1D7DF08u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D7DF10u;
}
