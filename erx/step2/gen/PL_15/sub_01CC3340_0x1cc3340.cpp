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

// Function: sub_01CC3340
// Address: 0x1cc3340 - 0x1cc3408
void sub_01CC3340_0x1cc3340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC3340_0x1cc3340");
#endif

    switch (ctx->pc) {
        case 0x1cc335cu: goto label_1cc335c;
        case 0x1cc336cu: goto label_1cc336c;
        case 0x1cc3378u: goto label_1cc3378;
        case 0x1cc3388u: goto label_1cc3388;
        case 0x1cc33a0u: goto label_1cc33a0;
        case 0x1cc33ccu: goto label_1cc33cc;
        default: break;
    }

    ctx->pc = 0x1cc3340u;

    // 0x1cc3340: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cc3340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cc3344: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cc3344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cc3348: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cc3348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cc334c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cc334cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cc3350: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cc3350u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc3354: 0xc730918  jal         func_1CC2460
    ctx->pc = 0x1CC3354u;
    SET_GPR_U32(ctx, 31, 0x1CC335Cu);
    ctx->pc = 0x1CC3358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC3354u;
    // 0x1cc3358: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2460u, 0x1CC3354u, 0x1CC335Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC335Cu;
label_1cc335c:
    // 0x1cc335c: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1cc335cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1cc3360: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1cc3360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1cc3364: 0xc730bc8  jal         func_1CC2F20
    ctx->pc = 0x1CC3364u;
    SET_GPR_U32(ctx, 31, 0x1CC336Cu);
    ctx->pc = 0x1CC3368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC3364u;
    // 0x1cc3368: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2F20u, 0x1CC3364u, 0x1CC336Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC336Cu;
label_1cc336c:
    // 0x1cc336c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1cc336cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cc3370: 0xc730918  jal         func_1CC2460
    ctx->pc = 0x1CC3370u;
    SET_GPR_U32(ctx, 31, 0x1CC3378u);
    ctx->pc = 0x1CC3374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC3370u;
    // 0x1cc3374: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2460u, 0x1CC3370u, 0x1CC3378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC3378u;
label_1cc3378:
    // 0x1cc3378: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1cc3378u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1cc337c: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1cc337cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1cc3380: 0xc730bc8  jal         func_1CC2F20
    ctx->pc = 0x1CC3380u;
    SET_GPR_U32(ctx, 31, 0x1CC3388u);
    ctx->pc = 0x1CC3384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC3380u;
    // 0x1cc3384: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2F20u, 0x1CC3380u, 0x1CC3388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC3388u;
label_1cc3388:
    // 0x1cc3388: 0x8e0f0018  lw          $t7, 0x18($s0)
    ctx->pc = 0x1cc3388u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1cc338c: 0x55e00019  bnel        $t7, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1CC338Cu;
    {
        const bool branch_taken_0x1cc338c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cc338c) {
            ctx->pc = 0x1CC3390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CC338Cu;
            // 0x1cc3390: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC33F4u;
            goto label_1cc33f4;
        }
    }
    ctx->pc = 0x1CC3394u;
    // 0x1cc3394: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1cc3394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cc3398: 0xc73092a  jal         func_1CC24A8
    ctx->pc = 0x1CC3398u;
    SET_GPR_U32(ctx, 31, 0x1CC33A0u);
    ctx->pc = 0x1CC339Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC3398u;
    // 0x1cc339c: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC24A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC24A8u, 0x1CC3398u, 0x1CC33A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC33A0u;
label_1cc33a0:
    // 0x1cc33a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cc33a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc33a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cc33a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc33a8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1cc33a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cc33ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cc33acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc33b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cc33b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc33b4: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1cc33b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cc33b8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1cc33b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1cc33bc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1CC33BCu;
    {
        const bool branch_taken_0x1cc33bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC33C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC33BCu;
        // 0x1cc33c0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc33bc) {
            ctx->pc = 0x1CC33F0u;
            goto label_1cc33f0;
        }
    }
    ctx->pc = 0x1CC33C4u;
    // 0x1cc33c4: 0xc730924  jal         func_1CC2490
    ctx->pc = 0x1CC33C4u;
    SET_GPR_U32(ctx, 31, 0x1CC33CCu);
    ctx->pc = 0x1CC2490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2490u, 0x1CC33C4u, 0x1CC33CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC33CCu;
label_1cc33cc:
    // 0x1cc33cc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cc33ccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc33d0: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x1cc33d0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cc33d4: 0xae0f0018  sw          $t7, 0x18($s0)
    ctx->pc = 0x1cc33d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 15));
    // 0x1cc33d8: 0x8dae0328  lw          $t6, 0x328($t5)
    ctx->pc = 0x1cc33d8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 808)));
    // 0x1cc33dc: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x1cc33dcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cc33e0: 0x15cf0004  bne         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CC33E0u;
    {
        const bool branch_taken_0x1cc33e0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CC33E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC33E0u;
        // 0x1cc33e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc33e0) {
            ctx->pc = 0x1CC33F4u;
            goto label_1cc33f4;
        }
    }
    ctx->pc = 0x1CC33E8u;
    // 0x1cc33e8: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x1cc33e8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cc33ec: 0xadaf0328  sw          $t7, 0x328($t5)
    ctx->pc = 0x1cc33ecu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 808), GPR_U32(ctx, 15));
label_1cc33f0:
    // 0x1cc33f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cc33f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cc33f4:
    // 0x1cc33f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cc33f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc33f8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cc33f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cc33fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC33FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC3400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC33FCu;
        // 0x1cc3400: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC33FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC3404u;
    // 0x1cc3404: 0x0  nop
    ctx->pc = 0x1cc3404u;
    // NOP
    ctx->pc = 0x1cc3408u;
}
