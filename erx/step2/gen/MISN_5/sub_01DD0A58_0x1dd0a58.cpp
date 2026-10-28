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

// Function: sub_01DD0A58
// Address: 0x1dd0a58 - 0x1dd0a68
void sub_01DD0A58_0x1dd0a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD0A58_0x1dd0a58");
#endif

    ctx->pc = 0x1dd0a58u;

    // 0x1dd0a58: 0x809cab8  j           func_272AE0
    ctx->pc = 0x1DD0A58u;
    ctx->pc = 0x272AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272AE0u, 0x1DD0A58u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DD0A60u;
    // 0x1dd0a60: 0x0  nop
    ctx->pc = 0x1dd0a60u;
    // NOP
    // 0x1dd0a64: 0x0  nop
    ctx->pc = 0x1dd0a64u;
    // NOP
    ctx->pc = 0x1dd0a68u;
}
