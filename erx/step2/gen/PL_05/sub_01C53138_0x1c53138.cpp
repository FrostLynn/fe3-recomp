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

// Function: sub_01C53138
// Address: 0x1c53138 - 0x1c53258
void sub_01C53138_0x1c53138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C53138_0x1c53138");
#endif

    switch (ctx->pc) {
        case 0x1c53178u: goto label_1c53178;
        case 0x1c53188u: goto label_1c53188;
        case 0x1c531b4u: goto label_1c531b4;
        case 0x1c531e0u: goto label_1c531e0;
        case 0x1c531ecu: goto label_1c531ec;
        default: break;
    }

    ctx->pc = 0x1c53138u;

    // 0x1c53138: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c53138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c5313c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c5313cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c53140: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c53140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c53144: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c53144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c53148: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c53148u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5314c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c5314cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c53150: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c53150u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c53154: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c53154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c53158: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1c53158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1c5315c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1c5315cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c53160: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1c53160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1c53164: 0x24140390  addiu       $s4, $zero, 0x390
    ctx->pc = 0x1c53164u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1c53168: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c53168u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c5316c: 0x26550010  addiu       $s5, $s2, 0x10
    ctx->pc = 0x1c5316cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1c53170: 0xc713e62  jal         func_1C4F988
    ctx->pc = 0x1C53170u;
    SET_GPR_U32(ctx, 31, 0x1C53178u);
    ctx->pc = 0x1C53174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C53170u;
    // 0x1c53174: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F988u, 0x1C53170u, 0x1C53178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C53178u;
label_1c53178:
    // 0x1c53178: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c53178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c5317c: 0x24530200  addiu       $s3, $v0, 0x200
    ctx->pc = 0x1c5317cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1c53180: 0xc713e64  jal         func_1C4F990
    ctx->pc = 0x1C53180u;
    SET_GPR_U32(ctx, 31, 0x1C53188u);
    ctx->pc = 0x1C53184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C53180u;
    // 0x1c53184: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F990u, 0x1C53180u, 0x1C53188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C53188u;
label_1c53188:
    // 0x1c53188: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x1c53188u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c5318c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c5318cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c53190: 0x8e6e004c  lw          $t6, 0x4C($s3)
    ctx->pc = 0x1c53190u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x1c53194: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c53194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c53198: 0xae4f0034  sw          $t7, 0x34($s2)
    ctx->pc = 0x1c53198u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 15));
    // 0x1c5319c: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1c5319cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1c531a0: 0x8e2f0008  lw          $t7, 0x8($s1)
    ctx->pc = 0x1c531a0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1c531a4: 0x1f47818  mult        $t7, $t7, $s4
    ctx->pc = 0x1c531a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1c531a8: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1c531a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1c531ac: 0xc713e46  jal         func_1C4F918
    ctx->pc = 0x1C531ACu;
    SET_GPR_U32(ctx, 31, 0x1C531B4u);
    ctx->pc = 0x1C531B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C531ACu;
    // 0x1c531b0: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F918u, 0x1C531ACu, 0x1C531B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C531B4u;
label_1c531b4:
    // 0x1c531b4: 0x8e2f0008  lw          $t7, 0x8($s1)
    ctx->pc = 0x1c531b4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1c531b8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c531b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c531bc: 0x8e6d004c  lw          $t5, 0x4C($s3)
    ctx->pc = 0x1c531bcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x1c531c0: 0x1f47818  mult        $t7, $t7, $s4
    ctx->pc = 0x1c531c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1c531c4: 0x8e0e024c  lw          $t6, 0x24C($s0)
    ctx->pc = 0x1c531c4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 588)));
    // 0x1c531c8: 0x8da60084  lw          $a2, 0x84($t5)
    ctx->pc = 0x1c531c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 132)));
    // 0x1c531cc: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1c531ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1c531d0: 0xcf3021  addu        $a2, $a2, $t7
    ctx->pc = 0x1c531d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 15)));
    // 0x1c531d4: 0x24a50110  addiu       $a1, $a1, 0x110
    ctx->pc = 0x1c531d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    // 0x1c531d8: 0xc713e4a  jal         func_1C4F928
    ctx->pc = 0x1C531D8u;
    SET_GPR_U32(ctx, 31, 0x1C531E0u);
    ctx->pc = 0x1C531DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C531D8u;
    // 0x1c531dc: 0x24c60110  addiu       $a2, $a2, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F928u, 0x1C531D8u, 0x1C531E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C531E0u;
label_1c531e0:
    // 0x1c531e0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c531e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c531e4: 0xc713e4c  jal         func_1C4F930
    ctx->pc = 0x1C531E4u;
    SET_GPR_U32(ctx, 31, 0x1C531ECu);
    ctx->pc = 0x1C531E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C531E4u;
    // 0x1c531e8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F930u, 0x1C531E4u, 0x1C531ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C531ECu;
label_1c531ec:
    // 0x1c531ec: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1c531ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c531f0: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1c531f0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c531f4: 0x8e2d0000  lw          $t5, 0x0($s1)
    ctx->pc = 0x1c531f4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c531f8: 0x26440040  addiu       $a0, $s2, 0x40
    ctx->pc = 0x1c531f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x1c531fc: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x1c531fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x1c53200: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1c53200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1c53204: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1c53204u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1c53208: 0x8e6e00b4  lw          $t6, 0xB4($s3)
    ctx->pc = 0x1c53208u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
    // 0x1c5320c: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1c5320cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c53210: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c53210u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c53214: 0xe6400024  swc1        $f0, 0x24($s2)
    ctx->pc = 0x1c53214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    // 0x1c53218: 0x8e2f001c  lw          $t7, 0x1C($s1)
    ctx->pc = 0x1c53218u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1c5321c: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x1c5321cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1c53220: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x1c53220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c53224: 0xae4f0038  sw          $t7, 0x38($s2)
    ctx->pc = 0x1c53224u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 15));
    // 0x1c53228: 0xe641002c  swc1        $f1, 0x2C($s2)
    ctx->pc = 0x1c53228u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 44), bits); }
    // 0x1c5322c: 0xae4e0028  sw          $t6, 0x28($s2)
    ctx->pc = 0x1c5322cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 14));
    // 0x1c53230: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1c53230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c53234: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c53234u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c53238: 0xe6400030  swc1        $f0, 0x30($s2)
    ctx->pc = 0x1c53238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x1c5323c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c5323cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c53240: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c53240u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c53244: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c53244u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c53248: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1c53248u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c5324c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c5324cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c53250: 0x8713e46  j           func_1C4F918
    ctx->pc = 0x1C53250u;
    ctx->pc = 0x1C53254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C53250u;
    // 0x1c53254: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F918u;
    sub_01C4F918_0x1c4f918(rdram, ctx, runtime); return;
    ctx->pc = 0x1C53258u;
}
