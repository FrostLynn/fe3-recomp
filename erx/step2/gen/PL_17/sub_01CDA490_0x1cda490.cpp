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

// Function: sub_01CDA490
// Address: 0x1cda490 - 0x1cda498
void sub_01CDA490_0x1cda490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDA490_0x1cda490");
#endif

    ctx->pc = 0x1cda490u;

    // 0x1cda490: 0x80b1c68  j           func_2C71A0
    ctx->pc = 0x1CDA490u;
    ctx->pc = 0x2C71A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C71A0u, 0x1CDA490u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CDA498u;
}
