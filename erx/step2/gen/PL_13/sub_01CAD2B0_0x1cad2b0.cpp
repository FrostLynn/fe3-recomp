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

// Function: sub_01CAD2B0
// Address: 0x1cad2b0 - 0x1cad2b8
void sub_01CAD2B0_0x1cad2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CAD2B0_0x1cad2b0");
#endif

    ctx->pc = 0x1cad2b0u;

    // 0x1cad2b0: 0x80b0c76  j           func_2C31D8
    ctx->pc = 0x1CAD2B0u;
    ctx->pc = 0x2C31D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C31D8u, 0x1CAD2B0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CAD2B8u;
}
