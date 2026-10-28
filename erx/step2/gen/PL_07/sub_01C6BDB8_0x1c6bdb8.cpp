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

// Function: sub_01C6BDB8
// Address: 0x1c6bdb8 - 0x1c6bea0
void sub_01C6BDB8_0x1c6bdb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C6BDB8_0x1c6bdb8");
#endif

    switch (ctx->pc) {
        case 0x1c6bdccu: goto label_1c6bdcc;
        case 0x1c6bde0u: goto label_1c6bde0;
        case 0x1c6bde4u: goto label_1c6bde4;
        case 0x1c6be00u: goto label_1c6be00;
        case 0x1c6be0cu: goto label_1c6be0c;
        case 0x1c6be4cu: goto label_1c6be4c;
        case 0x1c6be78u: goto label_1c6be78;
        case 0x1c6be84u: goto label_1c6be84;
        case 0x1c6be90u: goto label_1c6be90;
        default: break;
    }

    ctx->pc = 0x1c6bdb8u;

    // 0x1c6bdb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c6bdb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c6bdbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c6bdbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c6bdc0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c6bdc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c6bdc4: 0xc71a794  jal         func_1C69E50
    ctx->pc = 0x1C6BDC4u;
    SET_GPR_U32(ctx, 31, 0x1C6BDCCu);
    ctx->pc = 0x1C6BDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BDC4u;
    // 0x1c6bdc8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E50u, 0x1C6BDC4u, 0x1C6BDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BDCCu;
label_1c6bdcc:
    // 0x1c6bdcc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c6bdccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6bdd0: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C6BDD0u;
    {
        const bool branch_taken_0x1c6bdd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C6BDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6BDD0u;
        // 0x1c6bdd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6bdd0) {
            ctx->pc = 0x1C6BDF4u;
            goto label_1c6bdf4;
        }
    }
    ctx->pc = 0x1C6BDD8u;
    // 0x1c6bdd8: 0xc71a796  jal         func_1C69E58
    ctx->pc = 0x1C6BDD8u;
    SET_GPR_U32(ctx, 31, 0x1C6BDE0u);
    ctx->pc = 0x1C69E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E58u, 0x1C6BDD8u, 0x1C6BDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BDE0u;
label_1c6bde0:
    // 0x1c6bde0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c6bde0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c6bde4:
    // 0x1c6bde4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c6bde4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6bde8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c6bde8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c6bdec: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6BDECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6BDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6BDECu;
        // 0x1c6bdf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6BDECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6BDF4u;
label_1c6bdf4:
    // 0x1c6bdf4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c6bdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c6bdf8: 0xc71a798  jal         func_1C69E60
    ctx->pc = 0x1C6BDF8u;
    SET_GPR_U32(ctx, 31, 0x1C6BE00u);
    ctx->pc = 0x1C6BDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BDF8u;
    // 0x1c6bdfc: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E60u, 0x1C6BDF8u, 0x1C6BE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BE00u;
label_1c6be00:
    // 0x1c6be00: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1c6be00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1c6be04: 0xc71a7a6  jal         func_1C69E98
    ctx->pc = 0x1C6BE04u;
    SET_GPR_U32(ctx, 31, 0x1C6BE0Cu);
    ctx->pc = 0x1C6BE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BE04u;
    // 0x1c6be08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E98u, 0x1C6BE04u, 0x1C6BE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BE0Cu;
label_1c6be0c:
    // 0x1c6be0c: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1C6BE0Cu;
    {
        const bool branch_taken_0x1c6be0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6BE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6BE0Cu;
        // 0x1c6be10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6be0c) {
            ctx->pc = 0x1C6BDE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6bde4;
        }
    }
    ctx->pc = 0x1C6BE14u;
    // 0x1c6be14: 0x0  nop
    ctx->pc = 0x1c6be14u;
    // NOP
    // 0x1c6be18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c6be18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c6be1c: 0x3c0f01c7  lui         $t7, 0x1C7
    ctx->pc = 0x1c6be1cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)455 << 16));
    // 0x1c6be20: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c6be20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c6be24: 0x25ee5870  addiu       $t6, $t7, 0x5870
    ctx->pc = 0x1c6be24u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 22640));
    // 0x1c6be28: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c6be28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c6be2c: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1c6be2cu;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1C75874u));
    // 0x1c6be30: 0x8ded5870  lw          $t5, 0x5870($t7)
    ctx->pc = 0x1c6be30u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1C75870u));
    // 0x1c6be34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c6be34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6be38: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1c6be38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1c6be3c: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1c6be3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1c6be40: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1c6be40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c6be44: 0xc71a798  jal         func_1C69E60
    ctx->pc = 0x1C6BE44u;
    SET_GPR_U32(ctx, 31, 0x1C6BE4Cu);
    ctx->pc = 0x1C6BE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BE44u;
    // 0x1c6be48: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E60u, 0x1C6BE44u, 0x1C6BE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BE4Cu;
label_1c6be4c:
    // 0x1c6be4c: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1c6be4cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1c6be50: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c6be50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6be54: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c6be54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6be58: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c6be58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6be5c: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1c6be5cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1c6be60: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c6be60u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6be64: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1c6be64u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1c6be68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6be68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6be6c: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1c6be6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c6be70: 0xc71a7a4  jal         func_1C69E90
    ctx->pc = 0x1C6BE70u;
    SET_GPR_U32(ctx, 31, 0x1C6BE78u);
    ctx->pc = 0x1C6BE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BE70u;
    // 0x1c6be74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E90u, 0x1C6BE70u, 0x1C6BE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BE78u;
label_1c6be78:
    // 0x1c6be78: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c6be78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c6be7c: 0xc71a798  jal         func_1C69E60
    ctx->pc = 0x1C6BE7Cu;
    SET_GPR_U32(ctx, 31, 0x1C6BE84u);
    ctx->pc = 0x1C6BE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BE7Cu;
    // 0x1c6be80: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E60u, 0x1C6BE7Cu, 0x1C6BE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BE84u;
label_1c6be84:
    // 0x1c6be84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c6be84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6be88: 0xc71a7a8  jal         func_1C69EA0
    ctx->pc = 0x1C6BE88u;
    SET_GPR_U32(ctx, 31, 0x1C6BE90u);
    ctx->pc = 0x1C6BE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BE88u;
    // 0x1c6be8c: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69EA0u, 0x1C6BE88u, 0x1C6BE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BE90u;
label_1c6be90:
    // 0x1c6be90: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c6be90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6be94: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c6be94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c6be98: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6BE98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6BE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6BE98u;
        // 0x1c6be9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6BE98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6BEA0u;
}
