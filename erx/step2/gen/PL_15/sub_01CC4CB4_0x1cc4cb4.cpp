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

// Function: sub_01CC4CB4
// Address: 0x1cc4cb4 - 0x1cc4cc4
void sub_01CC4CB4_0x1cc4cb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC4CB4_0x1cc4cb4");
#endif

    ctx->pc = 0x1cc4cb4u;

    // 0x1cc4cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC4CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC4CB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC4CBCu;
    // 0x1cc4cbc: 0x0  nop
    ctx->pc = 0x1cc4cbcu;
    // NOP
    // 0x1cc4cc0: 0x0  nop
    ctx->pc = 0x1cc4cc0u;
    // NOP
    ctx->pc = 0x1cc4cc4u;
}
