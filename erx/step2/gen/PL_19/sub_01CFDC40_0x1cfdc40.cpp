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

// Function: sub_01CFDC40
// Address: 0x1cfdc40 - 0x1cfdc48
void sub_01CFDC40_0x1cfdc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFDC40_0x1cfdc40");
#endif

    ctx->pc = 0x1cfdc40u;

    // 0x1cfdc40: 0x80b0f40  j           func_2C3D00
    ctx->pc = 0x1CFDC40u;
    ctx->pc = 0x2C3D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3D00u, 0x1CFDC40u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CFDC48u;
}
