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

// Function: sub_01C1F820
// Address: 0x1c1f820 - 0x1c1f828
void sub_01C1F820_0x1c1f820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C1F820_0x1c1f820");
#endif

    ctx->pc = 0x1c1f820u;

    // 0x1c1f820: 0x80b200c  j           func_2C8030
    ctx->pc = 0x1C1F820u;
    ctx->pc = 0x2C8030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8030u, 0x1C1F820u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C1F828u;
}
