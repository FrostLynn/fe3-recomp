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

// Function: sub_01C21368
// Address: 0x1c21368 - 0x1c21478
void sub_01C21368_0x1c21368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C21368_0x1c21368");
#endif

    switch (ctx->pc) {
        case 0x1c21388u: goto label_1c21388;
        case 0x1c2139cu: goto label_1c2139c;
        case 0x1c213a0u: goto label_1c213a0;
        case 0x1c213bcu: goto label_1c213bc;
        case 0x1c213ccu: goto label_1c213cc;
        case 0x1c21418u: goto label_1c21418;
        case 0x1c21454u: goto label_1c21454;
        case 0x1c21460u: goto label_1c21460;
        default: break;
    }

    ctx->pc = 0x1c21368u;

    // 0x1c21368: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c21368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c2136c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c2136cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c21370: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c21370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c21374: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c21374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c21378: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c21378u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2137c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c2137cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c21380: 0xc707c5a  jal         func_1C1F168
    ctx->pc = 0x1C21380u;
    SET_GPR_U32(ctx, 31, 0x1C21388u);
    ctx->pc = 0x1C21384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21380u;
    // 0x1c21384: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F168u, 0x1C21380u, 0x1C21388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21388u;
label_1c21388:
    // 0x1c21388: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1c21388u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1c2138c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C2138Cu;
    {
        const bool branch_taken_0x1c2138c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C21390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2138Cu;
        // 0x1c21390: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2138c) {
            ctx->pc = 0x1C213D8u;
            goto label_1c213d8;
        }
    }
    ctx->pc = 0x1C21394u;
    // 0x1c21394: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C21394u;
    {
        const bool branch_taken_0x1c21394 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1c21394) {
            ctx->pc = 0x1C213B4u;
            goto label_1c213b4;
        }
    }
    ctx->pc = 0x1C2139Cu;
label_1c2139c:
    // 0x1c2139c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c2139cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c213a0:
    // 0x1c213a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c213a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c213a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c213a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c213a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c213a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c213ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1C213ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C213B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C213ACu;
        // 0x1c213b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C213ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C213B4u;
label_1c213b4:
    // 0x1c213b4: 0xc707c56  jal         func_1C1F158
    ctx->pc = 0x1C213B4u;
    SET_GPR_U32(ctx, 31, 0x1C213BCu);
    ctx->pc = 0x1C213B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C213B4u;
    // 0x1c213b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F158u, 0x1C213B4u, 0x1C213BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C213BCu;
label_1c213bc:
    // 0x1c213bc: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1C213BCu;
    {
        const bool branch_taken_0x1c213bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1C213C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C213BCu;
        // 0x1c213c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c213bc) {
            ctx->pc = 0x1C2139Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c2139c;
        }
    }
    ctx->pc = 0x1C213C4u;
    // 0x1c213c4: 0xc707c58  jal         func_1C1F160
    ctx->pc = 0x1C213C4u;
    SET_GPR_U32(ctx, 31, 0x1C213CCu);
    ctx->pc = 0x1C1F160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F160u, 0x1C213C4u, 0x1C213CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C213CCu;
label_1c213cc:
    // 0x1c213cc: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1C213CCu;
    {
        const bool branch_taken_0x1c213cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C213D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C213CCu;
        // 0x1c213d0: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c213cc) {
            ctx->pc = 0x1C213A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c213a0;
        }
    }
    ctx->pc = 0x1C213D4u;
    // 0x1c213d4: 0x0  nop
    ctx->pc = 0x1c213d4u;
    // NOP
label_1c213d8:
    // 0x1c213d8: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1c213d8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1c213dc: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C213DCu;
    {
        const bool branch_taken_0x1c213dc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C213E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C213DCu;
        // 0x1c213e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c213dc) {
            ctx->pc = 0x1C213A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c213a0;
        }
    }
    ctx->pc = 0x1C213E4u;
    // 0x1c213e4: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1c213e4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1c213e8: 0x3c0e01c3  lui         $t6, 0x1C3
    ctx->pc = 0x1c213e8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)451 << 16));
    // 0x1c213ec: 0x25ce9370  addiu       $t6, $t6, -0x6C90
    ctx->pc = 0x1c213ecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294939504));
    // 0x1c213f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c213f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c213f4: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1c213f4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1c213f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c213f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c213fc: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1c213fcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1c21400: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c21400u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21404: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1c21404u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c21408: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c21408u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2140c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c2140cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c21410: 0xc707c66  jal         func_1C1F198
    ctx->pc = 0x1C21410u;
    SET_GPR_U32(ctx, 31, 0x1C21418u);
    ctx->pc = 0x1C21414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21410u;
    // 0x1c21414: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F198u, 0x1C21410u, 0x1C21418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21418u;
label_1c21418:
    // 0x1c21418: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c21418u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2141c: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1C2141Cu;
    {
        const bool branch_taken_0x1c2141c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C21420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2141Cu;
        // 0x1c21420: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2141c) {
            ctx->pc = 0x1C2139Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c2139c;
        }
    }
    ctx->pc = 0x1C21424u;
    // 0x1c21424: 0x0  nop
    ctx->pc = 0x1c21424u;
    // NOP
    // 0x1c21428: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c21428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c2142c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c2142cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c21430: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c21430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c21434: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c21434u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21438: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c21438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c2143c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c2143cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21440: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c21440u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21444: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c21444u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c21448: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c21448u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2144c: 0xc707c66  jal         func_1C1F198
    ctx->pc = 0x1C2144Cu;
    SET_GPR_U32(ctx, 31, 0x1C21454u);
    ctx->pc = 0x1C21450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2144Cu;
    // 0x1c21450: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F198u, 0x1C2144Cu, 0x1C21454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21454u;
label_1c21454:
    // 0x1c21454: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c21454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21458: 0xc707c5e  jal         func_1C1F178
    ctx->pc = 0x1C21458u;
    SET_GPR_U32(ctx, 31, 0x1C21460u);
    ctx->pc = 0x1C2145Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21458u;
    // 0x1c2145c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F178u, 0x1C21458u, 0x1C21460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21460u;
label_1c21460:
    // 0x1c21460: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c21460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c21464: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c21464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c21468: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c21468u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2146c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2146Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C21470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2146Cu;
        // 0x1c21470: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2146Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C21474u;
    // 0x1c21474: 0x0  nop
    ctx->pc = 0x1c21474u;
    // NOP
    ctx->pc = 0x1c21478u;
}
