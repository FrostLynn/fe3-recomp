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

// Function: sub_01CF06A0
// Address: 0x1cf06a0 - 0x1cf07a0
void sub_01CF06A0_0x1cf06a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CF06A0_0x1cf06a0");
#endif

    switch (ctx->pc) {
        case 0x1cf06d0u: goto label_1cf06d0;
        case 0x1cf0700u: goto label_1cf0700;
        case 0x1cf0710u: goto label_1cf0710;
        case 0x1cf0720u: goto label_1cf0720;
        case 0x1cf0778u: goto label_1cf0778;
        default: break;
    }

    ctx->pc = 0x1cf06a0u;

    // 0x1cf06a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cf06a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cf06a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cf06a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cf06a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cf06a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1cf06ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cf06acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cf06b0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1cf06b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf06b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cf06b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cf06b8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1cf06b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1cf06bc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1cf06bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf06c0: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cf06c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cf06c4: 0x26130060  addiu       $s3, $s0, 0x60
    ctx->pc = 0x1cf06c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1cf06c8: 0xc73bd58  jal         func_1CEF560
    ctx->pc = 0x1CF06C8u;
    SET_GPR_U32(ctx, 31, 0x1CF06D0u);
    ctx->pc = 0x1CF06CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF06C8u;
    // 0x1cf06cc: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF560u, 0x1CF06C8u, 0x1CF06D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF06D0u;
label_1cf06d0:
    // 0x1cf06d0: 0x24520200  addiu       $s2, $v0, 0x200
    ctx->pc = 0x1cf06d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1cf06d4: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x1cf06d4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1cf06d8: 0x8e4e004c  lw          $t6, 0x4C($s2)
    ctx->pc = 0x1cf06d8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1cf06dc: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1cf06dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1cf06e0: 0xae0f0088  sw          $t7, 0x88($s0)
    ctx->pc = 0x1cf06e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 15));
    // 0x1cf06e4: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1cf06e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1cf06e8: 0x8e2f0008  lw          $t7, 0x8($s1)
    ctx->pc = 0x1cf06e8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1cf06ec: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1cf06ecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1cf06f0: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1cf06f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1cf06f4: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1cf06f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1cf06f8: 0xc73bd46  jal         func_1CEF518
    ctx->pc = 0x1CF06F8u;
    SET_GPR_U32(ctx, 31, 0x1CF0700u);
    ctx->pc = 0x1CF06FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF06F8u;
    // 0x1cf06fc: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF518u, 0x1CF06F8u, 0x1CF0700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF0700u;
label_1cf0700:
    // 0x1cf0700: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x1cf0700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1cf0704: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cf0704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf0708: 0xc73bd46  jal         func_1CEF518
    ctx->pc = 0x1CF0708u;
    SET_GPR_U32(ctx, 31, 0x1CF0710u);
    ctx->pc = 0x1CF070Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF0708u;
    // 0x1cf070c: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF518u, 0x1CF0708u, 0x1CF0710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF0710u;
label_1cf0710:
    // 0x1cf0710: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x1cf0710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x1cf0714: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cf0714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf0718: 0xc73bd4a  jal         func_1CEF528
    ctx->pc = 0x1CF0718u;
    SET_GPR_U32(ctx, 31, 0x1CF0720u);
    ctx->pc = 0x1CF071Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF0718u;
    // 0x1cf071c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF528u, 0x1CF0718u, 0x1CF0720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF0720u;
label_1cf0720:
    // 0x1cf0720: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1cf0720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf0724: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1cf0724u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1cf0728: 0x8e2e0000  lw          $t6, 0x0($s1)
    ctx->pc = 0x1cf0728u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cf072c: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x1cf072cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x1cf0730: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x1cf0730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x1cf0734: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x1cf0734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1cf0738: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x1cf0738u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1cf073c: 0x8e2d001c  lw          $t5, 0x1C($s1)
    ctx->pc = 0x1cf073cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1cf0740: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1cf0740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf0744: 0xae0d0084  sw          $t5, 0x84($s0)
    ctx->pc = 0x1cf0744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 13));
    // 0x1cf0748: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x1cf0748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x1cf074c: 0x8e4f00b4  lw          $t7, 0xB4($s2)
    ctx->pc = 0x1cf074cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1cf0750: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1cf0750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf0754: 0x8e2d0020  lw          $t5, 0x20($s1)
    ctx->pc = 0x1cf0754u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1cf0758: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1cf0758u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1cf075c: 0xe600007c  swc1        $f0, 0x7C($s0)
    ctx->pc = 0x1cf075cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x1cf0760: 0xae0f0078  sw          $t7, 0x78($s0)
    ctx->pc = 0x1cf0760u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 15));
    // 0x1cf0764: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1cf0764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf0768: 0xae0d008c  sw          $t5, 0x8C($s0)
    ctx->pc = 0x1cf0768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 13));
    // 0x1cf076c: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x1cf076cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x1cf0770: 0xc73bd46  jal         func_1CEF518
    ctx->pc = 0x1CF0770u;
    SET_GPR_U32(ctx, 31, 0x1CF0778u);
    ctx->pc = 0x1CF0774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF0770u;
    // 0x1cf0774: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF518u, 0x1CF0770u, 0x1CF0778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF0778u;
label_1cf0778:
    // 0x1cf0778: 0x261000b0  addiu       $s0, $s0, 0xB0
    ctx->pc = 0x1cf0778u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x1cf077c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cf077cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf0780: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cf0780u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf0784: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cf0784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf0788: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cf0788u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf078c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cf078cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cf0790: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1cf0790u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cf0794: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cf0794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cf0798: 0x873bd46  j           func_1CEF518
    ctx->pc = 0x1CF0798u;
    ctx->pc = 0x1CF079Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF0798u;
    // 0x1cf079c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF518u;
    sub_01CEF518_0x1cef518(rdram, ctx, runtime); return;
    ctx->pc = 0x1CF07A0u;
}
