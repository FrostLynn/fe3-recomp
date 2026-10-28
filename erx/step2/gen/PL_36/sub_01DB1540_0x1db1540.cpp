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

// Function: sub_01DB1540
// Address: 0x1db1540 - 0x1db1548
void sub_01DB1540_0x1db1540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB1540_0x1db1540");
#endif

    ctx->pc = 0x1db1540u;

    // 0x1db1540: 0x80b1dc6  j           func_2C7718
    ctx->pc = 0x1DB1540u;
    ctx->pc = 0x2C7718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7718u, 0x1DB1540u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DB1548u;
}
