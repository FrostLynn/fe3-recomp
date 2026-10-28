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

// Function: sub_01C52688
// Address: 0x1c52688 - 0x1c52800
void sub_01C52688_0x1c52688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C52688_0x1c52688");
#endif

    switch (ctx->pc) {
        case 0x1c526a8u: goto label_1c526a8;
        case 0x1c526b8u: goto label_1c526b8;
        case 0x1c526c4u: goto label_1c526c4;
        case 0x1c526d4u: goto label_1c526d4;
        case 0x1c526e0u: goto label_1c526e0;
        case 0x1c52704u: goto label_1c52704;
        case 0x1c5273cu: goto label_1c5273c;
        case 0x1c52744u: goto label_1c52744;
        case 0x1c52758u: goto label_1c52758;
        case 0x1c52760u: goto label_1c52760;
        case 0x1c52764u: goto label_1c52764;
        case 0x1c527b0u: goto label_1c527b0;
        case 0x1c527d8u: goto label_1c527d8;
        default: break;
    }

    ctx->pc = 0x1c52688u;

    // 0x1c52688: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c52688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c5268c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c5268cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c52690: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c52690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c52694: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c52694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c52698: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c52698u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5269c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c5269cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c526a0: 0xc713e62  jal         func_1C4F988
    ctx->pc = 0x1C526A0u;
    SET_GPR_U32(ctx, 31, 0x1C526A8u);
    ctx->pc = 0x1C526A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C526A0u;
    // 0x1c526a4: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F988u, 0x1C526A0u, 0x1C526A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C526A8u;
label_1c526a8:
    // 0x1c526a8: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c526a8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c526ac: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c526acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c526b0: 0xc71411e  jal         func_1C50478
    ctx->pc = 0x1C526B0u;
    SET_GPR_U32(ctx, 31, 0x1C526B8u);
    ctx->pc = 0x1C526B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C526B0u;
    // 0x1c526b4: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C50478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C50478u, 0x1C526B0u, 0x1C526B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C526B8u;
label_1c526b8:
    // 0x1c526b8: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c526b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c526bc: 0xc713e62  jal         func_1C4F988
    ctx->pc = 0x1C526BCu;
    SET_GPR_U32(ctx, 31, 0x1C526C4u);
    ctx->pc = 0x1C526C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C526BCu;
    // 0x1c526c0: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F988u, 0x1C526BCu, 0x1C526C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C526C4u;
label_1c526c4:
    // 0x1c526c4: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c526c4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c526c8: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c526c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c526cc: 0xc71411e  jal         func_1C50478
    ctx->pc = 0x1C526CCu;
    SET_GPR_U32(ctx, 31, 0x1C526D4u);
    ctx->pc = 0x1C526D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C526CCu;
    // 0x1c526d0: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C50478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C50478u, 0x1C526CCu, 0x1C526D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C526D4u;
label_1c526d4:
    // 0x1c526d4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c526d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c526d8: 0xc713e64  jal         func_1C4F990
    ctx->pc = 0x1C526D8u;
    SET_GPR_U32(ctx, 31, 0x1C526E0u);
    ctx->pc = 0x1C526DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C526D8u;
    // 0x1c526dc: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F990u, 0x1C526D8u, 0x1C526E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C526E0u;
label_1c526e0:
    // 0x1c526e0: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x1c526e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c526e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c526e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c526e8: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x1c526e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c526ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c526ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c526f0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c526f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c526f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c526f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c526f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c526f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c526fc: 0xc713e5c  jal         func_1C4F970
    ctx->pc = 0x1C526FCu;
    SET_GPR_U32(ctx, 31, 0x1C52704u);
    ctx->pc = 0x1C52700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C526FCu;
    // 0x1c52700: 0xe600001c  swc1        $f0, 0x1C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F970u, 0x1C526FCu, 0x1C52704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52704u;
label_1c52704:
    // 0x1c52704: 0x3c0f01c6  lui         $t7, 0x1C6
    ctx->pc = 0x1c52704u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)454 << 16));
    // 0x1c52708: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1c52708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c5270c: 0x25eff48c  addiu       $t7, $t7, -0xB74
    ctx->pc = 0x1c5270cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964364));
    // 0x1c52710: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1c52710u;
    { uint32_t bits = FAST_READ32(0x1C5F48Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c52714: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c52714u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c52718: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x1C52718u;
    {
        const bool branch_taken_0x1c52718 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C5271Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C52718u;
        // 0x1c5271c: 0x3c0f01c6  lui         $t7, 0x1C6 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)454 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c52718) {
            ctx->pc = 0x1C52780u;
            goto label_1c52780;
        }
    }
    ctx->pc = 0x1C52720u;
    // 0x1c52720: 0x25eff490  addiu       $t7, $t7, -0xB70
    ctx->pc = 0x1c52720u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964368));
    // 0x1c52724: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1c52724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c52728: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c52728u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c5272c: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x1C5272Cu;
    {
        const bool branch_taken_0x1c5272c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C52730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5272Cu;
        // 0x1c52730: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5272c) {
            ctx->pc = 0x1C52784u;
            goto label_1c52784;
        }
    }
    ctx->pc = 0x1C52734u;
    // 0x1c52734: 0xa2200cf9  sb          $zero, 0xCF9($s1)
    ctx->pc = 0x1c52734u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3321), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c52738: 0xa2200021  sb          $zero, 0x21($s1)
    ctx->pc = 0x1c52738u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 33), (uint8_t)GPR_U32(ctx, 0));
label_1c5273c:
    // 0x1c5273c: 0xc713e5e  jal         func_1C4F978
    ctx->pc = 0x1C5273Cu;
    SET_GPR_U32(ctx, 31, 0x1C52744u);
    ctx->pc = 0x1C52740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5273Cu;
    // 0x1c52740: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F978u, 0x1C5273Cu, 0x1C52744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52744u;
label_1c52744:
    // 0x1c52744: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c52744u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c52748: 0x144f000b  bne         $v0, $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x1C52748u;
    {
        const bool branch_taken_0x1c52748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C5274Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C52748u;
        // 0x1c5274c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c52748) {
            ctx->pc = 0x1C52778u;
            goto label_1c52778;
        }
    }
    ctx->pc = 0x1C52750u;
    // 0x1c52750: 0xc713e78  jal         func_1C4F9E0
    ctx->pc = 0x1C52750u;
    SET_GPR_U32(ctx, 31, 0x1C52758u);
    ctx->pc = 0x1C4F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F9E0u, 0x1C52750u, 0x1C52758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52758u;
label_1c52758:
    // 0x1c52758: 0xc713e60  jal         func_1C4F980
    ctx->pc = 0x1C52758u;
    SET_GPR_U32(ctx, 31, 0x1C52760u);
    ctx->pc = 0x1C5275Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C52758u;
    // 0x1c5275c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F980u, 0x1C52758u, 0x1C52760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52760u;
label_1c52760:
    // 0x1c52760: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c52760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c52764:
    // 0x1c52764: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c52764u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c52768: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c52768u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c5276c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c5276cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c52770: 0x3e00008  jr          $ra
    ctx->pc = 0x1C52770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C52774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C52770u;
        // 0x1c52774: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C52770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C52778u;
label_1c52778:
    // 0x1c52778: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C52778u;
    {
        const bool branch_taken_0x1c52778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5277Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C52778u;
        // 0x1c5277c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c52778) {
            ctx->pc = 0x1C52764u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c52764;
        }
    }
    ctx->pc = 0x1C52780u;
label_1c52780:
    // 0x1c52780: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c52780u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c52784:
    // 0x1c52784: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x1C52784u;
    {
        const bool branch_taken_0x1c52784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C52788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C52784u;
        // 0x1c52788: 0xa22f0021  sb          $t7, 0x21($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 33), (uint8_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c52784) {
            ctx->pc = 0x1C5273Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c5273c;
        }
    }
    ctx->pc = 0x1C5278Cu;
    // 0x1c5278c: 0x0  nop
    ctx->pc = 0x1c5278cu;
    // NOP
    // 0x1c52790: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c52790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c52794: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c52794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c52798: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c52798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c5279c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c5279cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c527a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c527a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c527a4: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x1c527a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1c527a8: 0xc713e62  jal         func_1C4F988
    ctx->pc = 0x1C527A8u;
    SET_GPR_U32(ctx, 31, 0x1C527B0u);
    ctx->pc = 0x1C527ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C527A8u;
    // 0x1c527ac: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F988u, 0x1C527A8u, 0x1C527B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C527B0u;
label_1c527b0:
    // 0x1c527b0: 0x244d0200  addiu       $t5, $v0, 0x200
    ctx->pc = 0x1c527b0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1c527b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c527b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c527b8: 0x8daf004c  lw          $t7, 0x4C($t5)
    ctx->pc = 0x1c527b8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 76)));
    // 0x1c527bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c527bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c527c0: 0x8dee0084  lw          $t6, 0x84($t7)
    ctx->pc = 0x1c527c0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 132)));
    // 0x1c527c4: 0xa1c06426  sb          $zero, 0x6426($t6)
    ctx->pc = 0x1c527c4u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 25638), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c527c8: 0x8daf004c  lw          $t7, 0x4C($t5)
    ctx->pc = 0x1c527c8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 76)));
    // 0x1c527cc: 0x8dee0084  lw          $t6, 0x84($t7)
    ctx->pc = 0x1c527ccu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 132)));
    // 0x1c527d0: 0xc713e6c  jal         func_1C4F9B0
    ctx->pc = 0x1C527D0u;
    SET_GPR_U32(ctx, 31, 0x1C527D8u);
    ctx->pc = 0x1C527D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C527D0u;
    // 0x1c527d4: 0xa1c067b6  sb          $zero, 0x67B6($t6) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 14), 26550), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F9B0u, 0x1C527D0u, 0x1C527D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C527D8u;
label_1c527d8:
    // 0x1c527d8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c527d8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c527dc: 0xa2000025  sb          $zero, 0x25($s0)
    ctx->pc = 0x1c527dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 37), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c527e0: 0xa20f0950  sb          $t7, 0x950($s0)
    ctx->pc = 0x1c527e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2384), (uint8_t)GPR_U32(ctx, 15));
    // 0x1c527e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c527e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c527e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c527e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c527ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c527ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c527f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c527f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c527f4: 0x871411c  j           func_1C50470
    ctx->pc = 0x1C527F4u;
    ctx->pc = 0x1C527F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C527F4u;
    // 0x1c527f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C50470u;
    sub_01C50470_0x1c50470(rdram, ctx, runtime); return;
    ctx->pc = 0x1C527FCu;
    // 0x1c527fc: 0x0  nop
    ctx->pc = 0x1c527fcu;
    // NOP
    ctx->pc = 0x1c52800u;
}
