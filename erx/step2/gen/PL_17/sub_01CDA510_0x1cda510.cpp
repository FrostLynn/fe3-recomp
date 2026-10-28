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

// Function: sub_01CDA510
// Address: 0x1cda510 - 0x1cda518
void sub_01CDA510_0x1cda510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDA510_0x1cda510");
#endif

    ctx->pc = 0x1cda510u;

    // 0x1cda510: 0x80b1982  j           func_2C6608
    ctx->pc = 0x1CDA510u;
    ctx->pc = 0x2C6608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6608u, 0x1CDA510u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CDA518u;
}
