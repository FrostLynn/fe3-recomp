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

// Function: sub_01CFD490
// Address: 0x1cfd490 - 0x1cfd498
void sub_01CFD490_0x1cfd490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFD490_0x1cfd490");
#endif

    ctx->pc = 0x1cfd490u;

    // 0x1cfd490: 0x80b1c44  j           func_2C7110
    ctx->pc = 0x1CFD490u;
    ctx->pc = 0x2C7110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7110u, 0x1CFD490u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CFD498u;
}
