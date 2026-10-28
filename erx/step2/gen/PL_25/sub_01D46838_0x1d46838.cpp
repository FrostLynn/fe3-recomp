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

// Function: sub_01D46838
// Address: 0x1d46838 - 0x1d46948
void sub_01D46838_0x1d46838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D46838_0x1d46838");
#endif

    switch (ctx->pc) {
        case 0x1d46854u: goto label_1d46854;
        case 0x1d4685cu: goto label_1d4685c;
        case 0x1d46870u: goto label_1d46870;
        case 0x1d46874u: goto label_1d46874;
        case 0x1d468ccu: goto label_1d468cc;
        case 0x1d468dcu: goto label_1d468dc;
        case 0x1d468f0u: goto label_1d468f0;
        case 0x1d46904u: goto label_1d46904;
        case 0x1d46914u: goto label_1d46914;
        default: break;
    }

    ctx->pc = 0x1d46838u;

    // 0x1d46838: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d46838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d4683c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d4683cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d46840: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d46840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d46844: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d46844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d46848: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d46848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d4684c: 0xc751750  jal         func_1D45D40
    ctx->pc = 0x1D4684Cu;
    SET_GPR_U32(ctx, 31, 0x1D46854u);
    ctx->pc = 0x1D46850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4684Cu;
    // 0x1d46850: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D40u, 0x1D4684Cu, 0x1D46854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D46854u;
label_1d46854:
    // 0x1d46854: 0xc751752  jal         func_1D45D48
    ctx->pc = 0x1D46854u;
    SET_GPR_U32(ctx, 31, 0x1D4685Cu);
    ctx->pc = 0x1D46858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D46854u;
    // 0x1d46858: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D48u, 0x1D46854u, 0x1D4685Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4685Cu;
label_1d4685c:
    // 0x1d4685c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d4685cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d46860: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D46860u;
    {
        const bool branch_taken_0x1d46860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D46864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D46860u;
        // 0x1d46864: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d46860) {
            ctx->pc = 0x1D46884u;
            goto label_1d46884;
        }
    }
    ctx->pc = 0x1D46868u;
    // 0x1d46868: 0xc751754  jal         func_1D45D50
    ctx->pc = 0x1D46868u;
    SET_GPR_U32(ctx, 31, 0x1D46870u);
    ctx->pc = 0x1D45D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D50u, 0x1D46868u, 0x1D46870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D46870u;
label_1d46870:
    // 0x1d46870: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d46870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d46874:
    // 0x1d46874: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d46874u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d46878: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d46878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d4687c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4687Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D46880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4687Cu;
        // 0x1d46880: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4687Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D46884u;
label_1d46884:
    // 0x1d46884: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D46884u;
    {
        const bool branch_taken_0x1d46884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D46888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D46884u;
        // 0x1d46888: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d46884) {
            ctx->pc = 0x1D46874u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d46874;
        }
    }
    ctx->pc = 0x1D4688Cu;
    // 0x1d4688c: 0x0  nop
    ctx->pc = 0x1d4688cu;
    // NOP
    // 0x1d46890: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d46890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d46894: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d46894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d46898: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1d46898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1d4689c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d4689cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d468a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d468a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d468a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d468a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d468a8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1d468a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d468ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d468acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d468b0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d468b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d468b4: 0x30f100ff  andi        $s1, $a3, 0xFF
    ctx->pc = 0x1d468b4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1d468b8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d468b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1d468bc: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d468bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d468c0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1d468c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d468c4: 0xc751756  jal         func_1D45D58
    ctx->pc = 0x1D468C4u;
    SET_GPR_U32(ctx, 31, 0x1D468CCu);
    ctx->pc = 0x1D468C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D468C4u;
    // 0x1d468c8: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D58u, 0x1D468C4u, 0x1D468CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D468CCu;
label_1d468cc:
    // 0x1d468cc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d468ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d468d0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d468d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d468d4: 0xc751758  jal         func_1D45D60
    ctx->pc = 0x1D468D4u;
    SET_GPR_U32(ctx, 31, 0x1D468DCu);
    ctx->pc = 0x1D468D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D468D4u;
    // 0x1d468d8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D60u, 0x1D468D4u, 0x1D468DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D468DCu;
label_1d468dc:
    // 0x1d468dc: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d468dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d468e0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1d468e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d468e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d468e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d468e8: 0xc75175a  jal         func_1D45D68
    ctx->pc = 0x1D468E8u;
    SET_GPR_U32(ctx, 31, 0x1D468F0u);
    ctx->pc = 0x1D468ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D468E8u;
    // 0x1d468ec: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D68u, 0x1D468E8u, 0x1D468F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D468F0u;
label_1d468f0:
    // 0x1d468f0: 0xae400430  sw          $zero, 0x430($s2)
    ctx->pc = 0x1d468f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1072), GPR_U32(ctx, 0));
    // 0x1d468f4: 0x26640390  addiu       $a0, $s3, 0x390
    ctx->pc = 0x1d468f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 912));
    // 0x1d468f8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1d468f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d468fc: 0xc75175c  jal         func_1D45D70
    ctx->pc = 0x1D468FCu;
    SET_GPR_U32(ctx, 31, 0x1D46904u);
    ctx->pc = 0x1D46900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D468FCu;
    // 0x1d46900: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D70u, 0x1D468FCu, 0x1D46904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D46904u;
label_1d46904:
    // 0x1d46904: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d46904u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d46908: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d46908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4690c: 0xc751750  jal         func_1D45D40
    ctx->pc = 0x1D4690Cu;
    SET_GPR_U32(ctx, 31, 0x1D46914u);
    ctx->pc = 0x1D46910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4690Cu;
    // 0x1d46910: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D40u, 0x1D4690Cu, 0x1D46914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D46914u;
label_1d46914:
    // 0x1d46914: 0xa27109b0  sb          $s1, 0x9B0($s3)
    ctx->pc = 0x1d46914u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2480), (uint8_t)GPR_U32(ctx, 17));
    // 0x1d46918: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d46918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4691c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1d4691cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d46920: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d46920u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d46924: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d46924u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d46928: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d46928u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d4692c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d4692cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d46930: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d46930u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d46934: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1d46934u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d46938: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d46938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d4693c: 0x875175e  j           func_1D45D78
    ctx->pc = 0x1D4693Cu;
    ctx->pc = 0x1D46940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4693Cu;
    // 0x1d46940: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D78u;
    sub_01D45D78_0x1d45d78(rdram, ctx, runtime); return;
    ctx->pc = 0x1D46944u;
    // 0x1d46944: 0x0  nop
    ctx->pc = 0x1d46944u;
    // NOP
    ctx->pc = 0x1d46948u;
}
