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

// Function: sub_01C43360
// Address: 0x1c43360 - 0x1c43428
void sub_01C43360_0x1c43360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C43360_0x1c43360");
#endif

    switch (ctx->pc) {
        case 0x1c4337cu: goto label_1c4337c;
        case 0x1c4338cu: goto label_1c4338c;
        case 0x1c43398u: goto label_1c43398;
        case 0x1c433a8u: goto label_1c433a8;
        case 0x1c433c0u: goto label_1c433c0;
        case 0x1c433ecu: goto label_1c433ec;
        default: break;
    }

    ctx->pc = 0x1c43360u;

    // 0x1c43360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c43360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c43364: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c43364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c43368: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c43368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c4336c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c4336cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c43370: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c43370u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c43374: 0xc710916  jal         func_1C42458
    ctx->pc = 0x1C43374u;
    SET_GPR_U32(ctx, 31, 0x1C4337Cu);
    ctx->pc = 0x1C43378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C43374u;
    // 0x1c43378: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42458u, 0x1C43374u, 0x1C4337Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4337Cu;
label_1c4337c:
    // 0x1c4337c: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c4337cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c43380: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c43380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c43384: 0xc710bd0  jal         func_1C42F40
    ctx->pc = 0x1C43384u;
    SET_GPR_U32(ctx, 31, 0x1C4338Cu);
    ctx->pc = 0x1C43388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C43384u;
    // 0x1c43388: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42F40u, 0x1C43384u, 0x1C4338Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4338Cu;
label_1c4338c:
    // 0x1c4338c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c4338cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c43390: 0xc710916  jal         func_1C42458
    ctx->pc = 0x1C43390u;
    SET_GPR_U32(ctx, 31, 0x1C43398u);
    ctx->pc = 0x1C43394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C43390u;
    // 0x1c43394: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42458u, 0x1C43390u, 0x1C43398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C43398u;
label_1c43398:
    // 0x1c43398: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c43398u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c4339c: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c4339cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c433a0: 0xc710bd0  jal         func_1C42F40
    ctx->pc = 0x1C433A0u;
    SET_GPR_U32(ctx, 31, 0x1C433A8u);
    ctx->pc = 0x1C433A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C433A0u;
    // 0x1c433a4: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42F40u, 0x1C433A0u, 0x1C433A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C433A8u;
label_1c433a8:
    // 0x1c433a8: 0x8e0f0018  lw          $t7, 0x18($s0)
    ctx->pc = 0x1c433a8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1c433ac: 0x55e00019  bnel        $t7, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C433ACu;
    {
        const bool branch_taken_0x1c433ac = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c433ac) {
            ctx->pc = 0x1C433B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C433ACu;
            // 0x1c433b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C43414u;
            goto label_1c43414;
        }
    }
    ctx->pc = 0x1C433B4u;
    // 0x1c433b4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c433b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c433b8: 0xc710928  jal         func_1C424A0
    ctx->pc = 0x1C433B8u;
    SET_GPR_U32(ctx, 31, 0x1C433C0u);
    ctx->pc = 0x1C433BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C433B8u;
    // 0x1c433bc: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C424A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C424A0u, 0x1C433B8u, 0x1C433C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C433C0u;
label_1c433c0:
    // 0x1c433c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c433c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c433c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c433c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c433c8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c433c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c433cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c433ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c433d0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c433d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c433d4: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c433d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c433d8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1c433d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1c433dc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C433DCu;
    {
        const bool branch_taken_0x1c433dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C433E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C433DCu;
        // 0x1c433e0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c433dc) {
            ctx->pc = 0x1C43410u;
            goto label_1c43410;
        }
    }
    ctx->pc = 0x1C433E4u;
    // 0x1c433e4: 0xc710922  jal         func_1C42488
    ctx->pc = 0x1C433E4u;
    SET_GPR_U32(ctx, 31, 0x1C433ECu);
    ctx->pc = 0x1C42488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42488u, 0x1C433E4u, 0x1C433ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C433ECu;
label_1c433ec:
    // 0x1c433ec: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c433ecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c433f0: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x1c433f0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c433f4: 0xae0f0018  sw          $t7, 0x18($s0)
    ctx->pc = 0x1c433f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 15));
    // 0x1c433f8: 0x8dae0328  lw          $t6, 0x328($t5)
    ctx->pc = 0x1c433f8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 808)));
    // 0x1c433fc: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x1c433fcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c43400: 0x15cf0004  bne         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C43400u;
    {
        const bool branch_taken_0x1c43400 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C43404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C43400u;
        // 0x1c43404: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c43400) {
            ctx->pc = 0x1C43414u;
            goto label_1c43414;
        }
    }
    ctx->pc = 0x1C43408u;
    // 0x1c43408: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x1c43408u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c4340c: 0xadaf0328  sw          $t7, 0x328($t5)
    ctx->pc = 0x1c4340cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 808), GPR_U32(ctx, 15));
label_1c43410:
    // 0x1c43410: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c43410u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c43414:
    // 0x1c43414: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c43414u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c43418: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c43418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c4341c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4341Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C43420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4341Cu;
        // 0x1c43420: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4341Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C43424u;
    // 0x1c43424: 0x0  nop
    ctx->pc = 0x1c43424u;
    // NOP
    ctx->pc = 0x1c43428u;
}
