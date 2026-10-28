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

// Function: sub_01D45EC0
// Address: 0x1d45ec0 - 0x1d45ec8
void sub_01D45EC0_0x1d45ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D45EC0_0x1d45ec0");
#endif

    ctx->pc = 0x1d45ec0u;

    // 0x1d45ec0: 0x80b0c54  j           func_2C3150
    ctx->pc = 0x1D45EC0u;
    ctx->pc = 0x2C3150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3150u, 0x1D45EC0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D45EC8u;
}
