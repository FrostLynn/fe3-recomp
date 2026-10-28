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

// Function: sub_01C2FC80
// Address: 0x1c2fc80 - 0x1c2fc88
void sub_01C2FC80_0x1c2fc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C2FC80_0x1c2fc80");
#endif

    ctx->pc = 0x1c2fc80u;

    // 0x1c2fc80: 0x80b120e  j           func_2C4838
    ctx->pc = 0x1C2FC80u;
    ctx->pc = 0x2C4838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4838u, 0x1C2FC80u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C2FC88u;
}
