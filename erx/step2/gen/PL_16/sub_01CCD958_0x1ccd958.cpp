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

// Function: sub_01CCD958
// Address: 0x1ccd958 - 0x1ccd960
void sub_01CCD958_0x1ccd958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCD958_0x1ccd958");
#endif

    ctx->pc = 0x1ccd958u;

    // 0x1ccd958: 0x80b11c6  j           func_2C4718
    ctx->pc = 0x1CCD958u;
    ctx->pc = 0x2C4718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4718u, 0x1CCD958u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CCD960u;
}
