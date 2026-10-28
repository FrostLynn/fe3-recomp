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

// Function: sub_01DCBBA8
// Address: 0x1dcbba8 - 0x1dcbca0
void sub_01DCBBA8_0x1dcbba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DCBBA8_0x1dcbba8");
#endif

    switch (ctx->pc) {
        case 0x1dcbbe4u: goto label_1dcbbe4;
        case 0x1dcbbf8u: goto label_1dcbbf8;
        case 0x1dcbc0cu: goto label_1dcbc0c;
        case 0x1dcbc20u: goto label_1dcbc20;
        case 0x1dcbc44u: goto label_1dcbc44;
        case 0x1dcbc60u: goto label_1dcbc60;
        default: break;
    }

    ctx->pc = 0x1dcbba8u;

    // 0x1dcbba8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dcbba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dcbbac: 0x8f8f802c  lw          $t7, -0x7FD4($gp)
    ctx->pc = 0x1dcbbacu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934572)));
    // 0x1dcbbb0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1dcbbb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1dcbbb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dcbbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dcbbb8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dcbbb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dcbbbc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1dcbbbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1dcbbc0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1dcbbc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1dcbbc4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1dcbbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1dcbbc8: 0x15e00021  bnez        $t7, . + 4 + (0x21 << 2)
    ctx->pc = 0x1DCBBC8u;
    {
        const bool branch_taken_0x1dcbbc8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCBBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCBBC8u;
        // 0x1dcbbcc: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcbbc8) {
            ctx->pc = 0x1DCBC50u;
            goto label_1dcbc50;
        }
    }
    ctx->pc = 0x1DCBBD0u;
    // 0x1dcbbd0: 0x8f8f8030  lw          $t7, -0x7FD0($gp)
    ctx->pc = 0x1dcbbd0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934576)));
    // 0x1dcbbd4: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1dcbbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1dcbbd8: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x1dcbbd8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1dcbbdc: 0xc772ecc  jal         func_1DCBB30
    ctx->pc = 0x1DCBBDCu;
    SET_GPR_U32(ctx, 31, 0x1DCBBE4u);
    ctx->pc = 0x1DCBBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCBBDCu;
    // 0x1dcbbe0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCBB30u, 0x1DCBBDCu, 0x1DCBBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCBBE4u;
label_1dcbbe4:
    // 0x1dcbbe4: 0x8f8f8030  lw          $t7, -0x7FD0($gp)
    ctx->pc = 0x1dcbbe4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934576)));
    // 0x1dcbbe8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1dcbbe8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcbbec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dcbbecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcbbf0: 0xc772ece  jal         func_1DCBB38
    ctx->pc = 0x1DCBBF0u;
    SET_GPR_U32(ctx, 31, 0x1DCBBF8u);
    ctx->pc = 0x1DCBBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCBBF0u;
    // 0x1dcbbf4: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCBB38u, 0x1DCBBF0u, 0x1DCBBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCBBF8u;
label_1dcbbf8:
    // 0x1dcbbf8: 0x8f8f8030  lw          $t7, -0x7FD0($gp)
    ctx->pc = 0x1dcbbf8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934576)));
    // 0x1dcbbfc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1dcbbfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcbc00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dcbc00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcbc04: 0xc772ed0  jal         func_1DCBB40
    ctx->pc = 0x1DCBC04u;
    SET_GPR_U32(ctx, 31, 0x1DCBC0Cu);
    ctx->pc = 0x1DCBC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCBC04u;
    // 0x1dcbc08: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCBB40u, 0x1DCBC04u, 0x1DCBC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCBC0Cu;
label_1dcbc0c:
    // 0x1dcbc0c: 0x8f8f8030  lw          $t7, -0x7FD0($gp)
    ctx->pc = 0x1dcbc0cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934576)));
    // 0x1dcbc10: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1dcbc10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcbc14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dcbc14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcbc18: 0xc772ed2  jal         func_1DCBB48
    ctx->pc = 0x1DCBC18u;
    SET_GPR_U32(ctx, 31, 0x1DCBC20u);
    ctx->pc = 0x1DCBC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCBC18u;
    // 0x1dcbc1c: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCBB48u, 0x1DCBC18u, 0x1DCBC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCBC20u;
label_1dcbc20:
    // 0x1dcbc20: 0x8f8f8030  lw          $t7, -0x7FD0($gp)
    ctx->pc = 0x1dcbc20u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934576)));
    // 0x1dcbc24: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1dcbc24u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcbc28: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1dcbc28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcbc2c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1dcbc2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcbc30: 0x8dea00dc  lw          $t2, 0xDC($t7)
    ctx->pc = 0x1dcbc30u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1dcbc34: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1dcbc34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcbc38: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1dcbc38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcbc3c: 0xc772ed4  jal         func_1DCBB50
    ctx->pc = 0x1DCBC3Cu;
    SET_GPR_U32(ctx, 31, 0x1DCBC44u);
    ctx->pc = 0x1DCBC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCBC3Cu;
    // 0x1dcbc40: 0x25440140  addiu       $a0, $t2, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCBB50u, 0x1DCBC3Cu, 0x1DCBC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCBC44u;
label_1dcbc44:
    // 0x1dcbc44: 0x8f8f802c  lw          $t7, -0x7FD4($gp)
    ctx->pc = 0x1dcbc44u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934572)));
    // 0x1dcbc48: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x1dcbc48u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x1dcbc4c: 0xaf8f802c  sw          $t7, -0x7FD4($gp)
    ctx->pc = 0x1dcbc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934572), GPR_U32(ctx, 15));
label_1dcbc50:
    // 0x1dcbc50: 0x8f8f8030  lw          $t7, -0x7FD0($gp)
    ctx->pc = 0x1dcbc50u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934576)));
    // 0x1dcbc54: 0x8de400dc  lw          $a0, 0xDC($t7)
    ctx->pc = 0x1dcbc54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1dcbc58: 0xc772ed6  jal         func_1DCBB58
    ctx->pc = 0x1DCBC58u;
    SET_GPR_U32(ctx, 31, 0x1DCBC60u);
    ctx->pc = 0x1DCBC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCBC58u;
    // 0x1dcbc5c: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCBB58u, 0x1DCBC58u, 0x1DCBC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCBC60u;
label_1dcbc60:
    // 0x1dcbc60: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1dcbc60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1dcbc64: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1dcbc64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1dcbc68: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DCBC68u;
    {
        const bool branch_taken_0x1dcbc68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCBC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCBC68u;
        // 0x1dcbc6c: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcbc68) {
            ctx->pc = 0x1DCBC78u;
            goto label_1dcbc78;
        }
    }
    ctx->pc = 0x1DCBC70u;
    // 0x1dcbc70: 0xaf80802c  sw          $zero, -0x7FD4($gp)
    ctx->pc = 0x1dcbc70u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934572), GPR_U32(ctx, 0));
    // 0x1dcbc74: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1dcbc74u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dcbc78:
    // 0x1dcbc78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dcbc78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dcbc7c: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x1dcbc7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcbc80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dcbc80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dcbc84: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dcbc84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dcbc88: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1dcbc88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dcbc8c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1dcbc8cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dcbc90: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1dcbc90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1dcbc94: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCBC94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCBC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCBC94u;
        // 0x1dcbc98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCBC94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCBC9Cu;
    // 0x1dcbc9c: 0x0  nop
    ctx->pc = 0x1dcbc9cu;
    // NOP
    ctx->pc = 0x1dcbca0u;
}
