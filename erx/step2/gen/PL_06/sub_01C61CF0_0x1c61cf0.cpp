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

// Function: sub_01C61CF0
// Address: 0x1c61cf0 - 0x1c61d20
void sub_01C61CF0_0x1c61cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C61CF0_0x1c61cf0");
#endif

    ctx->pc = 0x1c61cf0u;

    // 0x1c61cf0: 0x240f0148  addiu       $t7, $zero, 0x148
    ctx->pc = 0x1c61cf0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 328));
    // 0x1c61cf4: 0x240e0080  addiu       $t6, $zero, 0x80
    ctx->pc = 0x1c61cf4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c61cf8: 0xac8f0d20  sw          $t7, 0xD20($a0)
    ctx->pc = 0x1c61cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3360), GPR_U32(ctx, 15));
    // 0x1c61cfc: 0xac8e0d00  sw          $t6, 0xD00($a0)
    ctx->pc = 0x1c61cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3328), GPR_U32(ctx, 14));
    // 0x1c61d00: 0x240f007e  addiu       $t7, $zero, 0x7E
    ctx->pc = 0x1c61d00u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x1c61d04: 0xac8f0d04  sw          $t7, 0xD04($a0)
    ctx->pc = 0x1c61d04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3332), GPR_U32(ctx, 15));
    // 0x1c61d08: 0x240e0147  addiu       $t6, $zero, 0x147
    ctx->pc = 0x1c61d08u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 327));
    // 0x1c61d0c: 0xac8e0d18  sw          $t6, 0xD18($a0)
    ctx->pc = 0x1c61d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3352), GPR_U32(ctx, 14));
    // 0x1c61d10: 0x240f014a  addiu       $t7, $zero, 0x14A
    ctx->pc = 0x1c61d10u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 330));
    // 0x1c61d14: 0x3e00008  jr          $ra
    ctx->pc = 0x1C61D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C61D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C61D14u;
        // 0x1c61d18: 0xac8f0d1c  sw          $t7, 0xD1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3356), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C61D14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C61D1Cu;
    // 0x1c61d1c: 0x0  nop
    ctx->pc = 0x1c61d1cu;
    // NOP
    ctx->pc = 0x1c61d20u;
}
