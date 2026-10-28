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

// Function: sub_01CFD458
// Address: 0x1cfd458 - 0x1cfd460
void sub_01CFD458_0x1cfd458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFD458_0x1cfd458");
#endif

    ctx->pc = 0x1cfd458u;

    // 0x1cfd458: 0x80b18de  j           func_2C6378
    ctx->pc = 0x1CFD458u;
    ctx->pc = 0x2C6378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6378u, 0x1CFD458u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CFD460u;
}
