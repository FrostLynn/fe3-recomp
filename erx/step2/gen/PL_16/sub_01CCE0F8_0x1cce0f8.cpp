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

// Function: sub_01CCE0F8
// Address: 0x1cce0f8 - 0x1cce1d8
void sub_01CCE0F8_0x1cce0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCE0F8_0x1cce0f8");
#endif

    switch (ctx->pc) {
        case 0x1cce10cu: goto label_1cce10c;
        case 0x1cce120u: goto label_1cce120;
        case 0x1cce124u: goto label_1cce124;
        case 0x1cce140u: goto label_1cce140;
        case 0x1cce14cu: goto label_1cce14c;
        case 0x1cce17cu: goto label_1cce17c;
        case 0x1cce1a8u: goto label_1cce1a8;
        case 0x1cce1b4u: goto label_1cce1b4;
        default: break;
    }

    ctx->pc = 0x1cce0f8u;

    // 0x1cce0f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cce0f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cce0fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cce0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cce100: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cce100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cce104: 0xc733512  jal         func_1CCD448
    ctx->pc = 0x1CCE104u;
    SET_GPR_U32(ctx, 31, 0x1CCE10Cu);
    ctx->pc = 0x1CCE108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE104u;
    // 0x1cce108: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD448u, 0x1CCE104u, 0x1CCE10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE10Cu;
label_1cce10c:
    // 0x1cce10c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cce10cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cce110: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CCE110u;
    {
        const bool branch_taken_0x1cce110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CCE114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCE110u;
        // 0x1cce114: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cce110) {
            ctx->pc = 0x1CCE134u;
            goto label_1cce134;
        }
    }
    ctx->pc = 0x1CCE118u;
    // 0x1cce118: 0xc733514  jal         func_1CCD450
    ctx->pc = 0x1CCE118u;
    SET_GPR_U32(ctx, 31, 0x1CCE120u);
    ctx->pc = 0x1CCD450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD450u, 0x1CCE118u, 0x1CCE120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE120u;
label_1cce120:
    // 0x1cce120: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1cce120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1cce124:
    // 0x1cce124: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cce124u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cce128: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cce128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cce12c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCE12Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCE130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCE12Cu;
        // 0x1cce130: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCE12Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCE134u;
label_1cce134:
    // 0x1cce134: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cce134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cce138: 0xc733516  jal         func_1CCD458
    ctx->pc = 0x1CCE138u;
    SET_GPR_U32(ctx, 31, 0x1CCE140u);
    ctx->pc = 0x1CCE13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE138u;
    // 0x1cce13c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD458u, 0x1CCE138u, 0x1CCE140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE140u;
label_1cce140:
    // 0x1cce140: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1cce140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1cce144: 0xc733524  jal         func_1CCD490
    ctx->pc = 0x1CCE144u;
    SET_GPR_U32(ctx, 31, 0x1CCE14Cu);
    ctx->pc = 0x1CCE148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE144u;
    // 0x1cce148: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD490u, 0x1CCE144u, 0x1CCE14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE14Cu;
label_1cce14c:
    // 0x1cce14c: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1CCE14Cu;
    {
        const bool branch_taken_0x1cce14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCE150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCE14Cu;
        // 0x1cce150: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cce14c) {
            ctx->pc = 0x1CCE124u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cce124;
        }
    }
    ctx->pc = 0x1CCE154u;
    // 0x1cce154: 0x0  nop
    ctx->pc = 0x1cce154u;
    // NOP
    // 0x1cce158: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cce158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cce15c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cce15cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cce160: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cce160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cce164: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cce164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cce168: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cce168u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce16c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1cce16cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce170: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1cce170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cce174: 0xc733516  jal         func_1CCD458
    ctx->pc = 0x1CCE174u;
    SET_GPR_U32(ctx, 31, 0x1CCE17Cu);
    ctx->pc = 0x1CCE178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE174u;
    // 0x1cce178: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD458u, 0x1CCE174u, 0x1CCE17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE17Cu;
label_1cce17c:
    // 0x1cce17c: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1cce17cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1cce180: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cce180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce184: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cce184u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cce188: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cce188u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce18c: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1cce18cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1cce190: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cce190u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cce194: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x1cce194u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x1cce198: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cce198u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce19c: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1cce19cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1cce1a0: 0xc733522  jal         func_1CCD488
    ctx->pc = 0x1CCE1A0u;
    SET_GPR_U32(ctx, 31, 0x1CCE1A8u);
    ctx->pc = 0x1CCE1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE1A0u;
    // 0x1cce1a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD488u, 0x1CCE1A0u, 0x1CCE1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE1A8u;
label_1cce1a8:
    // 0x1cce1a8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cce1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cce1ac: 0xc733516  jal         func_1CCD458
    ctx->pc = 0x1CCE1ACu;
    SET_GPR_U32(ctx, 31, 0x1CCE1B4u);
    ctx->pc = 0x1CCE1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE1ACu;
    // 0x1cce1b0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD458u, 0x1CCE1ACu, 0x1CCE1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE1B4u;
label_1cce1b4:
    // 0x1cce1b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cce1b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce1b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cce1b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cce1bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cce1bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cce1c0: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1cce1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1cce1c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cce1c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cce1c8: 0x8733526  j           func_1CCD498
    ctx->pc = 0x1CCE1C8u;
    ctx->pc = 0x1CCE1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE1C8u;
    // 0x1cce1cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD498u;
    sub_01CCD498_0x1ccd498(rdram, ctx, runtime); return;
    ctx->pc = 0x1CCE1D0u;
    // 0x1cce1d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCE1D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCE1D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCE1D8u;
}
