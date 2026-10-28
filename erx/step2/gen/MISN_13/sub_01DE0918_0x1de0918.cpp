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

// Function: sub_01DE0918
// Address: 0x1de0918 - 0x1de09d0
void sub_01DE0918_0x1de0918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE0918_0x1de0918");
#endif

    switch (ctx->pc) {
        case 0x1de09c0u: goto label_1de09c0;
        default: break;
    }

    ctx->pc = 0x1de0918u;

    // 0x1de0918: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1de0918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1de091c: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1de091cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1de0920: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1de0920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1de0924: 0x3c0b0001  lui         $t3, 0x1
    ctx->pc = 0x1de0924u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)1 << 16));
    // 0x1de0928: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x1de0928u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
    // 0x1de092c: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x1de092cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x1de0930: 0x8dee00dc  lw          $t6, 0xDC($t7)
    ctx->pc = 0x1de0930u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1de0934: 0x24840e88  addiu       $a0, $a0, 0xE88
    ctx->pc = 0x1de0934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3720));
    // 0x1de0938: 0x8dcf0460  lw          $t7, 0x460($t6)
    ctx->pc = 0x1de0938u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 1120)));
    // 0x1de093c: 0x8dee002c  lw          $t6, 0x2C($t7)
    ctx->pc = 0x1de093cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 44)));
    // 0x1de0940: 0x8dcd001c  lw          $t5, 0x1C($t6)
    ctx->pc = 0x1de0940u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 28)));
    // 0x1de0944: 0x8daf0048  lw          $t7, 0x48($t5)
    ctx->pc = 0x1de0944u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 72)));
    // 0x1de0948: 0x3c0e0002  lui         $t6, 0x2
    ctx->pc = 0x1de0948u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)2 << 16));
    // 0x1de094c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1de094cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1de0950: 0xa1e04c36  sb          $zero, 0x4C36($t7)
    ctx->pc = 0x1de0950u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 19510), (uint8_t)GPR_U32(ctx, 0));
    // 0x1de0954: 0x8f8e8018  lw          $t6, -0x7FE8($gp)
    ctx->pc = 0x1de0954u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1de0958: 0x8dcf00dc  lw          $t7, 0xDC($t6)
    ctx->pc = 0x1de0958u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 220)));
    // 0x1de095c: 0x8ded0460  lw          $t5, 0x460($t7)
    ctx->pc = 0x1de095cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 1120)));
    // 0x1de0960: 0x8dae002c  lw          $t6, 0x2C($t5)
    ctx->pc = 0x1de0960u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 44)));
    // 0x1de0964: 0x8dcc001c  lw          $t4, 0x1C($t6)
    ctx->pc = 0x1de0964u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 28)));
    // 0x1de0968: 0x8d8f0048  lw          $t7, 0x48($t4)
    ctx->pc = 0x1de0968u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 72)));
    // 0x1de096c: 0x1eb7821  addu        $t7, $t7, $t3
    ctx->pc = 0x1de096cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 11)));
    // 0x1de0970: 0xa1e00f66  sb          $zero, 0xF66($t7)
    ctx->pc = 0x1de0970u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 3942), (uint8_t)GPR_U32(ctx, 0));
    // 0x1de0974: 0x8f8e8018  lw          $t6, -0x7FE8($gp)
    ctx->pc = 0x1de0974u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1de0978: 0x8dcf00dc  lw          $t7, 0xDC($t6)
    ctx->pc = 0x1de0978u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 220)));
    // 0x1de097c: 0x8ded0460  lw          $t5, 0x460($t7)
    ctx->pc = 0x1de097cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 1120)));
    // 0x1de0980: 0x8dae002c  lw          $t6, 0x2C($t5)
    ctx->pc = 0x1de0980u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 44)));
    // 0x1de0984: 0x8dcc001c  lw          $t4, 0x1C($t6)
    ctx->pc = 0x1de0984u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 28)));
    // 0x1de0988: 0x8d8f0048  lw          $t7, 0x48($t4)
    ctx->pc = 0x1de0988u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 72)));
    // 0x1de098c: 0x3c0e0003  lui         $t6, 0x3
    ctx->pc = 0x1de098cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)3 << 16));
    // 0x1de0990: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1de0990u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1de0994: 0xa1e01746  sb          $zero, 0x1746($t7)
    ctx->pc = 0x1de0994u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 5958), (uint8_t)GPR_U32(ctx, 0));
    // 0x1de0998: 0x8f8e8018  lw          $t6, -0x7FE8($gp)
    ctx->pc = 0x1de0998u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1de099c: 0x8dcf00dc  lw          $t7, 0xDC($t6)
    ctx->pc = 0x1de099cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 220)));
    // 0x1de09a0: 0x8ded0460  lw          $t5, 0x460($t7)
    ctx->pc = 0x1de09a0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 1120)));
    // 0x1de09a4: 0x8dae002c  lw          $t6, 0x2C($t5)
    ctx->pc = 0x1de09a4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 44)));
    // 0x1de09a8: 0x8dcc001c  lw          $t4, 0x1C($t6)
    ctx->pc = 0x1de09a8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 28)));
    // 0x1de09ac: 0x8d8f0048  lw          $t7, 0x48($t4)
    ctx->pc = 0x1de09acu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 72)));
    // 0x1de09b0: 0x340e8000  ori         $t6, $zero, 0x8000
    ctx->pc = 0x1de09b0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1de09b4: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1de09b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1de09b8: 0xc7781e2  jal         func_1DE0788
    ctx->pc = 0x1DE09B8u;
    SET_GPR_U32(ctx, 31, 0x1DE09C0u);
    ctx->pc = 0x1DE09BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE09B8u;
    // 0x1de09bc: 0xa1e01996  sb          $zero, 0x1996($t7) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 15), 6550), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE0788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE0788u, 0x1DE09B8u, 0x1DE09C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE09C0u;
label_1de09c0:
    // 0x1de09c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1de09c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de09c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE09C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE09C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE09C4u;
        // 0x1de09c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE09C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE09CCu;
    // 0x1de09cc: 0x0  nop
    ctx->pc = 0x1de09ccu;
    // NOP
    ctx->pc = 0x1de09d0u;
}
