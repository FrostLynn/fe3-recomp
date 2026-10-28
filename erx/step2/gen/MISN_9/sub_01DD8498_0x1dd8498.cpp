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

// Function: sub_01DD8498
// Address: 0x1dd8498 - 0x1dd8520
void sub_01DD8498_0x1dd8498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD8498_0x1dd8498");
#endif

    switch (ctx->pc) {
        case 0x1dd84b0u: goto label_1dd84b0;
        case 0x1dd84c8u: goto label_1dd84c8;
        case 0x1dd8514u: goto label_1dd8514;
        default: break;
    }

    ctx->pc = 0x1dd8498u;

    // 0x1dd8498: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dd8498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dd849c: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dd849cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd84a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd84a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dd84a4: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1dd84a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1dd84a8: 0xc7760ce  jal         func_1DD8338
    ctx->pc = 0x1DD84A8u;
    SET_GPR_U32(ctx, 31, 0x1DD84B0u);
    ctx->pc = 0x1DD84ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD84A8u;
    // 0x1dd84ac: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD8338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD8338u, 0x1DD84A8u, 0x1DD84B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD84B0u;
label_1dd84b0:
    // 0x1dd84b0: 0x8c4e03a4  lw          $t6, 0x3A4($v0)
    ctx->pc = 0x1dd84b0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 932)));
    // 0x1dd84b4: 0x240f014f  addiu       $t7, $zero, 0x14F
    ctx->pc = 0x1dd84b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 335));
    // 0x1dd84b8: 0x11cf0009  beq         $t6, $t7, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DD84B8u;
    {
        const bool branch_taken_0x1dd84b8 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1DD84BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD84B8u;
        // 0x1dd84bc: 0x240f0150  addiu       $t7, $zero, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd84b8) {
            ctx->pc = 0x1DD84E0u;
            goto label_1dd84e0;
        }
    }
    ctx->pc = 0x1DD84C0u;
    // 0x1dd84c0: 0x11cf0004  beq         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DD84C0u;
    {
        const bool branch_taken_0x1dd84c0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1DD84C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD84C0u;
        // 0x1dd84c4: 0x8f8f8014  lw          $t7, -0x7FEC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd84c0) {
            ctx->pc = 0x1DD84D4u;
            goto label_1dd84d4;
        }
    }
    ctx->pc = 0x1DD84C8u;
label_1dd84c8:
    // 0x1dd84c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd84c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd84cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD84CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD84D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD84CCu;
        // 0x1dd84d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD84CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD84D4u;
label_1dd84d4:
    // 0x1dd84d4: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x1dd84d4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd84d8: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1DD84D8u;
    {
        const bool branch_taken_0x1dd84d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD84DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD84D8u;
        // 0x1dd84dc: 0xa1ee0429  sb          $t6, 0x429($t7) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 15), 1065), (uint8_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd84d8) {
            ctx->pc = 0x1DD84C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dd84c8;
        }
    }
    ctx->pc = 0x1DD84E0u;
label_1dd84e0:
    // 0x1dd84e0: 0x8f8d8014  lw          $t5, -0x7FEC($gp)
    ctx->pc = 0x1dd84e0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd84e4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1dd84e4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd84e8: 0x95ae056e  lhu         $t6, 0x56E($t5)
    ctx->pc = 0x1dd84e8u;
    SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 1390)));
    // 0x1dd84ec: 0xa1af0428  sb          $t7, 0x428($t5)
    ctx->pc = 0x1dd84ecu;
    WRITE8(ADD32(GPR_U32(ctx, 13), 1064), (uint8_t)GPR_U32(ctx, 15));
    // 0x1dd84f0: 0x35ce0004  ori         $t6, $t6, 0x4
    ctx->pc = 0x1dd84f0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)4);
    // 0x1dd84f4: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1DD84F4u;
    {
        const bool branch_taken_0x1dd84f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD84F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD84F4u;
        // 0x1dd84f8: 0xa5ae056e  sh          $t6, 0x56E($t5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 13), 1390), (uint16_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd84f4) {
            ctx->pc = 0x1DD84C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dd84c8;
        }
    }
    ctx->pc = 0x1DD84FCu;
    // 0x1dd84fc: 0x0  nop
    ctx->pc = 0x1dd84fcu;
    // NOP
    // 0x1dd8500: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dd8500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dd8504: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x1dd8504u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x1dd8508: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd8508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dd850c: 0xc7760e8  jal         func_1DD83A0
    ctx->pc = 0x1DD850Cu;
    SET_GPR_U32(ctx, 31, 0x1DD8514u);
    ctx->pc = 0x1DD8510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD850Cu;
    // 0x1dd8510: 0x24848a70  addiu       $a0, $a0, -0x7590 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD83A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD83A0u, 0x1DD850Cu, 0x1DD8514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD8514u;
label_1dd8514:
    // 0x1dd8514: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd8514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd8518: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD8518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD851Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD8518u;
        // 0x1dd851c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD8518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD8520u;
}
