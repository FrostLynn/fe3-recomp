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

// Function: sub_01D7E4F8
// Address: 0x1d7e4f8 - 0x1d7e620
void sub_01D7E4F8_0x1d7e4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D7E4F8_0x1d7e4f8");
#endif

    switch (ctx->pc) {
        case 0x1d7e520u: goto label_1d7e520;
        case 0x1d7e534u: goto label_1d7e534;
        case 0x1d7e538u: goto label_1d7e538;
        case 0x1d7e558u: goto label_1d7e558;
        case 0x1d7e568u: goto label_1d7e568;
        case 0x1d7e59cu: goto label_1d7e59c;
        case 0x1d7e5d4u: goto label_1d7e5d4;
        case 0x1d7e5e0u: goto label_1d7e5e0;
        case 0x1d7e5f0u: goto label_1d7e5f0;
        case 0x1d7e608u: goto label_1d7e608;
        default: break;
    }

    ctx->pc = 0x1d7e4f8u;

    // 0x1d7e4f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d7e4f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d7e4fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d7e4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d7e500: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d7e500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d7e504: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d7e504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d7e508: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1d7e508u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e50c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d7e50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d7e510: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d7e510u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e514: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d7e514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d7e518: 0xc75f5d6  jal         func_1D7D758
    ctx->pc = 0x1D7E518u;
    SET_GPR_U32(ctx, 31, 0x1D7E520u);
    ctx->pc = 0x1D7E51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E518u;
    // 0x1d7e51c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D758u, 0x1D7E518u, 0x1D7E520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E520u;
label_1d7e520:
    // 0x1d7e520: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1d7e520u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d7e524: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D7E524u;
    {
        const bool branch_taken_0x1d7e524 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7E528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7E524u;
        // 0x1d7e528: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7e524) {
            ctx->pc = 0x1D7E570u;
            goto label_1d7e570;
        }
    }
    ctx->pc = 0x1D7E52Cu;
    // 0x1d7e52c: 0x120f0008  beq         $s0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D7E52Cu;
    {
        const bool branch_taken_0x1d7e52c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1d7e52c) {
            ctx->pc = 0x1D7E550u;
            goto label_1d7e550;
        }
    }
    ctx->pc = 0x1D7E534u;
label_1d7e534:
    // 0x1d7e534: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d7e534u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7e538:
    // 0x1d7e538: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d7e538u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7e53c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d7e53cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d7e540: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d7e540u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7e544: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d7e544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d7e548: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7E548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7E54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7E548u;
        // 0x1d7e54c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7E548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7E550u;
label_1d7e550:
    // 0x1d7e550: 0xc75f5d2  jal         func_1D7D748
    ctx->pc = 0x1D7E550u;
    SET_GPR_U32(ctx, 31, 0x1D7E558u);
    ctx->pc = 0x1D7E554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E550u;
    // 0x1d7e554: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D748u, 0x1D7E550u, 0x1D7E558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E558u;
label_1d7e558:
    // 0x1d7e558: 0x1450fff6  bne         $v0, $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1D7E558u;
    {
        const bool branch_taken_0x1d7e558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1D7E55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7E558u;
        // 0x1d7e55c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7e558) {
            ctx->pc = 0x1D7E534u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7e534;
        }
    }
    ctx->pc = 0x1D7E560u;
    // 0x1d7e560: 0xc75f5d4  jal         func_1D7D750
    ctx->pc = 0x1D7E560u;
    SET_GPR_U32(ctx, 31, 0x1D7E568u);
    ctx->pc = 0x1D7D750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D750u, 0x1D7E560u, 0x1D7E568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E568u;
label_1d7e568:
    // 0x1d7e568: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1D7E568u;
    {
        const bool branch_taken_0x1d7e568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7E56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7E568u;
        // 0x1d7e56c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7e568) {
            ctx->pc = 0x1D7E538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7e538;
        }
    }
    ctx->pc = 0x1D7E570u;
label_1d7e570:
    // 0x1d7e570: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1d7e570u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1d7e574: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D7E574u;
    {
        const bool branch_taken_0x1d7e574 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7E578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7E574u;
        // 0x1d7e578: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7e574) {
            ctx->pc = 0x1D7E538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7e538;
        }
    }
    ctx->pc = 0x1D7E57Cu;
    // 0x1d7e57c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1d7e57cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e580: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d7e580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e584: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d7e584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e588: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d7e588u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e58c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d7e58cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e590: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d7e590u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7e594: 0xc75f5e2  jal         func_1D7D788
    ctx->pc = 0x1D7E594u;
    SET_GPR_U32(ctx, 31, 0x1D7E59Cu);
    ctx->pc = 0x1D7E598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E594u;
    // 0x1d7e598: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D788u, 0x1D7E594u, 0x1D7E59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E59Cu;
label_1d7e59c:
    // 0x1d7e59c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d7e59cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7e5a0: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x1D7E5A0u;
    {
        const bool branch_taken_0x1d7e5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7E5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7E5A0u;
        // 0x1d7e5a4: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7e5a0) {
            ctx->pc = 0x1D7E534u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7e534;
        }
    }
    ctx->pc = 0x1D7E5A8u;
    // 0x1d7e5a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d7e5a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d7e5ac: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d7e5acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d7e5b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d7e5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d7e5b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d7e5b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e5b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d7e5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d7e5bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d7e5bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e5c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d7e5c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e5c4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d7e5c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7e5c8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d7e5c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e5cc: 0xc75f5e2  jal         func_1D7D788
    ctx->pc = 0x1D7E5CCu;
    SET_GPR_U32(ctx, 31, 0x1D7E5D4u);
    ctx->pc = 0x1D7E5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E5CCu;
    // 0x1d7e5d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D788u, 0x1D7E5CCu, 0x1D7E5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E5D4u;
label_1d7e5d4:
    // 0x1d7e5d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d7e5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e5d8: 0xc75f5da  jal         func_1D7D768
    ctx->pc = 0x1D7E5D8u;
    SET_GPR_U32(ctx, 31, 0x1D7E5E0u);
    ctx->pc = 0x1D7E5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E5D8u;
    // 0x1d7e5dc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D768u, 0x1D7E5D8u, 0x1D7E5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E5E0u;
label_1d7e5e0:
    // 0x1d7e5e0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d7e5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d7e5e4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d7e5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d7e5e8: 0xc75f5d6  jal         func_1D7D758
    ctx->pc = 0x1D7E5E8u;
    SET_GPR_U32(ctx, 31, 0x1D7E5F0u);
    ctx->pc = 0x1D7E5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E5E8u;
    // 0x1d7e5ec: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D758u, 0x1D7E5E8u, 0x1D7E5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E5F0u;
label_1d7e5f0:
    // 0x1d7e5f0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d7e5f0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7e5f4: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d7e5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d7e5f8: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1d7e5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1d7e5fc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d7e5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d7e600: 0xc75f5d6  jal         func_1D7D758
    ctx->pc = 0x1D7E600u;
    SET_GPR_U32(ctx, 31, 0x1D7E608u);
    ctx->pc = 0x1D7E604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E600u;
    // 0x1d7e604: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D758u, 0x1D7E600u, 0x1D7E608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E608u;
label_1d7e608:
    // 0x1d7e608: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d7e608u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d7e60c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d7e60cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7e610: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d7e610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d7e614: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7E614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7E618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7E614u;
        // 0x1d7e618: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7E614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7E61Cu;
    // 0x1d7e61c: 0x0  nop
    ctx->pc = 0x1d7e61cu;
    // NOP
    ctx->pc = 0x1d7e620u;
}
