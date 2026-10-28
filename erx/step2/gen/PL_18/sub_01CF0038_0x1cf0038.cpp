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

// Function: sub_01CF0038
// Address: 0x1cf0038 - 0x1cf0048
void sub_01CF0038_0x1cf0038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CF0038_0x1cf0038");
#endif

    ctx->pc = 0x1cf0038u;

    // 0x1cf0038: 0x8083be6  j           func_20EF98
    ctx->pc = 0x1CF0038u;
    ctx->pc = 0x20EF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EF98u, 0x1CF0038u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CF0040u;
    // 0x1cf0040: 0x0  nop
    ctx->pc = 0x1cf0040u;
    // NOP
    // 0x1cf0044: 0x0  nop
    ctx->pc = 0x1cf0044u;
    // NOP
    ctx->pc = 0x1cf0048u;
}
