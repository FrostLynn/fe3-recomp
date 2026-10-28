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

// Function: sub_01DEB280
// Address: 0x1deb280 - 0x1deb2b0
void sub_01DEB280_0x1deb280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DEB280_0x1deb280");
#endif

    switch (ctx->pc) {
        case 0x1deb2a4u: goto label_1deb2a4;
        default: break;
    }

    ctx->pc = 0x1deb280u;

    // 0x1deb280: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1deb280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1deb284: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1deb284u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1deb288: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1deb288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1deb28c: 0x3c0401df  lui         $a0, 0x1DF
    ctx->pc = 0x1deb28cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)479 << 16));
    // 0x1deb290: 0x2484bfc0  addiu       $a0, $a0, -0x4040
    ctx->pc = 0x1deb290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950848));
    // 0x1deb294: 0x95ee056e  lhu         $t6, 0x56E($t7)
    ctx->pc = 0x1deb294u;
    SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 1390)));
    // 0x1deb298: 0x35ce0008  ori         $t6, $t6, 0x8
    ctx->pc = 0x1deb298u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)8);
    // 0x1deb29c: 0xc77abde  jal         func_1DEAF78
    ctx->pc = 0x1DEB29Cu;
    SET_GPR_U32(ctx, 31, 0x1DEB2A4u);
    ctx->pc = 0x1DEB2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEB29Cu;
    // 0x1deb2a0: 0xa5ee056e  sh          $t6, 0x56E($t7) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 15), 1390), (uint16_t)GPR_U32(ctx, 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEAF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEAF78u, 0x1DEB29Cu, 0x1DEB2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEB2A4u;
label_1deb2a4:
    // 0x1deb2a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1deb2a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1deb2a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEB2A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEB2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB2A8u;
        // 0x1deb2ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEB2A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEB2B0u;
}
