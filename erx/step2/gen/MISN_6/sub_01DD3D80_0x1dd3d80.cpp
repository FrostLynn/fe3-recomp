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

// Function: sub_01DD3D80
// Address: 0x1dd3d80 - 0x1dd3d98
void sub_01DD3D80_0x1dd3d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD3D80_0x1dd3d80");
#endif

    ctx->pc = 0x1dd3d80u;

    // 0x1dd3d80: 0x8c8f081c  lw          $t7, 0x81C($a0)
    ctx->pc = 0x1dd3d80u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2076)));
    // 0x1dd3d84: 0xaf282a  slt         $a1, $a1, $t7
    ctx->pc = 0x1dd3d84u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x1dd3d88: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x1dd3d88u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1dd3d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD3D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD3D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD3D8Cu;
        // 0x1dd3d90: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD3D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD3D94u;
    // 0x1dd3d94: 0x0  nop
    ctx->pc = 0x1dd3d94u;
    // NOP
    ctx->pc = 0x1dd3d98u;
}
