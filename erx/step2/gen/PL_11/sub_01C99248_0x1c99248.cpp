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

// Function: sub_01C99248
// Address: 0x1c99248 - 0x1c99250
void sub_01C99248_0x1c99248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C99248_0x1c99248");
#endif

    ctx->pc = 0x1c99248u;

    // 0x1c99248: 0x80b20ea  j           func_2C83A8
    ctx->pc = 0x1C99248u;
    ctx->pc = 0x2C83A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C83A8u, 0x1C99248u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C99250u;
}
