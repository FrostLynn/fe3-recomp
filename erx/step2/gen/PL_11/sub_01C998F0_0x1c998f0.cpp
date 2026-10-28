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

// Function: sub_01C998F0
// Address: 0x1c998f0 - 0x1c99a18
void sub_01C998F0_0x1c998f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C998F0_0x1c998f0");
#endif

    switch (ctx->pc) {
        case 0x1c99918u: goto label_1c99918;
        case 0x1c9992cu: goto label_1c9992c;
        case 0x1c99930u: goto label_1c99930;
        case 0x1c99950u: goto label_1c99950;
        case 0x1c99960u: goto label_1c99960;
        case 0x1c99994u: goto label_1c99994;
        case 0x1c999ccu: goto label_1c999cc;
        case 0x1c999d8u: goto label_1c999d8;
        case 0x1c999e8u: goto label_1c999e8;
        case 0x1c99a00u: goto label_1c99a00;
        default: break;
    }

    ctx->pc = 0x1c998f0u;

    // 0x1c998f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c998f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c998f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c998f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c998f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c998f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c998fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c998fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c99900: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c99900u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c99904: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c99904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c99908: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c99908u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9990c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c9990cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c99910: 0xc7262d6  jal         func_1C98B58
    ctx->pc = 0x1C99910u;
    SET_GPR_U32(ctx, 31, 0x1C99918u);
    ctx->pc = 0x1C99914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C99910u;
    // 0x1c99914: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B58u, 0x1C99910u, 0x1C99918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C99918u;
label_1c99918:
    // 0x1c99918: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1c99918u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1c9991c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C9991Cu;
    {
        const bool branch_taken_0x1c9991c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C99920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9991Cu;
        // 0x1c99920: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9991c) {
            ctx->pc = 0x1C99968u;
            goto label_1c99968;
        }
    }
    ctx->pc = 0x1C99924u;
    // 0x1c99924: 0x120f0008  beq         $s0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C99924u;
    {
        const bool branch_taken_0x1c99924 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1c99924) {
            ctx->pc = 0x1C99948u;
            goto label_1c99948;
        }
    }
    ctx->pc = 0x1C9992Cu;
label_1c9992c:
    // 0x1c9992c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c9992cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c99930:
    // 0x1c99930: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c99930u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c99934: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c99934u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c99938: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c99938u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c9993c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c9993cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c99940: 0x3e00008  jr          $ra
    ctx->pc = 0x1C99940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C99944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C99940u;
        // 0x1c99944: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C99940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C99948u;
label_1c99948:
    // 0x1c99948: 0xc7262d2  jal         func_1C98B48
    ctx->pc = 0x1C99948u;
    SET_GPR_U32(ctx, 31, 0x1C99950u);
    ctx->pc = 0x1C9994Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C99948u;
    // 0x1c9994c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B48u, 0x1C99948u, 0x1C99950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C99950u;
label_1c99950:
    // 0x1c99950: 0x1450fff6  bne         $v0, $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1C99950u;
    {
        const bool branch_taken_0x1c99950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1C99954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C99950u;
        // 0x1c99954: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c99950) {
            ctx->pc = 0x1C9992Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c9992c;
        }
    }
    ctx->pc = 0x1C99958u;
    // 0x1c99958: 0xc7262d4  jal         func_1C98B50
    ctx->pc = 0x1C99958u;
    SET_GPR_U32(ctx, 31, 0x1C99960u);
    ctx->pc = 0x1C98B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B50u, 0x1C99958u, 0x1C99960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C99960u;
label_1c99960:
    // 0x1c99960: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1C99960u;
    {
        const bool branch_taken_0x1c99960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C99964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C99960u;
        // 0x1c99964: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c99960) {
            ctx->pc = 0x1C99930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c99930;
        }
    }
    ctx->pc = 0x1C99968u;
label_1c99968:
    // 0x1c99968: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1c99968u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1c9996c: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C9996Cu;
    {
        const bool branch_taken_0x1c9996c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C99970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9996Cu;
        // 0x1c99970: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9996c) {
            ctx->pc = 0x1C99930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c99930;
        }
    }
    ctx->pc = 0x1C99974u;
    // 0x1c99974: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1c99974u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c99978: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c99978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9997c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c9997cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c99980: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c99980u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c99984: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c99984u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c99988: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c99988u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9998c: 0xc7262e2  jal         func_1C98B88
    ctx->pc = 0x1C9998Cu;
    SET_GPR_U32(ctx, 31, 0x1C99994u);
    ctx->pc = 0x1C99990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9998Cu;
    // 0x1c99990: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B88u, 0x1C9998Cu, 0x1C99994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C99994u;
label_1c99994:
    // 0x1c99994: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c99994u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c99998: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x1C99998u;
    {
        const bool branch_taken_0x1c99998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9999Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C99998u;
        // 0x1c9999c: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c99998) {
            ctx->pc = 0x1C9992Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c9992c;
        }
    }
    ctx->pc = 0x1C999A0u;
    // 0x1c999a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c999a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c999a4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c999a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c999a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c999a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c999ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c999acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c999b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c999b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c999b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c999b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c999b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c999b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c999bc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c999bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c999c0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c999c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c999c4: 0xc7262e2  jal         func_1C98B88
    ctx->pc = 0x1C999C4u;
    SET_GPR_U32(ctx, 31, 0x1C999CCu);
    ctx->pc = 0x1C999C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C999C4u;
    // 0x1c999c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B88u, 0x1C999C4u, 0x1C999CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C999CCu;
label_1c999cc:
    // 0x1c999cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c999ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c999d0: 0xc7262da  jal         func_1C98B68
    ctx->pc = 0x1C999D0u;
    SET_GPR_U32(ctx, 31, 0x1C999D8u);
    ctx->pc = 0x1C999D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C999D0u;
    // 0x1c999d4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B68u, 0x1C999D0u, 0x1C999D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C999D8u;
label_1c999d8:
    // 0x1c999d8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c999d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c999dc: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c999dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c999e0: 0xc7262d6  jal         func_1C98B58
    ctx->pc = 0x1C999E0u;
    SET_GPR_U32(ctx, 31, 0x1C999E8u);
    ctx->pc = 0x1C999E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C999E0u;
    // 0x1c999e4: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B58u, 0x1C999E0u, 0x1C999E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C999E8u;
label_1c999e8:
    // 0x1c999e8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c999e8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c999ec: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1c999ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1c999f0: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1c999f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1c999f4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c999f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c999f8: 0xc7262d6  jal         func_1C98B58
    ctx->pc = 0x1C999F8u;
    SET_GPR_U32(ctx, 31, 0x1C99A00u);
    ctx->pc = 0x1C999FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C999F8u;
    // 0x1c999fc: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B58u, 0x1C999F8u, 0x1C99A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C99A00u;
label_1c99a00:
    // 0x1c99a00: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1c99a00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1c99a04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c99a04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c99a08: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c99a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c99a0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C99A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C99A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C99A0Cu;
        // 0x1c99a10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C99A0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C99A14u;
    // 0x1c99a14: 0x0  nop
    ctx->pc = 0x1c99a14u;
    // NOP
    ctx->pc = 0x1c99a18u;
}
