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

// Function: sub_01DCF488
// Address: 0x1dcf488 - 0x1dcf580
void sub_01DCF488_0x1dcf488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DCF488_0x1dcf488");
#endif

    switch (ctx->pc) {
        case 0x1dcf4c4u: goto label_1dcf4c4;
        case 0x1dcf4d8u: goto label_1dcf4d8;
        case 0x1dcf4ecu: goto label_1dcf4ec;
        case 0x1dcf500u: goto label_1dcf500;
        case 0x1dcf524u: goto label_1dcf524;
        case 0x1dcf540u: goto label_1dcf540;
        default: break;
    }

    ctx->pc = 0x1dcf488u;

    // 0x1dcf488: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dcf488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dcf48c: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1dcf48cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dcf490: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1dcf490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1dcf494: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dcf494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dcf498: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dcf498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dcf49c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1dcf49cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1dcf4a0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1dcf4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1dcf4a4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1dcf4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1dcf4a8: 0x15e00021  bnez        $t7, . + 4 + (0x21 << 2)
    ctx->pc = 0x1DCF4A8u;
    {
        const bool branch_taken_0x1dcf4a8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCF4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF4A8u;
        // 0x1dcf4ac: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcf4a8) {
            ctx->pc = 0x1DCF530u;
            goto label_1dcf530;
        }
    }
    ctx->pc = 0x1DCF4B0u;
    // 0x1dcf4b0: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dcf4b0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dcf4b4: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1dcf4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1dcf4b8: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x1dcf4b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1dcf4bc: 0xc773d0a  jal         func_1DCF428
    ctx->pc = 0x1DCF4BCu;
    SET_GPR_U32(ctx, 31, 0x1DCF4C4u);
    ctx->pc = 0x1DCF4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCF4BCu;
    // 0x1dcf4c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCF428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCF428u, 0x1DCF4BCu, 0x1DCF4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCF4C4u;
label_1dcf4c4:
    // 0x1dcf4c4: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dcf4c4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dcf4c8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1dcf4c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcf4cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dcf4ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcf4d0: 0xc773d0c  jal         func_1DCF430
    ctx->pc = 0x1DCF4D0u;
    SET_GPR_U32(ctx, 31, 0x1DCF4D8u);
    ctx->pc = 0x1DCF4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCF4D0u;
    // 0x1dcf4d4: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCF430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCF430u, 0x1DCF4D0u, 0x1DCF4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCF4D8u;
label_1dcf4d8:
    // 0x1dcf4d8: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dcf4d8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dcf4dc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1dcf4dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcf4e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dcf4e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcf4e4: 0xc773d0e  jal         func_1DCF438
    ctx->pc = 0x1DCF4E4u;
    SET_GPR_U32(ctx, 31, 0x1DCF4ECu);
    ctx->pc = 0x1DCF4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCF4E4u;
    // 0x1dcf4e8: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCF438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCF438u, 0x1DCF4E4u, 0x1DCF4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCF4ECu;
label_1dcf4ec:
    // 0x1dcf4ec: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dcf4ecu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dcf4f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1dcf4f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcf4f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dcf4f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcf4f8: 0xc773d10  jal         func_1DCF440
    ctx->pc = 0x1DCF4F8u;
    SET_GPR_U32(ctx, 31, 0x1DCF500u);
    ctx->pc = 0x1DCF4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCF4F8u;
    // 0x1dcf4fc: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCF440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCF440u, 0x1DCF4F8u, 0x1DCF500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCF500u;
label_1dcf500:
    // 0x1dcf500: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dcf500u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dcf504: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1dcf504u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcf508: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1dcf508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcf50c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1dcf50cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcf510: 0x8dea00dc  lw          $t2, 0xDC($t7)
    ctx->pc = 0x1dcf510u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1dcf514: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1dcf514u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcf518: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1dcf518u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcf51c: 0xc773d12  jal         func_1DCF448
    ctx->pc = 0x1DCF51Cu;
    SET_GPR_U32(ctx, 31, 0x1DCF524u);
    ctx->pc = 0x1DCF520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCF51Cu;
    // 0x1dcf520: 0x25440140  addiu       $a0, $t2, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCF448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCF448u, 0x1DCF51Cu, 0x1DCF524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCF524u;
label_1dcf524:
    // 0x1dcf524: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1dcf524u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dcf528: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x1dcf528u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x1dcf52c: 0xaf8f8018  sw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1dcf52cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934552), GPR_U32(ctx, 15));
label_1dcf530:
    // 0x1dcf530: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dcf530u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dcf534: 0x8de400dc  lw          $a0, 0xDC($t7)
    ctx->pc = 0x1dcf534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1dcf538: 0xc773d14  jal         func_1DCF450
    ctx->pc = 0x1DCF538u;
    SET_GPR_U32(ctx, 31, 0x1DCF540u);
    ctx->pc = 0x1DCF53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCF538u;
    // 0x1dcf53c: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCF450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCF450u, 0x1DCF538u, 0x1DCF540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCF540u;
label_1dcf540:
    // 0x1dcf540: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1dcf540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1dcf544: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1dcf544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1dcf548: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DCF548u;
    {
        const bool branch_taken_0x1dcf548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCF54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF548u;
        // 0x1dcf54c: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcf548) {
            ctx->pc = 0x1DCF558u;
            goto label_1dcf558;
        }
    }
    ctx->pc = 0x1DCF550u;
    // 0x1dcf550: 0xaf808018  sw          $zero, -0x7FE8($gp)
    ctx->pc = 0x1dcf550u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934552), GPR_U32(ctx, 0));
    // 0x1dcf554: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1dcf554u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dcf558:
    // 0x1dcf558: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dcf558u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dcf55c: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x1dcf55cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcf560: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dcf560u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dcf564: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dcf564u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dcf568: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1dcf568u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dcf56c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1dcf56cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dcf570: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1dcf570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1dcf574: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCF574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCF578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF574u;
        // 0x1dcf578: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCF574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCF57Cu;
    // 0x1dcf57c: 0x0  nop
    ctx->pc = 0x1dcf57cu;
    // NOP
    ctx->pc = 0x1dcf580u;
}
