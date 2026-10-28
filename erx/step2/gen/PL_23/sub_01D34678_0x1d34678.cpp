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

// Function: sub_01D34678
// Address: 0x1d34678 - 0x1d34778
void sub_01D34678_0x1d34678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D34678_0x1d34678");
#endif

    switch (ctx->pc) {
        case 0x1d346a8u: goto label_1d346a8;
        case 0x1d346d8u: goto label_1d346d8;
        case 0x1d346e8u: goto label_1d346e8;
        case 0x1d346f8u: goto label_1d346f8;
        case 0x1d34750u: goto label_1d34750;
        default: break;
    }

    ctx->pc = 0x1d34678u;

    // 0x1d34678: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d34678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d3467c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d3467cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d34680: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d34680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d34684: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d34684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d34688: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d34688u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3468c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d3468cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d34690: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d34690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d34694: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1d34694u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d34698: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d34698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d3469c: 0x26130060  addiu       $s3, $s0, 0x60
    ctx->pc = 0x1d3469cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1d346a0: 0xc74cd56  jal         func_1D33558
    ctx->pc = 0x1D346A0u;
    SET_GPR_U32(ctx, 31, 0x1D346A8u);
    ctx->pc = 0x1D346A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D346A0u;
    // 0x1d346a4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33558u, 0x1D346A0u, 0x1D346A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D346A8u;
label_1d346a8:
    // 0x1d346a8: 0x24520200  addiu       $s2, $v0, 0x200
    ctx->pc = 0x1d346a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1d346ac: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x1d346acu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1d346b0: 0x8e4e004c  lw          $t6, 0x4C($s2)
    ctx->pc = 0x1d346b0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1d346b4: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1d346b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1d346b8: 0xae0f0088  sw          $t7, 0x88($s0)
    ctx->pc = 0x1d346b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 15));
    // 0x1d346bc: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1d346bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1d346c0: 0x8e2f0008  lw          $t7, 0x8($s1)
    ctx->pc = 0x1d346c0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1d346c4: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1d346c4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1d346c8: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1d346c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1d346cc: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1d346ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1d346d0: 0xc74cd46  jal         func_1D33518
    ctx->pc = 0x1D346D0u;
    SET_GPR_U32(ctx, 31, 0x1D346D8u);
    ctx->pc = 0x1D346D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D346D0u;
    // 0x1d346d4: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33518u, 0x1D346D0u, 0x1D346D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D346D8u;
label_1d346d8:
    // 0x1d346d8: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x1d346d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1d346dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d346dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d346e0: 0xc74cd46  jal         func_1D33518
    ctx->pc = 0x1D346E0u;
    SET_GPR_U32(ctx, 31, 0x1D346E8u);
    ctx->pc = 0x1D346E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D346E0u;
    // 0x1d346e4: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33518u, 0x1D346E0u, 0x1D346E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D346E8u;
label_1d346e8:
    // 0x1d346e8: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x1d346e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x1d346ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d346ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d346f0: 0xc74cd48  jal         func_1D33520
    ctx->pc = 0x1D346F0u;
    SET_GPR_U32(ctx, 31, 0x1D346F8u);
    ctx->pc = 0x1D346F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D346F0u;
    // 0x1d346f4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33520u, 0x1D346F0u, 0x1D346F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D346F8u;
label_1d346f8:
    // 0x1d346f8: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1d346f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d346fc: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1d346fcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1d34700: 0x8e2e0000  lw          $t6, 0x0($s1)
    ctx->pc = 0x1d34700u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d34704: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x1d34704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x1d34708: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x1d34708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x1d3470c: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x1d3470cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1d34710: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x1d34710u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1d34714: 0x8e2d001c  lw          $t5, 0x1C($s1)
    ctx->pc = 0x1d34714u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1d34718: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1d34718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3471c: 0xae0d0084  sw          $t5, 0x84($s0)
    ctx->pc = 0x1d3471cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 13));
    // 0x1d34720: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x1d34720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x1d34724: 0x8e4f00b4  lw          $t7, 0xB4($s2)
    ctx->pc = 0x1d34724u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1d34728: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1d34728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3472c: 0x8e2d0020  lw          $t5, 0x20($s1)
    ctx->pc = 0x1d3472cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1d34730: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d34730u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d34734: 0xe600007c  swc1        $f0, 0x7C($s0)
    ctx->pc = 0x1d34734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x1d34738: 0xae0f0078  sw          $t7, 0x78($s0)
    ctx->pc = 0x1d34738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 15));
    // 0x1d3473c: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1d3473cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d34740: 0xae0d008c  sw          $t5, 0x8C($s0)
    ctx->pc = 0x1d34740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 13));
    // 0x1d34744: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x1d34744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x1d34748: 0xc74cd46  jal         func_1D33518
    ctx->pc = 0x1D34748u;
    SET_GPR_U32(ctx, 31, 0x1D34750u);
    ctx->pc = 0x1D3474Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D34748u;
    // 0x1d3474c: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33518u, 0x1D34748u, 0x1D34750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D34750u;
label_1d34750:
    // 0x1d34750: 0x261000b0  addiu       $s0, $s0, 0xB0
    ctx->pc = 0x1d34750u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x1d34754: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d34754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d34758: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d34758u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d3475c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d3475cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d34760: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d34760u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d34764: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d34764u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d34768: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d34768u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d3476c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d3476cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d34770: 0x874cd46  j           func_1D33518
    ctx->pc = 0x1D34770u;
    ctx->pc = 0x1D34774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D34770u;
    // 0x1d34774: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33518u;
    sub_01D33518_0x1d33518(rdram, ctx, runtime); return;
    ctx->pc = 0x1D34778u;
}
