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

// Function: sub_01C8D538
// Address: 0x1c8d538 - 0x1c8d540
void sub_01C8D538_0x1c8d538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C8D538_0x1c8d538");
#endif

    ctx->pc = 0x1c8d538u;

    // 0x1c8d538: 0x80b1540  j           func_2C5500
    ctx->pc = 0x1C8D538u;
    ctx->pc = 0x2C5500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5500u, 0x1C8D538u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C8D540u;
}
