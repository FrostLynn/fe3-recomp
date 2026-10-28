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

// Function: sub_01C99640
// Address: 0x1c99640 - 0x1c99750
void sub_01C99640_0x1c99640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C99640_0x1c99640");
#endif

    switch (ctx->pc) {
        case 0x1c9965cu: goto label_1c9965c;
        case 0x1c99664u: goto label_1c99664;
        case 0x1c99678u: goto label_1c99678;
        case 0x1c9967cu: goto label_1c9967c;
        case 0x1c996d4u: goto label_1c996d4;
        case 0x1c996e4u: goto label_1c996e4;
        case 0x1c996f8u: goto label_1c996f8;
        case 0x1c9970cu: goto label_1c9970c;
        case 0x1c9971cu: goto label_1c9971c;
        default: break;
    }

    ctx->pc = 0x1c99640u;

    // 0x1c99640: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c99640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c99644: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c99644u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c99648: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c99648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c9964c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c9964cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c99650: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c99650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c99654: 0xc7262d0  jal         func_1C98B40
    ctx->pc = 0x1C99654u;
    SET_GPR_U32(ctx, 31, 0x1C9965Cu);
    ctx->pc = 0x1C99658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C99654u;
    // 0x1c99658: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B40u, 0x1C99654u, 0x1C9965Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9965Cu;
label_1c9965c:
    // 0x1c9965c: 0xc7262d2  jal         func_1C98B48
    ctx->pc = 0x1C9965Cu;
    SET_GPR_U32(ctx, 31, 0x1C99664u);
    ctx->pc = 0x1C99660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9965Cu;
    // 0x1c99660: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B48u, 0x1C9965Cu, 0x1C99664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C99664u;
label_1c99664:
    // 0x1c99664: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c99664u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c99668: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C99668u;
    {
        const bool branch_taken_0x1c99668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C9966Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C99668u;
        // 0x1c9966c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c99668) {
            ctx->pc = 0x1C9968Cu;
            goto label_1c9968c;
        }
    }
    ctx->pc = 0x1C99670u;
    // 0x1c99670: 0xc7262d4  jal         func_1C98B50
    ctx->pc = 0x1C99670u;
    SET_GPR_U32(ctx, 31, 0x1C99678u);
    ctx->pc = 0x1C98B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B50u, 0x1C99670u, 0x1C99678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C99678u;
label_1c99678:
    // 0x1c99678: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c99678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c9967c:
    // 0x1c9967c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c9967cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c99680: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c99680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c99684: 0x3e00008  jr          $ra
    ctx->pc = 0x1C99684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C99688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C99684u;
        // 0x1c99688: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C99684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9968Cu;
label_1c9968c:
    // 0x1c9968c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C9968Cu;
    {
        const bool branch_taken_0x1c9968c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C99690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9968Cu;
        // 0x1c99690: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9968c) {
            ctx->pc = 0x1C9967Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c9967c;
        }
    }
    ctx->pc = 0x1C99694u;
    // 0x1c99694: 0x0  nop
    ctx->pc = 0x1c99694u;
    // NOP
    // 0x1c99698: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c99698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c9969c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c9969cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c996a0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1c996a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1c996a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c996a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c996a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c996a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c996ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c996acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c996b0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1c996b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c996b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c996b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c996b8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c996b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c996bc: 0x30f100ff  andi        $s1, $a3, 0xFF
    ctx->pc = 0x1c996bcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1c996c0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1c996c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1c996c4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c996c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c996c8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1c996c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c996cc: 0xc7262d6  jal         func_1C98B58
    ctx->pc = 0x1C996CCu;
    SET_GPR_U32(ctx, 31, 0x1C996D4u);
    ctx->pc = 0x1C996D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C996CCu;
    // 0x1c996d0: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B58u, 0x1C996CCu, 0x1C996D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C996D4u;
label_1c996d4:
    // 0x1c996d4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c996d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c996d8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c996d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c996dc: 0xc7262d8  jal         func_1C98B60
    ctx->pc = 0x1C996DCu;
    SET_GPR_U32(ctx, 31, 0x1C996E4u);
    ctx->pc = 0x1C996E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C996DCu;
    // 0x1c996e0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B60u, 0x1C996DCu, 0x1C996E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C996E4u;
label_1c996e4:
    // 0x1c996e4: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c996e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c996e8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1c996e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c996ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c996ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c996f0: 0xc7262da  jal         func_1C98B68
    ctx->pc = 0x1C996F0u;
    SET_GPR_U32(ctx, 31, 0x1C996F8u);
    ctx->pc = 0x1C996F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C996F0u;
    // 0x1c996f4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B68u, 0x1C996F0u, 0x1C996F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C996F8u;
label_1c996f8:
    // 0x1c996f8: 0xae400430  sw          $zero, 0x430($s2)
    ctx->pc = 0x1c996f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1072), GPR_U32(ctx, 0));
    // 0x1c996fc: 0x26640390  addiu       $a0, $s3, 0x390
    ctx->pc = 0x1c996fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 912));
    // 0x1c99700: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1c99700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c99704: 0xc7262dc  jal         func_1C98B70
    ctx->pc = 0x1C99704u;
    SET_GPR_U32(ctx, 31, 0x1C9970Cu);
    ctx->pc = 0x1C99708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C99704u;
    // 0x1c99708: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B70u, 0x1C99704u, 0x1C9970Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9970Cu;
label_1c9970c:
    // 0x1c9970c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c9970cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c99710: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c99710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c99714: 0xc7262d0  jal         func_1C98B40
    ctx->pc = 0x1C99714u;
    SET_GPR_U32(ctx, 31, 0x1C9971Cu);
    ctx->pc = 0x1C99718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C99714u;
    // 0x1c99718: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B40u, 0x1C99714u, 0x1C9971Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9971Cu;
label_1c9971c:
    // 0x1c9971c: 0xa27109b0  sb          $s1, 0x9B0($s3)
    ctx->pc = 0x1c9971cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2480), (uint8_t)GPR_U32(ctx, 17));
    // 0x1c99720: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c99720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c99724: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1c99724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c99728: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c99728u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9972c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c9972cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c99730: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c99730u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c99734: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c99734u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c99738: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c99738u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c9973c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1c9973cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c99740: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c99740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c99744: 0x87262de  j           func_1C98B78
    ctx->pc = 0x1C99744u;
    ctx->pc = 0x1C99748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C99744u;
    // 0x1c99748: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B78u;
    sub_01C98B78_0x1c98b78(rdram, ctx, runtime); return;
    ctx->pc = 0x1C9974Cu;
    // 0x1c9974c: 0x0  nop
    ctx->pc = 0x1c9974cu;
    // NOP
    ctx->pc = 0x1c99750u;
}
