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

// Function: sub_01CDA538
// Address: 0x1cda538 - 0x1cda540
void sub_01CDA538_0x1cda538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDA538_0x1cda538");
#endif

    ctx->pc = 0x1cda538u;

    // 0x1cda538: 0x80b1cfa  j           func_2C73E8
    ctx->pc = 0x1CDA538u;
    ctx->pc = 0x2C73E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C73E8u, 0x1CDA538u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CDA540u;
}
