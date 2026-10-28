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

// Function: sub_01CF1E98
// Address: 0x1cf1e98 - 0x1cf1f00
void sub_01CF1E98_0x1cf1e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CF1E98_0x1cf1e98");
#endif

    ctx->pc = 0x1cf1e98u;

    // 0x1cf1e98: 0x240f014e  addiu       $t7, $zero, 0x14E
    ctx->pc = 0x1cf1e98u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 334));
    // 0x1cf1e9c: 0x240e014b  addiu       $t6, $zero, 0x14B
    ctx->pc = 0x1cf1e9cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 331));
    // 0x1cf1ea0: 0xac8f0d1c  sw          $t7, 0xD1C($a0)
    ctx->pc = 0x1cf1ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3356), GPR_U32(ctx, 15));
    // 0x1cf1ea4: 0x240d0080  addiu       $t5, $zero, 0x80
    ctx->pc = 0x1cf1ea4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1cf1ea8: 0xac8e0d24  sw          $t6, 0xD24($a0)
    ctx->pc = 0x1cf1ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3364), GPR_U32(ctx, 14));
    // 0x1cf1eac: 0x240c007e  addiu       $t4, $zero, 0x7E
    ctx->pc = 0x1cf1eacu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x1cf1eb0: 0x240f014f  addiu       $t7, $zero, 0x14F
    ctx->pc = 0x1cf1eb0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 335));
    // 0x1cf1eb4: 0xac8d0d10  sw          $t5, 0xD10($a0)
    ctx->pc = 0x1cf1eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3344), GPR_U32(ctx, 13));
    // 0x1cf1eb8: 0xac8f0d28  sw          $t7, 0xD28($a0)
    ctx->pc = 0x1cf1eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3368), GPR_U32(ctx, 15));
    // 0x1cf1ebc: 0x240b014a  addiu       $t3, $zero, 0x14A
    ctx->pc = 0x1cf1ebcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 330));
    // 0x1cf1ec0: 0x240a014c  addiu       $t2, $zero, 0x14C
    ctx->pc = 0x1cf1ec0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 332));
    // 0x1cf1ec4: 0xac8c0d14  sw          $t4, 0xD14($a0)
    ctx->pc = 0x1cf1ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3348), GPR_U32(ctx, 12));
    // 0x1cf1ec8: 0x240e014d  addiu       $t6, $zero, 0x14D
    ctx->pc = 0x1cf1ec8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 333));
    // 0x1cf1ecc: 0xac8a0d38  sw          $t2, 0xD38($a0)
    ctx->pc = 0x1cf1eccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3384), GPR_U32(ctx, 10));
    // 0x1cf1ed0: 0x240f0150  addiu       $t7, $zero, 0x150
    ctx->pc = 0x1cf1ed0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    // 0x1cf1ed4: 0xac8e0d2c  sw          $t6, 0xD2C($a0)
    ctx->pc = 0x1cf1ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3372), GPR_U32(ctx, 14));
    // 0x1cf1ed8: 0xac8b0d30  sw          $t3, 0xD30($a0)
    ctx->pc = 0x1cf1ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3376), GPR_U32(ctx, 11));
    // 0x1cf1edc: 0xac8f0d34  sw          $t7, 0xD34($a0)
    ctx->pc = 0x1cf1edcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3380), GPR_U32(ctx, 15));
    // 0x1cf1ee0: 0xac8d0d00  sw          $t5, 0xD00($a0)
    ctx->pc = 0x1cf1ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3328), GPR_U32(ctx, 13));
    // 0x1cf1ee4: 0xac8c0d04  sw          $t4, 0xD04($a0)
    ctx->pc = 0x1cf1ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3332), GPR_U32(ctx, 12));
    // 0x1cf1ee8: 0xac8b0d18  sw          $t3, 0xD18($a0)
    ctx->pc = 0x1cf1ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3352), GPR_U32(ctx, 11));
    // 0x1cf1eec: 0xac8a0d20  sw          $t2, 0xD20($a0)
    ctx->pc = 0x1cf1eecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3360), GPR_U32(ctx, 10));
    // 0x1cf1ef0: 0xac8d0d08  sw          $t5, 0xD08($a0)
    ctx->pc = 0x1cf1ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3336), GPR_U32(ctx, 13));
    // 0x1cf1ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF1EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF1EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF1EF4u;
        // 0x1cf1ef8: 0xac8c0d0c  sw          $t4, 0xD0C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3340), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF1EF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF1EFCu;
    // 0x1cf1efc: 0x0  nop
    ctx->pc = 0x1cf1efcu;
    // NOP
    ctx->pc = 0x1cf1f00u;
}
