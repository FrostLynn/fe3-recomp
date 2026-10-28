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

// Function: sub_01D1B380
// Address: 0x1d1b380 - 0x1d1b4b8
void sub_01D1B380_0x1d1b380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D1B380_0x1d1b380");
#endif

    switch (ctx->pc) {
        case 0x1d1b3a0u: goto label_1d1b3a0;
        case 0x1d1b3b4u: goto label_1d1b3b4;
        case 0x1d1b3b8u: goto label_1d1b3b8;
        case 0x1d1b3d4u: goto label_1d1b3d4;
        case 0x1d1b3e4u: goto label_1d1b3e4;
        case 0x1d1b430u: goto label_1d1b430;
        case 0x1d1b46cu: goto label_1d1b46c;
        case 0x1d1b478u: goto label_1d1b478;
        case 0x1d1b488u: goto label_1d1b488;
        case 0x1d1b4a0u: goto label_1d1b4a0;
        default: break;
    }

    ctx->pc = 0x1d1b380u;

    // 0x1d1b380: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d1b380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d1b384: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d1b384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d1b388: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d1b388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d1b38c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d1b38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d1b390: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d1b390u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1b394: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d1b394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d1b398: 0xc74641a  jal         func_1D19068
    ctx->pc = 0x1D1B398u;
    SET_GPR_U32(ctx, 31, 0x1D1B3A0u);
    ctx->pc = 0x1D1B39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1B398u;
    // 0x1d1b39c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19068u, 0x1D1B398u, 0x1D1B3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B3A0u;
label_1d1b3a0:
    // 0x1d1b3a0: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1d1b3a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d1b3a4: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D1B3A4u;
    {
        const bool branch_taken_0x1d1b3a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1B3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B3A4u;
        // 0x1d1b3a8: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b3a4) {
            ctx->pc = 0x1D1B3F0u;
            goto label_1d1b3f0;
        }
    }
    ctx->pc = 0x1D1B3ACu;
    // 0x1d1b3ac: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D1B3ACu;
    {
        const bool branch_taken_0x1d1b3ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1d1b3ac) {
            ctx->pc = 0x1D1B3CCu;
            goto label_1d1b3cc;
        }
    }
    ctx->pc = 0x1D1B3B4u;
label_1d1b3b4:
    // 0x1d1b3b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d1b3b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1b3b8:
    // 0x1d1b3b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d1b3b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1b3bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d1b3bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d1b3c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d1b3c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d1b3c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1B3C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1B3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B3C4u;
        // 0x1d1b3c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1B3C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1B3CCu;
label_1d1b3cc:
    // 0x1d1b3cc: 0xc746416  jal         func_1D19058
    ctx->pc = 0x1D1B3CCu;
    SET_GPR_U32(ctx, 31, 0x1D1B3D4u);
    ctx->pc = 0x1D1B3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1B3CCu;
    // 0x1d1b3d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19058u, 0x1D1B3CCu, 0x1D1B3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B3D4u;
label_1d1b3d4:
    // 0x1d1b3d4: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D1B3D4u;
    {
        const bool branch_taken_0x1d1b3d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1D1B3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B3D4u;
        // 0x1d1b3d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b3d4) {
            ctx->pc = 0x1D1B3B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1b3b4;
        }
    }
    ctx->pc = 0x1D1B3DCu;
    // 0x1d1b3dc: 0xc746418  jal         func_1D19060
    ctx->pc = 0x1D1B3DCu;
    SET_GPR_U32(ctx, 31, 0x1D1B3E4u);
    ctx->pc = 0x1D19060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19060u, 0x1D1B3DCu, 0x1D1B3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B3E4u;
label_1d1b3e4:
    // 0x1d1b3e4: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1D1B3E4u;
    {
        const bool branch_taken_0x1d1b3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1B3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B3E4u;
        // 0x1d1b3e8: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b3e4) {
            ctx->pc = 0x1D1B3B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1b3b8;
        }
    }
    ctx->pc = 0x1D1B3ECu;
    // 0x1d1b3ec: 0x0  nop
    ctx->pc = 0x1d1b3ecu;
    // NOP
label_1d1b3f0:
    // 0x1d1b3f0: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1d1b3f0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1d1b3f4: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D1B3F4u;
    {
        const bool branch_taken_0x1d1b3f4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1B3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B3F4u;
        // 0x1d1b3f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b3f4) {
            ctx->pc = 0x1D1B3B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1b3b8;
        }
    }
    ctx->pc = 0x1D1B3FCu;
    // 0x1d1b3fc: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1d1b3fcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1d1b400: 0x3c0e01d2  lui         $t6, 0x1D2
    ctx->pc = 0x1d1b400u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)466 << 16));
    // 0x1d1b404: 0x25ce0740  addiu       $t6, $t6, 0x740
    ctx->pc = 0x1d1b404u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1856));
    // 0x1d1b408: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d1b408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1b40c: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d1b40cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d1b410: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1b410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1b414: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d1b414u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d1b418: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d1b418u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1b41c: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d1b41cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d1b420: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d1b420u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1b424: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d1b424u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1b428: 0xc746426  jal         func_1D19098
    ctx->pc = 0x1D1B428u;
    SET_GPR_U32(ctx, 31, 0x1D1B430u);
    ctx->pc = 0x1D1B42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1B428u;
    // 0x1d1b42c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19098u, 0x1D1B428u, 0x1D1B430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B430u;
label_1d1b430:
    // 0x1d1b430: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d1b430u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1b434: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1D1B434u;
    {
        const bool branch_taken_0x1d1b434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1B438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B434u;
        // 0x1d1b438: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b434) {
            ctx->pc = 0x1D1B3B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1b3b4;
        }
    }
    ctx->pc = 0x1D1B43Cu;
    // 0x1d1b43c: 0x0  nop
    ctx->pc = 0x1d1b43cu;
    // NOP
    // 0x1d1b440: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d1b440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d1b444: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d1b444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d1b448: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d1b448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d1b44c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d1b44cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1b450: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d1b450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d1b454: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d1b454u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1b458: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d1b458u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1b45c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d1b45cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1b460: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d1b460u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1b464: 0xc746426  jal         func_1D19098
    ctx->pc = 0x1D1B464u;
    SET_GPR_U32(ctx, 31, 0x1D1B46Cu);
    ctx->pc = 0x1D1B468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1B464u;
    // 0x1d1b468: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19098u, 0x1D1B464u, 0x1D1B46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B46Cu;
label_1d1b46c:
    // 0x1d1b46c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1b46cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1b470: 0xc74641e  jal         func_1D19078
    ctx->pc = 0x1D1B470u;
    SET_GPR_U32(ctx, 31, 0x1D1B478u);
    ctx->pc = 0x1D1B474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1B470u;
    // 0x1d1b474: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19078u, 0x1D1B470u, 0x1D1B478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B478u;
label_1d1b478:
    // 0x1d1b478: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d1b478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d1b47c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d1b47cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d1b480: 0xc74641a  jal         func_1D19068
    ctx->pc = 0x1D1B480u;
    SET_GPR_U32(ctx, 31, 0x1D1B488u);
    ctx->pc = 0x1D1B484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1B480u;
    // 0x1d1b484: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19068u, 0x1D1B480u, 0x1D1B488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B488u;
label_1d1b488:
    // 0x1d1b488: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d1b488u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1b48c: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d1b48cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d1b490: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1d1b490u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1d1b494: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d1b494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d1b498: 0xc74641a  jal         func_1D19068
    ctx->pc = 0x1D1B498u;
    SET_GPR_U32(ctx, 31, 0x1D1B4A0u);
    ctx->pc = 0x1D1B49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1B498u;
    // 0x1d1b49c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19068u, 0x1D1B498u, 0x1D1B4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B4A0u;
label_1d1b4a0:
    // 0x1d1b4a0: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d1b4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d1b4a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d1b4a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1b4a8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d1b4a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d1b4ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1B4ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1B4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B4ACu;
        // 0x1d1b4b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1B4ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1B4B4u;
    // 0x1d1b4b4: 0x0  nop
    ctx->pc = 0x1d1b4b4u;
    // NOP
    ctx->pc = 0x1d1b4b8u;
}
