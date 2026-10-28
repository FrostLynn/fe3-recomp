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

// Function: sub_01DB2078
// Address: 0x1db2078 - 0x1db2178
void sub_01DB2078_0x1db2078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB2078_0x1db2078");
#endif

    switch (ctx->pc) {
        case 0x1db20a8u: goto label_1db20a8;
        case 0x1db20d8u: goto label_1db20d8;
        case 0x1db20e8u: goto label_1db20e8;
        case 0x1db20f8u: goto label_1db20f8;
        case 0x1db2150u: goto label_1db2150;
        default: break;
    }

    ctx->pc = 0x1db2078u;

    // 0x1db2078: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1db2078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1db207c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1db207cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1db2080: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1db2080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1db2084: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1db2084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1db2088: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1db2088u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db208c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1db208cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1db2090: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1db2090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1db2094: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1db2094u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2098: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1db2098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1db209c: 0x26130060  addiu       $s3, $s0, 0x60
    ctx->pc = 0x1db209cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1db20a0: 0xc76c3d6  jal         func_1DB0F58
    ctx->pc = 0x1DB20A0u;
    SET_GPR_U32(ctx, 31, 0x1DB20A8u);
    ctx->pc = 0x1DB20A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB20A0u;
    // 0x1db20a4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F58u, 0x1DB20A0u, 0x1DB20A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB20A8u;
label_1db20a8:
    // 0x1db20a8: 0x24520200  addiu       $s2, $v0, 0x200
    ctx->pc = 0x1db20a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1db20ac: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x1db20acu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1db20b0: 0x8e4e004c  lw          $t6, 0x4C($s2)
    ctx->pc = 0x1db20b0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1db20b4: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1db20b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1db20b8: 0xae0f0088  sw          $t7, 0x88($s0)
    ctx->pc = 0x1db20b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 15));
    // 0x1db20bc: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1db20bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1db20c0: 0x8e2f0008  lw          $t7, 0x8($s1)
    ctx->pc = 0x1db20c0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1db20c4: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1db20c4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1db20c8: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1db20c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1db20cc: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1db20ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1db20d0: 0xc76c3c6  jal         func_1DB0F18
    ctx->pc = 0x1DB20D0u;
    SET_GPR_U32(ctx, 31, 0x1DB20D8u);
    ctx->pc = 0x1DB20D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB20D0u;
    // 0x1db20d4: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F18u, 0x1DB20D0u, 0x1DB20D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB20D8u;
label_1db20d8:
    // 0x1db20d8: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x1db20d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1db20dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1db20dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db20e0: 0xc76c3c6  jal         func_1DB0F18
    ctx->pc = 0x1DB20E0u;
    SET_GPR_U32(ctx, 31, 0x1DB20E8u);
    ctx->pc = 0x1DB20E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB20E0u;
    // 0x1db20e4: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F18u, 0x1DB20E0u, 0x1DB20E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB20E8u;
label_1db20e8:
    // 0x1db20e8: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x1db20e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x1db20ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1db20ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db20f0: 0xc76c3c8  jal         func_1DB0F20
    ctx->pc = 0x1DB20F0u;
    SET_GPR_U32(ctx, 31, 0x1DB20F8u);
    ctx->pc = 0x1DB20F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB20F0u;
    // 0x1db20f4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F20u, 0x1DB20F0u, 0x1DB20F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB20F8u;
label_1db20f8:
    // 0x1db20f8: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1db20f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db20fc: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1db20fcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1db2100: 0x8e2e0000  lw          $t6, 0x0($s1)
    ctx->pc = 0x1db2100u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1db2104: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x1db2104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x1db2108: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x1db2108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x1db210c: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x1db210cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1db2110: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x1db2110u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1db2114: 0x8e2d001c  lw          $t5, 0x1C($s1)
    ctx->pc = 0x1db2114u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1db2118: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1db2118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db211c: 0xae0d0084  sw          $t5, 0x84($s0)
    ctx->pc = 0x1db211cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 13));
    // 0x1db2120: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x1db2120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x1db2124: 0x8e4f00b4  lw          $t7, 0xB4($s2)
    ctx->pc = 0x1db2124u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1db2128: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1db2128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db212c: 0x8e2d0020  lw          $t5, 0x20($s1)
    ctx->pc = 0x1db212cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1db2130: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1db2130u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1db2134: 0xe600007c  swc1        $f0, 0x7C($s0)
    ctx->pc = 0x1db2134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x1db2138: 0xae0f0078  sw          $t7, 0x78($s0)
    ctx->pc = 0x1db2138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 15));
    // 0x1db213c: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1db213cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db2140: 0xae0d008c  sw          $t5, 0x8C($s0)
    ctx->pc = 0x1db2140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 13));
    // 0x1db2144: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x1db2144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x1db2148: 0xc76c3c6  jal         func_1DB0F18
    ctx->pc = 0x1DB2148u;
    SET_GPR_U32(ctx, 31, 0x1DB2150u);
    ctx->pc = 0x1DB214Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB2148u;
    // 0x1db214c: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F18u, 0x1DB2148u, 0x1DB2150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB2150u;
label_1db2150:
    // 0x1db2150: 0x261000b0  addiu       $s0, $s0, 0xB0
    ctx->pc = 0x1db2150u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x1db2154: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db2154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2158: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1db2158u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db215c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1db215cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2160: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1db2160u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db2164: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1db2164u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1db2168: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1db2168u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1db216c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1db216cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1db2170: 0x876c3c6  j           func_1DB0F18
    ctx->pc = 0x1DB2170u;
    ctx->pc = 0x1DB2174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB2170u;
    // 0x1db2174: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F18u;
    sub_01DB0F18_0x1db0f18(rdram, ctx, runtime); return;
    ctx->pc = 0x1DB2178u;
}
