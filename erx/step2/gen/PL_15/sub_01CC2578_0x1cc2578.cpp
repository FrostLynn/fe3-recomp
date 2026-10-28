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

// Function: sub_01CC2578
// Address: 0x1cc2578 - 0x1cc2580
void sub_01CC2578_0x1cc2578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC2578_0x1cc2578");
#endif

    ctx->pc = 0x1cc2578u;

    // 0x1cc2578: 0x80b0ee8  j           func_2C3BA0
    ctx->pc = 0x1CC2578u;
    ctx->pc = 0x2C3BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3BA0u, 0x1CC2578u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CC2580u;
}
