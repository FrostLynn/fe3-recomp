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

// Function: sub_01CA3250
// Address: 0x1ca3250 - 0x1ca3360
void sub_01CA3250_0x1ca3250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CA3250_0x1ca3250");
#endif

    switch (ctx->pc) {
        case 0x1ca326cu: goto label_1ca326c;
        case 0x1ca3274u: goto label_1ca3274;
        case 0x1ca3288u: goto label_1ca3288;
        case 0x1ca328cu: goto label_1ca328c;
        case 0x1ca32e4u: goto label_1ca32e4;
        case 0x1ca32f4u: goto label_1ca32f4;
        case 0x1ca3308u: goto label_1ca3308;
        case 0x1ca331cu: goto label_1ca331c;
        case 0x1ca332cu: goto label_1ca332c;
        default: break;
    }

    ctx->pc = 0x1ca3250u;

    // 0x1ca3250: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ca3250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ca3254: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ca3254u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ca3258: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ca3258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ca325c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ca325cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca3260: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ca3260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ca3264: 0xc7289d0  jal         func_1CA2740
    ctx->pc = 0x1CA3264u;
    SET_GPR_U32(ctx, 31, 0x1CA326Cu);
    ctx->pc = 0x1CA3268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA3264u;
    // 0x1ca3268: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2740u, 0x1CA3264u, 0x1CA326Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA326Cu;
label_1ca326c:
    // 0x1ca326c: 0xc7289d2  jal         func_1CA2748
    ctx->pc = 0x1CA326Cu;
    SET_GPR_U32(ctx, 31, 0x1CA3274u);
    ctx->pc = 0x1CA3270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA326Cu;
    // 0x1ca3270: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2748u, 0x1CA326Cu, 0x1CA3274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA3274u;
label_1ca3274:
    // 0x1ca3274: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1ca3274u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca3278: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CA3278u;
    {
        const bool branch_taken_0x1ca3278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CA327Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA3278u;
        // 0x1ca327c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca3278) {
            ctx->pc = 0x1CA329Cu;
            goto label_1ca329c;
        }
    }
    ctx->pc = 0x1CA3280u;
    // 0x1ca3280: 0xc7289d4  jal         func_1CA2750
    ctx->pc = 0x1CA3280u;
    SET_GPR_U32(ctx, 31, 0x1CA3288u);
    ctx->pc = 0x1CA2750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2750u, 0x1CA3280u, 0x1CA3288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA3288u;
label_1ca3288:
    // 0x1ca3288: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1ca3288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1ca328c:
    // 0x1ca328c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ca328cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca3290: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ca3290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ca3294: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA3294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA3298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA3294u;
        // 0x1ca3298: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA3294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA329Cu;
label_1ca329c:
    // 0x1ca329c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1CA329Cu;
    {
        const bool branch_taken_0x1ca329c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA32A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA329Cu;
        // 0x1ca32a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca329c) {
            ctx->pc = 0x1CA328Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca328c;
        }
    }
    ctx->pc = 0x1CA32A4u;
    // 0x1ca32a4: 0x0  nop
    ctx->pc = 0x1ca32a4u;
    // NOP
    // 0x1ca32a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ca32a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ca32ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ca32acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ca32b0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1ca32b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1ca32b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ca32b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ca32b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ca32b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca32bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ca32bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ca32c0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1ca32c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca32c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ca32c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ca32c8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1ca32c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1ca32cc: 0x30f100ff  andi        $s1, $a3, 0xFF
    ctx->pc = 0x1ca32ccu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1ca32d0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1ca32d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1ca32d4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1ca32d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1ca32d8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1ca32d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca32dc: 0xc7289d6  jal         func_1CA2758
    ctx->pc = 0x1CA32DCu;
    SET_GPR_U32(ctx, 31, 0x1CA32E4u);
    ctx->pc = 0x1CA32E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA32DCu;
    // 0x1ca32e0: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2758u, 0x1CA32DCu, 0x1CA32E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA32E4u;
label_1ca32e4:
    // 0x1ca32e4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1ca32e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ca32e8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ca32e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca32ec: 0xc7289d8  jal         func_1CA2760
    ctx->pc = 0x1CA32ECu;
    SET_GPR_U32(ctx, 31, 0x1CA32F4u);
    ctx->pc = 0x1CA32F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA32ECu;
    // 0x1ca32f0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2760u, 0x1CA32ECu, 0x1CA32F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA32F4u;
label_1ca32f4:
    // 0x1ca32f4: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1ca32f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1ca32f8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1ca32f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca32fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca32fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca3300: 0xc7289da  jal         func_1CA2768
    ctx->pc = 0x1CA3300u;
    SET_GPR_U32(ctx, 31, 0x1CA3308u);
    ctx->pc = 0x1CA3304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA3300u;
    // 0x1ca3304: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2768u, 0x1CA3300u, 0x1CA3308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA3308u;
label_1ca3308:
    // 0x1ca3308: 0xae400430  sw          $zero, 0x430($s2)
    ctx->pc = 0x1ca3308u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1072), GPR_U32(ctx, 0));
    // 0x1ca330c: 0x26640390  addiu       $a0, $s3, 0x390
    ctx->pc = 0x1ca330cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 912));
    // 0x1ca3310: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1ca3310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca3314: 0xc7289dc  jal         func_1CA2770
    ctx->pc = 0x1CA3314u;
    SET_GPR_U32(ctx, 31, 0x1CA331Cu);
    ctx->pc = 0x1CA3318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA3314u;
    // 0x1ca3318: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2770u, 0x1CA3314u, 0x1CA331Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA331Cu;
label_1ca331c:
    // 0x1ca331c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ca331cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ca3320: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca3320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca3324: 0xc7289d0  jal         func_1CA2740
    ctx->pc = 0x1CA3324u;
    SET_GPR_U32(ctx, 31, 0x1CA332Cu);
    ctx->pc = 0x1CA3328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA3324u;
    // 0x1ca3328: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2740u, 0x1CA3324u, 0x1CA332Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA332Cu;
label_1ca332c:
    // 0x1ca332c: 0xa27109b0  sb          $s1, 0x9B0($s3)
    ctx->pc = 0x1ca332cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2480), (uint8_t)GPR_U32(ctx, 17));
    // 0x1ca3330: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca3330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca3334: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1ca3334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca3338: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ca3338u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca333c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ca333cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ca3340: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ca3340u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ca3344: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ca3344u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ca3348: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1ca3348u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ca334c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1ca334cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ca3350: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ca3350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ca3354: 0x87289de  j           func_1CA2778
    ctx->pc = 0x1CA3354u;
    ctx->pc = 0x1CA3358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA3354u;
    // 0x1ca3358: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2778u;
    sub_01CA2778_0x1ca2778(rdram, ctx, runtime); return;
    ctx->pc = 0x1CA335Cu;
    // 0x1ca335c: 0x0  nop
    ctx->pc = 0x1ca335cu;
    // NOP
    ctx->pc = 0x1ca3360u;
}
