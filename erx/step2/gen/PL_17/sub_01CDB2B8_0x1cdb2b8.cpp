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

// Function: sub_01CDB2B8
// Address: 0x1cdb2b8 - 0x1cdb3a0
void sub_01CDB2B8_0x1cdb2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDB2B8_0x1cdb2b8");
#endif

    switch (ctx->pc) {
        case 0x1cdb2e8u: goto label_1cdb2e8;
        case 0x1cdb318u: goto label_1cdb318;
        case 0x1cdb328u: goto label_1cdb328;
        case 0x1cdb338u: goto label_1cdb338;
        default: break;
    }

    ctx->pc = 0x1cdb2b8u;

    // 0x1cdb2b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cdb2b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cdb2bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cdb2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cdb2c0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cdb2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1cdb2c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cdb2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cdb2c8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1cdb2c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdb2cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cdb2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cdb2d0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1cdb2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1cdb2d4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1cdb2d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdb2d8: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cdb2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cdb2dc: 0x26130010  addiu       $s3, $s0, 0x10
    ctx->pc = 0x1cdb2dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1cdb2e0: 0xc736896  jal         func_1CDA258
    ctx->pc = 0x1CDB2E0u;
    SET_GPR_U32(ctx, 31, 0x1CDB2E8u);
    ctx->pc = 0x1CDB2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDB2E0u;
    // 0x1cdb2e4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA258u, 0x1CDB2E0u, 0x1CDB2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDB2E8u;
label_1cdb2e8:
    // 0x1cdb2e8: 0x24520200  addiu       $s2, $v0, 0x200
    ctx->pc = 0x1cdb2e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1cdb2ec: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x1cdb2ecu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1cdb2f0: 0x8e4e004c  lw          $t6, 0x4C($s2)
    ctx->pc = 0x1cdb2f0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1cdb2f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cdb2f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdb2f8: 0xae0f0034  sw          $t7, 0x34($s0)
    ctx->pc = 0x1cdb2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 15));
    // 0x1cdb2fc: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1cdb2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1cdb300: 0x8e2f0008  lw          $t7, 0x8($s1)
    ctx->pc = 0x1cdb300u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1cdb304: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1cdb304u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1cdb308: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1cdb308u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1cdb30c: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1cdb30cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1cdb310: 0xc736886  jal         func_1CDA218
    ctx->pc = 0x1CDB310u;
    SET_GPR_U32(ctx, 31, 0x1CDB318u);
    ctx->pc = 0x1CDB314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDB310u;
    // 0x1cdb314: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA218u, 0x1CDB310u, 0x1CDB318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDB318u;
label_1cdb318:
    // 0x1cdb318: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x1cdb318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1cdb31c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cdb31cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdb320: 0xc736886  jal         func_1CDA218
    ctx->pc = 0x1CDB320u;
    SET_GPR_U32(ctx, 31, 0x1CDB328u);
    ctx->pc = 0x1CDB324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDB320u;
    // 0x1cdb324: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA218u, 0x1CDB320u, 0x1CDB328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDB328u;
label_1cdb328:
    // 0x1cdb328: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1cdb328u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1cdb32c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cdb32cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdb330: 0xc736888  jal         func_1CDA220
    ctx->pc = 0x1CDB330u;
    SET_GPR_U32(ctx, 31, 0x1CDB338u);
    ctx->pc = 0x1CDB334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDB330u;
    // 0x1cdb334: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA220u, 0x1CDB330u, 0x1CDB338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDB338u;
label_1cdb338:
    // 0x1cdb338: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1cdb338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdb33c: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1cdb33cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1cdb340: 0x8e2d0000  lw          $t5, 0x0($s1)
    ctx->pc = 0x1cdb340u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cdb344: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1cdb344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1cdb348: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1cdb348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1cdb34c: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1cdb34cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1cdb350: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1cdb350u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1cdb354: 0x8e4e00b4  lw          $t6, 0xB4($s2)
    ctx->pc = 0x1cdb354u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1cdb358: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1cdb358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdb35c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cdb35cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cdb360: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x1cdb360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1cdb364: 0x8e2f001c  lw          $t7, 0x1C($s1)
    ctx->pc = 0x1cdb364u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1cdb368: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x1cdb368u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1cdb36c: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x1cdb36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cdb370: 0xae0f0038  sw          $t7, 0x38($s0)
    ctx->pc = 0x1cdb370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 15));
    // 0x1cdb374: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x1cdb374u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1cdb378: 0xae0e0028  sw          $t6, 0x28($s0)
    ctx->pc = 0x1cdb378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 14));
    // 0x1cdb37c: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1cdb37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdb380: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1cdb380u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cdb384: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1cdb384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1cdb388: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cdb388u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cdb38c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cdb38cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdb390: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cdb390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cdb394: 0x8736886  j           func_1CDA218
    ctx->pc = 0x1CDB394u;
    ctx->pc = 0x1CDB398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDB394u;
    // 0x1cdb398: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA218u;
    sub_01CDA218_0x1cda218(rdram, ctx, runtime); return;
    ctx->pc = 0x1CDB39Cu;
    // 0x1cdb39c: 0x0  nop
    ctx->pc = 0x1cdb39cu;
    // NOP
    ctx->pc = 0x1cdb3a0u;
}
