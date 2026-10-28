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

// Function: sub_01D0CB00
// Address: 0x1d0cb00 - 0x1d0cc28
void sub_01D0CB00_0x1d0cb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0CB00_0x1d0cb00");
#endif

    switch (ctx->pc) {
        case 0x1d0cb28u: goto label_1d0cb28;
        case 0x1d0cb3cu: goto label_1d0cb3c;
        case 0x1d0cb40u: goto label_1d0cb40;
        case 0x1d0cb60u: goto label_1d0cb60;
        case 0x1d0cb70u: goto label_1d0cb70;
        case 0x1d0cba4u: goto label_1d0cba4;
        case 0x1d0cbdcu: goto label_1d0cbdc;
        case 0x1d0cbe8u: goto label_1d0cbe8;
        case 0x1d0cbf8u: goto label_1d0cbf8;
        case 0x1d0cc10u: goto label_1d0cc10;
        default: break;
    }

    ctx->pc = 0x1d0cb00u;

    // 0x1d0cb00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d0cb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d0cb04: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d0cb04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d0cb08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d0cb08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d0cb0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d0cb0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d0cb10: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1d0cb10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0cb14: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d0cb14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d0cb18: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d0cb18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0cb1c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d0cb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d0cb20: 0xc742f56  jal         func_1D0BD58
    ctx->pc = 0x1D0CB20u;
    SET_GPR_U32(ctx, 31, 0x1D0CB28u);
    ctx->pc = 0x1D0CB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0CB20u;
    // 0x1d0cb24: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD58u, 0x1D0CB20u, 0x1D0CB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0CB28u;
label_1d0cb28:
    // 0x1d0cb28: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1d0cb28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d0cb2c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D0CB2Cu;
    {
        const bool branch_taken_0x1d0cb2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0CB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0CB2Cu;
        // 0x1d0cb30: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0cb2c) {
            ctx->pc = 0x1D0CB78u;
            goto label_1d0cb78;
        }
    }
    ctx->pc = 0x1D0CB34u;
    // 0x1d0cb34: 0x120f0008  beq         $s0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D0CB34u;
    {
        const bool branch_taken_0x1d0cb34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1d0cb34) {
            ctx->pc = 0x1D0CB58u;
            goto label_1d0cb58;
        }
    }
    ctx->pc = 0x1D0CB3Cu;
label_1d0cb3c:
    // 0x1d0cb3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d0cb3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0cb40:
    // 0x1d0cb40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d0cb40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0cb44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d0cb44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d0cb48: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d0cb48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0cb4c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d0cb4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d0cb50: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0CB50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0CB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0CB50u;
        // 0x1d0cb54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0CB50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0CB58u;
label_1d0cb58:
    // 0x1d0cb58: 0xc742f52  jal         func_1D0BD48
    ctx->pc = 0x1D0CB58u;
    SET_GPR_U32(ctx, 31, 0x1D0CB60u);
    ctx->pc = 0x1D0CB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0CB58u;
    // 0x1d0cb5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD48u, 0x1D0CB58u, 0x1D0CB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0CB60u;
label_1d0cb60:
    // 0x1d0cb60: 0x1450fff6  bne         $v0, $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1D0CB60u;
    {
        const bool branch_taken_0x1d0cb60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1D0CB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0CB60u;
        // 0x1d0cb64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0cb60) {
            ctx->pc = 0x1D0CB3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0cb3c;
        }
    }
    ctx->pc = 0x1D0CB68u;
    // 0x1d0cb68: 0xc742f54  jal         func_1D0BD50
    ctx->pc = 0x1D0CB68u;
    SET_GPR_U32(ctx, 31, 0x1D0CB70u);
    ctx->pc = 0x1D0BD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD50u, 0x1D0CB68u, 0x1D0CB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0CB70u;
label_1d0cb70:
    // 0x1d0cb70: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1D0CB70u;
    {
        const bool branch_taken_0x1d0cb70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0CB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0CB70u;
        // 0x1d0cb74: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0cb70) {
            ctx->pc = 0x1D0CB40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0cb40;
        }
    }
    ctx->pc = 0x1D0CB78u;
label_1d0cb78:
    // 0x1d0cb78: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1d0cb78u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1d0cb7c: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D0CB7Cu;
    {
        const bool branch_taken_0x1d0cb7c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0CB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0CB7Cu;
        // 0x1d0cb80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0cb7c) {
            ctx->pc = 0x1D0CB40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0cb40;
        }
    }
    ctx->pc = 0x1D0CB84u;
    // 0x1d0cb84: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1d0cb84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0cb88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d0cb88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0cb8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d0cb8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0cb90: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d0cb90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0cb94: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d0cb94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0cb98: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d0cb98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0cb9c: 0xc742f62  jal         func_1D0BD88
    ctx->pc = 0x1D0CB9Cu;
    SET_GPR_U32(ctx, 31, 0x1D0CBA4u);
    ctx->pc = 0x1D0CBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0CB9Cu;
    // 0x1d0cba0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD88u, 0x1D0CB9Cu, 0x1D0CBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0CBA4u;
label_1d0cba4:
    // 0x1d0cba4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d0cba4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0cba8: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x1D0CBA8u;
    {
        const bool branch_taken_0x1d0cba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0CBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0CBA8u;
        // 0x1d0cbac: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0cba8) {
            ctx->pc = 0x1D0CB3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0cb3c;
        }
    }
    ctx->pc = 0x1D0CBB0u;
    // 0x1d0cbb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d0cbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d0cbb4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d0cbb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d0cbb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d0cbb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d0cbbc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d0cbbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0cbc0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d0cbc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d0cbc4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d0cbc4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0cbc8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d0cbc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0cbcc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d0cbccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0cbd0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d0cbd0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0cbd4: 0xc742f62  jal         func_1D0BD88
    ctx->pc = 0x1D0CBD4u;
    SET_GPR_U32(ctx, 31, 0x1D0CBDCu);
    ctx->pc = 0x1D0CBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0CBD4u;
    // 0x1d0cbd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD88u, 0x1D0CBD4u, 0x1D0CBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0CBDCu;
label_1d0cbdc:
    // 0x1d0cbdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0cbdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0cbe0: 0xc742f5a  jal         func_1D0BD68
    ctx->pc = 0x1D0CBE0u;
    SET_GPR_U32(ctx, 31, 0x1D0CBE8u);
    ctx->pc = 0x1D0CBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0CBE0u;
    // 0x1d0cbe4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD68u, 0x1D0CBE0u, 0x1D0CBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0CBE8u;
label_1d0cbe8:
    // 0x1d0cbe8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d0cbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d0cbec: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d0cbecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d0cbf0: 0xc742f56  jal         func_1D0BD58
    ctx->pc = 0x1D0CBF0u;
    SET_GPR_U32(ctx, 31, 0x1D0CBF8u);
    ctx->pc = 0x1D0CBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0CBF0u;
    // 0x1d0cbf4: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD58u, 0x1D0CBF0u, 0x1D0CBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0CBF8u;
label_1d0cbf8:
    // 0x1d0cbf8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d0cbf8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0cbfc: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d0cbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d0cc00: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1d0cc00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1d0cc04: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d0cc04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d0cc08: 0xc742f56  jal         func_1D0BD58
    ctx->pc = 0x1D0CC08u;
    SET_GPR_U32(ctx, 31, 0x1D0CC10u);
    ctx->pc = 0x1D0CC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0CC08u;
    // 0x1d0cc0c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD58u, 0x1D0CC08u, 0x1D0CC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0CC10u;
label_1d0cc10:
    // 0x1d0cc10: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d0cc10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d0cc14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d0cc14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0cc18: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d0cc18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d0cc1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0CC1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0CC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0CC1Cu;
        // 0x1d0cc20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0CC1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0CC24u;
    // 0x1d0cc24: 0x0  nop
    ctx->pc = 0x1d0cc24u;
    // NOP
    ctx->pc = 0x1d0cc28u;
}
