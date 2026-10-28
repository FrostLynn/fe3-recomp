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

// Function: sub_01D9CD00
// Address: 0x1d9cd00 - 0x1d9cd08
void sub_01D9CD00_0x1d9cd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D9CD00_0x1d9cd00");
#endif

    ctx->pc = 0x1d9cd00u;

    // 0x1d9cd00: 0x80b17b8  j           func_2C5EE0
    ctx->pc = 0x1D9CD00u;
    ctx->pc = 0x2C5EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5EE0u, 0x1D9CD00u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D9CD08u;
}
