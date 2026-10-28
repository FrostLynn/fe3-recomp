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

// Function: sub_01DBC370
// Address: 0x1dbc370 - 0x1dbc470
void sub_01DBC370_0x1dbc370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBC370_0x1dbc370");
#endif

    switch (ctx->pc) {
        case 0x1dbc3a0u: goto label_1dbc3a0;
        case 0x1dbc3d0u: goto label_1dbc3d0;
        case 0x1dbc3e0u: goto label_1dbc3e0;
        case 0x1dbc3f0u: goto label_1dbc3f0;
        case 0x1dbc448u: goto label_1dbc448;
        default: break;
    }

    ctx->pc = 0x1dbc370u;

    // 0x1dbc370: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dbc370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dbc374: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dbc374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dbc378: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1dbc378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1dbc37c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dbc37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dbc380: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1dbc380u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbc384: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1dbc384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1dbc388: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1dbc388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1dbc38c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1dbc38cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbc390: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1dbc390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1dbc394: 0x26130060  addiu       $s3, $s0, 0x60
    ctx->pc = 0x1dbc394u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1dbc398: 0xc76ee58  jal         func_1DBB960
    ctx->pc = 0x1DBC398u;
    SET_GPR_U32(ctx, 31, 0x1DBC3A0u);
    ctx->pc = 0x1DBC39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBC398u;
    // 0x1dbc39c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB960u, 0x1DBC398u, 0x1DBC3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBC3A0u;
label_1dbc3a0:
    // 0x1dbc3a0: 0x24520200  addiu       $s2, $v0, 0x200
    ctx->pc = 0x1dbc3a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1dbc3a4: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x1dbc3a4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1dbc3a8: 0x8e4e004c  lw          $t6, 0x4C($s2)
    ctx->pc = 0x1dbc3a8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1dbc3ac: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1dbc3acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1dbc3b0: 0xae0f0088  sw          $t7, 0x88($s0)
    ctx->pc = 0x1dbc3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 15));
    // 0x1dbc3b4: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1dbc3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1dbc3b8: 0x8e2f0008  lw          $t7, 0x8($s1)
    ctx->pc = 0x1dbc3b8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1dbc3bc: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1dbc3bcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1dbc3c0: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1dbc3c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1dbc3c4: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1dbc3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1dbc3c8: 0xc76ee46  jal         func_1DBB918
    ctx->pc = 0x1DBC3C8u;
    SET_GPR_U32(ctx, 31, 0x1DBC3D0u);
    ctx->pc = 0x1DBC3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBC3C8u;
    // 0x1dbc3cc: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB918u, 0x1DBC3C8u, 0x1DBC3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBC3D0u;
label_1dbc3d0:
    // 0x1dbc3d0: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x1dbc3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1dbc3d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1dbc3d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbc3d8: 0xc76ee46  jal         func_1DBB918
    ctx->pc = 0x1DBC3D8u;
    SET_GPR_U32(ctx, 31, 0x1DBC3E0u);
    ctx->pc = 0x1DBC3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBC3D8u;
    // 0x1dbc3dc: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB918u, 0x1DBC3D8u, 0x1DBC3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBC3E0u;
label_1dbc3e0:
    // 0x1dbc3e0: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x1dbc3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x1dbc3e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1dbc3e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbc3e8: 0xc76ee48  jal         func_1DBB920
    ctx->pc = 0x1DBC3E8u;
    SET_GPR_U32(ctx, 31, 0x1DBC3F0u);
    ctx->pc = 0x1DBC3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBC3E8u;
    // 0x1dbc3ec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB920u, 0x1DBC3E8u, 0x1DBC3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBC3F0u;
label_1dbc3f0:
    // 0x1dbc3f0: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1dbc3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbc3f4: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1dbc3f4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1dbc3f8: 0x8e2e0000  lw          $t6, 0x0($s1)
    ctx->pc = 0x1dbc3f8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1dbc3fc: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x1dbc3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x1dbc400: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x1dbc400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x1dbc404: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x1dbc404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1dbc408: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x1dbc408u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1dbc40c: 0x8e2d001c  lw          $t5, 0x1C($s1)
    ctx->pc = 0x1dbc40cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1dbc410: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1dbc410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbc414: 0xae0d0084  sw          $t5, 0x84($s0)
    ctx->pc = 0x1dbc414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 13));
    // 0x1dbc418: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x1dbc418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x1dbc41c: 0x8e4f00b4  lw          $t7, 0xB4($s2)
    ctx->pc = 0x1dbc41cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1dbc420: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1dbc420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbc424: 0x8e2d0020  lw          $t5, 0x20($s1)
    ctx->pc = 0x1dbc424u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1dbc428: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1dbc428u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1dbc42c: 0xe600007c  swc1        $f0, 0x7C($s0)
    ctx->pc = 0x1dbc42cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x1dbc430: 0xae0f0078  sw          $t7, 0x78($s0)
    ctx->pc = 0x1dbc430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 15));
    // 0x1dbc434: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1dbc434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbc438: 0xae0d008c  sw          $t5, 0x8C($s0)
    ctx->pc = 0x1dbc438u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 13));
    // 0x1dbc43c: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x1dbc43cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x1dbc440: 0xc76ee46  jal         func_1DBB918
    ctx->pc = 0x1DBC440u;
    SET_GPR_U32(ctx, 31, 0x1DBC448u);
    ctx->pc = 0x1DBC444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBC440u;
    // 0x1dbc444: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB918u, 0x1DBC440u, 0x1DBC448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBC448u;
label_1dbc448:
    // 0x1dbc448: 0x261000b0  addiu       $s0, $s0, 0xB0
    ctx->pc = 0x1dbc448u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x1dbc44c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dbc44cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbc450: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dbc450u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dbc454: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1dbc454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbc458: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dbc458u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbc45c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dbc45cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dbc460: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1dbc460u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dbc464: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1dbc464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dbc468: 0x876ee46  j           func_1DBB918
    ctx->pc = 0x1DBC468u;
    ctx->pc = 0x1DBC46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBC468u;
    // 0x1dbc46c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB918u;
    sub_01DBB918_0x1dbb918(rdram, ctx, runtime); return;
    ctx->pc = 0x1DBC470u;
}
