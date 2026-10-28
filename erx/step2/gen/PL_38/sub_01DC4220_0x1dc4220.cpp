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

// Function: sub_01DC4220
// Address: 0x1dc4220 - 0x1dc4228
void sub_01DC4220_0x1dc4220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DC4220_0x1dc4220");
#endif

    ctx->pc = 0x1dc4220u;

    // 0x1dc4220: 0x80b2e94  j           func_2CBA50
    ctx->pc = 0x1DC4220u;
    ctx->pc = 0x2CBA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA50u, 0x1DC4220u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DC4228u;
}
