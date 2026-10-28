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

// Function: sub_01D46610
// Address: 0x1d46610 - 0x1d46618
void sub_01D46610_0x1d46610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D46610_0x1d46610");
#endif

    ctx->pc = 0x1d46610u;

    // 0x1d46610: 0x80b2800  j           func_2CA000
    ctx->pc = 0x1D46610u;
    ctx->pc = 0x2CA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA000u, 0x1D46610u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D46618u;
}
