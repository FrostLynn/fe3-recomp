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

// Function: sub_01DE3D8C
// Address: 0x1de3d8c - 0x1de3d9c
void sub_01DE3D8C_0x1de3d8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE3D8C_0x1de3d8c");
#endif

    ctx->pc = 0x1de3d8cu;

    // 0x1de3d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE3D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE3D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE3D94u;
    // 0x1de3d94: 0x0  nop
    ctx->pc = 0x1de3d94u;
    // NOP
    // 0x1de3d98: 0x0  nop
    ctx->pc = 0x1de3d98u;
    // NOP
    ctx->pc = 0x1de3d9cu;
}
