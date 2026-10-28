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

// Function: sub_01CDA7E8
// Address: 0x1cda7e8 - 0x1cda7f0
void sub_01CDA7E8_0x1cda7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDA7E8_0x1cda7e8");
#endif

    ctx->pc = 0x1cda7e8u;

    // 0x1cda7e8: 0x80b1418  j           func_2C5060
    ctx->pc = 0x1CDA7E8u;
    ctx->pc = 0x2C5060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5060u, 0x1CDA7E8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CDA7F0u;
}
