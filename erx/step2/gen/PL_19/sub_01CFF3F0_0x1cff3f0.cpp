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

// Function: sub_01CFF3F0
// Address: 0x1cff3f0 - 0x1cff528
void sub_01CFF3F0_0x1cff3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFF3F0_0x1cff3f0");
#endif

    switch (ctx->pc) {
        case 0x1cff410u: goto label_1cff410;
        case 0x1cff424u: goto label_1cff424;
        case 0x1cff428u: goto label_1cff428;
        case 0x1cff444u: goto label_1cff444;
        case 0x1cff454u: goto label_1cff454;
        case 0x1cff4a0u: goto label_1cff4a0;
        case 0x1cff4dcu: goto label_1cff4dc;
        case 0x1cff4e8u: goto label_1cff4e8;
        case 0x1cff4f8u: goto label_1cff4f8;
        case 0x1cff510u: goto label_1cff510;
        default: break;
    }

    ctx->pc = 0x1cff3f0u;

    // 0x1cff3f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cff3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cff3f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cff3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cff3f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cff3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cff3fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cff3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cff400: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cff400u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff404: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cff404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cff408: 0xc73f49a  jal         func_1CFD268
    ctx->pc = 0x1CFF408u;
    SET_GPR_U32(ctx, 31, 0x1CFF410u);
    ctx->pc = 0x1CFF40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF408u;
    // 0x1cff40c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD268u, 0x1CFF408u, 0x1CFF410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF410u;
label_1cff410:
    // 0x1cff410: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1cff410u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1cff414: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CFF414u;
    {
        const bool branch_taken_0x1cff414 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFF418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF414u;
        // 0x1cff418: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cff414) {
            ctx->pc = 0x1CFF460u;
            goto label_1cff460;
        }
    }
    ctx->pc = 0x1CFF41Cu;
    // 0x1cff41c: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CFF41Cu;
    {
        const bool branch_taken_0x1cff41c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1cff41c) {
            ctx->pc = 0x1CFF43Cu;
            goto label_1cff43c;
        }
    }
    ctx->pc = 0x1CFF424u;
label_1cff424:
    // 0x1cff424: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cff424u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cff428:
    // 0x1cff428: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cff428u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cff42c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cff42cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cff430: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cff430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cff434: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFF434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFF438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF434u;
        // 0x1cff438: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFF434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CFF43Cu;
label_1cff43c:
    // 0x1cff43c: 0xc73f496  jal         func_1CFD258
    ctx->pc = 0x1CFF43Cu;
    SET_GPR_U32(ctx, 31, 0x1CFF444u);
    ctx->pc = 0x1CFF440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF43Cu;
    // 0x1cff440: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD258u, 0x1CFF43Cu, 0x1CFF444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF444u;
label_1cff444:
    // 0x1cff444: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1CFF444u;
    {
        const bool branch_taken_0x1cff444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1CFF448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF444u;
        // 0x1cff448: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cff444) {
            ctx->pc = 0x1CFF424u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cff424;
        }
    }
    ctx->pc = 0x1CFF44Cu;
    // 0x1cff44c: 0xc73f498  jal         func_1CFD260
    ctx->pc = 0x1CFF44Cu;
    SET_GPR_U32(ctx, 31, 0x1CFF454u);
    ctx->pc = 0x1CFD260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD260u, 0x1CFF44Cu, 0x1CFF454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF454u;
label_1cff454:
    // 0x1cff454: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1CFF454u;
    {
        const bool branch_taken_0x1cff454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFF458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF454u;
        // 0x1cff458: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cff454) {
            ctx->pc = 0x1CFF428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cff428;
        }
    }
    ctx->pc = 0x1CFF45Cu;
    // 0x1cff45c: 0x0  nop
    ctx->pc = 0x1cff45cu;
    // NOP
label_1cff460:
    // 0x1cff460: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1cff460u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1cff464: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1CFF464u;
    {
        const bool branch_taken_0x1cff464 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CFF468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF464u;
        // 0x1cff468: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cff464) {
            ctx->pc = 0x1CFF428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cff428;
        }
    }
    ctx->pc = 0x1CFF46Cu;
    // 0x1cff46c: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1cff46cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1cff470: 0x3c0e01d0  lui         $t6, 0x1D0
    ctx->pc = 0x1cff470u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)464 << 16));
    // 0x1cff474: 0x25ce5e20  addiu       $t6, $t6, 0x5E20
    ctx->pc = 0x1cff474u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 24096));
    // 0x1cff478: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cff478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff47c: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1cff47cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1cff480: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cff480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff484: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1cff484u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1cff488: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cff488u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff48c: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1cff48cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1cff490: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cff490u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff494: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cff494u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cff498: 0xc73f4a6  jal         func_1CFD298
    ctx->pc = 0x1CFF498u;
    SET_GPR_U32(ctx, 31, 0x1CFF4A0u);
    ctx->pc = 0x1CFF49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF498u;
    // 0x1cff49c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD298u, 0x1CFF498u, 0x1CFF4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF4A0u;
label_1cff4a0:
    // 0x1cff4a0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cff4a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cff4a4: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1CFF4A4u;
    {
        const bool branch_taken_0x1cff4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFF4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF4A4u;
        // 0x1cff4a8: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cff4a4) {
            ctx->pc = 0x1CFF424u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cff424;
        }
    }
    ctx->pc = 0x1CFF4ACu;
    // 0x1cff4ac: 0x0  nop
    ctx->pc = 0x1cff4acu;
    // NOP
    // 0x1cff4b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cff4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cff4b4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1cff4b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cff4b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cff4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cff4bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cff4bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff4c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cff4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cff4c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cff4c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff4c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cff4c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff4cc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cff4ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cff4d0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cff4d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff4d4: 0xc73f4a6  jal         func_1CFD298
    ctx->pc = 0x1CFF4D4u;
    SET_GPR_U32(ctx, 31, 0x1CFF4DCu);
    ctx->pc = 0x1CFF4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF4D4u;
    // 0x1cff4d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD298u, 0x1CFF4D4u, 0x1CFF4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF4DCu;
label_1cff4dc:
    // 0x1cff4dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cff4dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff4e0: 0xc73f49e  jal         func_1CFD278
    ctx->pc = 0x1CFF4E0u;
    SET_GPR_U32(ctx, 31, 0x1CFF4E8u);
    ctx->pc = 0x1CFF4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF4E0u;
    // 0x1cff4e4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD278u, 0x1CFF4E0u, 0x1CFF4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF4E8u;
label_1cff4e8:
    // 0x1cff4e8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cff4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cff4ec: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1cff4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cff4f0: 0xc73f49a  jal         func_1CFD268
    ctx->pc = 0x1CFF4F0u;
    SET_GPR_U32(ctx, 31, 0x1CFF4F8u);
    ctx->pc = 0x1CFF4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF4F0u;
    // 0x1cff4f4: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD268u, 0x1CFF4F0u, 0x1CFF4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF4F8u;
label_1cff4f8:
    // 0x1cff4f8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cff4f8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cff4fc: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1cff4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1cff500: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1cff500u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1cff504: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cff504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cff508: 0xc73f49a  jal         func_1CFD268
    ctx->pc = 0x1CFF508u;
    SET_GPR_U32(ctx, 31, 0x1CFF510u);
    ctx->pc = 0x1CFF50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF508u;
    // 0x1cff50c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD268u, 0x1CFF508u, 0x1CFF510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF510u;
label_1cff510:
    // 0x1cff510: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1cff510u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1cff514: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cff514u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cff518: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cff518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cff51c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFF51Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFF520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF51Cu;
        // 0x1cff520: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFF51Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CFF524u;
    // 0x1cff524: 0x0  nop
    ctx->pc = 0x1cff524u;
    // NOP
    ctx->pc = 0x1cff528u;
}
