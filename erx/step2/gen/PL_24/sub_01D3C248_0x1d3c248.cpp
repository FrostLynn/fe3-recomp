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

// Function: sub_01D3C248
// Address: 0x1d3c248 - 0x1d3c250
void sub_01D3C248_0x1d3c248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D3C248_0x1d3c248");
#endif

    ctx->pc = 0x1d3c248u;

    // 0x1d3c248: 0x80b1556  j           func_2C5558
    ctx->pc = 0x1D3C248u;
    ctx->pc = 0x2C5558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5558u, 0x1D3C248u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D3C250u;
}
