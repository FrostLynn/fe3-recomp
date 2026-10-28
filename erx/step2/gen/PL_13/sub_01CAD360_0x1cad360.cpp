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

// Function: sub_01CAD360
// Address: 0x1cad360 - 0x1cad368
void sub_01CAD360_0x1cad360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CAD360_0x1cad360");
#endif

    ctx->pc = 0x1cad360u;

    // 0x1cad360: 0x80b19a6  j           func_2C6698
    ctx->pc = 0x1CAD360u;
    ctx->pc = 0x2C6698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6698u, 0x1CAD360u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CAD368u;
}
