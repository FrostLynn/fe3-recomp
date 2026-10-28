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

// Function: sub_01DA7718
// Address: 0x1da7718 - 0x1da7720
void sub_01DA7718_0x1da7718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DA7718_0x1da7718");
#endif

    ctx->pc = 0x1da7718u;

    // 0x1da7718: 0x80b2762  j           func_2C9D88
    ctx->pc = 0x1DA7718u;
    ctx->pc = 0x2C9D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9D88u, 0x1DA7718u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DA7720u;
}
