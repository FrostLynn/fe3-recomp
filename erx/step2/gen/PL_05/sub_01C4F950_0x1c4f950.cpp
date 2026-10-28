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

// Function: sub_01C4F950
// Address: 0x1c4f950 - 0x1c4f960
void sub_01C4F950_0x1c4f950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C4F950_0x1c4f950");
#endif

    ctx->pc = 0x1c4f950u;

    // 0x1c4f950: 0x80d981a  j           func_366068
    ctx->pc = 0x1C4F950u;
    ctx->pc = 0x366068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366068u, 0x1C4F950u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C4F958u;
    // 0x1c4f958: 0x0  nop
    ctx->pc = 0x1c4f958u;
    // NOP
    // 0x1c4f95c: 0x0  nop
    ctx->pc = 0x1c4f95cu;
    // NOP
    ctx->pc = 0x1c4f960u;
}
