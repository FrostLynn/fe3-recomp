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

// Function: sub_01C4FEA8
// Address: 0x1c4fea8 - 0x1c4feb0
void sub_01C4FEA8_0x1c4fea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C4FEA8_0x1c4fea8");
#endif

    ctx->pc = 0x1c4fea8u;

    // 0x1c4fea8: 0x80b12ba  j           func_2C4AE8
    ctx->pc = 0x1C4FEA8u;
    ctx->pc = 0x2C4AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AE8u, 0x1C4FEA8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C4FEB0u;
}
