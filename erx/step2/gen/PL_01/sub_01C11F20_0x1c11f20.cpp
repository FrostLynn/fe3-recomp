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

// Function: sub_01C11F20
// Address: 0x1c11f20 - 0x1c11f90
void sub_01C11F20_0x1c11f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C11F20_0x1c11f20");
#endif

    ctx->pc = 0x1c11f20u;

    // 0x1c11f20: 0x240f0080  addiu       $t7, $zero, 0x80
    ctx->pc = 0x1c11f20u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c11f24: 0x240e007e  addiu       $t6, $zero, 0x7E
    ctx->pc = 0x1c11f24u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x1c11f28: 0xac8f0d00  sw          $t7, 0xD00($a0)
    ctx->pc = 0x1c11f28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3328), GPR_U32(ctx, 15));
    // 0x1c11f2c: 0x248d0200  addiu       $t5, $a0, 0x200
    ctx->pc = 0x1c11f2cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), 512));
    // 0x1c11f30: 0xac8e0d04  sw          $t6, 0xD04($a0)
    ctx->pc = 0x1c11f30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3332), GPR_U32(ctx, 14));
    // 0x1c11f34: 0x240f0147  addiu       $t7, $zero, 0x147
    ctx->pc = 0x1c11f34u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 327));
    // 0x1c11f38: 0xac8f0d18  sw          $t7, 0xD18($a0)
    ctx->pc = 0x1c11f38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3352), GPR_U32(ctx, 15));
    // 0x1c11f3c: 0x240e0149  addiu       $t6, $zero, 0x149
    ctx->pc = 0x1c11f3cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 329));
    // 0x1c11f40: 0xac8e0d1c  sw          $t6, 0xD1C($a0)
    ctx->pc = 0x1c11f40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3356), GPR_U32(ctx, 14));
    // 0x1c11f44: 0x240f0148  addiu       $t7, $zero, 0x148
    ctx->pc = 0x1c11f44u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 328));
    // 0x1c11f48: 0xac8f0d20  sw          $t7, 0xD20($a0)
    ctx->pc = 0x1c11f48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3360), GPR_U32(ctx, 15));
    // 0x1c11f4c: 0x8dae0030  lw          $t6, 0x30($t5)
    ctx->pc = 0x1c11f4cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 48)));
    // 0x1c11f50: 0x8dcf0010  lw          $t7, 0x10($t6)
    ctx->pc = 0x1c11f50u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x1c11f54: 0x29ef0002  slti        $t7, $t7, 0x2
    ctx->pc = 0x1c11f54u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c11f58: 0x15e0000a  bnez        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1C11F58u;
    {
        const bool branch_taken_0x1c11f58 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c11f58) {
            ctx->pc = 0x1C11F84u;
            goto label_1c11f84;
        }
    }
    ctx->pc = 0x1C11F60u;
    // 0x1c11f60: 0x8daf0048  lw          $t7, 0x48($t5)
    ctx->pc = 0x1c11f60u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 72)));
    // 0x1c11f64: 0x8dee4944  lw          $t6, 0x4944($t7)
    ctx->pc = 0x1c11f64u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18756)));
    // 0x1c11f68: 0xa1c06426  sb          $zero, 0x6426($t6)
    ctx->pc = 0x1c11f68u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 25638), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c11f6c: 0x8daf0048  lw          $t7, 0x48($t5)
    ctx->pc = 0x1c11f6cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 72)));
    // 0x1c11f70: 0x8dee4944  lw          $t6, 0x4944($t7)
    ctx->pc = 0x1c11f70u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18756)));
    // 0x1c11f74: 0xa1c067b6  sb          $zero, 0x67B6($t6)
    ctx->pc = 0x1c11f74u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 26550), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c11f78: 0x8daf0048  lw          $t7, 0x48($t5)
    ctx->pc = 0x1c11f78u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 72)));
    // 0x1c11f7c: 0x8dee4944  lw          $t6, 0x4944($t7)
    ctx->pc = 0x1c11f7cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18756)));
    // 0x1c11f80: 0xa1c04416  sb          $zero, 0x4416($t6)
    ctx->pc = 0x1c11f80u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 17430), (uint8_t)GPR_U32(ctx, 0));
label_1c11f84:
    // 0x1c11f84: 0x3e00008  jr          $ra
    ctx->pc = 0x1C11F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C11F84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C11F8Cu;
    // 0x1c11f8c: 0x0  nop
    ctx->pc = 0x1c11f8cu;
    // NOP
    ctx->pc = 0x1c11f90u;
}
