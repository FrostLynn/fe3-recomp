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

// Function: sub_01D9F0AC
// Address: 0x1d9f0ac - 0x1d9f0bc
void sub_01D9F0AC_0x1d9f0ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D9F0AC_0x1d9f0ac");
#endif

    ctx->pc = 0x1d9f0acu;

    // 0x1d9f0ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9F0ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9F0ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9F0B4u;
    // 0x1d9f0b4: 0x0  nop
    ctx->pc = 0x1d9f0b4u;
    // NOP
    // 0x1d9f0b8: 0x0  nop
    ctx->pc = 0x1d9f0b8u;
    // NOP
    ctx->pc = 0x1d9f0bcu;
}
