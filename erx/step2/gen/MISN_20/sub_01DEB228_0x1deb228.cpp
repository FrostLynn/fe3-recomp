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

// Function: sub_01DEB228
// Address: 0x1deb228 - 0x1deb280
void sub_01DEB228_0x1deb228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DEB228_0x1deb228");
#endif

    switch (ctx->pc) {
        case 0x1deb274u: goto label_1deb274;
        default: break;
    }

    ctx->pc = 0x1deb228u;

    // 0x1deb228: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1deb228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1deb22c: 0x8f8c8014  lw          $t4, -0x7FEC($gp)
    ctx->pc = 0x1deb22cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1deb230: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1deb230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1deb234: 0x3c0b0005  lui         $t3, 0x5
    ctx->pc = 0x1deb234u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)5 << 16));
    // 0x1deb238: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x1deb238u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
    // 0x1deb23c: 0x3c0401df  lui         $a0, 0x1DF
    ctx->pc = 0x1deb23cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)479 << 16));
    // 0x1deb240: 0x8d8e00dc  lw          $t6, 0xDC($t4)
    ctx->pc = 0x1deb240u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 220)));
    // 0x1deb244: 0x2484be60  addiu       $a0, $a0, -0x41A0
    ctx->pc = 0x1deb244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950496));
    // 0x1deb248: 0x958f056e  lhu         $t7, 0x56E($t4)
    ctx->pc = 0x1deb248u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 1390)));
    // 0x1deb24c: 0x8dca0460  lw          $t2, 0x460($t6)
    ctx->pc = 0x1deb24cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 1120)));
    // 0x1deb250: 0x35ef0020  ori         $t7, $t7, 0x20
    ctx->pc = 0x1deb250u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)32);
    // 0x1deb254: 0x8d4d002c  lw          $t5, 0x2C($t2)
    ctx->pc = 0x1deb254u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 44)));
    // 0x1deb258: 0xa58f056e  sh          $t7, 0x56E($t4)
    ctx->pc = 0x1deb258u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 1390), (uint16_t)GPR_U32(ctx, 15));
    // 0x1deb25c: 0x8dae001c  lw          $t6, 0x1C($t5)
    ctx->pc = 0x1deb25cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 28)));
    // 0x1deb260: 0x8dcf0048  lw          $t7, 0x48($t6)
    ctx->pc = 0x1deb260u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 72)));
    // 0x1deb264: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x1deb264u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1deb268: 0x1eb7821  addu        $t7, $t7, $t3
    ctx->pc = 0x1deb268u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 11)));
    // 0x1deb26c: 0xc77abde  jal         func_1DEAF78
    ctx->pc = 0x1DEB26Cu;
    SET_GPR_U32(ctx, 31, 0x1DEB274u);
    ctx->pc = 0x1DEB270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEB26Cu;
    // 0x1deb270: 0xa1ee7f6b  sb          $t6, 0x7F6B($t7) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 15), 32619), (uint8_t)GPR_U32(ctx, 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEAF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEAF78u, 0x1DEB26Cu, 0x1DEB274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEB274u;
label_1deb274:
    // 0x1deb274: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1deb274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1deb278: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEB278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEB27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB278u;
        // 0x1deb27c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEB278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEB280u;
}
