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

// Function: sub_01C99558
// Address: 0x1c99558 - 0x1c99560
void sub_01C99558_0x1c99558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C99558_0x1c99558");
#endif

    ctx->pc = 0x1c99558u;

    // 0x1c99558: 0x80b2aee  j           func_2CABB8
    ctx->pc = 0x1C99558u;
    ctx->pc = 0x2CABB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABB8u, 0x1C99558u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C99560u;
}
