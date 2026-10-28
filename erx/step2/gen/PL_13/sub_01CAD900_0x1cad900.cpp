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

// Function: sub_01CAD900
// Address: 0x1cad900 - 0x1cad908
void sub_01CAD900_0x1cad900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CAD900_0x1cad900");
#endif

    ctx->pc = 0x1cad900u;

    // 0x1cad900: 0x80b24e8  j           func_2C93A0
    ctx->pc = 0x1CAD900u;
    ctx->pc = 0x2C93A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C93A0u, 0x1CAD900u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CAD908u;
}
