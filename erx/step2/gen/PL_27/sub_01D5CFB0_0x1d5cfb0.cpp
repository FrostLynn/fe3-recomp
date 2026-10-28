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

// Function: sub_01D5CFB0
// Address: 0x1d5cfb0 - 0x1d5cfb8
void sub_01D5CFB0_0x1d5cfb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D5CFB0_0x1d5cfb0");
#endif

    ctx->pc = 0x1d5cfb0u;

    // 0x1d5cfb0: 0x80b19fa  j           func_2C67E8
    ctx->pc = 0x1D5CFB0u;
    ctx->pc = 0x2C67E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C67E8u, 0x1D5CFB0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D5CFB8u;
}
