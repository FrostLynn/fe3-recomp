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

// Function: sub_01D5EC70
// Address: 0x1d5ec70 - 0x1d5ed58
void sub_01D5EC70_0x1d5ec70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D5EC70_0x1d5ec70");
#endif

    switch (ctx->pc) {
        case 0x1d5ec84u: goto label_1d5ec84;
        case 0x1d5ec98u: goto label_1d5ec98;
        case 0x1d5ec9cu: goto label_1d5ec9c;
        case 0x1d5ecb8u: goto label_1d5ecb8;
        case 0x1d5ecc4u: goto label_1d5ecc4;
        case 0x1d5ed04u: goto label_1d5ed04;
        case 0x1d5ed30u: goto label_1d5ed30;
        case 0x1d5ed3cu: goto label_1d5ed3c;
        case 0x1d5ed48u: goto label_1d5ed48;
        default: break;
    }

    ctx->pc = 0x1d5ec70u;

    // 0x1d5ec70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d5ec70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d5ec74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d5ec74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d5ec78: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d5ec78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d5ec7c: 0xc757352  jal         func_1D5CD48
    ctx->pc = 0x1D5EC7Cu;
    SET_GPR_U32(ctx, 31, 0x1D5EC84u);
    ctx->pc = 0x1D5EC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5EC7Cu;
    // 0x1d5ec80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD48u, 0x1D5EC7Cu, 0x1D5EC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5EC84u;
label_1d5ec84:
    // 0x1d5ec84: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d5ec84u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5ec88: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D5EC88u;
    {
        const bool branch_taken_0x1d5ec88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D5EC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5EC88u;
        // 0x1d5ec8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5ec88) {
            ctx->pc = 0x1D5ECACu;
            goto label_1d5ecac;
        }
    }
    ctx->pc = 0x1D5EC90u;
    // 0x1d5ec90: 0xc757354  jal         func_1D5CD50
    ctx->pc = 0x1D5EC90u;
    SET_GPR_U32(ctx, 31, 0x1D5EC98u);
    ctx->pc = 0x1D5CD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD50u, 0x1D5EC90u, 0x1D5EC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5EC98u;
label_1d5ec98:
    // 0x1d5ec98: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d5ec98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d5ec9c:
    // 0x1d5ec9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d5ec9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5eca0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d5eca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d5eca4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5ECA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5ECA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5ECA4u;
        // 0x1d5eca8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5ECA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5ECACu;
label_1d5ecac:
    // 0x1d5ecac: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d5ecacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d5ecb0: 0xc757356  jal         func_1D5CD58
    ctx->pc = 0x1D5ECB0u;
    SET_GPR_U32(ctx, 31, 0x1D5ECB8u);
    ctx->pc = 0x1D5ECB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5ECB0u;
    // 0x1d5ecb4: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD58u, 0x1D5ECB0u, 0x1D5ECB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5ECB8u;
label_1d5ecb8:
    // 0x1d5ecb8: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1d5ecb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1d5ecbc: 0xc757364  jal         func_1D5CD90
    ctx->pc = 0x1D5ECBCu;
    SET_GPR_U32(ctx, 31, 0x1D5ECC4u);
    ctx->pc = 0x1D5ECC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5ECBCu;
    // 0x1d5ecc0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD90u, 0x1D5ECBCu, 0x1D5ECC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5ECC4u;
label_1d5ecc4:
    // 0x1d5ecc4: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1D5ECC4u;
    {
        const bool branch_taken_0x1d5ecc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5ECC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5ECC4u;
        // 0x1d5ecc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5ecc4) {
            ctx->pc = 0x1D5EC9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5ec9c;
        }
    }
    ctx->pc = 0x1D5ECCCu;
    // 0x1d5eccc: 0x0  nop
    ctx->pc = 0x1d5ecccu;
    // NOP
    // 0x1d5ecd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d5ecd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d5ecd4: 0x3c0f01d6  lui         $t7, 0x1D6
    ctx->pc = 0x1d5ecd4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)470 << 16));
    // 0x1d5ecd8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d5ecd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d5ecdc: 0x25ee6698  addiu       $t6, $t7, 0x6698
    ctx->pc = 0x1d5ecdcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 26264));
    // 0x1d5ece0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1d5ece0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1d5ece4: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1d5ece4u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1D6669Cu));
    // 0x1d5ece8: 0x8ded6698  lw          $t5, 0x6698($t7)
    ctx->pc = 0x1d5ece8u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1D66698u));
    // 0x1d5ecec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d5ececu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ecf0: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1d5ecf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1d5ecf4: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1d5ecf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1d5ecf8: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1d5ecf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d5ecfc: 0xc757356  jal         func_1D5CD58
    ctx->pc = 0x1D5ECFCu;
    SET_GPR_U32(ctx, 31, 0x1D5ED04u);
    ctx->pc = 0x1D5ED00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5ECFCu;
    // 0x1d5ed00: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD58u, 0x1D5ECFCu, 0x1D5ED04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5ED04u;
label_1d5ed04:
    // 0x1d5ed04: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1d5ed04u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1d5ed08: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d5ed08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5ed0c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d5ed0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ed10: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d5ed10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5ed14: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d5ed14u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d5ed18: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d5ed18u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ed1c: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1d5ed1cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1d5ed20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5ed20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ed24: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d5ed24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d5ed28: 0xc757362  jal         func_1D5CD88
    ctx->pc = 0x1D5ED28u;
    SET_GPR_U32(ctx, 31, 0x1D5ED30u);
    ctx->pc = 0x1D5ED2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5ED28u;
    // 0x1d5ed2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD88u, 0x1D5ED28u, 0x1D5ED30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5ED30u;
label_1d5ed30:
    // 0x1d5ed30: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d5ed30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d5ed34: 0xc757356  jal         func_1D5CD58
    ctx->pc = 0x1D5ED34u;
    SET_GPR_U32(ctx, 31, 0x1D5ED3Cu);
    ctx->pc = 0x1D5ED38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5ED34u;
    // 0x1d5ed38: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD58u, 0x1D5ED34u, 0x1D5ED3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5ED3Cu;
label_1d5ed3c:
    // 0x1d5ed3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d5ed3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ed40: 0xc757366  jal         func_1D5CD98
    ctx->pc = 0x1D5ED40u;
    SET_GPR_U32(ctx, 31, 0x1D5ED48u);
    ctx->pc = 0x1D5ED44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5ED40u;
    // 0x1d5ed44: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD98u, 0x1D5ED40u, 0x1D5ED48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5ED48u;
label_1d5ed48:
    // 0x1d5ed48: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1d5ed48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5ed4c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d5ed4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d5ed50: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5ED50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5ED54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5ED50u;
        // 0x1d5ed54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5ED50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5ED58u;
}
