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

// Function: sub_01CDA220
// Address: 0x1cda220 - 0x1cda230
void sub_01CDA220_0x1cda220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDA220_0x1cda220");
#endif

    ctx->pc = 0x1cda220u;

    // 0x1cda220: 0x80d9758  j           func_365D60
    ctx->pc = 0x1CDA220u;
    ctx->pc = 0x365D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x365D60u, 0x1CDA220u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CDA228u;
    // 0x1cda228: 0x0  nop
    ctx->pc = 0x1cda228u;
    // NOP
    // 0x1cda22c: 0x0  nop
    ctx->pc = 0x1cda22cu;
    // NOP
    ctx->pc = 0x1cda230u;
}
