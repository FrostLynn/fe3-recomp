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

// Function: sub_01D0C538
// Address: 0x1d0c538 - 0x1d0c540
void sub_01D0C538_0x1d0c538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0C538_0x1d0c538");
#endif

    ctx->pc = 0x1d0c538u;

    // 0x1d0c538: 0x80b24d0  j           func_2C9340
    ctx->pc = 0x1D0C538u;
    ctx->pc = 0x2C9340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9340u, 0x1D0C538u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D0C540u;
}
