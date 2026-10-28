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

// Function: sub_01C2FF48
// Address: 0x1c2ff48 - 0x1c2ff50
void sub_01C2FF48_0x1c2ff48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C2FF48_0x1c2ff48");
#endif

    ctx->pc = 0x1c2ff48u;

    // 0x1c2ff48: 0x80b24d2  j           func_2C9348
    ctx->pc = 0x1C2FF48u;
    ctx->pc = 0x2C9348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9348u, 0x1C2FF48u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C2FF50u;
}
