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

// Function: sub_01D9D390
// Address: 0x1d9d390 - 0x1d9d398
void sub_01D9D390_0x1d9d390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D9D390_0x1d9d390");
#endif

    ctx->pc = 0x1d9d390u;

    // 0x1d9d390: 0x80b2b38  j           func_2CACE0
    ctx->pc = 0x1D9D390u;
    ctx->pc = 0x2CACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CACE0u, 0x1D9D390u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D9D398u;
}
