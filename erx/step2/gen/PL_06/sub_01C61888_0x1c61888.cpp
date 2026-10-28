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

// Function: sub_01C61888
// Address: 0x1c61888 - 0x1c619c0
void sub_01C61888_0x1c61888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C61888_0x1c61888");
#endif

    switch (ctx->pc) {
        case 0x1c618a8u: goto label_1c618a8;
        case 0x1c618bcu: goto label_1c618bc;
        case 0x1c618c0u: goto label_1c618c0;
        case 0x1c618dcu: goto label_1c618dc;
        case 0x1c618ecu: goto label_1c618ec;
        case 0x1c61938u: goto label_1c61938;
        case 0x1c61974u: goto label_1c61974;
        case 0x1c61980u: goto label_1c61980;
        case 0x1c61990u: goto label_1c61990;
        case 0x1c619a8u: goto label_1c619a8;
        default: break;
    }

    ctx->pc = 0x1c61888u;

    // 0x1c61888: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c61888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c6188c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c6188cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c61890: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c61890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c61894: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c61894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c61898: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c61898u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6189c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c6189cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c618a0: 0xc717d56  jal         func_1C5F558
    ctx->pc = 0x1C618A0u;
    SET_GPR_U32(ctx, 31, 0x1C618A8u);
    ctx->pc = 0x1C618A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C618A0u;
    // 0x1c618a4: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F558u, 0x1C618A0u, 0x1C618A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C618A8u;
label_1c618a8:
    // 0x1c618a8: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1c618a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1c618ac: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C618ACu;
    {
        const bool branch_taken_0x1c618ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C618B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C618ACu;
        // 0x1c618b0: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c618ac) {
            ctx->pc = 0x1C618F8u;
            goto label_1c618f8;
        }
    }
    ctx->pc = 0x1C618B4u;
    // 0x1c618b4: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C618B4u;
    {
        const bool branch_taken_0x1c618b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1c618b4) {
            ctx->pc = 0x1C618D4u;
            goto label_1c618d4;
        }
    }
    ctx->pc = 0x1C618BCu;
label_1c618bc:
    // 0x1c618bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c618bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c618c0:
    // 0x1c618c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c618c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c618c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c618c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c618c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c618c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c618cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C618CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C618D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C618CCu;
        // 0x1c618d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C618CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C618D4u;
label_1c618d4:
    // 0x1c618d4: 0xc717d52  jal         func_1C5F548
    ctx->pc = 0x1C618D4u;
    SET_GPR_U32(ctx, 31, 0x1C618DCu);
    ctx->pc = 0x1C618D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C618D4u;
    // 0x1c618d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F548u, 0x1C618D4u, 0x1C618DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C618DCu;
label_1c618dc:
    // 0x1c618dc: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1C618DCu;
    {
        const bool branch_taken_0x1c618dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1C618E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C618DCu;
        // 0x1c618e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c618dc) {
            ctx->pc = 0x1C618BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c618bc;
        }
    }
    ctx->pc = 0x1C618E4u;
    // 0x1c618e4: 0xc717d54  jal         func_1C5F550
    ctx->pc = 0x1C618E4u;
    SET_GPR_U32(ctx, 31, 0x1C618ECu);
    ctx->pc = 0x1C5F550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F550u, 0x1C618E4u, 0x1C618ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C618ECu;
label_1c618ec:
    // 0x1c618ec: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1C618ECu;
    {
        const bool branch_taken_0x1c618ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C618F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C618ECu;
        // 0x1c618f0: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c618ec) {
            ctx->pc = 0x1C618C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c618c0;
        }
    }
    ctx->pc = 0x1C618F4u;
    // 0x1c618f4: 0x0  nop
    ctx->pc = 0x1c618f4u;
    // NOP
label_1c618f8:
    // 0x1c618f8: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1c618f8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1c618fc: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C618FCu;
    {
        const bool branch_taken_0x1c618fc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C61900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C618FCu;
        // 0x1c61900: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c618fc) {
            ctx->pc = 0x1C618C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c618c0;
        }
    }
    ctx->pc = 0x1C61904u;
    // 0x1c61904: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1c61904u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1c61908: 0x3c0e01c6  lui         $t6, 0x1C6
    ctx->pc = 0x1c61908u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)454 << 16));
    // 0x1c6190c: 0x25ce44a0  addiu       $t6, $t6, 0x44A0
    ctx->pc = 0x1c6190cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 17568));
    // 0x1c61910: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c61910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61914: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1c61914u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1c61918: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c61918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6191c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1c6191cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1c61920: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c61920u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61924: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1c61924u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c61928: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c61928u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6192c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c6192cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c61930: 0xc717d62  jal         func_1C5F588
    ctx->pc = 0x1C61930u;
    SET_GPR_U32(ctx, 31, 0x1C61938u);
    ctx->pc = 0x1C61934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C61930u;
    // 0x1c61934: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F588u, 0x1C61930u, 0x1C61938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C61938u;
label_1c61938:
    // 0x1c61938: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c61938u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6193c: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1C6193Cu;
    {
        const bool branch_taken_0x1c6193c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C61940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6193Cu;
        // 0x1c61940: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6193c) {
            ctx->pc = 0x1C618BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c618bc;
        }
    }
    ctx->pc = 0x1C61944u;
    // 0x1c61944: 0x0  nop
    ctx->pc = 0x1c61944u;
    // NOP
    // 0x1c61948: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c61948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c6194c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c6194cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c61950: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c61950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c61954: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c61954u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61958: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c61958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c6195c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c6195cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61960: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c61960u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61964: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c61964u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c61968: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c61968u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6196c: 0xc717d62  jal         func_1C5F588
    ctx->pc = 0x1C6196Cu;
    SET_GPR_U32(ctx, 31, 0x1C61974u);
    ctx->pc = 0x1C61970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6196Cu;
    // 0x1c61970: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F588u, 0x1C6196Cu, 0x1C61974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C61974u;
label_1c61974:
    // 0x1c61974: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c61974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61978: 0xc717d5a  jal         func_1C5F568
    ctx->pc = 0x1C61978u;
    SET_GPR_U32(ctx, 31, 0x1C61980u);
    ctx->pc = 0x1C6197Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C61978u;
    // 0x1c6197c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F568u, 0x1C61978u, 0x1C61980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C61980u;
label_1c61980:
    // 0x1c61980: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c61980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c61984: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c61984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c61988: 0xc717d56  jal         func_1C5F558
    ctx->pc = 0x1C61988u;
    SET_GPR_U32(ctx, 31, 0x1C61990u);
    ctx->pc = 0x1C6198Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C61988u;
    // 0x1c6198c: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F558u, 0x1C61988u, 0x1C61990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C61990u;
label_1c61990:
    // 0x1c61990: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c61990u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c61994: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1c61994u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1c61998: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1c61998u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1c6199c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c6199cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c619a0: 0xc717d56  jal         func_1C5F558
    ctx->pc = 0x1C619A0u;
    SET_GPR_U32(ctx, 31, 0x1C619A8u);
    ctx->pc = 0x1C619A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C619A0u;
    // 0x1c619a4: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F558u, 0x1C619A0u, 0x1C619A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C619A8u;
label_1c619a8:
    // 0x1c619a8: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1c619a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1c619ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c619acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c619b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c619b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c619b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C619B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C619B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C619B4u;
        // 0x1c619b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C619B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C619BCu;
    // 0x1c619bc: 0x0  nop
    ctx->pc = 0x1c619bcu;
    // NOP
    ctx->pc = 0x1c619c0u;
}
