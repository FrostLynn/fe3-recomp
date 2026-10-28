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

// Function: sub_01D93990
// Address: 0x1d93990 - 0x1d93a90
void sub_01D93990_0x1d93990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D93990_0x1d93990");
#endif

    switch (ctx->pc) {
        case 0x1d939c0u: goto label_1d939c0;
        case 0x1d939f0u: goto label_1d939f0;
        case 0x1d93a00u: goto label_1d93a00;
        case 0x1d93a10u: goto label_1d93a10;
        case 0x1d93a68u: goto label_1d93a68;
        default: break;
    }

    ctx->pc = 0x1d93990u;

    // 0x1d93990: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d93990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d93994: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d93994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d93998: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d93998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d9399c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d9399cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d939a0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d939a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d939a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d939a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d939a8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d939a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d939ac: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1d939acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d939b0: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d939b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d939b4: 0x26130060  addiu       $s3, $s0, 0x60
    ctx->pc = 0x1d939b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1d939b8: 0xc764a16  jal         func_1D92858
    ctx->pc = 0x1D939B8u;
    SET_GPR_U32(ctx, 31, 0x1D939C0u);
    ctx->pc = 0x1D939BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D939B8u;
    // 0x1d939bc: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92858u, 0x1D939B8u, 0x1D939C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D939C0u;
label_1d939c0:
    // 0x1d939c0: 0x24520200  addiu       $s2, $v0, 0x200
    ctx->pc = 0x1d939c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1d939c4: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x1d939c4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1d939c8: 0x8e4e004c  lw          $t6, 0x4C($s2)
    ctx->pc = 0x1d939c8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1d939cc: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1d939ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1d939d0: 0xae0f0088  sw          $t7, 0x88($s0)
    ctx->pc = 0x1d939d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 15));
    // 0x1d939d4: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1d939d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1d939d8: 0x8e2f0008  lw          $t7, 0x8($s1)
    ctx->pc = 0x1d939d8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1d939dc: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1d939dcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1d939e0: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1d939e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1d939e4: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1d939e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1d939e8: 0xc764a06  jal         func_1D92818
    ctx->pc = 0x1D939E8u;
    SET_GPR_U32(ctx, 31, 0x1D939F0u);
    ctx->pc = 0x1D939ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D939E8u;
    // 0x1d939ec: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92818u, 0x1D939E8u, 0x1D939F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D939F0u;
label_1d939f0:
    // 0x1d939f0: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x1d939f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1d939f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d939f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d939f8: 0xc764a06  jal         func_1D92818
    ctx->pc = 0x1D939F8u;
    SET_GPR_U32(ctx, 31, 0x1D93A00u);
    ctx->pc = 0x1D939FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D939F8u;
    // 0x1d939fc: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92818u, 0x1D939F8u, 0x1D93A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D93A00u;
label_1d93a00:
    // 0x1d93a00: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x1d93a00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x1d93a04: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d93a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d93a08: 0xc764a08  jal         func_1D92820
    ctx->pc = 0x1D93A08u;
    SET_GPR_U32(ctx, 31, 0x1D93A10u);
    ctx->pc = 0x1D93A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D93A08u;
    // 0x1d93a0c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92820u, 0x1D93A08u, 0x1D93A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D93A10u;
label_1d93a10:
    // 0x1d93a10: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1d93a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d93a14: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1d93a14u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1d93a18: 0x8e2e0000  lw          $t6, 0x0($s1)
    ctx->pc = 0x1d93a18u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d93a1c: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x1d93a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x1d93a20: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x1d93a20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x1d93a24: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x1d93a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1d93a28: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x1d93a28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1d93a2c: 0x8e2d001c  lw          $t5, 0x1C($s1)
    ctx->pc = 0x1d93a2cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1d93a30: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1d93a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d93a34: 0xae0d0084  sw          $t5, 0x84($s0)
    ctx->pc = 0x1d93a34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 13));
    // 0x1d93a38: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x1d93a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x1d93a3c: 0x8e4f00b4  lw          $t7, 0xB4($s2)
    ctx->pc = 0x1d93a3cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1d93a40: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1d93a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d93a44: 0x8e2d0020  lw          $t5, 0x20($s1)
    ctx->pc = 0x1d93a44u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1d93a48: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d93a48u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d93a4c: 0xe600007c  swc1        $f0, 0x7C($s0)
    ctx->pc = 0x1d93a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x1d93a50: 0xae0f0078  sw          $t7, 0x78($s0)
    ctx->pc = 0x1d93a50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 15));
    // 0x1d93a54: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1d93a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d93a58: 0xae0d008c  sw          $t5, 0x8C($s0)
    ctx->pc = 0x1d93a58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 13));
    // 0x1d93a5c: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x1d93a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x1d93a60: 0xc764a06  jal         func_1D92818
    ctx->pc = 0x1D93A60u;
    SET_GPR_U32(ctx, 31, 0x1D93A68u);
    ctx->pc = 0x1D93A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D93A60u;
    // 0x1d93a64: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92818u, 0x1D93A60u, 0x1D93A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D93A68u;
label_1d93a68:
    // 0x1d93a68: 0x261000b0  addiu       $s0, $s0, 0xB0
    ctx->pc = 0x1d93a68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x1d93a6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d93a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d93a70: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d93a70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d93a74: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d93a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d93a78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d93a78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d93a7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d93a7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d93a80: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d93a80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d93a84: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d93a84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d93a88: 0x8764a06  j           func_1D92818
    ctx->pc = 0x1D93A88u;
    ctx->pc = 0x1D93A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D93A88u;
    // 0x1d93a8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92818u;
    sub_01D92818_0x1d92818(rdram, ctx, runtime); return;
    ctx->pc = 0x1D93A90u;
}
