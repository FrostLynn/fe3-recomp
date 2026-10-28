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

// Function: sub_01CDB3A0
// Address: 0x1cdb3a0 - 0x1cdb4a0
void sub_01CDB3A0_0x1cdb3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDB3A0_0x1cdb3a0");
#endif

    switch (ctx->pc) {
        case 0x1cdb3d0u: goto label_1cdb3d0;
        case 0x1cdb400u: goto label_1cdb400;
        case 0x1cdb410u: goto label_1cdb410;
        case 0x1cdb420u: goto label_1cdb420;
        case 0x1cdb478u: goto label_1cdb478;
        default: break;
    }

    ctx->pc = 0x1cdb3a0u;

    // 0x1cdb3a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cdb3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cdb3a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cdb3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cdb3a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cdb3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1cdb3ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cdb3acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cdb3b0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1cdb3b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdb3b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cdb3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cdb3b8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1cdb3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1cdb3bc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1cdb3bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdb3c0: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cdb3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cdb3c4: 0x26130060  addiu       $s3, $s0, 0x60
    ctx->pc = 0x1cdb3c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1cdb3c8: 0xc736896  jal         func_1CDA258
    ctx->pc = 0x1CDB3C8u;
    SET_GPR_U32(ctx, 31, 0x1CDB3D0u);
    ctx->pc = 0x1CDB3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDB3C8u;
    // 0x1cdb3cc: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA258u, 0x1CDB3C8u, 0x1CDB3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDB3D0u;
label_1cdb3d0:
    // 0x1cdb3d0: 0x24520200  addiu       $s2, $v0, 0x200
    ctx->pc = 0x1cdb3d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1cdb3d4: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x1cdb3d4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1cdb3d8: 0x8e4e004c  lw          $t6, 0x4C($s2)
    ctx->pc = 0x1cdb3d8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1cdb3dc: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1cdb3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1cdb3e0: 0xae0f0088  sw          $t7, 0x88($s0)
    ctx->pc = 0x1cdb3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 15));
    // 0x1cdb3e4: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1cdb3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1cdb3e8: 0x8e2f0008  lw          $t7, 0x8($s1)
    ctx->pc = 0x1cdb3e8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1cdb3ec: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1cdb3ecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1cdb3f0: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1cdb3f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1cdb3f4: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1cdb3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1cdb3f8: 0xc736886  jal         func_1CDA218
    ctx->pc = 0x1CDB3F8u;
    SET_GPR_U32(ctx, 31, 0x1CDB400u);
    ctx->pc = 0x1CDB3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDB3F8u;
    // 0x1cdb3fc: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA218u, 0x1CDB3F8u, 0x1CDB400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDB400u;
label_1cdb400:
    // 0x1cdb400: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x1cdb400u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1cdb404: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cdb404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdb408: 0xc736886  jal         func_1CDA218
    ctx->pc = 0x1CDB408u;
    SET_GPR_U32(ctx, 31, 0x1CDB410u);
    ctx->pc = 0x1CDB40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDB408u;
    // 0x1cdb40c: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA218u, 0x1CDB408u, 0x1CDB410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDB410u;
label_1cdb410:
    // 0x1cdb410: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x1cdb410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x1cdb414: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cdb414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdb418: 0xc736888  jal         func_1CDA220
    ctx->pc = 0x1CDB418u;
    SET_GPR_U32(ctx, 31, 0x1CDB420u);
    ctx->pc = 0x1CDB41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDB418u;
    // 0x1cdb41c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA220u, 0x1CDB418u, 0x1CDB420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDB420u;
label_1cdb420:
    // 0x1cdb420: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1cdb420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdb424: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1cdb424u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1cdb428: 0x8e2e0000  lw          $t6, 0x0($s1)
    ctx->pc = 0x1cdb428u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cdb42c: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x1cdb42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x1cdb430: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x1cdb430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x1cdb434: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x1cdb434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1cdb438: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x1cdb438u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1cdb43c: 0x8e2d001c  lw          $t5, 0x1C($s1)
    ctx->pc = 0x1cdb43cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1cdb440: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1cdb440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdb444: 0xae0d0084  sw          $t5, 0x84($s0)
    ctx->pc = 0x1cdb444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 13));
    // 0x1cdb448: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x1cdb448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x1cdb44c: 0x8e4f00b4  lw          $t7, 0xB4($s2)
    ctx->pc = 0x1cdb44cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1cdb450: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1cdb450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdb454: 0x8e2d0020  lw          $t5, 0x20($s1)
    ctx->pc = 0x1cdb454u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1cdb458: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1cdb458u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1cdb45c: 0xe600007c  swc1        $f0, 0x7C($s0)
    ctx->pc = 0x1cdb45cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x1cdb460: 0xae0f0078  sw          $t7, 0x78($s0)
    ctx->pc = 0x1cdb460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 15));
    // 0x1cdb464: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1cdb464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdb468: 0xae0d008c  sw          $t5, 0x8C($s0)
    ctx->pc = 0x1cdb468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 13));
    // 0x1cdb46c: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x1cdb46cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x1cdb470: 0xc736886  jal         func_1CDA218
    ctx->pc = 0x1CDB470u;
    SET_GPR_U32(ctx, 31, 0x1CDB478u);
    ctx->pc = 0x1CDB474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDB470u;
    // 0x1cdb474: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA218u, 0x1CDB470u, 0x1CDB478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDB478u;
label_1cdb478:
    // 0x1cdb478: 0x261000b0  addiu       $s0, $s0, 0xB0
    ctx->pc = 0x1cdb478u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x1cdb47c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cdb47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdb480: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cdb480u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cdb484: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cdb484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdb488: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cdb488u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdb48c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cdb48cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cdb490: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1cdb490u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cdb494: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cdb494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cdb498: 0x8736886  j           func_1CDA218
    ctx->pc = 0x1CDB498u;
    ctx->pc = 0x1CDB49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDB498u;
    // 0x1cdb49c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA218u;
    sub_01CDA218_0x1cda218(rdram, ctx, runtime); return;
    ctx->pc = 0x1CDB4A0u;
}
