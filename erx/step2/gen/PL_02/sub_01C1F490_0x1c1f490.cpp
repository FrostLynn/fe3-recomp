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

// Function: sub_01C1F490
// Address: 0x1c1f490 - 0x1c1f498
void sub_01C1F490_0x1c1f490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C1F490_0x1c1f490");
#endif

    ctx->pc = 0x1c1f490u;

    // 0x1c1f490: 0x80b1622  j           func_2C5888
    ctx->pc = 0x1C1F490u;
    ctx->pc = 0x2C5888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5888u, 0x1C1F490u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C1F498u;
}
