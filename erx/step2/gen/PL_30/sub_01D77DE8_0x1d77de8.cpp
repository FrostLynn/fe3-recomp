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

// Function: sub_01D77DE8
// Address: 0x1d77de8 - 0x1d77df0
void sub_01D77DE8_0x1d77de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D77DE8_0x1d77de8");
#endif

    ctx->pc = 0x1d77de8u;

    // 0x1d77de8: 0x80b1622  j           func_2C5888
    ctx->pc = 0x1D77DE8u;
    ctx->pc = 0x2C5888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5888u, 0x1D77DE8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D77DF0u;
}
