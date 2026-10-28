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

// Function: sub_01D9D068
// Address: 0x1d9d068 - 0x1d9d070
void sub_01D9D068_0x1d9d068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D9D068_0x1d9d068");
#endif

    ctx->pc = 0x1d9d068u;

    // 0x1d9d068: 0x80b20ea  j           func_2C83A8
    ctx->pc = 0x1D9D068u;
    ctx->pc = 0x2C83A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C83A8u, 0x1D9D068u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D9D070u;
}
