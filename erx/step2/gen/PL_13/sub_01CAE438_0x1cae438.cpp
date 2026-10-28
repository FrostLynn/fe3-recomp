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

// Function: sub_01CAE438
// Address: 0x1cae438 - 0x1cae548
void sub_01CAE438_0x1cae438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CAE438_0x1cae438");
#endif

    switch (ctx->pc) {
        case 0x1cae458u: goto label_1cae458;
        case 0x1cae46cu: goto label_1cae46c;
        case 0x1cae470u: goto label_1cae470;
        case 0x1cae48cu: goto label_1cae48c;
        case 0x1cae49cu: goto label_1cae49c;
        case 0x1cae4e8u: goto label_1cae4e8;
        case 0x1cae524u: goto label_1cae524;
        case 0x1cae530u: goto label_1cae530;
        default: break;
    }

    ctx->pc = 0x1cae438u;

    // 0x1cae438: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cae438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cae43c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cae43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cae440: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cae440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cae444: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cae444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cae448: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cae448u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae44c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cae44cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cae450: 0xc72b44c  jal         func_1CAD130
    ctx->pc = 0x1CAE450u;
    SET_GPR_U32(ctx, 31, 0x1CAE458u);
    ctx->pc = 0x1CAE454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE450u;
    // 0x1cae454: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD130u, 0x1CAE450u, 0x1CAE458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE458u;
label_1cae458:
    // 0x1cae458: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1cae458u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1cae45c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CAE45Cu;
    {
        const bool branch_taken_0x1cae45c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAE460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE45Cu;
        // 0x1cae460: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cae45c) {
            ctx->pc = 0x1CAE4A8u;
            goto label_1cae4a8;
        }
    }
    ctx->pc = 0x1CAE464u;
    // 0x1cae464: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CAE464u;
    {
        const bool branch_taken_0x1cae464 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1cae464) {
            ctx->pc = 0x1CAE484u;
            goto label_1cae484;
        }
    }
    ctx->pc = 0x1CAE46Cu;
label_1cae46c:
    // 0x1cae46c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cae46cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cae470:
    // 0x1cae470: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cae470u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cae474: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cae474u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cae478: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cae478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cae47c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CAE47Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CAE480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE47Cu;
        // 0x1cae480: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CAE47Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CAE484u;
label_1cae484:
    // 0x1cae484: 0xc72b448  jal         func_1CAD120
    ctx->pc = 0x1CAE484u;
    SET_GPR_U32(ctx, 31, 0x1CAE48Cu);
    ctx->pc = 0x1CAE488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE484u;
    // 0x1cae488: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD120u, 0x1CAE484u, 0x1CAE48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE48Cu;
label_1cae48c:
    // 0x1cae48c: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1CAE48Cu;
    {
        const bool branch_taken_0x1cae48c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1CAE490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE48Cu;
        // 0x1cae490: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cae48c) {
            ctx->pc = 0x1CAE46Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cae46c;
        }
    }
    ctx->pc = 0x1CAE494u;
    // 0x1cae494: 0xc72b44a  jal         func_1CAD128
    ctx->pc = 0x1CAE494u;
    SET_GPR_U32(ctx, 31, 0x1CAE49Cu);
    ctx->pc = 0x1CAD128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD128u, 0x1CAE494u, 0x1CAE49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE49Cu;
label_1cae49c:
    // 0x1cae49c: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1CAE49Cu;
    {
        const bool branch_taken_0x1cae49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAE4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE49Cu;
        // 0x1cae4a0: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cae49c) {
            ctx->pc = 0x1CAE470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cae470;
        }
    }
    ctx->pc = 0x1CAE4A4u;
    // 0x1cae4a4: 0x0  nop
    ctx->pc = 0x1cae4a4u;
    // NOP
label_1cae4a8:
    // 0x1cae4a8: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1cae4a8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1cae4ac: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1CAE4ACu;
    {
        const bool branch_taken_0x1cae4ac = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CAE4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE4ACu;
        // 0x1cae4b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cae4ac) {
            ctx->pc = 0x1CAE470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cae470;
        }
    }
    ctx->pc = 0x1CAE4B4u;
    // 0x1cae4b4: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1cae4b4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1cae4b8: 0x3c0e01cb  lui         $t6, 0x1CB
    ctx->pc = 0x1cae4b8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)459 << 16));
    // 0x1cae4bc: 0x25cef5f0  addiu       $t6, $t6, -0xA10
    ctx->pc = 0x1cae4bcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294964720));
    // 0x1cae4c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cae4c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae4c4: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1cae4c4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1cae4c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cae4c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae4cc: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1cae4ccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1cae4d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cae4d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae4d4: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1cae4d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1cae4d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cae4d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae4dc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cae4dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cae4e0: 0xc72b458  jal         func_1CAD160
    ctx->pc = 0x1CAE4E0u;
    SET_GPR_U32(ctx, 31, 0x1CAE4E8u);
    ctx->pc = 0x1CAE4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE4E0u;
    // 0x1cae4e4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD160u, 0x1CAE4E0u, 0x1CAE4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE4E8u;
label_1cae4e8:
    // 0x1cae4e8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cae4e8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cae4ec: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1CAE4ECu;
    {
        const bool branch_taken_0x1cae4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAE4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE4ECu;
        // 0x1cae4f0: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cae4ec) {
            ctx->pc = 0x1CAE46Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cae46c;
        }
    }
    ctx->pc = 0x1CAE4F4u;
    // 0x1cae4f4: 0x0  nop
    ctx->pc = 0x1cae4f4u;
    // NOP
    // 0x1cae4f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cae4f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cae4fc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1cae4fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cae500: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cae500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cae504: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cae504u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae508: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cae508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cae50c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cae50cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae510: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cae510u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae514: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cae514u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cae518: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cae518u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae51c: 0xc72b458  jal         func_1CAD160
    ctx->pc = 0x1CAE51Cu;
    SET_GPR_U32(ctx, 31, 0x1CAE524u);
    ctx->pc = 0x1CAE520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE51Cu;
    // 0x1cae520: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD160u, 0x1CAE51Cu, 0x1CAE524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE524u;
label_1cae524:
    // 0x1cae524: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cae524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae528: 0xc72b450  jal         func_1CAD140
    ctx->pc = 0x1CAE528u;
    SET_GPR_U32(ctx, 31, 0x1CAE530u);
    ctx->pc = 0x1CAE52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE528u;
    // 0x1cae52c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD140u, 0x1CAE528u, 0x1CAE530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE530u;
label_1cae530:
    // 0x1cae530: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1cae530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1cae534: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cae534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cae538: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cae538u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cae53c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CAE53Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CAE540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE53Cu;
        // 0x1cae540: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CAE53Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CAE544u;
    // 0x1cae544: 0x0  nop
    ctx->pc = 0x1cae544u;
    // NOP
    ctx->pc = 0x1cae548u;
}
