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

// Function: sub_01CAD578
// Address: 0x1cad578 - 0x1cad580
void sub_01CAD578_0x1cad578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CAD578_0x1cad578");
#endif

    ctx->pc = 0x1cad578u;

    // 0x1cad578: 0x80b104a  j           func_2C4128
    ctx->pc = 0x1CAD578u;
    ctx->pc = 0x2C4128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4128u, 0x1CAD578u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CAD580u;
}
