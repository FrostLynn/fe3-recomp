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

// Function: sub_01C30218
// Address: 0x1c30218 - 0x1c30220
void sub_01C30218_0x1c30218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C30218_0x1c30218");
#endif

    ctx->pc = 0x1c30218u;

    // 0x1c30218: 0x80b338a  j           func_2CCE28
    ctx->pc = 0x1C30218u;
    ctx->pc = 0x2CCE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCE28u, 0x1C30218u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C30220u;
}
