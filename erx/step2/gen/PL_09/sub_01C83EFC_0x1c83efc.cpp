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

// Function: sub_01C83EFC
// Address: 0x1c83efc - 0x1c83f0c
void sub_01C83EFC_0x1c83efc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C83EFC_0x1c83efc");
#endif

    ctx->pc = 0x1c83efcu;

    // 0x1c83efc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C83EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C83EFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C83F04u;
    // 0x1c83f04: 0x0  nop
    ctx->pc = 0x1c83f04u;
    // NOP
    // 0x1c83f08: 0x0  nop
    ctx->pc = 0x1c83f08u;
    // NOP
    ctx->pc = 0x1c83f0cu;
}
