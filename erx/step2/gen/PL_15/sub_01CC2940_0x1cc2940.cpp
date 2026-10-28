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

// Function: sub_01CC2940
// Address: 0x1cc2940 - 0x1cc2948
void sub_01CC2940_0x1cc2940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC2940_0x1cc2940");
#endif

    ctx->pc = 0x1cc2940u;

    // 0x1cc2940: 0x80b11b0  j           func_2C46C0
    ctx->pc = 0x1CC2940u;
    ctx->pc = 0x2C46C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C46C0u, 0x1CC2940u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CC2948u;
}
