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

// Function: sub_01C6BA50
// Address: 0x1c6ba50 - 0x1c6bc08
void sub_01C6BA50_0x1c6ba50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C6BA50_0x1c6ba50");
#endif

    switch (ctx->pc) {
        case 0x1c6ba78u: goto label_1c6ba78;
        case 0x1c6ba98u: goto label_1c6ba98;
        case 0x1c6baa8u: goto label_1c6baa8;
        case 0x1c6baacu: goto label_1c6baac;
        case 0x1c6baecu: goto label_1c6baec;
        case 0x1c6bb20u: goto label_1c6bb20;
        case 0x1c6bb48u: goto label_1c6bb48;
        case 0x1c6bb54u: goto label_1c6bb54;
        case 0x1c6bb60u: goto label_1c6bb60;
        case 0x1c6bb7cu: goto label_1c6bb7c;
        case 0x1c6bb94u: goto label_1c6bb94;
        case 0x1c6bba0u: goto label_1c6bba0;
        case 0x1c6bbacu: goto label_1c6bbac;
        case 0x1c6bbc4u: goto label_1c6bbc4;
        case 0x1c6bbd0u: goto label_1c6bbd0;
        default: break;
    }

    ctx->pc = 0x1c6ba50u;

    // 0x1c6ba50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c6ba50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c6ba54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c6ba54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c6ba58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c6ba58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c6ba5c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c6ba5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c6ba60: 0x8c8e0018  lw          $t6, 0x18($a0)
    ctx->pc = 0x1c6ba60u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1c6ba64: 0x19c00005  blez        $t6, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C6BA64u;
    {
        const bool branch_taken_0x1c6ba64 = (GPR_S32(ctx, 14) <= 0);
        ctx->pc = 0x1C6BA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6BA64u;
        // 0x1c6ba68: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6ba64) {
            ctx->pc = 0x1C6BA7Cu;
            goto label_1c6ba7c;
        }
    }
    ctx->pc = 0x1C6BA6Cu;
    // 0x1c6ba6c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c6ba6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c6ba70: 0xc71a792  jal         func_1C69E48
    ctx->pc = 0x1C6BA70u;
    SET_GPR_U32(ctx, 31, 0x1C6BA78u);
    ctx->pc = 0x1C6BA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BA70u;
    // 0x1c6ba74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E48u, 0x1C6BA70u, 0x1C6BA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BA78u;
label_1c6ba78:
    // 0x1c6ba78: 0x8e2e0018  lw          $t6, 0x18($s1)
    ctx->pc = 0x1c6ba78u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1c6ba7c:
    // 0x1c6ba7c: 0x8e2f0000  lw          $t7, 0x0($s1)
    ctx->pc = 0x1c6ba7cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c6ba80: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x1c6ba80u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x1c6ba84: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1c6ba84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6ba88: 0xae2e0018  sw          $t6, 0x18($s1)
    ctx->pc = 0x1c6ba88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 14));
    // 0x1c6ba8c: 0xa1f0039c  sb          $s0, 0x39C($t7)
    ctx->pc = 0x1c6ba8cu;
    WRITE8(ADD32(GPR_U32(ctx, 15), 924), (uint8_t)GPR_U32(ctx, 16));
    // 0x1c6ba90: 0xc71a794  jal         func_1C69E50
    ctx->pc = 0x1C6BA90u;
    SET_GPR_U32(ctx, 31, 0x1C6BA98u);
    ctx->pc = 0x1C6BA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BA90u;
    // 0x1c6ba94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E50u, 0x1C6BA90u, 0x1C6BA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BA98u;
label_1c6ba98:
    // 0x1c6ba98: 0x14500009  bne         $v0, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C6BA98u;
    {
        const bool branch_taken_0x1c6ba98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1C6BA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6BA98u;
        // 0x1c6ba9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6ba98) {
            ctx->pc = 0x1C6BAC0u;
            goto label_1c6bac0;
        }
    }
    ctx->pc = 0x1C6BAA0u;
    // 0x1c6baa0: 0xc71a796  jal         func_1C69E58
    ctx->pc = 0x1C6BAA0u;
    SET_GPR_U32(ctx, 31, 0x1C6BAA8u);
    ctx->pc = 0x1C69E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E58u, 0x1C6BAA0u, 0x1C6BAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BAA8u;
label_1c6baa8:
    // 0x1c6baa8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c6baa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c6baac:
    // 0x1c6baac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c6baacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6bab0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c6bab0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c6bab4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c6bab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6bab8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6BAB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6BABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6BAB8u;
        // 0x1c6babc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6BAB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6BAC0u;
label_1c6bac0:
    // 0x1c6bac0: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C6BAC0u;
    {
        const bool branch_taken_0x1c6bac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6BAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6BAC0u;
        // 0x1c6bac4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6bac0) {
            ctx->pc = 0x1C6BAACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6baac;
        }
    }
    ctx->pc = 0x1C6BAC8u;
    // 0x1c6bac8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c6bac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c6bacc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1c6baccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1c6bad0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1c6bad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1c6bad4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c6bad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c6bad8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c6bad8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6badc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1c6badcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1c6bae0: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1c6bae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c6bae4: 0xc71a79a  jal         func_1C69E68
    ctx->pc = 0x1C6BAE4u;
    SET_GPR_U32(ctx, 31, 0x1C6BAECu);
    ctx->pc = 0x1C6BAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BAE4u;
    // 0x1c6bae8: 0x8e450010  lw          $a1, 0x10($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E68u, 0x1C6BAE4u, 0x1C6BAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BAECu;
label_1c6baec:
    // 0x1c6baec: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x1c6baecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
    // 0x1c6baf0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c6baf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6baf4: 0x8c4e0008  lw          $t6, 0x8($v0)
    ctx->pc = 0x1c6baf4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c6baf8: 0x240f001a  addiu       $t7, $zero, 0x1A
    ctx->pc = 0x1c6baf8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1c6bafc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c6bafcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6bb00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c6bb00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6bb04: 0x11cf000b  beq         $t6, $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x1C6BB04u;
    {
        const bool branch_taken_0x1c6bb04 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1C6BB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6BB04u;
        // 0x1c6bb08: 0x24060049  addiu       $a2, $zero, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6bb04) {
            ctx->pc = 0x1C6BB34u;
            goto label_1c6bb34;
        }
    }
    ctx->pc = 0x1C6BB0Cu;
    // 0x1c6bb0c: 0x29cf001b  slti        $t7, $t6, 0x1B
    ctx->pc = 0x1c6bb0cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x1c6bb10: 0x11e00035  beqz        $t7, . + 4 + (0x35 << 2)
    ctx->pc = 0x1C6BB10u;
    {
        const bool branch_taken_0x1c6bb10 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6BB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6BB10u;
        // 0x1c6bb14: 0x240f001f  addiu       $t7, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6bb10) {
            ctx->pc = 0x1C6BBE8u;
            goto label_1c6bbe8;
        }
    }
    ctx->pc = 0x1C6BB18u;
    // 0x1c6bb18: 0x240f0019  addiu       $t7, $zero, 0x19
    ctx->pc = 0x1c6bb18u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1c6bb1c: 0x2406004a  addiu       $a2, $zero, 0x4A
    ctx->pc = 0x1c6bb1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
label_1c6bb20:
    // 0x1c6bb20: 0x11cf0005  beq         $t6, $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C6BB20u;
    {
        const bool branch_taken_0x1c6bb20 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1C6BB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6BB20u;
        // 0x1c6bb24: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6bb20) {
            ctx->pc = 0x1C6BB38u;
            goto label_1c6bb38;
        }
    }
    ctx->pc = 0x1C6BB28u;
    // 0x1c6bb28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c6bb28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6bb2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c6bb2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6bb30: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c6bb30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1c6bb34:
    // 0x1c6bb34: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c6bb34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c6bb38:
    // 0x1c6bb38: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c6bb38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6bb3c: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c6bb3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c6bb40: 0xc71a7a4  jal         func_1C69E90
    ctx->pc = 0x1C6BB40u;
    SET_GPR_U32(ctx, 31, 0x1C6BB48u);
    ctx->pc = 0x1C6BB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BB40u;
    // 0x1c6bb44: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E90u, 0x1C6BB40u, 0x1C6BB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BB48u;
label_1c6bb48:
    // 0x1c6bb48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c6bb48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6bb4c: 0xc71a79c  jal         func_1C69E70
    ctx->pc = 0x1C6BB4Cu;
    SET_GPR_U32(ctx, 31, 0x1C6BB54u);
    ctx->pc = 0x1C6BB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BB4Cu;
    // 0x1c6bb50: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E70u, 0x1C6BB4Cu, 0x1C6BB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BB54u;
label_1c6bb54:
    // 0x1c6bb54: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x1c6bb54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1c6bb58: 0xc71a798  jal         func_1C69E60
    ctx->pc = 0x1C6BB58u;
    SET_GPR_U32(ctx, 31, 0x1C6BB60u);
    ctx->pc = 0x1C6BB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BB58u;
    // 0x1c6bb5c: 0x8e450010  lw          $a1, 0x10($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E60u, 0x1C6BB58u, 0x1C6BB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BB60u;
label_1c6bb60:
    // 0x1c6bb60: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1c6bb60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1c6bb64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c6bb64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6bb68: 0xa22009b0  sb          $zero, 0x9B0($s1)
    ctx->pc = 0x1c6bb68u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2480), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c6bb6c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1c6bb6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c6bb70: 0x26240390  addiu       $a0, $s1, 0x390
    ctx->pc = 0x1c6bb70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1c6bb74: 0xc71a79e  jal         func_1C69E78
    ctx->pc = 0x1C6BB74u;
    SET_GPR_U32(ctx, 31, 0x1C6BB7Cu);
    ctx->pc = 0x1C6BB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BB74u;
    // 0x1c6bb78: 0x240500b7  addiu       $a1, $zero, 0xB7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 183));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E78u, 0x1C6BB74u, 0x1C6BB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BB7Cu;
label_1c6bb7c:
    // 0x1c6bb7c: 0x26110040  addiu       $s1, $s0, 0x40
    ctx->pc = 0x1c6bb7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1c6bb80: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c6bb80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c6bb84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c6bb84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6bb88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c6bb88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6bb8c: 0xc71a792  jal         func_1C69E48
    ctx->pc = 0x1C6BB8Cu;
    SET_GPR_U32(ctx, 31, 0x1C6BB94u);
    ctx->pc = 0x1C6BB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BB8Cu;
    // 0x1c6bb90: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E48u, 0x1C6BB8Cu, 0x1C6BB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BB94u;
label_1c6bb94:
    // 0x1c6bb94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c6bb94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6bb98: 0xc71a7a0  jal         func_1C69E80
    ctx->pc = 0x1C6BB98u;
    SET_GPR_U32(ctx, 31, 0x1C6BBA0u);
    ctx->pc = 0x1C6BB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BB98u;
    // 0x1c6bb9c: 0x24050055  addiu       $a1, $zero, 0x55 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E80u, 0x1C6BB98u, 0x1C6BBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BBA0u;
label_1c6bba0:
    // 0x1c6bba0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c6bba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6bba4: 0xc71a786  jal         func_1C69E18
    ctx->pc = 0x1C6BBA4u;
    SET_GPR_U32(ctx, 31, 0x1C6BBACu);
    ctx->pc = 0x1C6BBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BBA4u;
    // 0x1c6bba8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E18u, 0x1C6BBA4u, 0x1C6BBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BBACu;
label_1c6bbac:
    // 0x1c6bbac: 0x3c0f01c7  lui         $t7, 0x1C7
    ctx->pc = 0x1c6bbacu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)455 << 16));
    // 0x1c6bbb0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c6bbb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6bbb4: 0x25ef586c  addiu       $t7, $t7, 0x586C
    ctx->pc = 0x1c6bbb4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 22636));
    // 0x1c6bbb8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c6bbb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6bbbc: 0xc71a788  jal         func_1C69E20
    ctx->pc = 0x1C6BBBCu;
    SET_GPR_U32(ctx, 31, 0x1C6BBC4u);
    ctx->pc = 0x1C6BBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BBBCu;
    // 0x1c6bbc0: 0xc5ec0000  lwc1        $f12, 0x0($t7) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E20u, 0x1C6BBBCu, 0x1C6BBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BBC4u;
label_1c6bbc4:
    // 0x1c6bbc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c6bbc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6bbc8: 0xc71aa30  jal         func_1C6A8C0
    ctx->pc = 0x1C6BBC8u;
    SET_GPR_U32(ctx, 31, 0x1C6BBD0u);
    ctx->pc = 0x1C6BBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BBC8u;
    // 0x1c6bbcc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6A8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6A8C0u, 0x1C6BBC8u, 0x1C6BBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BBD0u;
label_1c6bbd0:
    // 0x1c6bbd0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c6bbd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6bbd4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1c6bbd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c6bbd8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1c6bbd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c6bbdc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1c6bbdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c6bbe0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6BBE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6BBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6BBE0u;
        // 0x1c6bbe4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6BBE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6BBE8u;
label_1c6bbe8:
    // 0x1c6bbe8: 0x1000ffcd  b           . + 4 + (-0x33 << 2)
    ctx->pc = 0x1C6BBE8u;
    {
        const bool branch_taken_0x1c6bbe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6BBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6BBE8u;
        // 0x1c6bbec: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6bbe8) {
            ctx->pc = 0x1C6BB20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6bb20;
        }
    }
    ctx->pc = 0x1C6BBF0u;
    // 0x1c6bbf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c6bbf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c6bbf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c6bbf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c6bbf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c6bbf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6bbfc: 0x871a7a2  j           func_1C69E88
    ctx->pc = 0x1C6BBFCu;
    ctx->pc = 0x1C6BC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BBFCu;
    // 0x1c6bc00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E88u;
    sub_01C69E88_0x1c69e88(rdram, ctx, runtime); return;
    ctx->pc = 0x1C6BC04u;
    // 0x1c6bc04: 0x0  nop
    ctx->pc = 0x1c6bc04u;
    // NOP
    ctx->pc = 0x1c6bc08u;
}
