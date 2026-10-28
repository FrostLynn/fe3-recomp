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

// Function: sub_01DE5148
// Address: 0x1de5148 - 0x1de51d8
void sub_01DE5148_0x1de5148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE5148_0x1de5148");
#endif

    switch (ctx->pc) {
        case 0x1de51ccu: goto label_1de51cc;
        default: break;
    }

    ctx->pc = 0x1de5148u;

    // 0x1de5148: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1de5148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1de514c: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de514cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de5150: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1de5150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1de5154: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x1de5154u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x1de5158: 0x24845a90  addiu       $a0, $a0, 0x5A90
    ctx->pc = 0x1de5158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23184));
    // 0x1de515c: 0x8ded00dc  lw          $t5, 0xDC($t7)
    ctx->pc = 0x1de515cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1de5160: 0x8daf0460  lw          $t7, 0x460($t5)
    ctx->pc = 0x1de5160u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 1120)));
    // 0x1de5164: 0x8dee002c  lw          $t6, 0x2C($t7)
    ctx->pc = 0x1de5164u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 44)));
    // 0x1de5168: 0x8dcd001c  lw          $t5, 0x1C($t6)
    ctx->pc = 0x1de5168u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 28)));
    // 0x1de516c: 0x8daf0248  lw          $t7, 0x248($t5)
    ctx->pc = 0x1de516cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 584)));
    // 0x1de5170: 0xa1e00066  sb          $zero, 0x66($t7)
    ctx->pc = 0x1de5170u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 102), (uint8_t)GPR_U32(ctx, 0));
    // 0x1de5174: 0x8f8e8014  lw          $t6, -0x7FEC($gp)
    ctx->pc = 0x1de5174u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de5178: 0x8dcf00dc  lw          $t7, 0xDC($t6)
    ctx->pc = 0x1de5178u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 220)));
    // 0x1de517c: 0x8ded0460  lw          $t5, 0x460($t7)
    ctx->pc = 0x1de517cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 1120)));
    // 0x1de5180: 0x8dae002c  lw          $t6, 0x2C($t5)
    ctx->pc = 0x1de5180u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 44)));
    // 0x1de5184: 0x8dcf001c  lw          $t7, 0x1C($t6)
    ctx->pc = 0x1de5184u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 28)));
    // 0x1de5188: 0x8ded0248  lw          $t5, 0x248($t7)
    ctx->pc = 0x1de5188u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 584)));
    // 0x1de518c: 0xa1a003f6  sb          $zero, 0x3F6($t5)
    ctx->pc = 0x1de518cu;
    WRITE8(ADD32(GPR_U32(ctx, 13), 1014), (uint8_t)GPR_U32(ctx, 0));
    // 0x1de5190: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de5190u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de5194: 0x8dee00dc  lw          $t6, 0xDC($t7)
    ctx->pc = 0x1de5194u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1de5198: 0x8dcd0460  lw          $t5, 0x460($t6)
    ctx->pc = 0x1de5198u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 1120)));
    // 0x1de519c: 0x8daf002c  lw          $t7, 0x2C($t5)
    ctx->pc = 0x1de519cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 44)));
    // 0x1de51a0: 0x8dee001c  lw          $t6, 0x1C($t7)
    ctx->pc = 0x1de51a0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 28)));
    // 0x1de51a4: 0x8dcd0248  lw          $t5, 0x248($t6)
    ctx->pc = 0x1de51a4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 584)));
    // 0x1de51a8: 0xa1a00786  sb          $zero, 0x786($t5)
    ctx->pc = 0x1de51a8u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 1926), (uint8_t)GPR_U32(ctx, 0));
    // 0x1de51ac: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de51acu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de51b0: 0x8dee00dc  lw          $t6, 0xDC($t7)
    ctx->pc = 0x1de51b0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1de51b4: 0x8dcd0460  lw          $t5, 0x460($t6)
    ctx->pc = 0x1de51b4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 1120)));
    // 0x1de51b8: 0x8daf002c  lw          $t7, 0x2C($t5)
    ctx->pc = 0x1de51b8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 44)));
    // 0x1de51bc: 0x8dee001c  lw          $t6, 0x1C($t7)
    ctx->pc = 0x1de51bcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 28)));
    // 0x1de51c0: 0x8dcd0248  lw          $t5, 0x248($t6)
    ctx->pc = 0x1de51c0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 584)));
    // 0x1de51c4: 0xc7793a6  jal         func_1DE4E98
    ctx->pc = 0x1DE51C4u;
    SET_GPR_U32(ctx, 31, 0x1DE51CCu);
    ctx->pc = 0x1DE51C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE51C4u;
    // 0x1de51c8: 0xa1a00b16  sb          $zero, 0xB16($t5) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 13), 2838), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE4E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE4E98u, 0x1DE51C4u, 0x1DE51CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE51CCu;
label_1de51cc:
    // 0x1de51cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1de51ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de51d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE51D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE51D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE51D0u;
        // 0x1de51d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE51D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE51D8u;
}
