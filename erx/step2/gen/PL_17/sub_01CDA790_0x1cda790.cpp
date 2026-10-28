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

// Function: sub_01CDA790
// Address: 0x1cda790 - 0x1cda798
void sub_01CDA790_0x1cda790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDA790_0x1cda790");
#endif

    ctx->pc = 0x1cda790u;

    // 0x1cda790: 0x80b127c  j           func_2C49F0
    ctx->pc = 0x1CDA790u;
    ctx->pc = 0x2C49F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C49F0u, 0x1CDA790u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CDA798u;
}
