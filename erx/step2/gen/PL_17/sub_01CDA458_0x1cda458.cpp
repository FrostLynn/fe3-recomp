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

// Function: sub_01CDA458
// Address: 0x1cda458 - 0x1cda460
void sub_01CDA458_0x1cda458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDA458_0x1cda458");
#endif

    ctx->pc = 0x1cda458u;

    // 0x1cda458: 0x80b1b18  j           func_2C6C60
    ctx->pc = 0x1CDA458u;
    ctx->pc = 0x2C6C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6C60u, 0x1CDA458u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CDA460u;
}
