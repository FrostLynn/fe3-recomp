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

// Function: sub_01CFD320
// Address: 0x1cfd320 - 0x1cfd328
void sub_01CFD320_0x1cfd320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFD320_0x1cfd320");
#endif

    ctx->pc = 0x1cfd320u;

    // 0x1cfd320: 0x80b0b42  j           func_2C2D08
    ctx->pc = 0x1CFD320u;
    ctx->pc = 0x2C2D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2D08u, 0x1CFD320u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CFD328u;
}
