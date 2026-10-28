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

// Function: sub_01C99520
// Address: 0x1c99520 - 0x1c99528
void sub_01C99520_0x1c99520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C99520_0x1c99520");
#endif

    ctx->pc = 0x1c99520u;

    // 0x1c99520: 0x80b2960  j           func_2CA580
    ctx->pc = 0x1C99520u;
    ctx->pc = 0x2CA580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA580u, 0x1C99520u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C99528u;
}
