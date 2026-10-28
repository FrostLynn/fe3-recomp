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

// Function: sub_01C10630
// Address: 0x1c10630 - 0x1c106f8
void sub_01C10630_0x1c10630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C10630_0x1c10630");
#endif

    switch (ctx->pc) {
        case 0x1c1064cu: goto label_1c1064c;
        case 0x1c1065cu: goto label_1c1065c;
        case 0x1c10668u: goto label_1c10668;
        case 0x1c10678u: goto label_1c10678;
        case 0x1c10690u: goto label_1c10690;
        case 0x1c106bcu: goto label_1c106bc;
        default: break;
    }

    ctx->pc = 0x1c10630u;

    // 0x1c10630: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c10630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c10634: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c10634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c10638: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c10638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c1063c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c1063cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c10640: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c10640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c10644: 0xc703dd6  jal         func_1C0F758
    ctx->pc = 0x1C10644u;
    SET_GPR_U32(ctx, 31, 0x1C1064Cu);
    ctx->pc = 0x1C10648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C10644u;
    // 0x1c10648: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F758u, 0x1C10644u, 0x1C1064Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1064Cu;
label_1c1064c:
    // 0x1c1064c: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c1064cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c10650: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c10650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c10654: 0xc704084  jal         func_1C10210
    ctx->pc = 0x1C10654u;
    SET_GPR_U32(ctx, 31, 0x1C1065Cu);
    ctx->pc = 0x1C10658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C10654u;
    // 0x1c10658: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C10210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C10210u, 0x1C10654u, 0x1C1065Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1065Cu;
label_1c1065c:
    // 0x1c1065c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c1065cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c10660: 0xc703dd6  jal         func_1C0F758
    ctx->pc = 0x1C10660u;
    SET_GPR_U32(ctx, 31, 0x1C10668u);
    ctx->pc = 0x1C10664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C10660u;
    // 0x1c10664: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F758u, 0x1C10660u, 0x1C10668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C10668u;
label_1c10668:
    // 0x1c10668: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c10668u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c1066c: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c1066cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c10670: 0xc704084  jal         func_1C10210
    ctx->pc = 0x1C10670u;
    SET_GPR_U32(ctx, 31, 0x1C10678u);
    ctx->pc = 0x1C10674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C10670u;
    // 0x1c10674: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C10210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C10210u, 0x1C10670u, 0x1C10678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C10678u;
label_1c10678:
    // 0x1c10678: 0x8e0f0018  lw          $t7, 0x18($s0)
    ctx->pc = 0x1c10678u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1c1067c: 0x55e00019  bnel        $t7, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C1067Cu;
    {
        const bool branch_taken_0x1c1067c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1067c) {
            ctx->pc = 0x1C10680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C1067Cu;
            // 0x1c10680: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C106E4u;
            goto label_1c106e4;
        }
    }
    ctx->pc = 0x1C10684u;
    // 0x1c10684: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c10684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c10688: 0xc703de8  jal         func_1C0F7A0
    ctx->pc = 0x1C10688u;
    SET_GPR_U32(ctx, 31, 0x1C10690u);
    ctx->pc = 0x1C1068Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C10688u;
    // 0x1c1068c: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F7A0u, 0x1C10688u, 0x1C10690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C10690u;
label_1c10690:
    // 0x1c10690: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c10690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c10694: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c10694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c10698: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c10698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c1069c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c1069cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c106a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c106a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c106a4: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c106a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c106a8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1c106a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1c106ac: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C106ACu;
    {
        const bool branch_taken_0x1c106ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C106B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C106ACu;
        // 0x1c106b0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c106ac) {
            ctx->pc = 0x1C106E0u;
            goto label_1c106e0;
        }
    }
    ctx->pc = 0x1C106B4u;
    // 0x1c106b4: 0xc703de2  jal         func_1C0F788
    ctx->pc = 0x1C106B4u;
    SET_GPR_U32(ctx, 31, 0x1C106BCu);
    ctx->pc = 0x1C0F788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F788u, 0x1C106B4u, 0x1C106BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C106BCu;
label_1c106bc:
    // 0x1c106bc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c106bcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c106c0: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x1c106c0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c106c4: 0xae0f0018  sw          $t7, 0x18($s0)
    ctx->pc = 0x1c106c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 15));
    // 0x1c106c8: 0x8dae0328  lw          $t6, 0x328($t5)
    ctx->pc = 0x1c106c8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 808)));
    // 0x1c106cc: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x1c106ccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c106d0: 0x15cf0004  bne         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C106D0u;
    {
        const bool branch_taken_0x1c106d0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C106D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C106D0u;
        // 0x1c106d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c106d0) {
            ctx->pc = 0x1C106E4u;
            goto label_1c106e4;
        }
    }
    ctx->pc = 0x1C106D8u;
    // 0x1c106d8: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x1c106d8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c106dc: 0xadaf0328  sw          $t7, 0x328($t5)
    ctx->pc = 0x1c106dcu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 808), GPR_U32(ctx, 15));
label_1c106e0:
    // 0x1c106e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c106e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c106e4:
    // 0x1c106e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c106e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c106e8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c106e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c106ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1C106ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C106F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C106ECu;
        // 0x1c106f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C106ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C106F4u;
    // 0x1c106f4: 0x0  nop
    ctx->pc = 0x1c106f4u;
    // NOP
    ctx->pc = 0x1c106f8u;
}
