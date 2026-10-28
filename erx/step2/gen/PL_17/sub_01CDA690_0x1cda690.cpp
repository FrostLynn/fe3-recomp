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

// Function: sub_01CDA690
// Address: 0x1cda690 - 0x1cda698
void sub_01CDA690_0x1cda690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDA690_0x1cda690");
#endif

    ctx->pc = 0x1cda690u;

    // 0x1cda690: 0x80b0ffe  j           func_2C3FF8
    ctx->pc = 0x1CDA690u;
    ctx->pc = 0x2C3FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3FF8u, 0x1CDA690u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CDA698u;
}
