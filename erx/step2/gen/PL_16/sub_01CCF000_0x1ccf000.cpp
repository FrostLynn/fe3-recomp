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

// Function: sub_01CCF000
// Address: 0x1ccf000 - 0x1ccf124
void sub_01CCF000_0x1ccf000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCF000_0x1ccf000");
#endif

    switch (ctx->pc) {
        case 0x1ccf01cu: goto label_1ccf01c;
        case 0x1ccf024u: goto label_1ccf024;
        case 0x1ccf038u: goto label_1ccf038;
        case 0x1ccf03cu: goto label_1ccf03c;
        case 0x1ccf078u: goto label_1ccf078;
        case 0x1ccf0b8u: goto label_1ccf0b8;
        case 0x1ccf0ccu: goto label_1ccf0cc;
        case 0x1ccf0d8u: goto label_1ccf0d8;
        case 0x1ccf0e4u: goto label_1ccf0e4;
        case 0x1ccf0f8u: goto label_1ccf0f8;
        case 0x1ccf108u: goto label_1ccf108;
        default: break;
    }

    ctx->pc = 0x1ccf000u;

    // 0x1ccf000: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ccf000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ccf004: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ccf004u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ccf008: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ccf008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ccf00c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ccf00cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf010: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ccf010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ccf014: 0xc733510  jal         func_1CCD440
    ctx->pc = 0x1CCF014u;
    SET_GPR_U32(ctx, 31, 0x1CCF01Cu);
    ctx->pc = 0x1CCF018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF014u;
    // 0x1ccf018: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD440u, 0x1CCF014u, 0x1CCF01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF01Cu;
label_1ccf01c:
    // 0x1ccf01c: 0xc733512  jal         func_1CCD448
    ctx->pc = 0x1CCF01Cu;
    SET_GPR_U32(ctx, 31, 0x1CCF024u);
    ctx->pc = 0x1CCF020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF01Cu;
    // 0x1ccf020: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD448u, 0x1CCF01Cu, 0x1CCF024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF024u;
label_1ccf024:
    // 0x1ccf024: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1ccf024u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ccf028: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CCF028u;
    {
        const bool branch_taken_0x1ccf028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CCF02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCF028u;
        // 0x1ccf02c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccf028) {
            ctx->pc = 0x1CCF04Cu;
            goto label_1ccf04c;
        }
    }
    ctx->pc = 0x1CCF030u;
    // 0x1ccf030: 0xc733514  jal         func_1CCD450
    ctx->pc = 0x1CCF030u;
    SET_GPR_U32(ctx, 31, 0x1CCF038u);
    ctx->pc = 0x1CCD450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD450u, 0x1CCF030u, 0x1CCF038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF038u;
label_1ccf038:
    // 0x1ccf038: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1ccf038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1ccf03c:
    // 0x1ccf03c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ccf03cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ccf040: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ccf040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ccf044: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCF044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCF048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCF044u;
        // 0x1ccf048: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCF044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCF04Cu;
label_1ccf04c:
    // 0x1ccf04c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1CCF04Cu;
    {
        const bool branch_taken_0x1ccf04c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCF050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCF04Cu;
        // 0x1ccf050: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccf04c) {
            ctx->pc = 0x1CCF03Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ccf03c;
        }
    }
    ctx->pc = 0x1CCF054u;
    // 0x1ccf054: 0x0  nop
    ctx->pc = 0x1ccf054u;
    // NOP
    // 0x1ccf058: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ccf058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ccf05c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ccf05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ccf060: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ccf060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ccf064: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ccf064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ccf068: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ccf068u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf06c: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1ccf06cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1ccf070: 0xc733518  jal         func_1CCD460
    ctx->pc = 0x1CCF070u;
    SET_GPR_U32(ctx, 31, 0x1CCF078u);
    ctx->pc = 0x1CCF074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF070u;
    // 0x1ccf074: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD460u, 0x1CCF070u, 0x1CCF078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF078u;
label_1ccf078:
    // 0x1ccf078: 0x8c4e0008  lw          $t6, 0x8($v0)
    ctx->pc = 0x1ccf078u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ccf07c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ccf07cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf080: 0x25cefff8  addiu       $t6, $t6, -0x8
    ctx->pc = 0x1ccf080u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967288));
    // 0x1ccf084: 0x2dcf0018  sltiu       $t7, $t6, 0x18
    ctx->pc = 0x1ccf084u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x1ccf088: 0x11e0002e  beqz        $t7, . + 4 + (0x2E << 2)
    ctx->pc = 0x1CCF088u;
    {
        const bool branch_taken_0x1ccf088 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCF08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCF088u;
        // 0x1ccf08c: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccf088) {
            ctx->pc = 0x1CCF144u;
            return;
        }
    }
    ctx->pc = 0x1CCF090u;
    // 0x1ccf090: 0xe7880  sll         $t7, $t6, 2
    ctx->pc = 0x1ccf090u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x1ccf094: 0x3c0e01cd  lui         $t6, 0x1CD
    ctx->pc = 0x1ccf094u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)461 << 16));
    // 0x1ccf098: 0x25ce0b0c  addiu       $t6, $t6, 0xB0C
    ctx->pc = 0x1ccf098u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 2828));
    // 0x1ccf09c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1ccf09cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1ccf0a0: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1ccf0a0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1ccf0a4: 0x1a00008  jr          $t5
    ctx->pc = 0x1CCF0A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CCF0ACu: goto label_1ccf0ac;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCF0A4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1CCF0ACu;
label_1ccf0ac:
    // 0x1ccf0ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ccf0acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf0b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ccf0b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf0b4: 0x24060046  addiu       $a2, $zero, 0x46
    ctx->pc = 0x1ccf0b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_1ccf0b8:
    // 0x1ccf0b8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ccf0b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ccf0bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ccf0bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf0c0: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1ccf0c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ccf0c4: 0xc733522  jal         func_1CCD488
    ctx->pc = 0x1CCF0C4u;
    SET_GPR_U32(ctx, 31, 0x1CCF0CCu);
    ctx->pc = 0x1CCF0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF0C4u;
    // 0x1ccf0c8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD488u, 0x1CCF0C4u, 0x1CCF0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF0CCu;
label_1ccf0cc:
    // 0x1ccf0cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ccf0ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf0d0: 0xc73351a  jal         func_1CCD468
    ctx->pc = 0x1CCF0D0u;
    SET_GPR_U32(ctx, 31, 0x1CCF0D8u);
    ctx->pc = 0x1CCF0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF0D0u;
    // 0x1ccf0d4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD468u, 0x1CCF0D0u, 0x1CCF0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF0D8u;
label_1ccf0d8:
    // 0x1ccf0d8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1ccf0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ccf0dc: 0xc733516  jal         func_1CCD458
    ctx->pc = 0x1CCF0DCu;
    SET_GPR_U32(ctx, 31, 0x1CCF0E4u);
    ctx->pc = 0x1CCF0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF0DCu;
    // 0x1ccf0e0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD458u, 0x1CCF0DCu, 0x1CCF0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF0E4u;
label_1ccf0e4:
    // 0x1ccf0e4: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1ccf0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1ccf0e8: 0x26240390  addiu       $a0, $s1, 0x390
    ctx->pc = 0x1ccf0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1ccf0ec: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1ccf0ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ccf0f0: 0xc73351c  jal         func_1CCD470
    ctx->pc = 0x1CCF0F0u;
    SET_GPR_U32(ctx, 31, 0x1CCF0F8u);
    ctx->pc = 0x1CCF0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF0F0u;
    // 0x1ccf0f4: 0x240500d2  addiu       $a1, $zero, 0xD2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD470u, 0x1CCF0F0u, 0x1CCF0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF0F8u;
label_1ccf0f8:
    // 0x1ccf0f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ccf0f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ccf0fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ccf0fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf100: 0xc733510  jal         func_1CCD440
    ctx->pc = 0x1CCF100u;
    SET_GPR_U32(ctx, 31, 0x1CCF108u);
    ctx->pc = 0x1CCF104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF100u;
    // 0x1ccf104: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD440u, 0x1CCF100u, 0x1CCF108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF108u;
label_1ccf108:
    // 0x1ccf108: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ccf108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf10c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ccf10cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ccf110: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ccf110u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ccf114: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x1ccf114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1ccf118: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ccf118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ccf11c: 0x873351e  j           func_1CCD478
    ctx->pc = 0x1CCF11Cu;
    ctx->pc = 0x1CCF120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF11Cu;
    // 0x1ccf120: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD478u;
    sub_01CCD478_0x1ccd478(rdram, ctx, runtime); return;
    ctx->pc = 0x1CCF124u;
}
