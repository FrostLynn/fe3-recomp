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

// Function: sub_01D3E48C
// Address: 0x1d3e48c - 0x1d3e49c
void sub_01D3E48C_0x1d3e48c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D3E48C_0x1d3e48c");
#endif

    ctx->pc = 0x1d3e48cu;

    // 0x1d3e48c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3E48Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3E48Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3E494u;
    // 0x1d3e494: 0x0  nop
    ctx->pc = 0x1d3e494u;
    // NOP
    // 0x1d3e498: 0x0  nop
    ctx->pc = 0x1d3e498u;
    // NOP
    ctx->pc = 0x1d3e49cu;
}
