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

// Function: sub_01CDA688
// Address: 0x1cda688 - 0x1cda690
void sub_01CDA688_0x1cda688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDA688_0x1cda688");
#endif

    ctx->pc = 0x1cda688u;

    // 0x1cda688: 0x80b0fec  j           func_2C3FB0
    ctx->pc = 0x1CDA688u;
    ctx->pc = 0x2C3FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3FB0u, 0x1CDA688u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CDA690u;
}
