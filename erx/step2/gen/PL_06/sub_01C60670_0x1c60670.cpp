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

// Function: sub_01C60670
// Address: 0x1c60670 - 0x1c60770
void sub_01C60670_0x1c60670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C60670_0x1c60670");
#endif

    switch (ctx->pc) {
        case 0x1c606a0u: goto label_1c606a0;
        case 0x1c606d0u: goto label_1c606d0;
        case 0x1c606e0u: goto label_1c606e0;
        case 0x1c606f0u: goto label_1c606f0;
        case 0x1c60748u: goto label_1c60748;
        default: break;
    }

    ctx->pc = 0x1c60670u;

    // 0x1c60670: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c60670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c60674: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c60674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c60678: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c60678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c6067c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c6067cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c60680: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c60680u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c60684: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c60684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c60688: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c60688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c6068c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1c6068cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c60690: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c60690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c60694: 0x26130060  addiu       $s3, $s0, 0x60
    ctx->pc = 0x1c60694u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1c60698: 0xc717d56  jal         func_1C5F558
    ctx->pc = 0x1C60698u;
    SET_GPR_U32(ctx, 31, 0x1C606A0u);
    ctx->pc = 0x1C6069Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C60698u;
    // 0x1c6069c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F558u, 0x1C60698u, 0x1C606A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C606A0u;
label_1c606a0:
    // 0x1c606a0: 0x24520200  addiu       $s2, $v0, 0x200
    ctx->pc = 0x1c606a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1c606a4: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x1c606a4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c606a8: 0x8e4e004c  lw          $t6, 0x4C($s2)
    ctx->pc = 0x1c606a8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1c606ac: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1c606acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1c606b0: 0xae0f0088  sw          $t7, 0x88($s0)
    ctx->pc = 0x1c606b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 15));
    // 0x1c606b4: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1c606b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1c606b8: 0x8e2f0008  lw          $t7, 0x8($s1)
    ctx->pc = 0x1c606b8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1c606bc: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1c606bcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1c606c0: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1c606c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1c606c4: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1c606c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1c606c8: 0xc717d46  jal         func_1C5F518
    ctx->pc = 0x1C606C8u;
    SET_GPR_U32(ctx, 31, 0x1C606D0u);
    ctx->pc = 0x1C606CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C606C8u;
    // 0x1c606cc: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F518u, 0x1C606C8u, 0x1C606D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C606D0u;
label_1c606d0:
    // 0x1c606d0: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x1c606d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1c606d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c606d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c606d8: 0xc717d46  jal         func_1C5F518
    ctx->pc = 0x1C606D8u;
    SET_GPR_U32(ctx, 31, 0x1C606E0u);
    ctx->pc = 0x1C606DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C606D8u;
    // 0x1c606dc: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F518u, 0x1C606D8u, 0x1C606E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C606E0u;
label_1c606e0:
    // 0x1c606e0: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x1c606e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x1c606e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c606e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c606e8: 0xc717d48  jal         func_1C5F520
    ctx->pc = 0x1C606E8u;
    SET_GPR_U32(ctx, 31, 0x1C606F0u);
    ctx->pc = 0x1C606ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C606E8u;
    // 0x1c606ec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F520u, 0x1C606E8u, 0x1C606F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C606F0u;
label_1c606f0:
    // 0x1c606f0: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1c606f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c606f4: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1c606f4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c606f8: 0x8e2e0000  lw          $t6, 0x0($s1)
    ctx->pc = 0x1c606f8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c606fc: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x1c606fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x1c60700: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x1c60700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x1c60704: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x1c60704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1c60708: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x1c60708u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1c6070c: 0x8e2d001c  lw          $t5, 0x1C($s1)
    ctx->pc = 0x1c6070cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1c60710: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1c60710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c60714: 0xae0d0084  sw          $t5, 0x84($s0)
    ctx->pc = 0x1c60714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 13));
    // 0x1c60718: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x1c60718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x1c6071c: 0x8e4f00b4  lw          $t7, 0xB4($s2)
    ctx->pc = 0x1c6071cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1c60720: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1c60720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c60724: 0x8e2d0020  lw          $t5, 0x20($s1)
    ctx->pc = 0x1c60724u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1c60728: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1c60728u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1c6072c: 0xe600007c  swc1        $f0, 0x7C($s0)
    ctx->pc = 0x1c6072cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x1c60730: 0xae0f0078  sw          $t7, 0x78($s0)
    ctx->pc = 0x1c60730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 15));
    // 0x1c60734: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1c60734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c60738: 0xae0d008c  sw          $t5, 0x8C($s0)
    ctx->pc = 0x1c60738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 13));
    // 0x1c6073c: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x1c6073cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x1c60740: 0xc717d46  jal         func_1C5F518
    ctx->pc = 0x1C60740u;
    SET_GPR_U32(ctx, 31, 0x1C60748u);
    ctx->pc = 0x1C60744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C60740u;
    // 0x1c60744: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F518u, 0x1C60740u, 0x1C60748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C60748u;
label_1c60748:
    // 0x1c60748: 0x261000b0  addiu       $s0, $s0, 0xB0
    ctx->pc = 0x1c60748u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x1c6074c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6074cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c60750: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c60750u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c60754: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c60754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c60758: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c60758u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6075c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c6075cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c60760: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c60760u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c60764: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c60764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c60768: 0x8717d46  j           func_1C5F518
    ctx->pc = 0x1C60768u;
    ctx->pc = 0x1C6076Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C60768u;
    // 0x1c6076c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F518u;
    sub_01C5F518_0x1c5f518(rdram, ctx, runtime); return;
    ctx->pc = 0x1C60770u;
}
