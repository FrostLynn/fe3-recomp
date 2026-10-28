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

// Function: sub_01D513C0
// Address: 0x1d513c0 - 0x1d513c8
void sub_01D513C0_0x1d513c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D513C0_0x1d513c0");
#endif

    ctx->pc = 0x1d513c0u;

    // 0x1d513c0: 0x80b104c  j           func_2C4130
    ctx->pc = 0x1D513C0u;
    ctx->pc = 0x2C4130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4130u, 0x1D513C0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D513C8u;
}
