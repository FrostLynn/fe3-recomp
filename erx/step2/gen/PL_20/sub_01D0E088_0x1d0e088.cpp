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

// Function: sub_01D0E088
// Address: 0x1d0e088 - 0x1d0e1c0
void sub_01D0E088_0x1d0e088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0E088_0x1d0e088");
#endif

    switch (ctx->pc) {
        case 0x1d0e0a8u: goto label_1d0e0a8;
        case 0x1d0e0bcu: goto label_1d0e0bc;
        case 0x1d0e0c0u: goto label_1d0e0c0;
        case 0x1d0e0dcu: goto label_1d0e0dc;
        case 0x1d0e0ecu: goto label_1d0e0ec;
        case 0x1d0e138u: goto label_1d0e138;
        case 0x1d0e174u: goto label_1d0e174;
        case 0x1d0e180u: goto label_1d0e180;
        case 0x1d0e190u: goto label_1d0e190;
        case 0x1d0e1a8u: goto label_1d0e1a8;
        default: break;
    }

    ctx->pc = 0x1d0e088u;

    // 0x1d0e088: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d0e088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d0e08c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d0e08cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d0e090: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d0e090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d0e094: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d0e094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d0e098: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d0e098u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0e09c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d0e09cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d0e0a0: 0xc742f56  jal         func_1D0BD58
    ctx->pc = 0x1D0E0A0u;
    SET_GPR_U32(ctx, 31, 0x1D0E0A8u);
    ctx->pc = 0x1D0E0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0E0A0u;
    // 0x1d0e0a4: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD58u, 0x1D0E0A0u, 0x1D0E0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0E0A8u;
label_1d0e0a8:
    // 0x1d0e0a8: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1d0e0a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d0e0ac: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D0E0ACu;
    {
        const bool branch_taken_0x1d0e0ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0E0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0E0ACu;
        // 0x1d0e0b0: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0e0ac) {
            ctx->pc = 0x1D0E0F8u;
            goto label_1d0e0f8;
        }
    }
    ctx->pc = 0x1D0E0B4u;
    // 0x1d0e0b4: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D0E0B4u;
    {
        const bool branch_taken_0x1d0e0b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1d0e0b4) {
            ctx->pc = 0x1D0E0D4u;
            goto label_1d0e0d4;
        }
    }
    ctx->pc = 0x1D0E0BCu;
label_1d0e0bc:
    // 0x1d0e0bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d0e0bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0e0c0:
    // 0x1d0e0c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d0e0c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0e0c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d0e0c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d0e0c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d0e0c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0e0cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0E0CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0E0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0E0CCu;
        // 0x1d0e0d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0E0CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0E0D4u;
label_1d0e0d4:
    // 0x1d0e0d4: 0xc742f52  jal         func_1D0BD48
    ctx->pc = 0x1D0E0D4u;
    SET_GPR_U32(ctx, 31, 0x1D0E0DCu);
    ctx->pc = 0x1D0E0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0E0D4u;
    // 0x1d0e0d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD48u, 0x1D0E0D4u, 0x1D0E0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0E0DCu;
label_1d0e0dc:
    // 0x1d0e0dc: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D0E0DCu;
    {
        const bool branch_taken_0x1d0e0dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1D0E0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0E0DCu;
        // 0x1d0e0e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0e0dc) {
            ctx->pc = 0x1D0E0BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0e0bc;
        }
    }
    ctx->pc = 0x1D0E0E4u;
    // 0x1d0e0e4: 0xc742f54  jal         func_1D0BD50
    ctx->pc = 0x1D0E0E4u;
    SET_GPR_U32(ctx, 31, 0x1D0E0ECu);
    ctx->pc = 0x1D0BD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD50u, 0x1D0E0E4u, 0x1D0E0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0E0ECu;
label_1d0e0ec:
    // 0x1d0e0ec: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1D0E0ECu;
    {
        const bool branch_taken_0x1d0e0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0E0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0E0ECu;
        // 0x1d0e0f0: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0e0ec) {
            ctx->pc = 0x1D0E0C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0e0c0;
        }
    }
    ctx->pc = 0x1D0E0F4u;
    // 0x1d0e0f4: 0x0  nop
    ctx->pc = 0x1d0e0f4u;
    // NOP
label_1d0e0f8:
    // 0x1d0e0f8: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1d0e0f8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1d0e0fc: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D0E0FCu;
    {
        const bool branch_taken_0x1d0e0fc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0E100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0E0FCu;
        // 0x1d0e100: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0e0fc) {
            ctx->pc = 0x1D0E0C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0e0c0;
        }
    }
    ctx->pc = 0x1D0E104u;
    // 0x1d0e104: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1d0e104u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1d0e108: 0x3c0e01d1  lui         $t6, 0x1D1
    ctx->pc = 0x1d0e108u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)465 << 16));
    // 0x1d0e10c: 0x25ce3220  addiu       $t6, $t6, 0x3220
    ctx->pc = 0x1d0e10cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 12832));
    // 0x1d0e110: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d0e110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0e114: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d0e114u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d0e118: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d0e118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0e11c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d0e11cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d0e120: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d0e120u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0e124: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d0e124u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d0e128: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d0e128u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0e12c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d0e12cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0e130: 0xc742f62  jal         func_1D0BD88
    ctx->pc = 0x1D0E130u;
    SET_GPR_U32(ctx, 31, 0x1D0E138u);
    ctx->pc = 0x1D0E134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0E130u;
    // 0x1d0e134: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD88u, 0x1D0E130u, 0x1D0E138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0E138u;
label_1d0e138:
    // 0x1d0e138: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d0e138u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0e13c: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1D0E13Cu;
    {
        const bool branch_taken_0x1d0e13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0E140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0E13Cu;
        // 0x1d0e140: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0e13c) {
            ctx->pc = 0x1D0E0BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0e0bc;
        }
    }
    ctx->pc = 0x1D0E144u;
    // 0x1d0e144: 0x0  nop
    ctx->pc = 0x1d0e144u;
    // NOP
    // 0x1d0e148: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d0e148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d0e14c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d0e14cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d0e150: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d0e150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d0e154: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d0e154u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0e158: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d0e158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d0e15c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d0e15cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0e160: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d0e160u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0e164: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d0e164u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0e168: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d0e168u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0e16c: 0xc742f62  jal         func_1D0BD88
    ctx->pc = 0x1D0E16Cu;
    SET_GPR_U32(ctx, 31, 0x1D0E174u);
    ctx->pc = 0x1D0E170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0E16Cu;
    // 0x1d0e170: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD88u, 0x1D0E16Cu, 0x1D0E174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0E174u;
label_1d0e174:
    // 0x1d0e174: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0e174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0e178: 0xc742f5a  jal         func_1D0BD68
    ctx->pc = 0x1D0E178u;
    SET_GPR_U32(ctx, 31, 0x1D0E180u);
    ctx->pc = 0x1D0E17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0E178u;
    // 0x1d0e17c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD68u, 0x1D0E178u, 0x1D0E180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0E180u;
label_1d0e180:
    // 0x1d0e180: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d0e180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d0e184: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d0e184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d0e188: 0xc742f56  jal         func_1D0BD58
    ctx->pc = 0x1D0E188u;
    SET_GPR_U32(ctx, 31, 0x1D0E190u);
    ctx->pc = 0x1D0E18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0E188u;
    // 0x1d0e18c: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD58u, 0x1D0E188u, 0x1D0E190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0E190u;
label_1d0e190:
    // 0x1d0e190: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d0e190u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0e194: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d0e194u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d0e198: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1d0e198u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1d0e19c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d0e19cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d0e1a0: 0xc742f56  jal         func_1D0BD58
    ctx->pc = 0x1D0E1A0u;
    SET_GPR_U32(ctx, 31, 0x1D0E1A8u);
    ctx->pc = 0x1D0E1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0E1A0u;
    // 0x1d0e1a4: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD58u, 0x1D0E1A0u, 0x1D0E1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0E1A8u;
label_1d0e1a8:
    // 0x1d0e1a8: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d0e1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d0e1ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d0e1acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0e1b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d0e1b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d0e1b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0E1B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0E1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0E1B4u;
        // 0x1d0e1b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0E1B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0E1BCu;
    // 0x1d0e1bc: 0x0  nop
    ctx->pc = 0x1d0e1bcu;
    // NOP
    ctx->pc = 0x1d0e1c0u;
}
