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

// Function: sub_01DD0A78
// Address: 0x1dd0a78 - 0x1dd0b70
void sub_01DD0A78_0x1dd0a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD0A78_0x1dd0a78");
#endif

    switch (ctx->pc) {
        case 0x1dd0ab4u: goto label_1dd0ab4;
        case 0x1dd0ac8u: goto label_1dd0ac8;
        case 0x1dd0adcu: goto label_1dd0adc;
        case 0x1dd0af0u: goto label_1dd0af0;
        case 0x1dd0b14u: goto label_1dd0b14;
        case 0x1dd0b30u: goto label_1dd0b30;
        default: break;
    }

    ctx->pc = 0x1dd0a78u;

    // 0x1dd0a78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dd0a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dd0a7c: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1dd0a7cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dd0a80: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1dd0a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1dd0a84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dd0a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dd0a88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dd0a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dd0a8c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1dd0a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1dd0a90: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1dd0a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1dd0a94: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1dd0a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1dd0a98: 0x15e00021  bnez        $t7, . + 4 + (0x21 << 2)
    ctx->pc = 0x1DD0A98u;
    {
        const bool branch_taken_0x1dd0a98 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD0A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD0A98u;
        // 0x1dd0a9c: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd0a98) {
            ctx->pc = 0x1DD0B20u;
            goto label_1dd0b20;
        }
    }
    ctx->pc = 0x1DD0AA0u;
    // 0x1dd0aa0: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dd0aa0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd0aa4: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1dd0aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1dd0aa8: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x1dd0aa8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1dd0aac: 0xc774286  jal         func_1DD0A18
    ctx->pc = 0x1DD0AACu;
    SET_GPR_U32(ctx, 31, 0x1DD0AB4u);
    ctx->pc = 0x1DD0AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD0AACu;
    // 0x1dd0ab0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD0A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD0A18u, 0x1DD0AACu, 0x1DD0AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD0AB4u;
label_1dd0ab4:
    // 0x1dd0ab4: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dd0ab4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd0ab8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1dd0ab8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd0abc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dd0abcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd0ac0: 0xc774288  jal         func_1DD0A20
    ctx->pc = 0x1DD0AC0u;
    SET_GPR_U32(ctx, 31, 0x1DD0AC8u);
    ctx->pc = 0x1DD0AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD0AC0u;
    // 0x1dd0ac4: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD0A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD0A20u, 0x1DD0AC0u, 0x1DD0AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD0AC8u;
label_1dd0ac8:
    // 0x1dd0ac8: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dd0ac8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd0acc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1dd0accu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd0ad0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dd0ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd0ad4: 0xc77428a  jal         func_1DD0A28
    ctx->pc = 0x1DD0AD4u;
    SET_GPR_U32(ctx, 31, 0x1DD0ADCu);
    ctx->pc = 0x1DD0AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD0AD4u;
    // 0x1dd0ad8: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD0A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD0A28u, 0x1DD0AD4u, 0x1DD0ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD0ADCu;
label_1dd0adc:
    // 0x1dd0adc: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dd0adcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd0ae0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1dd0ae0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd0ae4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dd0ae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd0ae8: 0xc77428c  jal         func_1DD0A30
    ctx->pc = 0x1DD0AE8u;
    SET_GPR_U32(ctx, 31, 0x1DD0AF0u);
    ctx->pc = 0x1DD0AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD0AE8u;
    // 0x1dd0aec: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD0A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD0A30u, 0x1DD0AE8u, 0x1DD0AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD0AF0u;
label_1dd0af0:
    // 0x1dd0af0: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dd0af0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd0af4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1dd0af4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd0af8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1dd0af8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd0afc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1dd0afcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd0b00: 0x8dea00dc  lw          $t2, 0xDC($t7)
    ctx->pc = 0x1dd0b00u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1dd0b04: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1dd0b04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd0b08: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1dd0b08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd0b0c: 0xc77428e  jal         func_1DD0A38
    ctx->pc = 0x1DD0B0Cu;
    SET_GPR_U32(ctx, 31, 0x1DD0B14u);
    ctx->pc = 0x1DD0B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD0B0Cu;
    // 0x1dd0b10: 0x25440140  addiu       $a0, $t2, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD0A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD0A38u, 0x1DD0B0Cu, 0x1DD0B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD0B14u;
label_1dd0b14:
    // 0x1dd0b14: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1dd0b14u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dd0b18: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x1dd0b18u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x1dd0b1c: 0xaf8f8018  sw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1dd0b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934552), GPR_U32(ctx, 15));
label_1dd0b20:
    // 0x1dd0b20: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dd0b20u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd0b24: 0x8de400dc  lw          $a0, 0xDC($t7)
    ctx->pc = 0x1dd0b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1dd0b28: 0xc774290  jal         func_1DD0A40
    ctx->pc = 0x1DD0B28u;
    SET_GPR_U32(ctx, 31, 0x1DD0B30u);
    ctx->pc = 0x1DD0B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD0B28u;
    // 0x1dd0b2c: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD0A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD0A40u, 0x1DD0B28u, 0x1DD0B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD0B30u;
label_1dd0b30:
    // 0x1dd0b30: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1dd0b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1dd0b34: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1dd0b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1dd0b38: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DD0B38u;
    {
        const bool branch_taken_0x1dd0b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD0B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD0B38u;
        // 0x1dd0b3c: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd0b38) {
            ctx->pc = 0x1DD0B48u;
            goto label_1dd0b48;
        }
    }
    ctx->pc = 0x1DD0B40u;
    // 0x1dd0b40: 0xaf808018  sw          $zero, -0x7FE8($gp)
    ctx->pc = 0x1dd0b40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934552), GPR_U32(ctx, 0));
    // 0x1dd0b44: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1dd0b44u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dd0b48:
    // 0x1dd0b48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dd0b48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd0b4c: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x1dd0b4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd0b50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dd0b50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dd0b54: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dd0b54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd0b58: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1dd0b58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dd0b5c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1dd0b5cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dd0b60: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1dd0b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1dd0b64: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD0B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD0B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD0B64u;
        // 0x1dd0b68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD0B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD0B6Cu;
    // 0x1dd0b6c: 0x0  nop
    ctx->pc = 0x1dd0b6cu;
    // NOP
    ctx->pc = 0x1dd0b70u;
}
