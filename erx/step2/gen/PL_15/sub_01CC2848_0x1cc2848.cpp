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

// Function: sub_01CC2848
// Address: 0x1cc2848 - 0x1cc2850
void sub_01CC2848_0x1cc2848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC2848_0x1cc2848");
#endif

    ctx->pc = 0x1cc2848u;

    // 0x1cc2848: 0x80b0fb0  j           func_2C3EC0
    ctx->pc = 0x1CC2848u;
    ctx->pc = 0x2C3EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3EC0u, 0x1CC2848u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CC2850u;
}
