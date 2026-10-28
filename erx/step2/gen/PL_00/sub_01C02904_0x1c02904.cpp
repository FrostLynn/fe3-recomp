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

// Function: sub_01C02904
// Address: 0x1c02904 - 0x1c02914
void sub_01C02904_0x1c02904(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C02904_0x1c02904");
#endif

    ctx->pc = 0x1c02904u;

    // 0x1c02904: 0x3e00008  jr          $ra
    ctx->pc = 0x1C02904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C02904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0290Cu;
    // 0x1c0290c: 0x0  nop
    ctx->pc = 0x1c0290cu;
    // NOP
    // 0x1c02910: 0x0  nop
    ctx->pc = 0x1c02910u;
    // NOP
    ctx->pc = 0x1c02914u;
}
