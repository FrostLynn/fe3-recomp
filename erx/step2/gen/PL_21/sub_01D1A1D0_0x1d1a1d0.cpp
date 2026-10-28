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

// Function: sub_01D1A1D0
// Address: 0x1d1a1d0 - 0x1d1a2d0
void sub_01D1A1D0_0x1d1a1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D1A1D0_0x1d1a1d0");
#endif

    switch (ctx->pc) {
        case 0x1d1a200u: goto label_1d1a200;
        case 0x1d1a230u: goto label_1d1a230;
        case 0x1d1a240u: goto label_1d1a240;
        case 0x1d1a250u: goto label_1d1a250;
        case 0x1d1a2a8u: goto label_1d1a2a8;
        default: break;
    }

    ctx->pc = 0x1d1a1d0u;

    // 0x1d1a1d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d1a1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d1a1d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d1a1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d1a1d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d1a1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d1a1dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d1a1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d1a1e0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d1a1e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1a1e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d1a1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d1a1e8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d1a1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d1a1ec: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1d1a1ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1a1f0: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d1a1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d1a1f4: 0x26130060  addiu       $s3, $s0, 0x60
    ctx->pc = 0x1d1a1f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1d1a1f8: 0xc74641a  jal         func_1D19068
    ctx->pc = 0x1D1A1F8u;
    SET_GPR_U32(ctx, 31, 0x1D1A200u);
    ctx->pc = 0x1D1A1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1A1F8u;
    // 0x1d1a1fc: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19068u, 0x1D1A1F8u, 0x1D1A200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1A200u;
label_1d1a200:
    // 0x1d1a200: 0x24520200  addiu       $s2, $v0, 0x200
    ctx->pc = 0x1d1a200u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1d1a204: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x1d1a204u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1d1a208: 0x8e4e004c  lw          $t6, 0x4C($s2)
    ctx->pc = 0x1d1a208u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1d1a20c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1d1a20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1d1a210: 0xae0f0088  sw          $t7, 0x88($s0)
    ctx->pc = 0x1d1a210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 15));
    // 0x1d1a214: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1d1a214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1d1a218: 0x8e2f0008  lw          $t7, 0x8($s1)
    ctx->pc = 0x1d1a218u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1d1a21c: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1d1a21cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1d1a220: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1d1a220u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1d1a224: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1d1a224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1d1a228: 0xc746406  jal         func_1D19018
    ctx->pc = 0x1D1A228u;
    SET_GPR_U32(ctx, 31, 0x1D1A230u);
    ctx->pc = 0x1D1A22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1A228u;
    // 0x1d1a22c: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19018u, 0x1D1A228u, 0x1D1A230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1A230u;
label_1d1a230:
    // 0x1d1a230: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x1d1a230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1d1a234: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d1a234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1a238: 0xc746406  jal         func_1D19018
    ctx->pc = 0x1D1A238u;
    SET_GPR_U32(ctx, 31, 0x1D1A240u);
    ctx->pc = 0x1D1A23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1A238u;
    // 0x1d1a23c: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19018u, 0x1D1A238u, 0x1D1A240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1A240u;
label_1d1a240:
    // 0x1d1a240: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x1d1a240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x1d1a244: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d1a244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1a248: 0xc74640c  jal         func_1D19030
    ctx->pc = 0x1D1A248u;
    SET_GPR_U32(ctx, 31, 0x1D1A250u);
    ctx->pc = 0x1D1A24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1A248u;
    // 0x1d1a24c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19030u, 0x1D1A248u, 0x1D1A250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1A250u;
label_1d1a250:
    // 0x1d1a250: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1d1a250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d1a254: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1d1a254u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1d1a258: 0x8e2e0000  lw          $t6, 0x0($s1)
    ctx->pc = 0x1d1a258u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d1a25c: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x1d1a25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x1d1a260: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x1d1a260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x1d1a264: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x1d1a264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1d1a268: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x1d1a268u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1d1a26c: 0x8e2d001c  lw          $t5, 0x1C($s1)
    ctx->pc = 0x1d1a26cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1d1a270: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1d1a270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d1a274: 0xae0d0084  sw          $t5, 0x84($s0)
    ctx->pc = 0x1d1a274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 13));
    // 0x1d1a278: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x1d1a278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x1d1a27c: 0x8e4f00b4  lw          $t7, 0xB4($s2)
    ctx->pc = 0x1d1a27cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1d1a280: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1d1a280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d1a284: 0x8e2d0020  lw          $t5, 0x20($s1)
    ctx->pc = 0x1d1a284u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1d1a288: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d1a288u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d1a28c: 0xe600007c  swc1        $f0, 0x7C($s0)
    ctx->pc = 0x1d1a28cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x1d1a290: 0xae0f0078  sw          $t7, 0x78($s0)
    ctx->pc = 0x1d1a290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 15));
    // 0x1d1a294: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1d1a294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d1a298: 0xae0d008c  sw          $t5, 0x8C($s0)
    ctx->pc = 0x1d1a298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 13));
    // 0x1d1a29c: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x1d1a29cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x1d1a2a0: 0xc746406  jal         func_1D19018
    ctx->pc = 0x1D1A2A0u;
    SET_GPR_U32(ctx, 31, 0x1D1A2A8u);
    ctx->pc = 0x1D1A2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1A2A0u;
    // 0x1d1a2a4: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19018u, 0x1D1A2A0u, 0x1D1A2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1A2A8u;
label_1d1a2a8:
    // 0x1d1a2a8: 0x261000b0  addiu       $s0, $s0, 0xB0
    ctx->pc = 0x1d1a2a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x1d1a2ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1a2acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1a2b0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d1a2b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d1a2b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d1a2b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1a2b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d1a2b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1a2bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d1a2bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d1a2c0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d1a2c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d1a2c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d1a2c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d1a2c8: 0x8746406  j           func_1D19018
    ctx->pc = 0x1D1A2C8u;
    ctx->pc = 0x1D1A2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1A2C8u;
    // 0x1d1a2cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19018u;
    sub_01D19018_0x1d19018(rdram, ctx, runtime); return;
    ctx->pc = 0x1D1A2D0u;
}
