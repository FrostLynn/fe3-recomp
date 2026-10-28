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

// Function: sub_01D46668
// Address: 0x1d46668 - 0x1d46670
void sub_01D46668_0x1d46668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D46668_0x1d46668");
#endif

    ctx->pc = 0x1d46668u;

    // 0x1d46668: 0x80b28ce  j           func_2CA338
    ctx->pc = 0x1D46668u;
    ctx->pc = 0x2CA338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA338u, 0x1D46668u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D46670u;
}
