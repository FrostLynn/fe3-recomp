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

// Function: sub_01C202C0
// Address: 0x1c202c0 - 0x1c203c0
void sub_01C202C0_0x1c202c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C202C0_0x1c202c0");
#endif

    switch (ctx->pc) {
        case 0x1c202f0u: goto label_1c202f0;
        case 0x1c20320u: goto label_1c20320;
        case 0x1c20330u: goto label_1c20330;
        case 0x1c20340u: goto label_1c20340;
        case 0x1c20398u: goto label_1c20398;
        default: break;
    }

    ctx->pc = 0x1c202c0u;

    // 0x1c202c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c202c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c202c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c202c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c202c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c202c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c202cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c202ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c202d0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c202d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c202d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c202d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c202d8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c202d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c202dc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1c202dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c202e0: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c202e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c202e4: 0x26130060  addiu       $s3, $s0, 0x60
    ctx->pc = 0x1c202e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1c202e8: 0xc707c5a  jal         func_1C1F168
    ctx->pc = 0x1C202E8u;
    SET_GPR_U32(ctx, 31, 0x1C202F0u);
    ctx->pc = 0x1C202ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C202E8u;
    // 0x1c202ec: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F168u, 0x1C202E8u, 0x1C202F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C202F0u;
label_1c202f0:
    // 0x1c202f0: 0x24520200  addiu       $s2, $v0, 0x200
    ctx->pc = 0x1c202f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1c202f4: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x1c202f4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c202f8: 0x8e4e004c  lw          $t6, 0x4C($s2)
    ctx->pc = 0x1c202f8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1c202fc: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1c202fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1c20300: 0xae0f0088  sw          $t7, 0x88($s0)
    ctx->pc = 0x1c20300u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 15));
    // 0x1c20304: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1c20304u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1c20308: 0x8e2f0008  lw          $t7, 0x8($s1)
    ctx->pc = 0x1c20308u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1c2030c: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1c2030cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1c20310: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1c20310u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1c20314: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1c20314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1c20318: 0xc707c46  jal         func_1C1F118
    ctx->pc = 0x1C20318u;
    SET_GPR_U32(ctx, 31, 0x1C20320u);
    ctx->pc = 0x1C2031Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C20318u;
    // 0x1c2031c: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F118u, 0x1C20318u, 0x1C20320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20320u;
label_1c20320:
    // 0x1c20320: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x1c20320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1c20324: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c20324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20328: 0xc707c46  jal         func_1C1F118
    ctx->pc = 0x1C20328u;
    SET_GPR_U32(ctx, 31, 0x1C20330u);
    ctx->pc = 0x1C2032Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C20328u;
    // 0x1c2032c: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F118u, 0x1C20328u, 0x1C20330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20330u;
label_1c20330:
    // 0x1c20330: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x1c20330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x1c20334: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c20334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20338: 0xc707c4a  jal         func_1C1F128
    ctx->pc = 0x1C20338u;
    SET_GPR_U32(ctx, 31, 0x1C20340u);
    ctx->pc = 0x1C2033Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C20338u;
    // 0x1c2033c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F128u, 0x1C20338u, 0x1C20340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20340u;
label_1c20340:
    // 0x1c20340: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1c20340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c20344: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1c20344u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c20348: 0x8e2e0000  lw          $t6, 0x0($s1)
    ctx->pc = 0x1c20348u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c2034c: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x1c2034cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x1c20350: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x1c20350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x1c20354: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x1c20354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1c20358: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x1c20358u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1c2035c: 0x8e2d001c  lw          $t5, 0x1C($s1)
    ctx->pc = 0x1c2035cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1c20360: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1c20360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c20364: 0xae0d0084  sw          $t5, 0x84($s0)
    ctx->pc = 0x1c20364u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 13));
    // 0x1c20368: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x1c20368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x1c2036c: 0x8e4f00b4  lw          $t7, 0xB4($s2)
    ctx->pc = 0x1c2036cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1c20370: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1c20370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c20374: 0x8e2d0020  lw          $t5, 0x20($s1)
    ctx->pc = 0x1c20374u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1c20378: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1c20378u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1c2037c: 0xe600007c  swc1        $f0, 0x7C($s0)
    ctx->pc = 0x1c2037cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x1c20380: 0xae0f0078  sw          $t7, 0x78($s0)
    ctx->pc = 0x1c20380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 15));
    // 0x1c20384: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1c20384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c20388: 0xae0d008c  sw          $t5, 0x8C($s0)
    ctx->pc = 0x1c20388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 13));
    // 0x1c2038c: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x1c2038cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x1c20390: 0xc707c46  jal         func_1C1F118
    ctx->pc = 0x1C20390u;
    SET_GPR_U32(ctx, 31, 0x1C20398u);
    ctx->pc = 0x1C20394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C20390u;
    // 0x1c20394: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F118u, 0x1C20390u, 0x1C20398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20398u;
label_1c20398:
    // 0x1c20398: 0x261000b0  addiu       $s0, $s0, 0xB0
    ctx->pc = 0x1c20398u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x1c2039c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c2039cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c203a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c203a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c203a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c203a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c203a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c203a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c203ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c203acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c203b0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c203b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c203b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c203b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c203b8: 0x8707c46  j           func_1C1F118
    ctx->pc = 0x1C203B8u;
    ctx->pc = 0x1C203BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C203B8u;
    // 0x1c203bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F118u;
    sub_01C1F118_0x1c1f118(rdram, ctx, runtime); return;
    ctx->pc = 0x1C203C0u;
}
