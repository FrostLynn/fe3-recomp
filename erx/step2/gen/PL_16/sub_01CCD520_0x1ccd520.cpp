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

// Function: sub_01CCD520
// Address: 0x1ccd520 - 0x1ccd528
void sub_01CCD520_0x1ccd520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCD520_0x1ccd520");
#endif

    ctx->pc = 0x1ccd520u;

    // 0x1ccd520: 0x80b0b6a  j           func_2C2DA8
    ctx->pc = 0x1CCD520u;
    ctx->pc = 0x2C2DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2DA8u, 0x1CCD520u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CCD528u;
}
