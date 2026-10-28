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

// Function: sub_01C75960
// Address: 0x1c75960 - 0x1c75968
void sub_01C75960_0x1c75960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C75960_0x1c75960");
#endif

    ctx->pc = 0x1c75960u;

    // 0x1c75960: 0x80a96ba  j           func_2A5AE8
    ctx->pc = 0x1C75960u;
    ctx->pc = 0x2A5AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5AE8u, 0x1C75960u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C75968u;
}
