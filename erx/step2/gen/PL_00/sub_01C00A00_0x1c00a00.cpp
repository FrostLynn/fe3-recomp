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

// Function: sub_01C00A00
// Address: 0x1c00a00 - 0x1c00a08
void sub_01C00A00_0x1c00a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C00A00_0x1c00a00");
#endif

    ctx->pc = 0x1c00a00u;

    // 0x1c00a00: 0x80b0faa  j           func_2C3EA8
    ctx->pc = 0x1C00A00u;
    ctx->pc = 0x2C3EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3EA8u, 0x1C00A00u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C00A08u;
}
