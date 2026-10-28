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

// Function: sub_01C77638
// Address: 0x1c77638 - 0x1c77740
void sub_01C77638_0x1c77638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C77638_0x1c77638");
#endif

    switch (ctx->pc) {
        case 0x1c77654u: goto label_1c77654;
        case 0x1c7765cu: goto label_1c7765c;
        case 0x1c77670u: goto label_1c77670;
        case 0x1c77678u: goto label_1c77678;
        case 0x1c7767cu: goto label_1c7767c;
        case 0x1c776b8u: goto label_1c776b8;
        case 0x1c776e4u: goto label_1c776e4;
        case 0x1c776f0u: goto label_1c776f0;
        case 0x1c776fcu: goto label_1c776fc;
        case 0x1c77710u: goto label_1c77710;
        case 0x1c77720u: goto label_1c77720;
        default: break;
    }

    ctx->pc = 0x1c77638u;

    // 0x1c77638: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c77638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c7763c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c7763cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c77640: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c77640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c77644: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c77644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77648: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c77648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c7764c: 0xc71d650  jal         func_1C75940
    ctx->pc = 0x1C7764Cu;
    SET_GPR_U32(ctx, 31, 0x1C77654u);
    ctx->pc = 0x1C77650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7764Cu;
    // 0x1c77650: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75940u, 0x1C7764Cu, 0x1C77654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77654u;
label_1c77654:
    // 0x1c77654: 0xc71d652  jal         func_1C75948
    ctx->pc = 0x1C77654u;
    SET_GPR_U32(ctx, 31, 0x1C7765Cu);
    ctx->pc = 0x1C77658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C77654u;
    // 0x1c77658: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75948u, 0x1C77654u, 0x1C7765Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7765Cu;
label_1c7765c:
    // 0x1c7765c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c7765cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c77660: 0x144f000a  bne         $v0, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1C77660u;
    {
        const bool branch_taken_0x1c77660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C77664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77660u;
        // 0x1c77664: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c77660) {
            ctx->pc = 0x1C7768Cu;
            goto label_1c7768c;
        }
    }
    ctx->pc = 0x1C77668u;
    // 0x1c77668: 0xc71d66c  jal         func_1C759B0
    ctx->pc = 0x1C77668u;
    SET_GPR_U32(ctx, 31, 0x1C77670u);
    ctx->pc = 0x1C759B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C759B0u, 0x1C77668u, 0x1C77670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77670u;
label_1c77670:
    // 0x1c77670: 0xc71d654  jal         func_1C75950
    ctx->pc = 0x1C77670u;
    SET_GPR_U32(ctx, 31, 0x1C77678u);
    ctx->pc = 0x1C77674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C77670u;
    // 0x1c77674: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75950u, 0x1C77670u, 0x1C77678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77678u;
label_1c77678:
    // 0x1c77678: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c77678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c7767c:
    // 0x1c7767c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c7767cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c77680: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c77680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c77684: 0x3e00008  jr          $ra
    ctx->pc = 0x1C77684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C77688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77684u;
        // 0x1c77688: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C77684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7768Cu;
label_1c7768c:
    // 0x1c7768c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C7768Cu;
    {
        const bool branch_taken_0x1c7768c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C77690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7768Cu;
        // 0x1c77690: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7768c) {
            ctx->pc = 0x1C7767Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c7767c;
        }
    }
    ctx->pc = 0x1C77694u;
    // 0x1c77694: 0x0  nop
    ctx->pc = 0x1c77694u;
    // NOP
    // 0x1c77698: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c77698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c7769c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c7769cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c776a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c776a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c776a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c776a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c776a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c776a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c776ac: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c776acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c776b0: 0xc71d658  jal         func_1C75960
    ctx->pc = 0x1C776B0u;
    SET_GPR_U32(ctx, 31, 0x1C776B8u);
    ctx->pc = 0x1C776B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C776B0u;
    // 0x1c776b4: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75960u, 0x1C776B0u, 0x1C776B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C776B8u;
label_1c776b8:
    // 0x1c776b8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c776b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c776bc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c776bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c776c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c776c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c776c4: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c776c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c776c8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c776c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c776cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c776ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c776d0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c776d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c776d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c776d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c776d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c776d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c776dc: 0xc71d662  jal         func_1C75988
    ctx->pc = 0x1C776DCu;
    SET_GPR_U32(ctx, 31, 0x1C776E4u);
    ctx->pc = 0x1C776E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C776DCu;
    // 0x1c776e0: 0x26310390  addiu       $s1, $s1, 0x390 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75988u, 0x1C776DCu, 0x1C776E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C776E4u;
label_1c776e4:
    // 0x1c776e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c776e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c776e8: 0xc71d65a  jal         func_1C75968
    ctx->pc = 0x1C776E8u;
    SET_GPR_U32(ctx, 31, 0x1C776F0u);
    ctx->pc = 0x1C776ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C776E8u;
    // 0x1c776ec: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75968u, 0x1C776E8u, 0x1C776F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C776F0u;
label_1c776f0:
    // 0x1c776f0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c776f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c776f4: 0xc71d656  jal         func_1C75958
    ctx->pc = 0x1C776F4u;
    SET_GPR_U32(ctx, 31, 0x1C776FCu);
    ctx->pc = 0x1C776F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C776F4u;
    // 0x1c776f8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75958u, 0x1C776F4u, 0x1C776FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C776FCu;
label_1c776fc:
    // 0x1c776fc: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1c776fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1c77700: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c77700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77704: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1c77704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c77708: 0xc71d65c  jal         func_1C75970
    ctx->pc = 0x1C77708u;
    SET_GPR_U32(ctx, 31, 0x1C77710u);
    ctx->pc = 0x1C7770Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C77708u;
    // 0x1c7770c: 0x240500ba  addiu       $a1, $zero, 0xBA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 186));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75970u, 0x1C77708u, 0x1C77710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77710u;
label_1c77710:
    // 0x1c77710: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c77710u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c77714: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c77714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77718: 0xc71d650  jal         func_1C75940
    ctx->pc = 0x1C77718u;
    SET_GPR_U32(ctx, 31, 0x1C77720u);
    ctx->pc = 0x1C7771Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C77718u;
    // 0x1c7771c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75940u, 0x1C77718u, 0x1C77720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77720u;
label_1c77720:
    // 0x1c77720: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c77720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77724: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c77724u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c77728: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c77728u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7772c: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x1c7772cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x1c77730: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c77730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c77734: 0x871d65e  j           func_1C75978
    ctx->pc = 0x1C77734u;
    ctx->pc = 0x1C77738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C77734u;
    // 0x1c77738: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75978u;
    sub_01C75978_0x1c75978(rdram, ctx, runtime); return;
    ctx->pc = 0x1C7773Cu;
    // 0x1c7773c: 0x0  nop
    ctx->pc = 0x1c7773cu;
    // NOP
    ctx->pc = 0x1c77740u;
}
