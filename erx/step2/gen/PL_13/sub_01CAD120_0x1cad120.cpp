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

// Function: sub_01CAD120
// Address: 0x1cad120 - 0x1cad128
void sub_01CAD120_0x1cad120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CAD120_0x1cad120");
#endif

    ctx->pc = 0x1cad120u;

    // 0x1cad120: 0x80b2e94  j           func_2CBA50
    ctx->pc = 0x1CAD120u;
    ctx->pc = 0x2CBA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA50u, 0x1CAD120u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CAD128u;
}
