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

// Function: sub_01CF0030
// Address: 0x1cf0030 - 0x1cf0038
void sub_01CF0030_0x1cf0030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CF0030_0x1cf0030");
#endif

    ctx->pc = 0x1cf0030u;

    // 0x1cf0030: 0x80b3344  j           func_2CCD10
    ctx->pc = 0x1CF0030u;
    ctx->pc = 0x2CCD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCD10u, 0x1CF0030u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CF0038u;
}
