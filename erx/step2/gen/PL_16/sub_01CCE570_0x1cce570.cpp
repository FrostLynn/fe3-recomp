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

// Function: sub_01CCE570
// Address: 0x1cce570 - 0x1cce670
void sub_01CCE570_0x1cce570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCE570_0x1cce570");
#endif

    switch (ctx->pc) {
        case 0x1cce5a0u: goto label_1cce5a0;
        case 0x1cce5d0u: goto label_1cce5d0;
        case 0x1cce5e0u: goto label_1cce5e0;
        case 0x1cce5f0u: goto label_1cce5f0;
        case 0x1cce648u: goto label_1cce648;
        default: break;
    }

    ctx->pc = 0x1cce570u;

    // 0x1cce570: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cce570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cce574: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cce574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cce578: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cce578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1cce57c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cce57cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cce580: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1cce580u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce584: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cce584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cce588: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1cce588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1cce58c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1cce58cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce590: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cce590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cce594: 0x26130060  addiu       $s3, $s0, 0x60
    ctx->pc = 0x1cce594u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1cce598: 0xc733516  jal         func_1CCD458
    ctx->pc = 0x1CCE598u;
    SET_GPR_U32(ctx, 31, 0x1CCE5A0u);
    ctx->pc = 0x1CCE59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE598u;
    // 0x1cce59c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD458u, 0x1CCE598u, 0x1CCE5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE5A0u;
label_1cce5a0:
    // 0x1cce5a0: 0x24520200  addiu       $s2, $v0, 0x200
    ctx->pc = 0x1cce5a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1cce5a4: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x1cce5a4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1cce5a8: 0x8e4e004c  lw          $t6, 0x4C($s2)
    ctx->pc = 0x1cce5a8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1cce5ac: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1cce5acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1cce5b0: 0xae0f0088  sw          $t7, 0x88($s0)
    ctx->pc = 0x1cce5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 15));
    // 0x1cce5b4: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1cce5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1cce5b8: 0x8e2f0008  lw          $t7, 0x8($s1)
    ctx->pc = 0x1cce5b8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1cce5bc: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1cce5bcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1cce5c0: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1cce5c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1cce5c4: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1cce5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1cce5c8: 0xc733506  jal         func_1CCD418
    ctx->pc = 0x1CCE5C8u;
    SET_GPR_U32(ctx, 31, 0x1CCE5D0u);
    ctx->pc = 0x1CCE5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE5C8u;
    // 0x1cce5cc: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD418u, 0x1CCE5C8u, 0x1CCE5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE5D0u;
label_1cce5d0:
    // 0x1cce5d0: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x1cce5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1cce5d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cce5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce5d8: 0xc733506  jal         func_1CCD418
    ctx->pc = 0x1CCE5D8u;
    SET_GPR_U32(ctx, 31, 0x1CCE5E0u);
    ctx->pc = 0x1CCE5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE5D8u;
    // 0x1cce5dc: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD418u, 0x1CCE5D8u, 0x1CCE5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE5E0u;
label_1cce5e0:
    // 0x1cce5e0: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x1cce5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x1cce5e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cce5e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce5e8: 0xc733508  jal         func_1CCD420
    ctx->pc = 0x1CCE5E8u;
    SET_GPR_U32(ctx, 31, 0x1CCE5F0u);
    ctx->pc = 0x1CCE5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE5E8u;
    // 0x1cce5ec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD420u, 0x1CCE5E8u, 0x1CCE5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE5F0u;
label_1cce5f0:
    // 0x1cce5f0: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1cce5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cce5f4: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1cce5f4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1cce5f8: 0x8e2e0000  lw          $t6, 0x0($s1)
    ctx->pc = 0x1cce5f8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cce5fc: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x1cce5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x1cce600: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x1cce600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x1cce604: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x1cce604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1cce608: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x1cce608u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1cce60c: 0x8e2d001c  lw          $t5, 0x1C($s1)
    ctx->pc = 0x1cce60cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1cce610: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1cce610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cce614: 0xae0d0084  sw          $t5, 0x84($s0)
    ctx->pc = 0x1cce614u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 13));
    // 0x1cce618: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x1cce618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x1cce61c: 0x8e4f00b4  lw          $t7, 0xB4($s2)
    ctx->pc = 0x1cce61cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1cce620: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1cce620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cce624: 0x8e2d0020  lw          $t5, 0x20($s1)
    ctx->pc = 0x1cce624u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1cce628: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1cce628u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1cce62c: 0xe600007c  swc1        $f0, 0x7C($s0)
    ctx->pc = 0x1cce62cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x1cce630: 0xae0f0078  sw          $t7, 0x78($s0)
    ctx->pc = 0x1cce630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 15));
    // 0x1cce634: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1cce634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cce638: 0xae0d008c  sw          $t5, 0x8C($s0)
    ctx->pc = 0x1cce638u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 13));
    // 0x1cce63c: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x1cce63cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x1cce640: 0xc733506  jal         func_1CCD418
    ctx->pc = 0x1CCE640u;
    SET_GPR_U32(ctx, 31, 0x1CCE648u);
    ctx->pc = 0x1CCE644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE640u;
    // 0x1cce644: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD418u, 0x1CCE640u, 0x1CCE648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE648u;
label_1cce648:
    // 0x1cce648: 0x261000b0  addiu       $s0, $s0, 0xB0
    ctx->pc = 0x1cce648u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x1cce64c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cce64cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce650: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cce650u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cce654: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cce654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce658: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cce658u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cce65c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cce65cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cce660: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1cce660u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cce664: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cce664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cce668: 0x8733506  j           func_1CCD418
    ctx->pc = 0x1CCE668u;
    ctx->pc = 0x1CCE66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE668u;
    // 0x1cce66c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD418u;
    sub_01CCD418_0x1ccd418(rdram, ctx, runtime); return;
    ctx->pc = 0x1CCE670u;
}
