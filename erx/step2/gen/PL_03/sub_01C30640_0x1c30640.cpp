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

// Function: sub_01C30640
// Address: 0x1c30640 - 0x1c30708
void sub_01C30640_0x1c30640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C30640_0x1c30640");
#endif

    switch (ctx->pc) {
        case 0x1c3065cu: goto label_1c3065c;
        case 0x1c3066cu: goto label_1c3066c;
        case 0x1c30678u: goto label_1c30678;
        case 0x1c30688u: goto label_1c30688;
        case 0x1c306a0u: goto label_1c306a0;
        case 0x1c306ccu: goto label_1c306cc;
        default: break;
    }

    ctx->pc = 0x1c30640u;

    // 0x1c30640: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c30640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c30644: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c30644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c30648: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c30648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c3064c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c3064cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c30650: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c30650u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c30654: 0xc70bdd6  jal         func_1C2F758
    ctx->pc = 0x1C30654u;
    SET_GPR_U32(ctx, 31, 0x1C3065Cu);
    ctx->pc = 0x1C30658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C30654u;
    // 0x1c30658: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F758u, 0x1C30654u, 0x1C3065Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3065Cu;
label_1c3065c:
    // 0x1c3065c: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c3065cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c30660: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c30660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c30664: 0xc70c088  jal         func_1C30220
    ctx->pc = 0x1C30664u;
    SET_GPR_U32(ctx, 31, 0x1C3066Cu);
    ctx->pc = 0x1C30668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C30664u;
    // 0x1c30668: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C30220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C30220u, 0x1C30664u, 0x1C3066Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3066Cu;
label_1c3066c:
    // 0x1c3066c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c3066cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c30670: 0xc70bdd6  jal         func_1C2F758
    ctx->pc = 0x1C30670u;
    SET_GPR_U32(ctx, 31, 0x1C30678u);
    ctx->pc = 0x1C30674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C30670u;
    // 0x1c30674: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F758u, 0x1C30670u, 0x1C30678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C30678u;
label_1c30678:
    // 0x1c30678: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c30678u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c3067c: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c3067cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c30680: 0xc70c088  jal         func_1C30220
    ctx->pc = 0x1C30680u;
    SET_GPR_U32(ctx, 31, 0x1C30688u);
    ctx->pc = 0x1C30684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C30680u;
    // 0x1c30684: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C30220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C30220u, 0x1C30680u, 0x1C30688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C30688u;
label_1c30688:
    // 0x1c30688: 0x8e0f0018  lw          $t7, 0x18($s0)
    ctx->pc = 0x1c30688u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1c3068c: 0x55e00019  bnel        $t7, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C3068Cu;
    {
        const bool branch_taken_0x1c3068c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3068c) {
            ctx->pc = 0x1C30690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3068Cu;
            // 0x1c30690: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C306F4u;
            goto label_1c306f4;
        }
    }
    ctx->pc = 0x1C30694u;
    // 0x1c30694: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c30694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c30698: 0xc70bde8  jal         func_1C2F7A0
    ctx->pc = 0x1C30698u;
    SET_GPR_U32(ctx, 31, 0x1C306A0u);
    ctx->pc = 0x1C3069Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C30698u;
    // 0x1c3069c: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F7A0u, 0x1C30698u, 0x1C306A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C306A0u;
label_1c306a0:
    // 0x1c306a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c306a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c306a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c306a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c306a8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c306a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c306ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c306acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c306b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c306b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c306b4: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c306b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c306b8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1c306b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1c306bc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C306BCu;
    {
        const bool branch_taken_0x1c306bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C306C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C306BCu;
        // 0x1c306c0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c306bc) {
            ctx->pc = 0x1C306F0u;
            goto label_1c306f0;
        }
    }
    ctx->pc = 0x1C306C4u;
    // 0x1c306c4: 0xc70bde2  jal         func_1C2F788
    ctx->pc = 0x1C306C4u;
    SET_GPR_U32(ctx, 31, 0x1C306CCu);
    ctx->pc = 0x1C2F788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F788u, 0x1C306C4u, 0x1C306CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C306CCu;
label_1c306cc:
    // 0x1c306cc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c306ccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c306d0: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x1c306d0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c306d4: 0xae0f0018  sw          $t7, 0x18($s0)
    ctx->pc = 0x1c306d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 15));
    // 0x1c306d8: 0x8dae0328  lw          $t6, 0x328($t5)
    ctx->pc = 0x1c306d8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 808)));
    // 0x1c306dc: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x1c306dcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c306e0: 0x15cf0004  bne         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C306E0u;
    {
        const bool branch_taken_0x1c306e0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C306E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C306E0u;
        // 0x1c306e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c306e0) {
            ctx->pc = 0x1C306F4u;
            goto label_1c306f4;
        }
    }
    ctx->pc = 0x1C306E8u;
    // 0x1c306e8: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x1c306e8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c306ec: 0xadaf0328  sw          $t7, 0x328($t5)
    ctx->pc = 0x1c306ecu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 808), GPR_U32(ctx, 15));
label_1c306f0:
    // 0x1c306f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c306f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c306f4:
    // 0x1c306f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c306f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c306f8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c306f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c306fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C306FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C30700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C306FCu;
        // 0x1c30700: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C306FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C30704u;
    // 0x1c30704: 0x0  nop
    ctx->pc = 0x1c30704u;
    // NOP
    ctx->pc = 0x1c30708u;
}
