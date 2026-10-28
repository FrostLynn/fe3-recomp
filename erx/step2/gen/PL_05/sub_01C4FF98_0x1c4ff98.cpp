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

// Function: sub_01C4FF98
// Address: 0x1c4ff98 - 0x1c4ffa0
void sub_01C4FF98_0x1c4ff98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C4FF98_0x1c4ff98");
#endif

    ctx->pc = 0x1c4ff98u;

    // 0x1c4ff98: 0x80b1e10  j           func_2C7840
    ctx->pc = 0x1C4FF98u;
    ctx->pc = 0x2C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7840u, 0x1C4FF98u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C4FFA0u;
}
