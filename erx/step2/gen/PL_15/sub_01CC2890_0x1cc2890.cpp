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

// Function: sub_01CC2890
// Address: 0x1cc2890 - 0x1cc2898
void sub_01CC2890_0x1cc2890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC2890_0x1cc2890");
#endif

    ctx->pc = 0x1cc2890u;

    // 0x1cc2890: 0x80b1012  j           func_2C4048
    ctx->pc = 0x1CC2890u;
    ctx->pc = 0x2C4048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4048u, 0x1CC2890u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CC2898u;
}
