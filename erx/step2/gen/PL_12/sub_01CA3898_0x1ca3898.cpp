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

// Function: sub_01CA3898
// Address: 0x1ca3898 - 0x1ca3998
void sub_01CA3898_0x1ca3898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CA3898_0x1ca3898");
#endif

    switch (ctx->pc) {
        case 0x1ca38c8u: goto label_1ca38c8;
        case 0x1ca38f8u: goto label_1ca38f8;
        case 0x1ca3908u: goto label_1ca3908;
        case 0x1ca3918u: goto label_1ca3918;
        case 0x1ca3970u: goto label_1ca3970;
        default: break;
    }

    ctx->pc = 0x1ca3898u;

    // 0x1ca3898: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ca3898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ca389c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ca389cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ca38a0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ca38a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ca38a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ca38a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ca38a8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1ca38a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca38ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ca38acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ca38b0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1ca38b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1ca38b4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1ca38b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca38b8: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1ca38b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1ca38bc: 0x26130060  addiu       $s3, $s0, 0x60
    ctx->pc = 0x1ca38bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1ca38c0: 0xc7289d6  jal         func_1CA2758
    ctx->pc = 0x1CA38C0u;
    SET_GPR_U32(ctx, 31, 0x1CA38C8u);
    ctx->pc = 0x1CA38C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA38C0u;
    // 0x1ca38c4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2758u, 0x1CA38C0u, 0x1CA38C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA38C8u;
label_1ca38c8:
    // 0x1ca38c8: 0x24520200  addiu       $s2, $v0, 0x200
    ctx->pc = 0x1ca38c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1ca38cc: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x1ca38ccu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1ca38d0: 0x8e4e004c  lw          $t6, 0x4C($s2)
    ctx->pc = 0x1ca38d0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1ca38d4: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1ca38d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1ca38d8: 0xae0f0088  sw          $t7, 0x88($s0)
    ctx->pc = 0x1ca38d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 15));
    // 0x1ca38dc: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1ca38dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1ca38e0: 0x8e2f0008  lw          $t7, 0x8($s1)
    ctx->pc = 0x1ca38e0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ca38e4: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1ca38e4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1ca38e8: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1ca38e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1ca38ec: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1ca38ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1ca38f0: 0xc7289c6  jal         func_1CA2718
    ctx->pc = 0x1CA38F0u;
    SET_GPR_U32(ctx, 31, 0x1CA38F8u);
    ctx->pc = 0x1CA38F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA38F0u;
    // 0x1ca38f4: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2718u, 0x1CA38F0u, 0x1CA38F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA38F8u;
label_1ca38f8:
    // 0x1ca38f8: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x1ca38f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1ca38fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ca38fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca3900: 0xc7289c6  jal         func_1CA2718
    ctx->pc = 0x1CA3900u;
    SET_GPR_U32(ctx, 31, 0x1CA3908u);
    ctx->pc = 0x1CA3904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA3900u;
    // 0x1ca3904: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2718u, 0x1CA3900u, 0x1CA3908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA3908u;
label_1ca3908:
    // 0x1ca3908: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x1ca3908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x1ca390c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ca390cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca3910: 0xc7289c8  jal         func_1CA2720
    ctx->pc = 0x1CA3910u;
    SET_GPR_U32(ctx, 31, 0x1CA3918u);
    ctx->pc = 0x1CA3914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA3910u;
    // 0x1ca3914: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2720u, 0x1CA3910u, 0x1CA3918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA3918u;
label_1ca3918:
    // 0x1ca3918: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1ca3918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca391c: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1ca391cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1ca3920: 0x8e2e0000  lw          $t6, 0x0($s1)
    ctx->pc = 0x1ca3920u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ca3924: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x1ca3924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x1ca3928: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x1ca3928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x1ca392c: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x1ca392cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1ca3930: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x1ca3930u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1ca3934: 0x8e2d001c  lw          $t5, 0x1C($s1)
    ctx->pc = 0x1ca3934u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1ca3938: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1ca3938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca393c: 0xae0d0084  sw          $t5, 0x84($s0)
    ctx->pc = 0x1ca393cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 13));
    // 0x1ca3940: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x1ca3940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x1ca3944: 0x8e4f00b4  lw          $t7, 0xB4($s2)
    ctx->pc = 0x1ca3944u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1ca3948: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1ca3948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca394c: 0x8e2d0020  lw          $t5, 0x20($s1)
    ctx->pc = 0x1ca394cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1ca3950: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1ca3950u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1ca3954: 0xe600007c  swc1        $f0, 0x7C($s0)
    ctx->pc = 0x1ca3954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x1ca3958: 0xae0f0078  sw          $t7, 0x78($s0)
    ctx->pc = 0x1ca3958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 15));
    // 0x1ca395c: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1ca395cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca3960: 0xae0d008c  sw          $t5, 0x8C($s0)
    ctx->pc = 0x1ca3960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 13));
    // 0x1ca3964: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x1ca3964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x1ca3968: 0xc7289c6  jal         func_1CA2718
    ctx->pc = 0x1CA3968u;
    SET_GPR_U32(ctx, 31, 0x1CA3970u);
    ctx->pc = 0x1CA396Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA3968u;
    // 0x1ca396c: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2718u, 0x1CA3968u, 0x1CA3970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA3970u;
label_1ca3970:
    // 0x1ca3970: 0x261000b0  addiu       $s0, $s0, 0xB0
    ctx->pc = 0x1ca3970u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x1ca3974: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca3974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca3978: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ca3978u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ca397c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ca397cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca3980: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ca3980u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca3984: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ca3984u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ca3988: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ca3988u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ca398c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ca398cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ca3990: 0x87289c6  j           func_1CA2718
    ctx->pc = 0x1CA3990u;
    ctx->pc = 0x1CA3994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA3990u;
    // 0x1ca3994: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2718u;
    sub_01CA2718_0x1ca2718(rdram, ctx, runtime); return;
    ctx->pc = 0x1CA3998u;
}
