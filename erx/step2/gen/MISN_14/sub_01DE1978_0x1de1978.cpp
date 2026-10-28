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

// Function: sub_01DE1978
// Address: 0x1de1978 - 0x1de1980
void sub_01DE1978_0x1de1978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE1978_0x1de1978");
#endif

    ctx->pc = 0x1de1978u;

    // 0x1de1978: 0x809cab8  j           func_272AE0
    ctx->pc = 0x1DE1978u;
    ctx->pc = 0x272AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272AE0u, 0x1DE1978u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DE1980u;
}
