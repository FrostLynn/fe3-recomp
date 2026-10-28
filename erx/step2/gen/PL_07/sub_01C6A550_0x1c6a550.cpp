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

// Function: sub_01C6A550
// Address: 0x1c6a550 - 0x1c6a558
void sub_01C6A550_0x1c6a550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C6A550_0x1c6a550");
#endif

    ctx->pc = 0x1c6a550u;

    // 0x1c6a550: 0x80b2066  j           func_2C8198
    ctx->pc = 0x1C6A550u;
    ctx->pc = 0x2C8198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8198u, 0x1C6A550u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C6A558u;
}
