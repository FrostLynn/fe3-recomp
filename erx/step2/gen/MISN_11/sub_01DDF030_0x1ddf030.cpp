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

// Function: sub_01DDF030
// Address: 0x1ddf030 - 0x1ddf128
void sub_01DDF030_0x1ddf030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DDF030_0x1ddf030");
#endif

    switch (ctx->pc) {
        case 0x1ddf06cu: goto label_1ddf06c;
        case 0x1ddf080u: goto label_1ddf080;
        case 0x1ddf094u: goto label_1ddf094;
        case 0x1ddf0a8u: goto label_1ddf0a8;
        case 0x1ddf0ccu: goto label_1ddf0cc;
        case 0x1ddf0e8u: goto label_1ddf0e8;
        default: break;
    }

    ctx->pc = 0x1ddf030u;

    // 0x1ddf030: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ddf030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ddf034: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1ddf034u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1ddf038: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1ddf038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1ddf03c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ddf03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ddf040: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ddf040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ddf044: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ddf044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ddf048: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1ddf048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1ddf04c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1ddf04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1ddf050: 0x15e00021  bnez        $t7, . + 4 + (0x21 << 2)
    ctx->pc = 0x1DDF050u;
    {
        const bool branch_taken_0x1ddf050 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DDF054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDF050u;
        // 0x1ddf054: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddf050) {
            ctx->pc = 0x1DDF0D8u;
            goto label_1ddf0d8;
        }
    }
    ctx->pc = 0x1DDF058u;
    // 0x1ddf058: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1ddf058u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1ddf05c: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1ddf05cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1ddf060: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x1ddf060u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1ddf064: 0xc777bc6  jal         func_1DDEF18
    ctx->pc = 0x1DDF064u;
    SET_GPR_U32(ctx, 31, 0x1DDF06Cu);
    ctx->pc = 0x1DDF068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDF064u;
    // 0x1ddf068: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDEF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDEF18u, 0x1DDF064u, 0x1DDF06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDF06Cu;
label_1ddf06c:
    // 0x1ddf06c: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1ddf06cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1ddf070: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1ddf070u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddf074: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ddf074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddf078: 0xc777bc8  jal         func_1DDEF20
    ctx->pc = 0x1DDF078u;
    SET_GPR_U32(ctx, 31, 0x1DDF080u);
    ctx->pc = 0x1DDF07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDF078u;
    // 0x1ddf07c: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDEF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDEF20u, 0x1DDF078u, 0x1DDF080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDF080u;
label_1ddf080:
    // 0x1ddf080: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1ddf080u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1ddf084: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ddf084u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddf088: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ddf088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddf08c: 0xc777bca  jal         func_1DDEF28
    ctx->pc = 0x1DDF08Cu;
    SET_GPR_U32(ctx, 31, 0x1DDF094u);
    ctx->pc = 0x1DDF090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDF08Cu;
    // 0x1ddf090: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDEF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDEF28u, 0x1DDF08Cu, 0x1DDF094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDF094u;
label_1ddf094:
    // 0x1ddf094: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1ddf094u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1ddf098: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ddf098u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddf09c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ddf09cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddf0a0: 0xc777bcc  jal         func_1DDEF30
    ctx->pc = 0x1DDF0A0u;
    SET_GPR_U32(ctx, 31, 0x1DDF0A8u);
    ctx->pc = 0x1DDF0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDF0A0u;
    // 0x1ddf0a4: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDEF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDEF30u, 0x1DDF0A0u, 0x1DDF0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDF0A8u;
label_1ddf0a8:
    // 0x1ddf0a8: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1ddf0a8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1ddf0ac: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1ddf0acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddf0b0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1ddf0b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddf0b4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1ddf0b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddf0b8: 0x8dea00dc  lw          $t2, 0xDC($t7)
    ctx->pc = 0x1ddf0b8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1ddf0bc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1ddf0bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddf0c0: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1ddf0c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddf0c4: 0xc777bce  jal         func_1DDEF38
    ctx->pc = 0x1DDF0C4u;
    SET_GPR_U32(ctx, 31, 0x1DDF0CCu);
    ctx->pc = 0x1DDF0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDF0C4u;
    // 0x1ddf0c8: 0x25440140  addiu       $a0, $t2, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDEF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDEF38u, 0x1DDF0C4u, 0x1DDF0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDF0CCu;
label_1ddf0cc:
    // 0x1ddf0cc: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1ddf0ccu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1ddf0d0: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x1ddf0d0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x1ddf0d4: 0xaf8f8018  sw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1ddf0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934552), GPR_U32(ctx, 15));
label_1ddf0d8:
    // 0x1ddf0d8: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1ddf0d8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1ddf0dc: 0x8de400dc  lw          $a0, 0xDC($t7)
    ctx->pc = 0x1ddf0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1ddf0e0: 0xc777bd0  jal         func_1DDEF40
    ctx->pc = 0x1DDF0E0u;
    SET_GPR_U32(ctx, 31, 0x1DDF0E8u);
    ctx->pc = 0x1DDF0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDF0E0u;
    // 0x1ddf0e4: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDEF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDEF40u, 0x1DDF0E0u, 0x1DDF0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDF0E8u;
label_1ddf0e8:
    // 0x1ddf0e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ddf0e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ddf0ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ddf0ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ddf0f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DDF0F0u;
    {
        const bool branch_taken_0x1ddf0f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DDF0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDF0F0u;
        // 0x1ddf0f4: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddf0f0) {
            ctx->pc = 0x1DDF100u;
            goto label_1ddf100;
        }
    }
    ctx->pc = 0x1DDF0F8u;
    // 0x1ddf0f8: 0xaf808018  sw          $zero, -0x7FE8($gp)
    ctx->pc = 0x1ddf0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934552), GPR_U32(ctx, 0));
    // 0x1ddf0fc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1ddf0fcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ddf100:
    // 0x1ddf100: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ddf100u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ddf104: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x1ddf104u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddf108: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ddf108u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ddf10c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ddf10cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ddf110: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ddf110u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ddf114: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1ddf114u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ddf118: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1ddf118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ddf11c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDF11Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDF120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDF11Cu;
        // 0x1ddf120: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDF11Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DDF124u;
    // 0x1ddf124: 0x0  nop
    ctx->pc = 0x1ddf124u;
    // NOP
    ctx->pc = 0x1ddf128u;
}
