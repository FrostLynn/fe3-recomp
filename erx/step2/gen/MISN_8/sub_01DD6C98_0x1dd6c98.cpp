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

// Function: sub_01DD6C98
// Address: 0x1dd6c98 - 0x1dd6d90
void sub_01DD6C98_0x1dd6c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD6C98_0x1dd6c98");
#endif

    switch (ctx->pc) {
        case 0x1dd6cd4u: goto label_1dd6cd4;
        case 0x1dd6ce8u: goto label_1dd6ce8;
        case 0x1dd6cfcu: goto label_1dd6cfc;
        case 0x1dd6d10u: goto label_1dd6d10;
        case 0x1dd6d34u: goto label_1dd6d34;
        case 0x1dd6d50u: goto label_1dd6d50;
        default: break;
    }

    ctx->pc = 0x1dd6c98u;

    // 0x1dd6c98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dd6c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dd6c9c: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1dd6c9cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dd6ca0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1dd6ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1dd6ca4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dd6ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dd6ca8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dd6ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dd6cac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1dd6cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1dd6cb0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1dd6cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1dd6cb4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1dd6cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1dd6cb8: 0x15e00021  bnez        $t7, . + 4 + (0x21 << 2)
    ctx->pc = 0x1DD6CB8u;
    {
        const bool branch_taken_0x1dd6cb8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD6CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD6CB8u;
        // 0x1dd6cbc: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd6cb8) {
            ctx->pc = 0x1DD6D40u;
            goto label_1dd6d40;
        }
    }
    ctx->pc = 0x1DD6CC0u;
    // 0x1dd6cc0: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dd6cc0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd6cc4: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1dd6cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1dd6cc8: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x1dd6cc8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1dd6ccc: 0xc775b0a  jal         func_1DD6C28
    ctx->pc = 0x1DD6CCCu;
    SET_GPR_U32(ctx, 31, 0x1DD6CD4u);
    ctx->pc = 0x1DD6CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD6CCCu;
    // 0x1dd6cd0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD6C28u, 0x1DD6CCCu, 0x1DD6CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD6CD4u;
label_1dd6cd4:
    // 0x1dd6cd4: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dd6cd4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd6cd8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1dd6cd8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd6cdc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dd6cdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd6ce0: 0xc775b0c  jal         func_1DD6C30
    ctx->pc = 0x1DD6CE0u;
    SET_GPR_U32(ctx, 31, 0x1DD6CE8u);
    ctx->pc = 0x1DD6CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD6CE0u;
    // 0x1dd6ce4: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD6C30u, 0x1DD6CE0u, 0x1DD6CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD6CE8u;
label_1dd6ce8:
    // 0x1dd6ce8: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dd6ce8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd6cec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1dd6cecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd6cf0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dd6cf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd6cf4: 0xc775b0e  jal         func_1DD6C38
    ctx->pc = 0x1DD6CF4u;
    SET_GPR_U32(ctx, 31, 0x1DD6CFCu);
    ctx->pc = 0x1DD6CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD6CF4u;
    // 0x1dd6cf8: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD6C38u, 0x1DD6CF4u, 0x1DD6CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD6CFCu;
label_1dd6cfc:
    // 0x1dd6cfc: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dd6cfcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd6d00: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1dd6d00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd6d04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dd6d04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd6d08: 0xc775b10  jal         func_1DD6C40
    ctx->pc = 0x1DD6D08u;
    SET_GPR_U32(ctx, 31, 0x1DD6D10u);
    ctx->pc = 0x1DD6D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD6D08u;
    // 0x1dd6d0c: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD6C40u, 0x1DD6D08u, 0x1DD6D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD6D10u;
label_1dd6d10:
    // 0x1dd6d10: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dd6d10u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd6d14: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1dd6d14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd6d18: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1dd6d18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd6d1c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1dd6d1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd6d20: 0x8dea00dc  lw          $t2, 0xDC($t7)
    ctx->pc = 0x1dd6d20u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1dd6d24: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1dd6d24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd6d28: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1dd6d28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd6d2c: 0xc775b12  jal         func_1DD6C48
    ctx->pc = 0x1DD6D2Cu;
    SET_GPR_U32(ctx, 31, 0x1DD6D34u);
    ctx->pc = 0x1DD6D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD6D2Cu;
    // 0x1dd6d30: 0x25440140  addiu       $a0, $t2, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD6C48u, 0x1DD6D2Cu, 0x1DD6D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD6D34u;
label_1dd6d34:
    // 0x1dd6d34: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1dd6d34u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dd6d38: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x1dd6d38u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x1dd6d3c: 0xaf8f8018  sw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1dd6d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934552), GPR_U32(ctx, 15));
label_1dd6d40:
    // 0x1dd6d40: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dd6d40u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd6d44: 0x8de400dc  lw          $a0, 0xDC($t7)
    ctx->pc = 0x1dd6d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1dd6d48: 0xc775b14  jal         func_1DD6C50
    ctx->pc = 0x1DD6D48u;
    SET_GPR_U32(ctx, 31, 0x1DD6D50u);
    ctx->pc = 0x1DD6D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD6D48u;
    // 0x1dd6d4c: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD6C50u, 0x1DD6D48u, 0x1DD6D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD6D50u;
label_1dd6d50:
    // 0x1dd6d50: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1dd6d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1dd6d54: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1dd6d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1dd6d58: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DD6D58u;
    {
        const bool branch_taken_0x1dd6d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD6D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD6D58u;
        // 0x1dd6d5c: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd6d58) {
            ctx->pc = 0x1DD6D68u;
            goto label_1dd6d68;
        }
    }
    ctx->pc = 0x1DD6D60u;
    // 0x1dd6d60: 0xaf808018  sw          $zero, -0x7FE8($gp)
    ctx->pc = 0x1dd6d60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934552), GPR_U32(ctx, 0));
    // 0x1dd6d64: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1dd6d64u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dd6d68:
    // 0x1dd6d68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dd6d68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd6d6c: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x1dd6d6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd6d70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dd6d70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dd6d74: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dd6d74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd6d78: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1dd6d78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dd6d7c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1dd6d7cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dd6d80: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1dd6d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1dd6d84: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD6D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD6D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD6D84u;
        // 0x1dd6d88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD6D84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD6D8Cu;
    // 0x1dd6d8c: 0x0  nop
    ctx->pc = 0x1dd6d8cu;
    // NOP
    ctx->pc = 0x1dd6d90u;
}
