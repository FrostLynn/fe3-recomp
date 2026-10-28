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

// Function: sub_01D3CD78
// Address: 0x1d3cd78 - 0x1d3ce78
void sub_01D3CD78_0x1d3cd78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D3CD78_0x1d3cd78");
#endif

    switch (ctx->pc) {
        case 0x1d3cda8u: goto label_1d3cda8;
        case 0x1d3cdd8u: goto label_1d3cdd8;
        case 0x1d3cde8u: goto label_1d3cde8;
        case 0x1d3cdf8u: goto label_1d3cdf8;
        case 0x1d3ce50u: goto label_1d3ce50;
        default: break;
    }

    ctx->pc = 0x1d3cd78u;

    // 0x1d3cd78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d3cd78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d3cd7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d3cd7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d3cd80: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d3cd80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d3cd84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d3cd84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d3cd88: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d3cd88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3cd8c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d3cd8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d3cd90: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d3cd90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d3cd94: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1d3cd94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3cd98: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d3cd98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d3cd9c: 0x26130060  addiu       $s3, $s0, 0x60
    ctx->pc = 0x1d3cd9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1d3cda0: 0xc74ef16  jal         func_1D3BC58
    ctx->pc = 0x1D3CDA0u;
    SET_GPR_U32(ctx, 31, 0x1D3CDA8u);
    ctx->pc = 0x1D3CDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3CDA0u;
    // 0x1d3cda4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC58u, 0x1D3CDA0u, 0x1D3CDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3CDA8u;
label_1d3cda8:
    // 0x1d3cda8: 0x24520200  addiu       $s2, $v0, 0x200
    ctx->pc = 0x1d3cda8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1d3cdac: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x1d3cdacu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1d3cdb0: 0x8e4e004c  lw          $t6, 0x4C($s2)
    ctx->pc = 0x1d3cdb0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1d3cdb4: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1d3cdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1d3cdb8: 0xae0f0088  sw          $t7, 0x88($s0)
    ctx->pc = 0x1d3cdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 15));
    // 0x1d3cdbc: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1d3cdbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1d3cdc0: 0x8e2f0008  lw          $t7, 0x8($s1)
    ctx->pc = 0x1d3cdc0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1d3cdc4: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1d3cdc4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1d3cdc8: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1d3cdc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1d3cdcc: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1d3cdccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1d3cdd0: 0xc74ef06  jal         func_1D3BC18
    ctx->pc = 0x1D3CDD0u;
    SET_GPR_U32(ctx, 31, 0x1D3CDD8u);
    ctx->pc = 0x1D3CDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3CDD0u;
    // 0x1d3cdd4: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC18u, 0x1D3CDD0u, 0x1D3CDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3CDD8u;
label_1d3cdd8:
    // 0x1d3cdd8: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x1d3cdd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1d3cddc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d3cddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3cde0: 0xc74ef06  jal         func_1D3BC18
    ctx->pc = 0x1D3CDE0u;
    SET_GPR_U32(ctx, 31, 0x1D3CDE8u);
    ctx->pc = 0x1D3CDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3CDE0u;
    // 0x1d3cde4: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC18u, 0x1D3CDE0u, 0x1D3CDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3CDE8u;
label_1d3cde8:
    // 0x1d3cde8: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x1d3cde8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x1d3cdec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d3cdecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3cdf0: 0xc74ef08  jal         func_1D3BC20
    ctx->pc = 0x1D3CDF0u;
    SET_GPR_U32(ctx, 31, 0x1D3CDF8u);
    ctx->pc = 0x1D3CDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3CDF0u;
    // 0x1d3cdf4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC20u, 0x1D3CDF0u, 0x1D3CDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3CDF8u;
label_1d3cdf8:
    // 0x1d3cdf8: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1d3cdf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3cdfc: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1d3cdfcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1d3ce00: 0x8e2e0000  lw          $t6, 0x0($s1)
    ctx->pc = 0x1d3ce00u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3ce04: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x1d3ce04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x1d3ce08: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x1d3ce08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x1d3ce0c: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x1d3ce0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1d3ce10: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x1d3ce10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1d3ce14: 0x8e2d001c  lw          $t5, 0x1C($s1)
    ctx->pc = 0x1d3ce14u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1d3ce18: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1d3ce18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3ce1c: 0xae0d0084  sw          $t5, 0x84($s0)
    ctx->pc = 0x1d3ce1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 13));
    // 0x1d3ce20: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x1d3ce20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x1d3ce24: 0x8e4f00b4  lw          $t7, 0xB4($s2)
    ctx->pc = 0x1d3ce24u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1d3ce28: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1d3ce28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3ce2c: 0x8e2d0020  lw          $t5, 0x20($s1)
    ctx->pc = 0x1d3ce2cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1d3ce30: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d3ce30u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d3ce34: 0xe600007c  swc1        $f0, 0x7C($s0)
    ctx->pc = 0x1d3ce34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x1d3ce38: 0xae0f0078  sw          $t7, 0x78($s0)
    ctx->pc = 0x1d3ce38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 15));
    // 0x1d3ce3c: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1d3ce3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3ce40: 0xae0d008c  sw          $t5, 0x8C($s0)
    ctx->pc = 0x1d3ce40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 13));
    // 0x1d3ce44: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x1d3ce44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x1d3ce48: 0xc74ef06  jal         func_1D3BC18
    ctx->pc = 0x1D3CE48u;
    SET_GPR_U32(ctx, 31, 0x1D3CE50u);
    ctx->pc = 0x1D3CE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3CE48u;
    // 0x1d3ce4c: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC18u, 0x1D3CE48u, 0x1D3CE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3CE50u;
label_1d3ce50:
    // 0x1d3ce50: 0x261000b0  addiu       $s0, $s0, 0xB0
    ctx->pc = 0x1d3ce50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x1d3ce54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3ce54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3ce58: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d3ce58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d3ce5c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d3ce5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3ce60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d3ce60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3ce64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d3ce64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d3ce68: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d3ce68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d3ce6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d3ce6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d3ce70: 0x874ef06  j           func_1D3BC18
    ctx->pc = 0x1D3CE70u;
    ctx->pc = 0x1D3CE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3CE70u;
    // 0x1d3ce74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC18u;
    sub_01D3BC18_0x1d3bc18(rdram, ctx, runtime); return;
    ctx->pc = 0x1D3CE78u;
}
