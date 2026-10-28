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

// Function: sub_01DCF708
// Address: 0x1dcf708 - 0x1dcf818
void sub_01DCF708_0x1dcf708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DCF708_0x1dcf708");
#endif

    switch (ctx->pc) {
        case 0x1dcf730u: goto label_1dcf730;
        case 0x1dcf744u: goto label_1dcf744;
        case 0x1dcf78cu: goto label_1dcf78c;
        case 0x1dcf7c0u: goto label_1dcf7c0;
        case 0x1dcf7c8u: goto label_1dcf7c8;
        case 0x1dcf7d0u: goto label_1dcf7d0;
        default: break;
    }

    ctx->pc = 0x1dcf708u;

    // 0x1dcf708: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dcf708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dcf70c: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dcf70cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dcf710: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dcf710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dcf714: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1dcf714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1dcf718: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1dcf718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1dcf71c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dcf71cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dcf720: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1dcf720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1dcf724: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x1dcf724u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1dcf728: 0xc773d0a  jal         func_1DCF428
    ctx->pc = 0x1DCF728u;
    SET_GPR_U32(ctx, 31, 0x1DCF730u);
    ctx->pc = 0x1DCF72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCF728u;
    // 0x1dcf72c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCF428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCF428u, 0x1DCF728u, 0x1DCF730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCF730u;
label_1dcf730:
    // 0x1dcf730: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dcf730u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dcf734: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dcf734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcf738: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1dcf738u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcf73c: 0xc773d06  jal         func_1DCF418
    ctx->pc = 0x1DCF73Cu;
    SET_GPR_U32(ctx, 31, 0x1DCF744u);
    ctx->pc = 0x1DCF740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCF73Cu;
    // 0x1dcf740: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCF418u, 0x1DCF73Cu, 0x1DCF744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCF744u;
label_1dcf744:
    // 0x1dcf744: 0x24520390  addiu       $s2, $v0, 0x390
    ctx->pc = 0x1dcf744u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 912));
    // 0x1dcf748: 0x8e460014  lw          $a2, 0x14($s2)
    ctx->pc = 0x1dcf748u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1dcf74c: 0x240f014e  addiu       $t7, $zero, 0x14E
    ctx->pc = 0x1dcf74cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 334));
    // 0x1dcf750: 0x10cf001b  beq         $a2, $t7, . + 4 + (0x1B << 2)
    ctx->pc = 0x1DCF750u;
    {
        const bool branch_taken_0x1dcf750 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 15));
        ctx->pc = 0x1DCF754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF750u;
        // 0x1dcf754: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcf750) {
            ctx->pc = 0x1DCF7C0u;
            goto label_1dcf7c0;
        }
    }
    ctx->pc = 0x1DCF758u;
    // 0x1dcf758: 0x8e2e03a4  lw          $t6, 0x3A4($s1)
    ctx->pc = 0x1dcf758u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 932)));
    // 0x1dcf75c: 0x240f0042  addiu       $t7, $zero, 0x42
    ctx->pc = 0x1dcf75cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1dcf760: 0x15cf0017  bne         $t6, $t7, . + 4 + (0x17 << 2)
    ctx->pc = 0x1DCF760u;
    {
        const bool branch_taken_0x1dcf760 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x1dcf760) {
            ctx->pc = 0x1DCF7C0u;
            goto label_1dcf7c0;
        }
    }
    ctx->pc = 0x1DCF768u;
    // 0x1dcf768: 0x8e2f081c  lw          $t7, 0x81C($s1)
    ctx->pc = 0x1dcf768u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2076)));
    // 0x1dcf76c: 0x11e00014  beqz        $t7, . + 4 + (0x14 << 2)
    ctx->pc = 0x1DCF76Cu;
    {
        const bool branch_taken_0x1dcf76c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCF770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF76Cu;
        // 0x1dcf770: 0x8f8e8014  lw          $t6, -0x7FEC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcf76c) {
            ctx->pc = 0x1DCF7C0u;
            goto label_1dcf7c0;
        }
    }
    ctx->pc = 0x1DCF774u;
    // 0x1dcf774: 0x95cf056e  lhu         $t7, 0x56E($t6)
    ctx->pc = 0x1dcf774u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
    // 0x1dcf778: 0x31ef0008  andi        $t7, $t7, 0x8
    ctx->pc = 0x1dcf778u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)8);
    // 0x1dcf77c: 0x15e00010  bnez        $t7, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DCF77Cu;
    {
        const bool branch_taken_0x1dcf77c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCF780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF77Cu;
        // 0x1dcf780: 0x244403e4  addiu       $a0, $v0, 0x3E4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 996));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcf77c) {
            ctx->pc = 0x1DCF7C0u;
            goto label_1dcf7c0;
        }
    }
    ctx->pc = 0x1DCF784u;
    // 0x1dcf784: 0xc773d18  jal         func_1DCF460
    ctx->pc = 0x1DCF784u;
    SET_GPR_U32(ctx, 31, 0x1DCF78Cu);
    ctx->pc = 0x1DCF788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCF784u;
    // 0x1dcf788: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCF460u, 0x1DCF784u, 0x1DCF78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCF78Cu;
label_1dcf78c:
    // 0x1dcf78c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1dcf78cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1dcf790: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1DCF790u;
    {
        const bool branch_taken_0x1dcf790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dcf790) {
            ctx->pc = 0x1DCF7C0u;
            goto label_1dcf7c0;
        }
    }
    ctx->pc = 0x1DCF798u;
    // 0x1dcf798: 0x922f09b0  lbu         $t7, 0x9B0($s1)
    ctx->pc = 0x1dcf798u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2480)));
    // 0x1dcf79c: 0x15e00008  bnez        $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DCF79Cu;
    {
        const bool branch_taken_0x1dcf79c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dcf79c) {
            ctx->pc = 0x1DCF7C0u;
            goto label_1dcf7c0;
        }
    }
    ctx->pc = 0x1DCF7A4u;
    // 0x1dcf7a4: 0x8e0f081c  lw          $t7, 0x81C($s0)
    ctx->pc = 0x1dcf7a4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2076)));
    // 0x1dcf7a8: 0x29ef0100  slti        $t7, $t7, 0x100
    ctx->pc = 0x1dcf7a8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x1dcf7ac: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DCF7ACu;
    {
        const bool branch_taken_0x1dcf7ac = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCF7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF7ACu;
        // 0x1dcf7b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcf7ac) {
            ctx->pc = 0x1DCF7C0u;
            goto label_1dcf7c0;
        }
    }
    ctx->pc = 0x1DCF7B4u;
    // 0x1dcf7b4: 0x2405014e  addiu       $a1, $zero, 0x14E
    ctx->pc = 0x1dcf7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 334));
    // 0x1dcf7b8: 0xc773d08  jal         func_1DCF420
    ctx->pc = 0x1DCF7B8u;
    SET_GPR_U32(ctx, 31, 0x1DCF7C0u);
    ctx->pc = 0x1DCF7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCF7B8u;
    // 0x1dcf7bc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCF420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCF420u, 0x1DCF7B8u, 0x1DCF7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCF7C0u;
label_1dcf7c0:
    // 0x1dcf7c0: 0xc773d60  jal         func_1DCF580
    ctx->pc = 0x1DCF7C0u;
    SET_GPR_U32(ctx, 31, 0x1DCF7C8u);
    ctx->pc = 0x1DCF580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCF580u, 0x1DCF7C0u, 0x1DCF7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCF7C8u;
label_1dcf7c8:
    // 0x1dcf7c8: 0xc773d86  jal         func_1DCF618
    ctx->pc = 0x1DCF7C8u;
    SET_GPR_U32(ctx, 31, 0x1DCF7D0u);
    ctx->pc = 0x1DCF618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCF618u, 0x1DCF7C8u, 0x1DCF7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCF7D0u;
label_1dcf7d0:
    // 0x1dcf7d0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DCF7D0u;
    {
        const bool branch_taken_0x1dcf7d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCF7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF7D0u;
        // 0x1dcf7d4: 0x8f8e8014  lw          $t6, -0x7FEC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcf7d0) {
            ctx->pc = 0x1DCF7ECu;
            goto label_1dcf7ec;
        }
    }
    ctx->pc = 0x1DCF7D8u;
    // 0x1dcf7d8: 0x91cf0428  lbu         $t7, 0x428($t6)
    ctx->pc = 0x1dcf7d8u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 1064)));
    // 0x1dcf7dc: 0x15e00004  bnez        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DCF7DCu;
    {
        const bool branch_taken_0x1dcf7dc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCF7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF7DCu;
        // 0x1dcf7e0: 0x8f848014  lw          $a0, -0x7FEC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcf7dc) {
            ctx->pc = 0x1DCF7F0u;
            goto label_1dcf7f0;
        }
    }
    ctx->pc = 0x1DCF7E4u;
    // 0x1dcf7e4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1dcf7e4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dcf7e8: 0xa1cf0429  sb          $t7, 0x429($t6)
    ctx->pc = 0x1dcf7e8u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 1065), (uint8_t)GPR_U32(ctx, 15));
label_1dcf7ec:
    // 0x1dcf7ec: 0x8f848014  lw          $a0, -0x7FEC($gp)
    ctx->pc = 0x1dcf7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
label_1dcf7f0:
    // 0x1dcf7f0: 0x2405f6cf  addiu       $a1, $zero, -0x931
    ctx->pc = 0x1dcf7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294964943));
    // 0x1dcf7f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dcf7f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dcf7f8: 0x2406faca  addiu       $a2, $zero, -0x536
    ctx->pc = 0x1dcf7f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965962));
    // 0x1dcf7fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dcf7fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dcf800: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1dcf800u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dcf804: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dcf804u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dcf808: 0x2408fffe  addiu       $t0, $zero, -0x2
    ctx->pc = 0x1dcf808u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1dcf80c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1dcf80cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dcf810: 0x8773d1a  j           func_1DCF468
    ctx->pc = 0x1DCF810u;
    ctx->pc = 0x1DCF814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCF810u;
    // 0x1dcf814: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCF468u;
    sub_01DCF468_0x1dcf468(rdram, ctx, runtime); return;
    ctx->pc = 0x1DCF818u;
}
