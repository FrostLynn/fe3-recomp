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

// Function: sub_01DEB078
// Address: 0x1deb078 - 0x1deb118
void sub_01DEB078_0x1deb078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DEB078_0x1deb078");
#endif

    switch (ctx->pc) {
        case 0x1deb090u: goto label_1deb090;
        default: break;
    }

    ctx->pc = 0x1deb078u;

    // 0x1deb078: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1deb078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1deb07c: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1deb07cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1deb080: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1deb080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1deb084: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1deb084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1deb088: 0xc77abcc  jal         func_1DEAF30
    ctx->pc = 0x1DEB088u;
    SET_GPR_U32(ctx, 31, 0x1DEB090u);
    ctx->pc = 0x1DEB08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEB088u;
    // 0x1deb08c: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEAF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEAF30u, 0x1DEB088u, 0x1DEB090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEB090u;
label_1deb090:
    // 0x1deb090: 0x8f8b8014  lw          $t3, -0x7FEC($gp)
    ctx->pc = 0x1deb090u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1deb094: 0x3c0c0005  lui         $t4, 0x5
    ctx->pc = 0x1deb094u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)5 << 16));
    // 0x1deb098: 0x358c8000  ori         $t4, $t4, 0x8000
    ctx->pc = 0x1deb098u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)32768);
    // 0x1deb09c: 0x8d6f00f0  lw          $t7, 0xF0($t3)
    ctx->pc = 0x1deb09cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 240)));
    // 0x1deb0a0: 0x8dee002c  lw          $t6, 0x2C($t7)
    ctx->pc = 0x1deb0a0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 44)));
    // 0x1deb0a4: 0x8dcd001c  lw          $t5, 0x1C($t6)
    ctx->pc = 0x1deb0a4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 28)));
    // 0x1deb0a8: 0x8daf0048  lw          $t7, 0x48($t5)
    ctx->pc = 0x1deb0a8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 72)));
    // 0x1deb0ac: 0x1ec7821  addu        $t7, $t7, $t4
    ctx->pc = 0x1deb0acu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 12)));
    // 0x1deb0b0: 0x91ee78b6  lbu         $t6, 0x78B6($t7)
    ctx->pc = 0x1deb0b0u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 30902)));
    // 0x1deb0b4: 0x55c00007  bnel        $t6, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DEB0B4u;
    {
        const bool branch_taken_0x1deb0b4 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        if (branch_taken_0x1deb0b4) {
            ctx->pc = 0x1DEB0B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DEB0B4u;
            // 0x1deb0b8: 0x8c4e095c  lw          $t6, 0x95C($v0) (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2396)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DEB0D4u;
            goto label_1deb0d4;
        }
    }
    ctx->pc = 0x1DEB0BCu;
    // 0x1deb0bc: 0x8c4f081c  lw          $t7, 0x81C($v0)
    ctx->pc = 0x1deb0bcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2076)));
    // 0x1deb0c0: 0x19e00003  blez        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DEB0C0u;
    {
        const bool branch_taken_0x1deb0c0 = (GPR_S32(ctx, 15) <= 0);
        ctx->pc = 0x1DEB0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB0C0u;
        // 0x1deb0c4: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deb0c0) {
            ctx->pc = 0x1DEB0D0u;
            goto label_1deb0d0;
        }
    }
    ctx->pc = 0x1DEB0C8u;
    // 0x1deb0c8: 0xa1600429  sb          $zero, 0x429($t3)
    ctx->pc = 0x1deb0c8u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 1065), (uint8_t)GPR_U32(ctx, 0));
    // 0x1deb0cc: 0xa16f0428  sb          $t7, 0x428($t3)
    ctx->pc = 0x1deb0ccu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 1064), (uint8_t)GPR_U32(ctx, 15));
label_1deb0d0:
    // 0x1deb0d0: 0x8c4e095c  lw          $t6, 0x95C($v0)
    ctx->pc = 0x1deb0d0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2396)));
label_1deb0d4:
    // 0x1deb0d4: 0x240f01ad  addiu       $t7, $zero, 0x1AD
    ctx->pc = 0x1deb0d4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 429));
    // 0x1deb0d8: 0x15cf000c  bne         $t6, $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x1DEB0D8u;
    {
        const bool branch_taken_0x1deb0d8 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1DEB0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB0D8u;
        // 0x1deb0dc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deb0d8) {
            ctx->pc = 0x1DEB10Cu;
            goto label_1deb10c;
        }
    }
    ctx->pc = 0x1DEB0E0u;
    // 0x1deb0e0: 0x916f0428  lbu         $t7, 0x428($t3)
    ctx->pc = 0x1deb0e0u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1064)));
    // 0x1deb0e4: 0x15e00009  bnez        $t7, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DEB0E4u;
    {
        const bool branch_taken_0x1deb0e4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1deb0e4) {
            ctx->pc = 0x1DEB10Cu;
            goto label_1deb10c;
        }
    }
    ctx->pc = 0x1DEB0ECu;
    // 0x1deb0ec: 0x8c4f03a4  lw          $t7, 0x3A4($v0)
    ctx->pc = 0x1deb0ecu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 932)));
    // 0x1deb0f0: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DEB0F0u;
    {
        const bool branch_taken_0x1deb0f0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1deb0f0) {
            ctx->pc = 0x1DEB10Cu;
            goto label_1deb10c;
        }
    }
    ctx->pc = 0x1DEB0F8u;
    // 0x1deb0f8: 0x8c4f081c  lw          $t7, 0x81C($v0)
    ctx->pc = 0x1deb0f8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2076)));
    // 0x1deb0fc: 0x19e00003  blez        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DEB0FCu;
    {
        const bool branch_taken_0x1deb0fc = (GPR_S32(ctx, 15) <= 0);
        ctx->pc = 0x1DEB100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB0FCu;
        // 0x1deb100: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deb0fc) {
            ctx->pc = 0x1DEB10Cu;
            goto label_1deb10c;
        }
    }
    ctx->pc = 0x1DEB104u;
    // 0x1deb104: 0xa16f0429  sb          $t7, 0x429($t3)
    ctx->pc = 0x1deb104u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 1065), (uint8_t)GPR_U32(ctx, 15));
    // 0x1deb108: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1deb108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1deb10c:
    // 0x1deb10c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEB10Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEB110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB10Cu;
        // 0x1deb110: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEB10Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEB114u;
    // 0x1deb114: 0x0  nop
    ctx->pc = 0x1deb114u;
    // NOP
    ctx->pc = 0x1deb118u;
}
