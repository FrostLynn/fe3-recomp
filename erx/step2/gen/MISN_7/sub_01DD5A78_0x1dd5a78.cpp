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

// Function: sub_01DD5A78
// Address: 0x1dd5a78 - 0x1dd5b70
void sub_01DD5A78_0x1dd5a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD5A78_0x1dd5a78");
#endif

    switch (ctx->pc) {
        case 0x1dd5ab4u: goto label_1dd5ab4;
        case 0x1dd5ac8u: goto label_1dd5ac8;
        case 0x1dd5adcu: goto label_1dd5adc;
        case 0x1dd5af0u: goto label_1dd5af0;
        case 0x1dd5b14u: goto label_1dd5b14;
        case 0x1dd5b30u: goto label_1dd5b30;
        default: break;
    }

    ctx->pc = 0x1dd5a78u;

    // 0x1dd5a78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dd5a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dd5a7c: 0x8f8f801c  lw          $t7, -0x7FE4($gp)
    ctx->pc = 0x1dd5a7cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934556)));
    // 0x1dd5a80: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1dd5a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1dd5a84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dd5a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dd5a88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dd5a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dd5a8c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1dd5a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1dd5a90: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1dd5a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1dd5a94: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1dd5a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1dd5a98: 0x15e00021  bnez        $t7, . + 4 + (0x21 << 2)
    ctx->pc = 0x1DD5A98u;
    {
        const bool branch_taken_0x1dd5a98 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD5A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD5A98u;
        // 0x1dd5a9c: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd5a98) {
            ctx->pc = 0x1DD5B20u;
            goto label_1dd5b20;
        }
    }
    ctx->pc = 0x1DD5AA0u;
    // 0x1dd5aa0: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1dd5aa0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dd5aa4: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1dd5aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1dd5aa8: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x1dd5aa8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1dd5aac: 0xc775686  jal         func_1DD5A18
    ctx->pc = 0x1DD5AACu;
    SET_GPR_U32(ctx, 31, 0x1DD5AB4u);
    ctx->pc = 0x1DD5AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD5AACu;
    // 0x1dd5ab0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD5A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD5A18u, 0x1DD5AACu, 0x1DD5AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD5AB4u;
label_1dd5ab4:
    // 0x1dd5ab4: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1dd5ab4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dd5ab8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1dd5ab8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd5abc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dd5abcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd5ac0: 0xc775688  jal         func_1DD5A20
    ctx->pc = 0x1DD5AC0u;
    SET_GPR_U32(ctx, 31, 0x1DD5AC8u);
    ctx->pc = 0x1DD5AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD5AC0u;
    // 0x1dd5ac4: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD5A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD5A20u, 0x1DD5AC0u, 0x1DD5AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD5AC8u;
label_1dd5ac8:
    // 0x1dd5ac8: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1dd5ac8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dd5acc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1dd5accu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd5ad0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dd5ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd5ad4: 0xc77568a  jal         func_1DD5A28
    ctx->pc = 0x1DD5AD4u;
    SET_GPR_U32(ctx, 31, 0x1DD5ADCu);
    ctx->pc = 0x1DD5AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD5AD4u;
    // 0x1dd5ad8: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD5A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD5A28u, 0x1DD5AD4u, 0x1DD5ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD5ADCu;
label_1dd5adc:
    // 0x1dd5adc: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1dd5adcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dd5ae0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1dd5ae0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd5ae4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dd5ae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd5ae8: 0xc77568c  jal         func_1DD5A30
    ctx->pc = 0x1DD5AE8u;
    SET_GPR_U32(ctx, 31, 0x1DD5AF0u);
    ctx->pc = 0x1DD5AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD5AE8u;
    // 0x1dd5aec: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD5A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD5A30u, 0x1DD5AE8u, 0x1DD5AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD5AF0u;
label_1dd5af0:
    // 0x1dd5af0: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1dd5af0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dd5af4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1dd5af4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd5af8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1dd5af8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd5afc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1dd5afcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd5b00: 0x8dea00dc  lw          $t2, 0xDC($t7)
    ctx->pc = 0x1dd5b00u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1dd5b04: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1dd5b04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd5b08: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1dd5b08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd5b0c: 0xc77568e  jal         func_1DD5A38
    ctx->pc = 0x1DD5B0Cu;
    SET_GPR_U32(ctx, 31, 0x1DD5B14u);
    ctx->pc = 0x1DD5B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD5B0Cu;
    // 0x1dd5b10: 0x25440140  addiu       $a0, $t2, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD5A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD5A38u, 0x1DD5B0Cu, 0x1DD5B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD5B14u;
label_1dd5b14:
    // 0x1dd5b14: 0x8f8f801c  lw          $t7, -0x7FE4($gp)
    ctx->pc = 0x1dd5b14u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934556)));
    // 0x1dd5b18: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x1dd5b18u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x1dd5b1c: 0xaf8f801c  sw          $t7, -0x7FE4($gp)
    ctx->pc = 0x1dd5b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934556), GPR_U32(ctx, 15));
label_1dd5b20:
    // 0x1dd5b20: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1dd5b20u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dd5b24: 0x8de400dc  lw          $a0, 0xDC($t7)
    ctx->pc = 0x1dd5b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1dd5b28: 0xc775690  jal         func_1DD5A40
    ctx->pc = 0x1DD5B28u;
    SET_GPR_U32(ctx, 31, 0x1DD5B30u);
    ctx->pc = 0x1DD5B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD5B28u;
    // 0x1dd5b2c: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD5A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD5A40u, 0x1DD5B28u, 0x1DD5B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD5B30u;
label_1dd5b30:
    // 0x1dd5b30: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1dd5b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1dd5b34: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1dd5b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1dd5b38: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DD5B38u;
    {
        const bool branch_taken_0x1dd5b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD5B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD5B38u;
        // 0x1dd5b3c: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd5b38) {
            ctx->pc = 0x1DD5B48u;
            goto label_1dd5b48;
        }
    }
    ctx->pc = 0x1DD5B40u;
    // 0x1dd5b40: 0xaf80801c  sw          $zero, -0x7FE4($gp)
    ctx->pc = 0x1dd5b40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934556), GPR_U32(ctx, 0));
    // 0x1dd5b44: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1dd5b44u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dd5b48:
    // 0x1dd5b48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dd5b48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd5b4c: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x1dd5b4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd5b50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dd5b50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dd5b54: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dd5b54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd5b58: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1dd5b58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dd5b5c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1dd5b5cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dd5b60: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1dd5b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1dd5b64: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD5B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD5B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD5B64u;
        // 0x1dd5b68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD5B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD5B6Cu;
    // 0x1dd5b6c: 0x0  nop
    ctx->pc = 0x1dd5b6cu;
    // NOP
    ctx->pc = 0x1dd5b70u;
}
