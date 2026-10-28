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

// Function: sub_01CFE3C8
// Address: 0x1cfe3c8 - 0x1cfe4c8
void sub_01CFE3C8_0x1cfe3c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFE3C8_0x1cfe3c8");
#endif

    switch (ctx->pc) {
        case 0x1cfe3f8u: goto label_1cfe3f8;
        case 0x1cfe428u: goto label_1cfe428;
        case 0x1cfe438u: goto label_1cfe438;
        case 0x1cfe448u: goto label_1cfe448;
        case 0x1cfe4a0u: goto label_1cfe4a0;
        default: break;
    }

    ctx->pc = 0x1cfe3c8u;

    // 0x1cfe3c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cfe3c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cfe3cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cfe3ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cfe3d0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cfe3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1cfe3d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cfe3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cfe3d8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1cfe3d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe3dc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cfe3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cfe3e0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1cfe3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1cfe3e4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1cfe3e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe3e8: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cfe3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cfe3ec: 0x26130060  addiu       $s3, $s0, 0x60
    ctx->pc = 0x1cfe3ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1cfe3f0: 0xc73f49a  jal         func_1CFD268
    ctx->pc = 0x1CFE3F0u;
    SET_GPR_U32(ctx, 31, 0x1CFE3F8u);
    ctx->pc = 0x1CFE3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE3F0u;
    // 0x1cfe3f4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD268u, 0x1CFE3F0u, 0x1CFE3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE3F8u;
label_1cfe3f8:
    // 0x1cfe3f8: 0x24520200  addiu       $s2, $v0, 0x200
    ctx->pc = 0x1cfe3f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1cfe3fc: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x1cfe3fcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1cfe400: 0x8e4e004c  lw          $t6, 0x4C($s2)
    ctx->pc = 0x1cfe400u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1cfe404: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1cfe404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1cfe408: 0xae0f0088  sw          $t7, 0x88($s0)
    ctx->pc = 0x1cfe408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 15));
    // 0x1cfe40c: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1cfe40cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1cfe410: 0x8e2f0008  lw          $t7, 0x8($s1)
    ctx->pc = 0x1cfe410u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1cfe414: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1cfe414u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1cfe418: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1cfe418u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1cfe41c: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1cfe41cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1cfe420: 0xc73f486  jal         func_1CFD218
    ctx->pc = 0x1CFE420u;
    SET_GPR_U32(ctx, 31, 0x1CFE428u);
    ctx->pc = 0x1CFE424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE420u;
    // 0x1cfe424: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD218u, 0x1CFE420u, 0x1CFE428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE428u;
label_1cfe428:
    // 0x1cfe428: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x1cfe428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1cfe42c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cfe42cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe430: 0xc73f486  jal         func_1CFD218
    ctx->pc = 0x1CFE430u;
    SET_GPR_U32(ctx, 31, 0x1CFE438u);
    ctx->pc = 0x1CFE434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE430u;
    // 0x1cfe434: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD218u, 0x1CFE430u, 0x1CFE438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE438u;
label_1cfe438:
    // 0x1cfe438: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x1cfe438u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x1cfe43c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cfe43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe440: 0xc73f48c  jal         func_1CFD230
    ctx->pc = 0x1CFE440u;
    SET_GPR_U32(ctx, 31, 0x1CFE448u);
    ctx->pc = 0x1CFE444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE440u;
    // 0x1cfe444: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD230u, 0x1CFE440u, 0x1CFE448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE448u;
label_1cfe448:
    // 0x1cfe448: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1cfe448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cfe44c: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1cfe44cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1cfe450: 0x8e2e0000  lw          $t6, 0x0($s1)
    ctx->pc = 0x1cfe450u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cfe454: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x1cfe454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x1cfe458: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x1cfe458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x1cfe45c: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x1cfe45cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1cfe460: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x1cfe460u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1cfe464: 0x8e2d001c  lw          $t5, 0x1C($s1)
    ctx->pc = 0x1cfe464u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1cfe468: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1cfe468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cfe46c: 0xae0d0084  sw          $t5, 0x84($s0)
    ctx->pc = 0x1cfe46cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 13));
    // 0x1cfe470: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x1cfe470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x1cfe474: 0x8e4f00b4  lw          $t7, 0xB4($s2)
    ctx->pc = 0x1cfe474u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1cfe478: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1cfe478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cfe47c: 0x8e2d0020  lw          $t5, 0x20($s1)
    ctx->pc = 0x1cfe47cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1cfe480: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1cfe480u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1cfe484: 0xe600007c  swc1        $f0, 0x7C($s0)
    ctx->pc = 0x1cfe484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x1cfe488: 0xae0f0078  sw          $t7, 0x78($s0)
    ctx->pc = 0x1cfe488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 15));
    // 0x1cfe48c: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1cfe48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cfe490: 0xae0d008c  sw          $t5, 0x8C($s0)
    ctx->pc = 0x1cfe490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 13));
    // 0x1cfe494: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x1cfe494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x1cfe498: 0xc73f486  jal         func_1CFD218
    ctx->pc = 0x1CFE498u;
    SET_GPR_U32(ctx, 31, 0x1CFE4A0u);
    ctx->pc = 0x1CFE49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE498u;
    // 0x1cfe49c: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD218u, 0x1CFE498u, 0x1CFE4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE4A0u;
label_1cfe4a0:
    // 0x1cfe4a0: 0x261000b0  addiu       $s0, $s0, 0xB0
    ctx->pc = 0x1cfe4a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x1cfe4a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cfe4a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe4a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cfe4a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cfe4ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cfe4acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe4b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cfe4b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cfe4b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cfe4b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cfe4b8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1cfe4b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cfe4bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cfe4bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cfe4c0: 0x873f486  j           func_1CFD218
    ctx->pc = 0x1CFE4C0u;
    ctx->pc = 0x1CFE4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE4C0u;
    // 0x1cfe4c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD218u;
    sub_01CFD218_0x1cfd218(rdram, ctx, runtime); return;
    ctx->pc = 0x1CFE4C8u;
}
