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

// Function: sub_01D53360
// Address: 0x1d53360 - 0x1d53618
void sub_01D53360_0x1d53360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D53360_0x1d53360");
#endif

    switch (ctx->pc) {
        case 0x1d53384u: goto label_1d53384;
        case 0x1d5339cu: goto label_1d5339c;
        case 0x1d533a0u: goto label_1d533a0;
        case 0x1d533c0u: goto label_1d533c0;
        case 0x1d533d0u: goto label_1d533d0;
        case 0x1d53408u: goto label_1d53408;
        case 0x1d5340cu: goto label_1d5340c;
        case 0x1d53448u: goto label_1d53448;
        case 0x1d53458u: goto label_1d53458;
        case 0x1d534a8u: goto label_1d534a8;
        case 0x1d534f0u: goto label_1d534f0;
        case 0x1d53514u: goto label_1d53514;
        case 0x1d53520u: goto label_1d53520;
        case 0x1d5355cu: goto label_1d5355c;
        case 0x1d53584u: goto label_1d53584;
        case 0x1d535c0u: goto label_1d535c0;
        case 0x1d535ecu: goto label_1d535ec;
        default: break;
    }

    ctx->pc = 0x1d53360u;

    // 0x1d53360: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d53360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d53364: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d53364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d53368: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d53368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d5336c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d5336cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d53370: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d53370u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d53374: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d53374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d53378: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1d53378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d5337c: 0xc7543d6  jal         func_1D50F58
    ctx->pc = 0x1D5337Cu;
    SET_GPR_U32(ctx, 31, 0x1D53384u);
    ctx->pc = 0x1D53380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5337Cu;
    // 0x1d53380: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F58u, 0x1D5337Cu, 0x1D53384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D53384u;
label_1d53384:
    // 0x1d53384: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1d53384u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d53388: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D53388u;
    {
        const bool branch_taken_0x1d53388 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5338Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53388u;
        // 0x1d5338c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d53388) {
            ctx->pc = 0x1D533D8u;
            goto label_1d533d8;
        }
    }
    ctx->pc = 0x1D53390u;
    // 0x1d53390: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d53390u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d53394: 0x120f0008  beq         $s0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D53394u;
    {
        const bool branch_taken_0x1d53394 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1d53394) {
            ctx->pc = 0x1D533B8u;
            goto label_1d533b8;
        }
    }
    ctx->pc = 0x1D5339Cu;
label_1d5339c:
    // 0x1d5339c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d5339cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d533a0:
    // 0x1d533a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d533a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d533a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d533a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d533a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d533a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d533ac: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d533acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d533b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D533B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D533B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D533B0u;
        // 0x1d533b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D533B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D533B8u;
label_1d533b8:
    // 0x1d533b8: 0xc7543d2  jal         func_1D50F48
    ctx->pc = 0x1D533B8u;
    SET_GPR_U32(ctx, 31, 0x1D533C0u);
    ctx->pc = 0x1D533BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D533B8u;
    // 0x1d533bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F48u, 0x1D533B8u, 0x1D533C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D533C0u;
label_1d533c0:
    // 0x1d533c0: 0x5450fff7  bnel        $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D533C0u;
    {
        const bool branch_taken_0x1d533c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1d533c0) {
            ctx->pc = 0x1D533C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D533C0u;
            // 0x1d533c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D533A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d533a0;
        }
    }
    ctx->pc = 0x1D533C8u;
    // 0x1d533c8: 0xc7543d4  jal         func_1D50F50
    ctx->pc = 0x1D533C8u;
    SET_GPR_U32(ctx, 31, 0x1D533D0u);
    ctx->pc = 0x1D533CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D533C8u;
    // 0x1d533cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F50u, 0x1D533C8u, 0x1D533D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D533D0u;
label_1d533d0:
    // 0x1d533d0: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1D533D0u;
    {
        const bool branch_taken_0x1d533d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D533D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D533D0u;
        // 0x1d533d4: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d533d0) {
            ctx->pc = 0x1D533A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d533a0;
        }
    }
    ctx->pc = 0x1D533D8u;
label_1d533d8:
    // 0x1d533d8: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x1d533d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d533dc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d533dcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d533e0: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1d533e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d533e4: 0x8e2e002c  lw          $t6, 0x2C($s1)
    ctx->pc = 0x1d533e4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1d533e8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1d533e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d533ec: 0x11cf0019  beq         $t6, $t7, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D533ECu;
    {
        const bool branch_taken_0x1d533ec = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1D533F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D533ECu;
        // 0x1d533f0: 0xe621001c  swc1        $f1, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d533ec) {
            ctx->pc = 0x1D53454u;
            goto label_1d53454;
        }
    }
    ctx->pc = 0x1D533F4u;
    // 0x1d533f4: 0x29cf0002  slti        $t7, $t6, 0x2
    ctx->pc = 0x1d533f4u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d533f8: 0x11e00030  beqz        $t7, . + 4 + (0x30 << 2)
    ctx->pc = 0x1D533F8u;
    {
        const bool branch_taken_0x1d533f8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D533FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D533F8u;
        // 0x1d533fc: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d533f8) {
            ctx->pc = 0x1D534BCu;
            goto label_1d534bc;
        }
    }
    ctx->pc = 0x1D53400u;
    // 0x1d53400: 0x11c00015  beqz        $t6, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D53400u;
    {
        const bool branch_taken_0x1d53400 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D53404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53400u;
        // 0x1d53404: 0x3c0f0000  lui         $t7, 0x0 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)0 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d53400) {
            ctx->pc = 0x1D53458u;
            goto label_1d53458;
        }
    }
    ctx->pc = 0x1D53408u;
label_1d53408:
    // 0x1d53408: 0x8e4f0580  lw          $t7, 0x580($s2)
    ctx->pc = 0x1d53408u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
label_1d5340c:
    // 0x1d5340c: 0x15e0ffe4  bnez        $t7, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1D5340Cu;
    {
        const bool branch_taken_0x1d5340c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D53410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5340Cu;
        // 0x1d53410: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5340c) {
            ctx->pc = 0x1D533A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d533a0;
        }
    }
    ctx->pc = 0x1D53414u;
    // 0x1d53414: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1d53414u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1d53418: 0x3c0e01d5  lui         $t6, 0x1D5
    ctx->pc = 0x1d53418u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)469 << 16));
    // 0x1d5341c: 0x25ce62e0  addiu       $t6, $t6, 0x62E0
    ctx->pc = 0x1d5341cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 25312));
    // 0x1d53420: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d53420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d53424: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d53424u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d53428: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d53428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5342c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d5342cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d53430: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d53430u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d53434: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d53434u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d53438: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d53438u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5343c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d5343cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d53440: 0xc7543e2  jal         func_1D50F88
    ctx->pc = 0x1D53440u;
    SET_GPR_U32(ctx, 31, 0x1D53448u);
    ctx->pc = 0x1D53444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D53440u;
    // 0x1d53444: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F88u, 0x1D53440u, 0x1D53448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D53448u;
label_1d53448:
    // 0x1d53448: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d53448u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5344c: 0x1000ffd3  b           . + 4 + (-0x2D << 2)
    ctx->pc = 0x1D5344Cu;
    {
        const bool branch_taken_0x1d5344c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D53450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5344Cu;
        // 0x1d53450: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5344c) {
            ctx->pc = 0x1D5339Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5339c;
        }
    }
    ctx->pc = 0x1D53454u;
label_1d53454:
    // 0x1d53454: 0x3c0fffec  lui         $t7, 0xFFEC
    ctx->pc = 0x1d53454u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)65516 << 16));
label_1d53458:
    // 0x1d53458: 0x25efcbec  addiu       $t7, $t7, -0x3414
    ctx->pc = 0x1d53458u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294953964));
    // 0x1d5345c: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1d5345cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d53460: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1d53460u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d53464: 0x4500ffe8  bc1f        . + 4 + (-0x18 << 2)
    ctx->pc = 0x1D53464u;
    {
        const bool branch_taken_0x1d53464 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D53468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53464u;
        // 0x1d53468: 0x3c0f01d6  lui         $t7, 0x1D6 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)470 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d53464) {
            ctx->pc = 0x1D53408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d53408;
        }
    }
    ctx->pc = 0x1D5346Cu;
    // 0x1d5346c: 0x25efcbf0  addiu       $t7, $t7, -0x3410
    ctx->pc = 0x1d5346cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294953968));
    // 0x1d53470: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1d53470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d53474: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1d53474u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d53478: 0x4503ffe4  bc1tl       . + 4 + (-0x1C << 2)
    ctx->pc = 0x1D53478u;
    {
        const bool branch_taken_0x1d53478 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d53478) {
            ctx->pc = 0x1D5347Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D53478u;
            // 0x1d5347c: 0x8e4f0580  lw          $t7, 0x580($s2) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5340Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5340c;
        }
    }
    ctx->pc = 0x1D53480u;
    // 0x1d53480: 0x3c0f01d6  lui         $t7, 0x1D6
    ctx->pc = 0x1d53480u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)470 << 16));
    // 0x1d53484: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1d53484u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1d53488: 0x25efcbf4  addiu       $t7, $t7, -0x340C
    ctx->pc = 0x1d53488u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294953972));
    // 0x1d5348c: 0x26440580  addiu       $a0, $s2, 0x580
    ctx->pc = 0x1d5348cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
    // 0x1d53490: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1d53490u;
    { uint32_t bits = FAST_READ32(0x1D5CBF4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d53494: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x1d53494u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x1d53498: 0x3c0f01d6  lui         $t7, 0x1D6
    ctx->pc = 0x1d53498u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)470 << 16));
    // 0x1d5349c: 0x25efcbf8  addiu       $t7, $t7, -0x3408
    ctx->pc = 0x1d5349cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294953976));
    // 0x1d534a0: 0xc75466a  jal         func_1D519A8
    ctx->pc = 0x1D534A0u;
    SET_GPR_U32(ctx, 31, 0x1D534A8u);
    ctx->pc = 0x1D534A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D534A0u;
    // 0x1d534a4: 0xc5ef0000  lwc1        $f15, 0x0($t7) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D519A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D519A8u, 0x1D534A0u, 0x1D534A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D534A8u;
label_1d534a8:
    // 0x1d534a8: 0x3c0f01d6  lui         $t7, 0x1D6
    ctx->pc = 0x1d534a8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)470 << 16));
    // 0x1d534ac: 0x25efcbfc  addiu       $t7, $t7, -0x3404
    ctx->pc = 0x1d534acu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294953980));
    // 0x1d534b0: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1d534b0u;
    { uint32_t bits = FAST_READ32(0x1D5CBFCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d534b4: 0x1000ffd4  b           . + 4 + (-0x2C << 2)
    ctx->pc = 0x1D534B4u;
    {
        const bool branch_taken_0x1d534b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D534B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D534B4u;
        // 0x1d534b8: 0xe620001c  swc1        $f0, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d534b4) {
            ctx->pc = 0x1D53408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d53408;
        }
    }
    ctx->pc = 0x1D534BCu;
label_1d534bc:
    // 0x1d534bc: 0x55cfffd3  bnel        $t6, $t7, . + 4 + (-0x2D << 2)
    ctx->pc = 0x1D534BCu;
    {
        const bool branch_taken_0x1d534bc = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x1d534bc) {
            ctx->pc = 0x1D534C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D534BCu;
            // 0x1d534c0: 0x8e4f0580  lw          $t7, 0x580($s2) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5340Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5340c;
        }
    }
    ctx->pc = 0x1D534C4u;
    // 0x1d534c4: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x1D534C4u;
    {
        const bool branch_taken_0x1d534c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D534C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D534C4u;
        // 0x1d534c8: 0x3c0f01d6  lui         $t7, 0x1D6 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)470 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d534c4) {
            ctx->pc = 0x1D53458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d53458;
        }
    }
    ctx->pc = 0x1D534CCu;
    // 0x1d534cc: 0x0  nop
    ctx->pc = 0x1d534ccu;
    // NOP
    // 0x1d534d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d534d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d534d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d534d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d534d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d534d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d534dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d534dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d534e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d534e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d534e4: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d534e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d534e8: 0xc7543d6  jal         func_1D50F58
    ctx->pc = 0x1D534E8u;
    SET_GPR_U32(ctx, 31, 0x1D534F0u);
    ctx->pc = 0x1D534ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D534E8u;
    // 0x1d534ec: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F58u, 0x1D534E8u, 0x1D534F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D534F0u;
label_1d534f0:
    // 0x1d534f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d534f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d534f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d534f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d534f8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d534f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d534fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d534fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d53500: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d53500u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d53504: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d53504u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d53508: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d53508u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5350c: 0xc7543e2  jal         func_1D50F88
    ctx->pc = 0x1D5350Cu;
    SET_GPR_U32(ctx, 31, 0x1D53514u);
    ctx->pc = 0x1D53510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5350Cu;
    // 0x1d53510: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F88u, 0x1D5350Cu, 0x1D53514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D53514u;
label_1d53514:
    // 0x1d53514: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d53514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d53518: 0xc7543da  jal         func_1D50F68
    ctx->pc = 0x1D53518u;
    SET_GPR_U32(ctx, 31, 0x1D53520u);
    ctx->pc = 0x1D5351Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D53518u;
    // 0x1d5351c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F68u, 0x1D53518u, 0x1D53520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D53520u;
label_1d53520:
    // 0x1d53520: 0x3c0f01d6  lui         $t7, 0x1D6
    ctx->pc = 0x1d53520u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)470 << 16));
    // 0x1d53524: 0x8e0e002c  lw          $t6, 0x2C($s0)
    ctx->pc = 0x1d53524u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1d53528: 0x25efcc00  addiu       $t7, $t7, -0x3400
    ctx->pc = 0x1d53528u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294953984));
    // 0x1d5352c: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1d5352cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1d53530: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1d53530u;
    { uint32_t bits = FAST_READ32(0x1D5CC00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d53534: 0x26240580  addiu       $a0, $s1, 0x580
    ctx->pc = 0x1d53534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    // 0x1d53538: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d53538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d5353c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d5353cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d53540: 0x11cf0021  beq         $t6, $t7, . + 4 + (0x21 << 2)
    ctx->pc = 0x1D53540u;
    {
        const bool branch_taken_0x1d53540 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1D53544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53540u;
        // 0x1d53544: 0x29cd0002  slti        $t5, $t6, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d53540) {
            ctx->pc = 0x1D535C8u;
            goto label_1d535c8;
        }
    }
    ctx->pc = 0x1D53548u;
    // 0x1d53548: 0x51a00013  beql        $t5, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D53548u;
    {
        const bool branch_taken_0x1d53548 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d53548) {
            ctx->pc = 0x1D5354Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D53548u;
            // 0x1d5354c: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D53598u;
            goto label_1d53598;
        }
    }
    ctx->pc = 0x1D53550u;
    // 0x1d53550: 0x51c00006  beql        $t6, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D53550u;
    {
        const bool branch_taken_0x1d53550 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d53550) {
            ctx->pc = 0x1D53554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D53550u;
            // 0x1d53554: 0xc60d001c  lwc1        $f13, 0x1C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5356Cu;
            goto label_1d5356c;
        }
    }
    ctx->pc = 0x1D53558u;
    // 0x1d53558: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d53558u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d5355c:
    // 0x1d5355c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d5355cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d53560: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d53560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d53564: 0x3e00008  jr          $ra
    ctx->pc = 0x1D53564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D53568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53564u;
        // 0x1d53568: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D53564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5356Cu;
label_1d5356c:
    // 0x1d5356c: 0x3c0f01d6  lui         $t7, 0x1D6
    ctx->pc = 0x1d5356cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)470 << 16));
    // 0x1d53570: 0x25efcc00  addiu       $t7, $t7, -0x3400
    ctx->pc = 0x1d53570u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294953984));
    // 0x1d53574: 0x26240580  addiu       $a0, $s1, 0x580
    ctx->pc = 0x1d53574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    // 0x1d53578: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x1d53578u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x1d5357c: 0x46006bc6  mov.s       $f15, $f13
    ctx->pc = 0x1d5357cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[13]);
    // 0x1d53580: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1d53580u;
    { uint32_t bits = FAST_READ32(0x1D5CC00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d53584:
    // 0x1d53584: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d53584u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d53588: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d53588u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d5358c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d5358cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d53590: 0x875466a  j           func_1D519A8
    ctx->pc = 0x1D53590u;
    ctx->pc = 0x1D53594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D53590u;
    // 0x1d53594: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D519A8u;
    sub_01D519A8_0x1d519a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D53598u;
label_1d53598:
    // 0x1d53598: 0x55cffff0  bnel        $t6, $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D53598u;
    {
        const bool branch_taken_0x1d53598 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x1d53598) {
            ctx->pc = 0x1D5359Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D53598u;
            // 0x1d5359c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5355Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5355c;
        }
    }
    ctx->pc = 0x1D535A0u;
    // 0x1d535a0: 0x3c0f01d6  lui         $t7, 0x1D6
    ctx->pc = 0x1d535a0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)470 << 16));
    // 0x1d535a4: 0xc60d001c  lwc1        $f13, 0x1C($s0)
    ctx->pc = 0x1d535a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d535a8: 0x25efcc00  addiu       $t7, $t7, -0x3400
    ctx->pc = 0x1d535a8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294953984));
    // 0x1d535ac: 0x26240580  addiu       $a0, $s1, 0x580
    ctx->pc = 0x1d535acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    // 0x1d535b0: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1d535b0u;
    { uint32_t bits = FAST_READ32(0x1D5CC00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d535b4: 0x3c0f01d6  lui         $t7, 0x1D6
    ctx->pc = 0x1d535b4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)470 << 16));
    // 0x1d535b8: 0x25efcc04  addiu       $t7, $t7, -0x33FC
    ctx->pc = 0x1d535b8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294953988));
    // 0x1d535bc: 0xc5ef0000  lwc1        $f15, 0x0($t7)
    ctx->pc = 0x1d535bcu;
    { uint32_t bits = FAST_READ32(0x1D5CC04u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1d535c0:
    // 0x1d535c0: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D535C0u;
    {
        const bool branch_taken_0x1d535c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D535C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D535C0u;
        // 0x1d535c4: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d535c0) {
            ctx->pc = 0x1D53584u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d53584;
        }
    }
    ctx->pc = 0x1D535C8u;
label_1d535c8:
    // 0x1d535c8: 0x460063c6  mov.s       $f15, $f12
    ctx->pc = 0x1d535c8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    // 0x1d535cc: 0x1000fffc  b           . + 4 + (-0x4 << 2)
    ctx->pc = 0x1D535CCu;
    {
        const bool branch_taken_0x1d535cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D535D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D535CCu;
        // 0x1d535d0: 0xc60d001c  lwc1        $f13, 0x1C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d535cc) {
            ctx->pc = 0x1D535C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d535c0;
        }
    }
    ctx->pc = 0x1D535D4u;
    // 0x1d535d4: 0x0  nop
    ctx->pc = 0x1d535d4u;
    // NOP
    // 0x1d535d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d535d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d535dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d535dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d535e0: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d535e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d535e4: 0xc7543d6  jal         func_1D50F58
    ctx->pc = 0x1D535E4u;
    SET_GPR_U32(ctx, 31, 0x1D535ECu);
    ctx->pc = 0x1D535E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D535E4u;
    // 0x1d535e8: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F58u, 0x1D535E4u, 0x1D535ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D535ECu;
label_1d535ec:
    // 0x1d535ec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d535ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d535f0: 0x3c0f01d6  lui         $t7, 0x1D6
    ctx->pc = 0x1d535f0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)470 << 16));
    // 0x1d535f4: 0x25efcc08  addiu       $t7, $t7, -0x33F8
    ctx->pc = 0x1d535f4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294953992));
    // 0x1d535f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d535f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d535fc: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1d535fcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x1d53600: 0x24440580  addiu       $a0, $v0, 0x580
    ctx->pc = 0x1d53600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x1d53604: 0x460063c6  mov.s       $f15, $f12
    ctx->pc = 0x1d53604u;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    // 0x1d53608: 0xc5ed0000  lwc1        $f13, 0x0($t7)
    ctx->pc = 0x1d53608u;
    { uint32_t bits = FAST_READ32(0x1D5CC08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d5360c: 0x875466a  j           func_1D519A8
    ctx->pc = 0x1D5360Cu;
    ctx->pc = 0x1D53610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5360Cu;
    // 0x1d53610: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D519A8u;
    sub_01D519A8_0x1d519a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D53614u;
    // 0x1d53614: 0x0  nop
    ctx->pc = 0x1d53614u;
    // NOP
    ctx->pc = 0x1d53618u;
}
