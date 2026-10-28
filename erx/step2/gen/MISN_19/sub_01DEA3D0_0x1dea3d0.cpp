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

// Function: sub_01DEA3D0
// Address: 0x1dea3d0 - 0x1dea3f8
void sub_01DEA3D0_0x1dea3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DEA3D0_0x1dea3d0");
#endif

    ctx->pc = 0x1dea3d0u;

    // 0x1dea3d0: 0x8f8d8018  lw          $t5, -0x7FE8($gp)
    ctx->pc = 0x1dea3d0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dea3d4: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x1dea3d4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1dea3d8: 0xaf80801c  sw          $zero, -0x7FE4($gp)
    ctx->pc = 0x1dea3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934556), GPR_U32(ctx, 0));
    // 0x1dea3dc: 0x95ae056e  lhu         $t6, 0x56E($t5)
    ctx->pc = 0x1dea3dcu;
    SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 1390)));
    // 0x1dea3e0: 0x8dac00dc  lw          $t4, 0xDC($t5)
    ctx->pc = 0x1dea3e0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 220)));
    // 0x1dea3e4: 0x35ce0004  ori         $t6, $t6, 0x4
    ctx->pc = 0x1dea3e4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)4);
    // 0x1dea3e8: 0xad8f0cd8  sw          $t7, 0xCD8($t4)
    ctx->pc = 0x1dea3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 3288), GPR_U32(ctx, 15));
    // 0x1dea3ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEA3ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEA3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA3ECu;
        // 0x1dea3f0: 0xa5ae056e  sh          $t6, 0x56E($t5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 13), 1390), (uint16_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEA3ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEA3F4u;
    // 0x1dea3f4: 0x0  nop
    ctx->pc = 0x1dea3f4u;
    // NOP
    ctx->pc = 0x1dea3f8u;
}
