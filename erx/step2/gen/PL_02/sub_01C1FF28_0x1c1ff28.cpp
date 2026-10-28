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

// Function: sub_01C1FF28
// Address: 0x1c1ff28 - 0x1c20050
void sub_01C1FF28_0x1c1ff28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C1FF28_0x1c1ff28");
#endif

    switch (ctx->pc) {
        case 0x1c1ff50u: goto label_1c1ff50;
        case 0x1c1ff64u: goto label_1c1ff64;
        case 0x1c1ff68u: goto label_1c1ff68;
        case 0x1c1ff88u: goto label_1c1ff88;
        case 0x1c1ff98u: goto label_1c1ff98;
        case 0x1c1ffccu: goto label_1c1ffcc;
        case 0x1c20004u: goto label_1c20004;
        case 0x1c20010u: goto label_1c20010;
        case 0x1c20020u: goto label_1c20020;
        case 0x1c20038u: goto label_1c20038;
        default: break;
    }

    ctx->pc = 0x1c1ff28u;

    // 0x1c1ff28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c1ff28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c1ff2c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c1ff2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c1ff30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c1ff30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c1ff34: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c1ff34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c1ff38: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c1ff38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1ff3c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c1ff3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c1ff40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c1ff40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1ff44: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c1ff44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c1ff48: 0xc707c5a  jal         func_1C1F168
    ctx->pc = 0x1C1FF48u;
    SET_GPR_U32(ctx, 31, 0x1C1FF50u);
    ctx->pc = 0x1C1FF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1FF48u;
    // 0x1c1ff4c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F168u, 0x1C1FF48u, 0x1C1FF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1FF50u;
label_1c1ff50:
    // 0x1c1ff50: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1c1ff50u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1c1ff54: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C1FF54u;
    {
        const bool branch_taken_0x1c1ff54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1FF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1FF54u;
        // 0x1c1ff58: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1ff54) {
            ctx->pc = 0x1C1FFA0u;
            goto label_1c1ffa0;
        }
    }
    ctx->pc = 0x1C1FF5Cu;
    // 0x1c1ff5c: 0x120f0008  beq         $s0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C1FF5Cu;
    {
        const bool branch_taken_0x1c1ff5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1c1ff5c) {
            ctx->pc = 0x1C1FF80u;
            goto label_1c1ff80;
        }
    }
    ctx->pc = 0x1C1FF64u;
label_1c1ff64:
    // 0x1c1ff64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c1ff64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1ff68:
    // 0x1c1ff68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1ff68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1ff6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c1ff6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c1ff70: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c1ff70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1ff74: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c1ff74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c1ff78: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1FF78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1FF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1FF78u;
        // 0x1c1ff7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1FF78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1FF80u;
label_1c1ff80:
    // 0x1c1ff80: 0xc707c56  jal         func_1C1F158
    ctx->pc = 0x1C1FF80u;
    SET_GPR_U32(ctx, 31, 0x1C1FF88u);
    ctx->pc = 0x1C1FF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1FF80u;
    // 0x1c1ff84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F158u, 0x1C1FF80u, 0x1C1FF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1FF88u;
label_1c1ff88:
    // 0x1c1ff88: 0x1450fff6  bne         $v0, $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1C1FF88u;
    {
        const bool branch_taken_0x1c1ff88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1C1FF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1FF88u;
        // 0x1c1ff8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1ff88) {
            ctx->pc = 0x1C1FF64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1ff64;
        }
    }
    ctx->pc = 0x1C1FF90u;
    // 0x1c1ff90: 0xc707c58  jal         func_1C1F160
    ctx->pc = 0x1C1FF90u;
    SET_GPR_U32(ctx, 31, 0x1C1FF98u);
    ctx->pc = 0x1C1F160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F160u, 0x1C1FF90u, 0x1C1FF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1FF98u;
label_1c1ff98:
    // 0x1c1ff98: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1C1FF98u;
    {
        const bool branch_taken_0x1c1ff98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1FF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1FF98u;
        // 0x1c1ff9c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1ff98) {
            ctx->pc = 0x1C1FF68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1ff68;
        }
    }
    ctx->pc = 0x1C1FFA0u;
label_1c1ffa0:
    // 0x1c1ffa0: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1c1ffa0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1c1ffa4: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C1FFA4u;
    {
        const bool branch_taken_0x1c1ffa4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1FFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1FFA4u;
        // 0x1c1ffa8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1ffa4) {
            ctx->pc = 0x1C1FF68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1ff68;
        }
    }
    ctx->pc = 0x1C1FFACu;
    // 0x1c1ffac: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1c1ffacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1ffb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c1ffb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1ffb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1ffb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1ffb8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c1ffb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1ffbc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c1ffbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1ffc0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c1ffc0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1ffc4: 0xc707c66  jal         func_1C1F198
    ctx->pc = 0x1C1FFC4u;
    SET_GPR_U32(ctx, 31, 0x1C1FFCCu);
    ctx->pc = 0x1C1FFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1FFC4u;
    // 0x1c1ffc8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F198u, 0x1C1FFC4u, 0x1C1FFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1FFCCu;
label_1c1ffcc:
    // 0x1c1ffcc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c1ffccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1ffd0: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x1C1FFD0u;
    {
        const bool branch_taken_0x1c1ffd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1FFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1FFD0u;
        // 0x1c1ffd4: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1ffd0) {
            ctx->pc = 0x1C1FF64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1ff64;
        }
    }
    ctx->pc = 0x1C1FFD8u;
    // 0x1c1ffd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c1ffd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c1ffdc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c1ffdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c1ffe0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c1ffe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c1ffe4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c1ffe4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1ffe8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c1ffe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c1ffec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c1ffecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1fff0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c1fff0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1fff4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c1fff4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1fff8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c1fff8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1fffc: 0xc707c66  jal         func_1C1F198
    ctx->pc = 0x1C1FFFCu;
    SET_GPR_U32(ctx, 31, 0x1C20004u);
    ctx->pc = 0x1C20000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1FFFCu;
    // 0x1c20000: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F198u, 0x1C1FFFCu, 0x1C20004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20004u;
label_1c20004:
    // 0x1c20004: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c20004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20008: 0xc707c5e  jal         func_1C1F178
    ctx->pc = 0x1C20008u;
    SET_GPR_U32(ctx, 31, 0x1C20010u);
    ctx->pc = 0x1C2000Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C20008u;
    // 0x1c2000c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F178u, 0x1C20008u, 0x1C20010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20010u;
label_1c20010:
    // 0x1c20010: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c20010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c20014: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c20014u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c20018: 0xc707c5a  jal         func_1C1F168
    ctx->pc = 0x1C20018u;
    SET_GPR_U32(ctx, 31, 0x1C20020u);
    ctx->pc = 0x1C2001Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C20018u;
    // 0x1c2001c: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F168u, 0x1C20018u, 0x1C20020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20020u;
label_1c20020:
    // 0x1c20020: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c20020u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c20024: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1c20024u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1c20028: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1c20028u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1c2002c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c2002cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c20030: 0xc707c5a  jal         func_1C1F168
    ctx->pc = 0x1C20030u;
    SET_GPR_U32(ctx, 31, 0x1C20038u);
    ctx->pc = 0x1C20034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C20030u;
    // 0x1c20034: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F168u, 0x1C20030u, 0x1C20038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20038u;
label_1c20038:
    // 0x1c20038: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1c20038u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1c2003c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c2003cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c20040: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c20040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c20044: 0x3e00008  jr          $ra
    ctx->pc = 0x1C20044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C20048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C20044u;
        // 0x1c20048: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C20044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2004Cu;
    // 0x1c2004c: 0x0  nop
    ctx->pc = 0x1c2004cu;
    // NOP
    ctx->pc = 0x1c20050u;
}
