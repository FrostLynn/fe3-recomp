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

// Function: sub_01CA37B0
// Address: 0x1ca37b0 - 0x1ca3898
void sub_01CA37B0_0x1ca37b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CA37B0_0x1ca37b0");
#endif

    switch (ctx->pc) {
        case 0x1ca37e0u: goto label_1ca37e0;
        case 0x1ca3810u: goto label_1ca3810;
        case 0x1ca3820u: goto label_1ca3820;
        case 0x1ca3830u: goto label_1ca3830;
        default: break;
    }

    ctx->pc = 0x1ca37b0u;

    // 0x1ca37b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ca37b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ca37b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ca37b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ca37b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ca37b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ca37bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ca37bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ca37c0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1ca37c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca37c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ca37c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ca37c8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1ca37c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1ca37cc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1ca37ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca37d0: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1ca37d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1ca37d4: 0x26130010  addiu       $s3, $s0, 0x10
    ctx->pc = 0x1ca37d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1ca37d8: 0xc7289d6  jal         func_1CA2758
    ctx->pc = 0x1CA37D8u;
    SET_GPR_U32(ctx, 31, 0x1CA37E0u);
    ctx->pc = 0x1CA37DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA37D8u;
    // 0x1ca37dc: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2758u, 0x1CA37D8u, 0x1CA37E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA37E0u;
label_1ca37e0:
    // 0x1ca37e0: 0x24520200  addiu       $s2, $v0, 0x200
    ctx->pc = 0x1ca37e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1ca37e4: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x1ca37e4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1ca37e8: 0x8e4e004c  lw          $t6, 0x4C($s2)
    ctx->pc = 0x1ca37e8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1ca37ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca37ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca37f0: 0xae0f0034  sw          $t7, 0x34($s0)
    ctx->pc = 0x1ca37f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 15));
    // 0x1ca37f4: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1ca37f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1ca37f8: 0x8e2f0008  lw          $t7, 0x8($s1)
    ctx->pc = 0x1ca37f8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ca37fc: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1ca37fcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1ca3800: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1ca3800u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1ca3804: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1ca3804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1ca3808: 0xc7289c6  jal         func_1CA2718
    ctx->pc = 0x1CA3808u;
    SET_GPR_U32(ctx, 31, 0x1CA3810u);
    ctx->pc = 0x1CA380Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA3808u;
    // 0x1ca380c: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2718u, 0x1CA3808u, 0x1CA3810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA3810u;
label_1ca3810:
    // 0x1ca3810: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x1ca3810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1ca3814: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ca3814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca3818: 0xc7289c6  jal         func_1CA2718
    ctx->pc = 0x1CA3818u;
    SET_GPR_U32(ctx, 31, 0x1CA3820u);
    ctx->pc = 0x1CA381Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA3818u;
    // 0x1ca381c: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2718u, 0x1CA3818u, 0x1CA3820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA3820u;
label_1ca3820:
    // 0x1ca3820: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1ca3820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1ca3824: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ca3824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca3828: 0xc7289c8  jal         func_1CA2720
    ctx->pc = 0x1CA3828u;
    SET_GPR_U32(ctx, 31, 0x1CA3830u);
    ctx->pc = 0x1CA382Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA3828u;
    // 0x1ca382c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2720u, 0x1CA3828u, 0x1CA3830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA3830u;
label_1ca3830:
    // 0x1ca3830: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1ca3830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca3834: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1ca3834u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1ca3838: 0x8e2d0000  lw          $t5, 0x0($s1)
    ctx->pc = 0x1ca3838u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ca383c: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1ca383cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1ca3840: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1ca3840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1ca3844: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1ca3844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1ca3848: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1ca3848u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1ca384c: 0x8e4e00b4  lw          $t6, 0xB4($s2)
    ctx->pc = 0x1ca384cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1ca3850: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1ca3850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca3854: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ca3854u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ca3858: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x1ca3858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1ca385c: 0x8e2f001c  lw          $t7, 0x1C($s1)
    ctx->pc = 0x1ca385cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1ca3860: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x1ca3860u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1ca3864: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x1ca3864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ca3868: 0xae0f0038  sw          $t7, 0x38($s0)
    ctx->pc = 0x1ca3868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 15));
    // 0x1ca386c: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x1ca386cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1ca3870: 0xae0e0028  sw          $t6, 0x28($s0)
    ctx->pc = 0x1ca3870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 14));
    // 0x1ca3874: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1ca3874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca3878: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ca3878u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ca387c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1ca387cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1ca3880: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ca3880u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ca3884: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ca3884u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca3888: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ca3888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ca388c: 0x87289c6  j           func_1CA2718
    ctx->pc = 0x1CA388Cu;
    ctx->pc = 0x1CA3890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA388Cu;
    // 0x1ca3890: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2718u;
    sub_01CA2718_0x1ca2718(rdram, ctx, runtime); return;
    ctx->pc = 0x1CA3894u;
    // 0x1ca3894: 0x0  nop
    ctx->pc = 0x1ca3894u;
    // NOP
    ctx->pc = 0x1ca3898u;
}
