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

// Function: sub_01C315C8
// Address: 0x1c315c8 - 0x1c31688
void sub_01C315C8_0x1c315c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C315C8_0x1c315c8");
#endif

    switch (ctx->pc) {
        case 0x1c315dcu: goto label_1c315dc;
        case 0x1c315f4u: goto label_1c315f4;
        case 0x1c31614u: goto label_1c31614;
        case 0x1c3161cu: goto label_1c3161c;
        case 0x1c31620u: goto label_1c31620;
        case 0x1c3166cu: goto label_1c3166c;
        default: break;
    }

    ctx->pc = 0x1c315c8u;

    // 0x1c315c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c315c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c315cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c315ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c315d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c315d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c315d4: 0xc70bdd2  jal         func_1C2F748
    ctx->pc = 0x1C315D4u;
    SET_GPR_U32(ctx, 31, 0x1C315DCu);
    ctx->pc = 0x1C315D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C315D4u;
    // 0x1c315d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F748u, 0x1C315D4u, 0x1C315DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C315DCu;
label_1c315dc:
    // 0x1c315dc: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x1c315dcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c315e0: 0x144e0014  bne         $v0, $t6, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C315E0u;
    {
        const bool branch_taken_0x1c315e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 14));
        ctx->pc = 0x1C315E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C315E0u;
        // 0x1c315e4: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c315e0) {
            ctx->pc = 0x1C31634u;
            goto label_1c31634;
        }
    }
    ctx->pc = 0x1C315E8u;
    // 0x1c315e8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c315e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c315ec: 0xc70bdd8  jal         func_1C2F760
    ctx->pc = 0x1C315ECu;
    SET_GPR_U32(ctx, 31, 0x1C315F4u);
    ctx->pc = 0x1C315F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C315ECu;
    // 0x1c315f0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F760u, 0x1C315ECu, 0x1C315F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C315F4u;
label_1c315f4:
    // 0x1c315f4: 0x24440390  addiu       $a0, $v0, 0x390
    ctx->pc = 0x1c315f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 912));
    // 0x1c315f8: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x1c315f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1c315fc: 0x8c8e0014  lw          $t6, 0x14($a0)
    ctx->pc = 0x1c315fcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1c31600: 0x240f00ac  addiu       $t7, $zero, 0xAC
    ctx->pc = 0x1c31600u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
    // 0x1c31604: 0x15cf0003  bne         $t6, $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C31604u;
    {
        const bool branch_taken_0x1c31604 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C31608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31604u;
        // 0x1c31608: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c31604) {
            ctx->pc = 0x1C31614u;
            goto label_1c31614;
        }
    }
    ctx->pc = 0x1C3160Cu;
    // 0x1c3160c: 0xc70bddc  jal         func_1C2F770
    ctx->pc = 0x1C3160Cu;
    SET_GPR_U32(ctx, 31, 0x1C31614u);
    ctx->pc = 0x1C2F770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F770u, 0x1C3160Cu, 0x1C31614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31614u;
label_1c31614:
    // 0x1c31614: 0xc70bdd4  jal         func_1C2F750
    ctx->pc = 0x1C31614u;
    SET_GPR_U32(ctx, 31, 0x1C3161Cu);
    ctx->pc = 0x1C31618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31614u;
    // 0x1c31618: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F750u, 0x1C31614u, 0x1C3161Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3161Cu;
label_1c3161c:
    // 0x1c3161c: 0x340dffff  ori         $t5, $zero, 0xFFFF
    ctx->pc = 0x1c3161cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c31620:
    // 0x1c31620: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c31620u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c31624: 0x1a0102d  daddu       $v0, $t5, $zero
    ctx->pc = 0x1c31624u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31628: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c31628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c3162c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3162Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C31630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3162Cu;
        // 0x1c31630: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3162Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C31634u;
label_1c31634:
    // 0x1c31634: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x1c31634u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c31638: 0x1000fff9  b           . + 4 + (-0x7 << 2)
    ctx->pc = 0x1C31638u;
    {
        const bool branch_taken_0x1c31638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3163Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31638u;
        // 0x1c3163c: 0xa1ee039c  sb          $t6, 0x39C($t7) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 15), 924), (uint8_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c31638) {
            ctx->pc = 0x1C31620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c31620;
        }
    }
    ctx->pc = 0x1C31640u;
    // 0x1c31640: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c31640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c31644: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c31644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31648: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c31648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c3164c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c3164cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c31650: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c31650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c31654: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c31654u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31658: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c31658u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3165c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c3165cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31660: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c31660u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c31664: 0xc70bde2  jal         func_1C2F788
    ctx->pc = 0x1C31664u;
    SET_GPR_U32(ctx, 31, 0x1C3166Cu);
    ctx->pc = 0x1C31668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31664u;
    // 0x1c31668: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F788u, 0x1C31664u, 0x1C3166Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3166Cu;
label_1c3166c:
    // 0x1c3166c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3166cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31670: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c31670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c31674: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c31674u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c31678: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1c31678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c3167c: 0x870bdda  j           func_1C2F768
    ctx->pc = 0x1C3167Cu;
    ctx->pc = 0x1C31680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3167Cu;
    // 0x1c31680: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F768u;
    sub_01C2F768_0x1c2f768(rdram, ctx, runtime); return;
    ctx->pc = 0x1C31684u;
    // 0x1c31684: 0x0  nop
    ctx->pc = 0x1c31684u;
    // NOP
    ctx->pc = 0x1c31688u;
}
