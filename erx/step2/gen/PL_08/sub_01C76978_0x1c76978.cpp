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

// Function: sub_01C76978
// Address: 0x1c76978 - 0x1c76a60
void sub_01C76978_0x1c76978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C76978_0x1c76978");
#endif

    switch (ctx->pc) {
        case 0x1c769a8u: goto label_1c769a8;
        case 0x1c769d8u: goto label_1c769d8;
        case 0x1c769e8u: goto label_1c769e8;
        case 0x1c769f8u: goto label_1c769f8;
        default: break;
    }

    ctx->pc = 0x1c76978u;

    // 0x1c76978: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c76978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c7697c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c7697cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c76980: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c76980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c76984: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c76984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c76988: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c76988u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7698c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c7698cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c76990: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c76990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c76994: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1c76994u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c76998: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c76998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c7699c: 0x26130010  addiu       $s3, $s0, 0x10
    ctx->pc = 0x1c7699cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1c769a0: 0xc71d656  jal         func_1C75958
    ctx->pc = 0x1C769A0u;
    SET_GPR_U32(ctx, 31, 0x1C769A8u);
    ctx->pc = 0x1C769A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C769A0u;
    // 0x1c769a4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75958u, 0x1C769A0u, 0x1C769A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C769A8u;
label_1c769a8:
    // 0x1c769a8: 0x24520200  addiu       $s2, $v0, 0x200
    ctx->pc = 0x1c769a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1c769ac: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x1c769acu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c769b0: 0x8e4e004c  lw          $t6, 0x4C($s2)
    ctx->pc = 0x1c769b0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1c769b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c769b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c769b8: 0xae0f0034  sw          $t7, 0x34($s0)
    ctx->pc = 0x1c769b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 15));
    // 0x1c769bc: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1c769bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1c769c0: 0x8e2f0008  lw          $t7, 0x8($s1)
    ctx->pc = 0x1c769c0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1c769c4: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1c769c4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1c769c8: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1c769c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1c769cc: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1c769ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1c769d0: 0xc71d646  jal         func_1C75918
    ctx->pc = 0x1C769D0u;
    SET_GPR_U32(ctx, 31, 0x1C769D8u);
    ctx->pc = 0x1C769D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C769D0u;
    // 0x1c769d4: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75918u, 0x1C769D0u, 0x1C769D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C769D8u;
label_1c769d8:
    // 0x1c769d8: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x1c769d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1c769dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c769dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c769e0: 0xc71d646  jal         func_1C75918
    ctx->pc = 0x1C769E0u;
    SET_GPR_U32(ctx, 31, 0x1C769E8u);
    ctx->pc = 0x1C769E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C769E0u;
    // 0x1c769e4: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75918u, 0x1C769E0u, 0x1C769E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C769E8u;
label_1c769e8:
    // 0x1c769e8: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1c769e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1c769ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c769ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c769f0: 0xc71d648  jal         func_1C75920
    ctx->pc = 0x1C769F0u;
    SET_GPR_U32(ctx, 31, 0x1C769F8u);
    ctx->pc = 0x1C769F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C769F0u;
    // 0x1c769f4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75920u, 0x1C769F0u, 0x1C769F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C769F8u;
label_1c769f8:
    // 0x1c769f8: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1c769f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c769fc: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1c769fcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c76a00: 0x8e2d0000  lw          $t5, 0x0($s1)
    ctx->pc = 0x1c76a00u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c76a04: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1c76a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1c76a08: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1c76a08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1c76a0c: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1c76a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1c76a10: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1c76a10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1c76a14: 0x8e4e00b4  lw          $t6, 0xB4($s2)
    ctx->pc = 0x1c76a14u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1c76a18: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1c76a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c76a1c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c76a1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c76a20: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x1c76a20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1c76a24: 0x8e2f001c  lw          $t7, 0x1C($s1)
    ctx->pc = 0x1c76a24u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1c76a28: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x1c76a28u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1c76a2c: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x1c76a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c76a30: 0xae0f0038  sw          $t7, 0x38($s0)
    ctx->pc = 0x1c76a30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 15));
    // 0x1c76a34: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x1c76a34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1c76a38: 0xae0e0028  sw          $t6, 0x28($s0)
    ctx->pc = 0x1c76a38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 14));
    // 0x1c76a3c: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1c76a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c76a40: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c76a40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c76a44: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1c76a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1c76a48: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c76a48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c76a4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c76a4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c76a50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c76a50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c76a54: 0x871d646  j           func_1C75918
    ctx->pc = 0x1C76A54u;
    ctx->pc = 0x1C76A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C76A54u;
    // 0x1c76a58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75918u;
    sub_01C75918_0x1c75918(rdram, ctx, runtime); return;
    ctx->pc = 0x1C76A5Cu;
    // 0x1c76a5c: 0x0  nop
    ctx->pc = 0x1c76a5cu;
    // NOP
    ctx->pc = 0x1c76a60u;
}
