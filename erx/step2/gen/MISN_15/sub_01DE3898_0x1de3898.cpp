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

// Function: sub_01DE3898
// Address: 0x1de3898 - 0x1de3940
void sub_01DE3898_0x1de3898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE3898_0x1de3898");
#endif

    ctx->pc = 0x1de3898u;

    // 0x1de3898: 0x908f0959  lbu         $t7, 0x959($a0)
    ctx->pc = 0x1de3898u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2393)));
    // 0x1de389c: 0x11e00026  beqz        $t7, . + 4 + (0x26 << 2)
    ctx->pc = 0x1DE389Cu;
    {
        const bool branch_taken_0x1de389c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE38A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE389Cu;
        // 0x1de38a0: 0x240f0013  addiu       $t7, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de389c) {
            ctx->pc = 0x1DE3938u;
            goto label_1de3938;
        }
    }
    ctx->pc = 0x1DE38A4u;
    // 0x1de38a4: 0x8c8403a4  lw          $a0, 0x3A4($a0)
    ctx->pc = 0x1de38a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 932)));
    // 0x1de38a8: 0x108f0011  beq         $a0, $t7, . + 4 + (0x11 << 2)
    ctx->pc = 0x1DE38A8u;
    {
        const bool branch_taken_0x1de38a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 15));
        ctx->pc = 0x1DE38ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE38A8u;
        // 0x1de38ac: 0x240f0014  addiu       $t7, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de38a8) {
            ctx->pc = 0x1DE38F0u;
            goto label_1de38f0;
        }
    }
    ctx->pc = 0x1DE38B0u;
    // 0x1de38b0: 0x108f000f  beq         $a0, $t7, . + 4 + (0xF << 2)
    ctx->pc = 0x1DE38B0u;
    {
        const bool branch_taken_0x1de38b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 15));
        ctx->pc = 0x1DE38B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE38B0u;
        // 0x1de38b4: 0x240f0015  addiu       $t7, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de38b0) {
            ctx->pc = 0x1DE38F0u;
            goto label_1de38f0;
        }
    }
    ctx->pc = 0x1DE38B8u;
    // 0x1de38b8: 0x108f000d  beq         $a0, $t7, . + 4 + (0xD << 2)
    ctx->pc = 0x1DE38B8u;
    {
        const bool branch_taken_0x1de38b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 15));
        ctx->pc = 0x1DE38BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE38B8u;
        // 0x1de38bc: 0x240f0016  addiu       $t7, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de38b8) {
            ctx->pc = 0x1DE38F0u;
            goto label_1de38f0;
        }
    }
    ctx->pc = 0x1DE38C0u;
    // 0x1de38c0: 0x108f000b  beq         $a0, $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x1DE38C0u;
    {
        const bool branch_taken_0x1de38c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 15));
        ctx->pc = 0x1DE38C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE38C0u;
        // 0x1de38c4: 0x240f0017  addiu       $t7, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de38c0) {
            ctx->pc = 0x1DE38F0u;
            goto label_1de38f0;
        }
    }
    ctx->pc = 0x1DE38C8u;
    // 0x1de38c8: 0x108f0009  beq         $a0, $t7, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DE38C8u;
    {
        const bool branch_taken_0x1de38c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 15));
        ctx->pc = 0x1DE38CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE38C8u;
        // 0x1de38cc: 0x240f0018  addiu       $t7, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de38c8) {
            ctx->pc = 0x1DE38F0u;
            goto label_1de38f0;
        }
    }
    ctx->pc = 0x1DE38D0u;
    // 0x1de38d0: 0x108f0007  beq         $a0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DE38D0u;
    {
        const bool branch_taken_0x1de38d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 15));
        ctx->pc = 0x1DE38D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE38D0u;
        // 0x1de38d4: 0x240f0019  addiu       $t7, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de38d0) {
            ctx->pc = 0x1DE38F0u;
            goto label_1de38f0;
        }
    }
    ctx->pc = 0x1DE38D8u;
    // 0x1de38d8: 0x108f0005  beq         $a0, $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DE38D8u;
    {
        const bool branch_taken_0x1de38d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 15));
        ctx->pc = 0x1DE38DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE38D8u;
        // 0x1de38dc: 0x240f001a  addiu       $t7, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de38d8) {
            ctx->pc = 0x1DE38F0u;
            goto label_1de38f0;
        }
    }
    ctx->pc = 0x1DE38E0u;
    // 0x1de38e0: 0x108f0003  beq         $a0, $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DE38E0u;
    {
        const bool branch_taken_0x1de38e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 15));
        ctx->pc = 0x1DE38E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE38E0u;
        // 0x1de38e4: 0x240f001b  addiu       $t7, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de38e0) {
            ctx->pc = 0x1DE38F0u;
            goto label_1de38f0;
        }
    }
    ctx->pc = 0x1DE38E8u;
    // 0x1de38e8: 0x148f0003  bne         $a0, $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DE38E8u;
    {
        const bool branch_taken_0x1de38e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 15));
        ctx->pc = 0x1DE38ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE38E8u;
        // 0x1de38ec: 0x240f001c  addiu       $t7, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de38e8) {
            ctx->pc = 0x1DE38F8u;
            goto label_1de38f8;
        }
    }
    ctx->pc = 0x1DE38F0u;
label_1de38f0:
    // 0x1de38f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE38F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE38F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE38F0u;
        // 0x1de38f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE38F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE38F8u;
label_1de38f8:
    // 0x1de38f8: 0x108f000d  beq         $a0, $t7, . + 4 + (0xD << 2)
    ctx->pc = 0x1DE38F8u;
    {
        const bool branch_taken_0x1de38f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 15));
        ctx->pc = 0x1DE38FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE38F8u;
        // 0x1de38fc: 0x240f001d  addiu       $t7, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de38f8) {
            ctx->pc = 0x1DE3930u;
            goto label_1de3930;
        }
    }
    ctx->pc = 0x1DE3900u;
    // 0x1de3900: 0x108f000b  beq         $a0, $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x1DE3900u;
    {
        const bool branch_taken_0x1de3900 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 15));
        ctx->pc = 0x1DE3904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE3900u;
        // 0x1de3904: 0x240f001e  addiu       $t7, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de3900) {
            ctx->pc = 0x1DE3930u;
            goto label_1de3930;
        }
    }
    ctx->pc = 0x1DE3908u;
    // 0x1de3908: 0x108f0009  beq         $a0, $t7, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DE3908u;
    {
        const bool branch_taken_0x1de3908 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 15));
        ctx->pc = 0x1DE390Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE3908u;
        // 0x1de390c: 0x240f0031  addiu       $t7, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de3908) {
            ctx->pc = 0x1DE3930u;
            goto label_1de3930;
        }
    }
    ctx->pc = 0x1DE3910u;
    // 0x1de3910: 0x108f0007  beq         $a0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DE3910u;
    {
        const bool branch_taken_0x1de3910 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 15));
        ctx->pc = 0x1DE3914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE3910u;
        // 0x1de3914: 0x240f0032  addiu       $t7, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de3910) {
            ctx->pc = 0x1DE3930u;
            goto label_1de3930;
        }
    }
    ctx->pc = 0x1DE3918u;
    // 0x1de3918: 0x108f0005  beq         $a0, $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DE3918u;
    {
        const bool branch_taken_0x1de3918 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 15));
        ctx->pc = 0x1DE391Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE3918u;
        // 0x1de391c: 0x240f0033  addiu       $t7, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de3918) {
            ctx->pc = 0x1DE3930u;
            goto label_1de3930;
        }
    }
    ctx->pc = 0x1DE3920u;
    // 0x1de3920: 0x108f0003  beq         $a0, $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DE3920u;
    {
        const bool branch_taken_0x1de3920 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 15));
        ctx->pc = 0x1DE3924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE3920u;
        // 0x1de3924: 0x240f0034  addiu       $t7, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de3920) {
            ctx->pc = 0x1DE3930u;
            goto label_1de3930;
        }
    }
    ctx->pc = 0x1DE3928u;
    // 0x1de3928: 0x148f0003  bne         $a0, $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DE3928u;
    {
        const bool branch_taken_0x1de3928 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 15));
        if (branch_taken_0x1de3928) {
            ctx->pc = 0x1DE3938u;
            goto label_1de3938;
        }
    }
    ctx->pc = 0x1DE3930u;
label_1de3930:
    // 0x1de3930: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE3930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE3934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE3930u;
        // 0x1de3934: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE3930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE3938u;
label_1de3938:
    // 0x1de3938: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE3938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE393Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE3938u;
        // 0x1de393c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE3938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE3940u;
}
