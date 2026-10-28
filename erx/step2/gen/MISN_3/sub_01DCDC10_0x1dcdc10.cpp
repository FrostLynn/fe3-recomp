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

// Function: sub_01DCDC10
// Address: 0x1dcdc10 - 0x1dcdd00
void sub_01DCDC10_0x1dcdc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DCDC10_0x1dcdc10");
#endif

    switch (ctx->pc) {
        case 0x1dcdc28u: goto label_1dcdc28;
        case 0x1dcdc40u: goto label_1dcdc40;
        case 0x1dcdc54u: goto label_1dcdc54;
        case 0x1dcdc64u: goto label_1dcdc64;
        case 0x1dcdc78u: goto label_1dcdc78;
        case 0x1dcdc94u: goto label_1dcdc94;
        case 0x1dcdca8u: goto label_1dcdca8;
        default: break;
    }

    ctx->pc = 0x1dcdc10u;

    // 0x1dcdc10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dcdc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dcdc14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dcdc14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1dcdc18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dcdc18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dcdc1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dcdc1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dcdc20: 0xc7736a4  jal         func_1DCDA90
    ctx->pc = 0x1DCDC20u;
    SET_GPR_U32(ctx, 31, 0x1DCDC28u);
    ctx->pc = 0x1DCDA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCDA90u, 0x1DCDC20u, 0x1DCDC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCDC28u;
label_1dcdc28:
    // 0x1dcdc28: 0x8f848014  lw          $a0, -0x7FEC($gp)
    ctx->pc = 0x1dcdc28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dcdc2c: 0x2406270f  addiu       $a2, $zero, 0x270F
    ctx->pc = 0x1dcdc2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x1dcdc30: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1dcdc30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dcdc34: 0x2408fffe  addiu       $t0, $zero, -0x2
    ctx->pc = 0x1dcdc34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1dcdc38: 0xc773618  jal         func_1DCD860
    ctx->pc = 0x1DCDC38u;
    SET_GPR_U32(ctx, 31, 0x1DCDC40u);
    ctx->pc = 0x1DCDC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCDC38u;
    // 0x1dcdc3c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCD860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCD860u, 0x1DCDC38u, 0x1DCDC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCDC40u;
label_1dcdc40:
    // 0x1dcdc40: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dcdc40u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dcdc44: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1dcdc44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1dcdc48: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x1dcdc48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1dcdc4c: 0xc773608  jal         func_1DCD820
    ctx->pc = 0x1DCDC4Cu;
    SET_GPR_U32(ctx, 31, 0x1DCDC54u);
    ctx->pc = 0x1DCDC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCDC4Cu;
    // 0x1dcdc50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCD820u, 0x1DCDC4Cu, 0x1DCDC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCDC54u;
label_1dcdc54:
    // 0x1dcdc54: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dcdc54u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dcdc58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dcdc58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcdc5c: 0xc77360c  jal         func_1DCD830
    ctx->pc = 0x1DCDC5Cu;
    SET_GPR_U32(ctx, 31, 0x1DCDC64u);
    ctx->pc = 0x1DCDC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCDC5Cu;
    // 0x1dcdc60: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCD830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCD830u, 0x1DCDC5Cu, 0x1DCDC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCDC64u;
label_1dcdc64:
    // 0x1dcdc64: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dcdc64u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dcdc68: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1dcdc68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcdc6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dcdc6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcdc70: 0xc77360e  jal         func_1DCD838
    ctx->pc = 0x1DCDC70u;
    SET_GPR_U32(ctx, 31, 0x1DCDC78u);
    ctx->pc = 0x1DCDC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCDC70u;
    // 0x1dcdc74: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCD838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCD838u, 0x1DCDC70u, 0x1DCDC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCDC78u;
label_1dcdc78:
    // 0x1dcdc78: 0x8e2e0008  lw          $t6, 0x8($s1)
    ctx->pc = 0x1dcdc78u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1dcdc7c: 0x240f001e  addiu       $t7, $zero, 0x1E
    ctx->pc = 0x1dcdc7cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1dcdc80: 0x15cf0009  bne         $t6, $t7, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DCDC80u;
    {
        const bool branch_taken_0x1dcdc80 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1DCDC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCDC80u;
        // 0x1dcdc84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcdc80) {
            ctx->pc = 0x1DCDCA8u;
            goto label_1dcdca8;
        }
    }
    ctx->pc = 0x1DCDC88u;
    // 0x1dcdc88: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dcdc88u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dcdc8c: 0xc77360e  jal         func_1DCD838
    ctx->pc = 0x1DCDC8Cu;
    SET_GPR_U32(ctx, 31, 0x1DCDC94u);
    ctx->pc = 0x1DCDC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCDC8Cu;
    // 0x1dcdc90: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCD838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCD838u, 0x1DCDC8Cu, 0x1DCDC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCDC94u;
label_1dcdc94:
    // 0x1dcdc94: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dcdc94u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dcdc98: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1dcdc98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcdc9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dcdc9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcdca0: 0xc77360c  jal         func_1DCD830
    ctx->pc = 0x1DCDCA0u;
    SET_GPR_U32(ctx, 31, 0x1DCDCA8u);
    ctx->pc = 0x1DCDCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCDCA0u;
    // 0x1dcdca4: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCD830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCD830u, 0x1DCDCA0u, 0x1DCDCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCDCA8u;
label_1dcdca8:
    // 0x1dcdca8: 0x24420818  addiu       $v0, $v0, 0x818
    ctx->pc = 0x1dcdca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2072));
    // 0x1dcdcac: 0x8c4f0004  lw          $t7, 0x4($v0)
    ctx->pc = 0x1dcdcacu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1dcdcb0: 0x15e00004  bnez        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DCDCB0u;
    {
        const bool branch_taken_0x1dcdcb0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCDCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCDCB0u;
        // 0x1dcdcb4: 0x8f8d8014  lw          $t5, -0x7FEC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcdcb0) {
            ctx->pc = 0x1DCDCC4u;
            goto label_1dcdcc4;
        }
    }
    ctx->pc = 0x1DCDCB8u;
    // 0x1dcdcb8: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x1dcdcb8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1dcdcbc: 0x8dae00dc  lw          $t6, 0xDC($t5)
    ctx->pc = 0x1dcdcbcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 220)));
    // 0x1dcdcc0: 0xadcf0cd8  sw          $t7, 0xCD8($t6)
    ctx->pc = 0x1dcdcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 3288), GPR_U32(ctx, 15));
label_1dcdcc4:
    // 0x1dcdcc4: 0x91ae0429  lbu         $t6, 0x429($t5)
    ctx->pc = 0x1dcdcc4u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 1065)));
    // 0x1dcdcc8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1dcdcc8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dcdccc: 0x15cf0008  bne         $t6, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DCDCCCu;
    {
        const bool branch_taken_0x1dcdccc = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1DCDCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCDCCCu;
        // 0x1dcdcd0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcdccc) {
            ctx->pc = 0x1DCDCF0u;
            goto label_1dcdcf0;
        }
    }
    ctx->pc = 0x1DCDCD4u;
    // 0x1dcdcd4: 0x8e2f081c  lw          $t7, 0x81C($s1)
    ctx->pc = 0x1dcdcd4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2076)));
    // 0x1dcdcd8: 0x11e00006  beqz        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DCDCD8u;
    {
        const bool branch_taken_0x1dcdcd8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCDCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCDCD8u;
        // 0x1dcdcdc: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcdcd8) {
            ctx->pc = 0x1DCDCF4u;
            goto label_1dcdcf4;
        }
    }
    ctx->pc = 0x1DCDCE0u;
    // 0x1dcdce0: 0x8c4f0004  lw          $t7, 0x4($v0)
    ctx->pc = 0x1dcdce0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1dcdce4: 0x55e00003  bnel        $t7, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DCDCE4u;
    {
        const bool branch_taken_0x1dcdce4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dcdce4) {
            ctx->pc = 0x1DCDCE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DCDCE4u;
            // 0x1dcdce8: 0xa1ae0428  sb          $t6, 0x428($t5) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 13), 1064), (uint8_t)GPR_U32(ctx, 14));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DCDCF4u;
            goto label_1dcdcf4;
        }
    }
    ctx->pc = 0x1DCDCECu;
    // 0x1dcdcec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dcdcecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1dcdcf0:
    // 0x1dcdcf0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dcdcf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1dcdcf4:
    // 0x1dcdcf4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dcdcf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dcdcf8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCDCF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCDCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCDCF8u;
        // 0x1dcdcfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCDCF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCDD00u;
}
