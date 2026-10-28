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

// Function: sub_01DE3AB0
// Address: 0x1de3ab0 - 0x1de3ae0
void sub_01DE3AB0_0x1de3ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE3AB0_0x1de3ab0");
#endif

    switch (ctx->pc) {
        case 0x1de3ad4u: goto label_1de3ad4;
        default: break;
    }

    ctx->pc = 0x1de3ab0u;

    // 0x1de3ab0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1de3ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1de3ab4: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de3ab4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de3ab8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1de3ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1de3abc: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x1de3abcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x1de3ac0: 0x24844188  addiu       $a0, $a0, 0x4188
    ctx->pc = 0x1de3ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16776));
    // 0x1de3ac4: 0x95ee056e  lhu         $t6, 0x56E($t7)
    ctx->pc = 0x1de3ac4u;
    SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 1390)));
    // 0x1de3ac8: 0x35ce0008  ori         $t6, $t6, 0x8
    ctx->pc = 0x1de3ac8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)8);
    // 0x1de3acc: 0xc778de2  jal         func_1DE3788
    ctx->pc = 0x1DE3ACCu;
    SET_GPR_U32(ctx, 31, 0x1DE3AD4u);
    ctx->pc = 0x1DE3AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE3ACCu;
    // 0x1de3ad0: 0xa5ee056e  sh          $t6, 0x56E($t7) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 15), 1390), (uint16_t)GPR_U32(ctx, 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE3788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE3788u, 0x1DE3ACCu, 0x1DE3AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE3AD4u;
label_1de3ad4:
    // 0x1de3ad4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1de3ad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de3ad8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE3AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE3ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE3AD8u;
        // 0x1de3adc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE3AD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE3AE0u;
}
