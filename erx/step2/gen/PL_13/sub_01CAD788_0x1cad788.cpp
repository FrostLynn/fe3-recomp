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

// Function: sub_01CAD788
// Address: 0x1cad788 - 0x1cad790
void sub_01CAD788_0x1cad788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CAD788_0x1cad788");
#endif

    ctx->pc = 0x1cad788u;

    // 0x1cad788: 0x80b1f10  j           func_2C7C40
    ctx->pc = 0x1CAD788u;
    ctx->pc = 0x2C7C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7C40u, 0x1CAD788u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CAD790u;
}
