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

// Function: sub_01C51898
// Address: 0x1c51898 - 0x1c51980
void sub_01C51898_0x1c51898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C51898_0x1c51898");
#endif

    switch (ctx->pc) {
        case 0x1c518acu: goto label_1c518ac;
        case 0x1c518c0u: goto label_1c518c0;
        case 0x1c518c4u: goto label_1c518c4;
        case 0x1c518e0u: goto label_1c518e0;
        case 0x1c518ecu: goto label_1c518ec;
        case 0x1c5192cu: goto label_1c5192c;
        case 0x1c51958u: goto label_1c51958;
        case 0x1c51964u: goto label_1c51964;
        case 0x1c51970u: goto label_1c51970;
        default: break;
    }

    ctx->pc = 0x1c51898u;

    // 0x1c51898: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c51898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c5189c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c5189cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c518a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c518a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c518a4: 0xc713e5e  jal         func_1C4F978
    ctx->pc = 0x1C518A4u;
    SET_GPR_U32(ctx, 31, 0x1C518ACu);
    ctx->pc = 0x1C518A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C518A4u;
    // 0x1c518a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F978u, 0x1C518A4u, 0x1C518ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C518ACu;
label_1c518ac:
    // 0x1c518ac: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c518acu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c518b0: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C518B0u;
    {
        const bool branch_taken_0x1c518b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C518B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C518B0u;
        // 0x1c518b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c518b0) {
            ctx->pc = 0x1C518D4u;
            goto label_1c518d4;
        }
    }
    ctx->pc = 0x1C518B8u;
    // 0x1c518b8: 0xc713e60  jal         func_1C4F980
    ctx->pc = 0x1C518B8u;
    SET_GPR_U32(ctx, 31, 0x1C518C0u);
    ctx->pc = 0x1C4F980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F980u, 0x1C518B8u, 0x1C518C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C518C0u;
label_1c518c0:
    // 0x1c518c0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c518c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c518c4:
    // 0x1c518c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c518c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c518c8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c518c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c518cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C518CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C518D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C518CCu;
        // 0x1c518d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C518CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C518D4u;
label_1c518d4:
    // 0x1c518d4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c518d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c518d8: 0xc713e62  jal         func_1C4F988
    ctx->pc = 0x1C518D8u;
    SET_GPR_U32(ctx, 31, 0x1C518E0u);
    ctx->pc = 0x1C518DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C518D8u;
    // 0x1c518dc: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F988u, 0x1C518D8u, 0x1C518E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C518E0u;
label_1c518e0:
    // 0x1c518e0: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1c518e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1c518e4: 0xc713e70  jal         func_1C4F9C0
    ctx->pc = 0x1C518E4u;
    SET_GPR_U32(ctx, 31, 0x1C518ECu);
    ctx->pc = 0x1C518E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C518E4u;
    // 0x1c518e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F9C0u, 0x1C518E4u, 0x1C518ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C518ECu;
label_1c518ec:
    // 0x1c518ec: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1C518ECu;
    {
        const bool branch_taken_0x1c518ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C518F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C518ECu;
        // 0x1c518f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c518ec) {
            ctx->pc = 0x1C518C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c518c4;
        }
    }
    ctx->pc = 0x1C518F4u;
    // 0x1c518f4: 0x0  nop
    ctx->pc = 0x1c518f4u;
    // NOP
    // 0x1c518f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c518f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c518fc: 0x3c0f01c6  lui         $t7, 0x1C6
    ctx->pc = 0x1c518fcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)454 << 16));
    // 0x1c51900: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c51900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c51904: 0x25eef450  addiu       $t6, $t7, -0xBB0
    ctx->pc = 0x1c51904u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964304));
    // 0x1c51908: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c51908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c5190c: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1c5190cu;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1C5F454u));
    // 0x1c51910: 0x8dedf450  lw          $t5, -0xBB0($t7)
    ctx->pc = 0x1c51910u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1C5F450u));
    // 0x1c51914: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c51914u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51918: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1c51918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1c5191c: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1c5191cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1c51920: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1c51920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c51924: 0xc713e62  jal         func_1C4F988
    ctx->pc = 0x1C51924u;
    SET_GPR_U32(ctx, 31, 0x1C5192Cu);
    ctx->pc = 0x1C51928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51924u;
    // 0x1c51928: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F988u, 0x1C51924u, 0x1C5192Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5192Cu;
label_1c5192c:
    // 0x1c5192c: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1c5192cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1c51930: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c51930u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c51934: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c51934u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51938: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c51938u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5193c: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1c5193cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1c51940: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c51940u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51944: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1c51944u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1c51948: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c51948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5194c: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1c5194cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c51950: 0xc713e6e  jal         func_1C4F9B8
    ctx->pc = 0x1C51950u;
    SET_GPR_U32(ctx, 31, 0x1C51958u);
    ctx->pc = 0x1C51954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51950u;
    // 0x1c51954: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F9B8u, 0x1C51950u, 0x1C51958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51958u;
label_1c51958:
    // 0x1c51958: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c51958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c5195c: 0xc713e62  jal         func_1C4F988
    ctx->pc = 0x1C5195Cu;
    SET_GPR_U32(ctx, 31, 0x1C51964u);
    ctx->pc = 0x1C51960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5195Cu;
    // 0x1c51960: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F988u, 0x1C5195Cu, 0x1C51964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51964u;
label_1c51964:
    // 0x1c51964: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c51964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51968: 0xc713e72  jal         func_1C4F9C8
    ctx->pc = 0x1C51968u;
    SET_GPR_U32(ctx, 31, 0x1C51970u);
    ctx->pc = 0x1C5196Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51968u;
    // 0x1c5196c: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F9C8u, 0x1C51968u, 0x1C51970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51970u;
label_1c51970:
    // 0x1c51970: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c51970u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c51974: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c51974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c51978: 0x3e00008  jr          $ra
    ctx->pc = 0x1C51978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5197Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C51978u;
        // 0x1c5197c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C51978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C51980u;
}
