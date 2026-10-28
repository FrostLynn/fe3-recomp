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

// Function: sub_01D718B4
// Address: 0x1d718b4 - 0x1d718c4
void sub_01D718B4_0x1d718b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D718B4_0x1d718b4");
#endif

    ctx->pc = 0x1d718b4u;

    // 0x1d718b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D718B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D718B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D718BCu;
    // 0x1d718bc: 0x0  nop
    ctx->pc = 0x1d718bcu;
    // NOP
    // 0x1d718c0: 0x0  nop
    ctx->pc = 0x1d718c0u;
    // NOP
    ctx->pc = 0x1d718c4u;
}
