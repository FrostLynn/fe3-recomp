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

// Function: sub_01D1A0E8
// Address: 0x1d1a0e8 - 0x1d1a1d0
void sub_01D1A0E8_0x1d1a0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D1A0E8_0x1d1a0e8");
#endif

    switch (ctx->pc) {
        case 0x1d1a118u: goto label_1d1a118;
        case 0x1d1a148u: goto label_1d1a148;
        case 0x1d1a158u: goto label_1d1a158;
        case 0x1d1a168u: goto label_1d1a168;
        default: break;
    }

    ctx->pc = 0x1d1a0e8u;

    // 0x1d1a0e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d1a0e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d1a0ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d1a0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d1a0f0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d1a0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d1a0f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d1a0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d1a0f8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d1a0f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1a0fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d1a0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d1a100: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d1a100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d1a104: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1d1a104u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1a108: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d1a108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d1a10c: 0x26130010  addiu       $s3, $s0, 0x10
    ctx->pc = 0x1d1a10cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1d1a110: 0xc74641a  jal         func_1D19068
    ctx->pc = 0x1D1A110u;
    SET_GPR_U32(ctx, 31, 0x1D1A118u);
    ctx->pc = 0x1D1A114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1A110u;
    // 0x1d1a114: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19068u, 0x1D1A110u, 0x1D1A118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1A118u;
label_1d1a118:
    // 0x1d1a118: 0x24520200  addiu       $s2, $v0, 0x200
    ctx->pc = 0x1d1a118u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1d1a11c: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x1d1a11cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1d1a120: 0x8e4e004c  lw          $t6, 0x4C($s2)
    ctx->pc = 0x1d1a120u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1d1a124: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1a124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1a128: 0xae0f0034  sw          $t7, 0x34($s0)
    ctx->pc = 0x1d1a128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 15));
    // 0x1d1a12c: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1d1a12cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1d1a130: 0x8e2f0008  lw          $t7, 0x8($s1)
    ctx->pc = 0x1d1a130u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1d1a134: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1d1a134u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1d1a138: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1d1a138u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1d1a13c: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1d1a13cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1d1a140: 0xc746406  jal         func_1D19018
    ctx->pc = 0x1D1A140u;
    SET_GPR_U32(ctx, 31, 0x1D1A148u);
    ctx->pc = 0x1D1A144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1A140u;
    // 0x1d1a144: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19018u, 0x1D1A140u, 0x1D1A148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1A148u;
label_1d1a148:
    // 0x1d1a148: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x1d1a148u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1d1a14c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d1a14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1a150: 0xc746406  jal         func_1D19018
    ctx->pc = 0x1D1A150u;
    SET_GPR_U32(ctx, 31, 0x1D1A158u);
    ctx->pc = 0x1D1A154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1A150u;
    // 0x1d1a154: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19018u, 0x1D1A150u, 0x1D1A158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1A158u;
label_1d1a158:
    // 0x1d1a158: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1d1a158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1d1a15c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d1a15cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1a160: 0xc74640c  jal         func_1D19030
    ctx->pc = 0x1D1A160u;
    SET_GPR_U32(ctx, 31, 0x1D1A168u);
    ctx->pc = 0x1D1A164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1A160u;
    // 0x1d1a164: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19030u, 0x1D1A160u, 0x1D1A168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1A168u;
label_1d1a168:
    // 0x1d1a168: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1d1a168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d1a16c: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1d1a16cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1d1a170: 0x8e2d0000  lw          $t5, 0x0($s1)
    ctx->pc = 0x1d1a170u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d1a174: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1d1a174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1d1a178: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1d1a178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1d1a17c: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1d1a17cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1d1a180: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1d1a180u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1d1a184: 0x8e4e00b4  lw          $t6, 0xB4($s2)
    ctx->pc = 0x1d1a184u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1d1a188: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1d1a188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d1a18c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d1a18cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d1a190: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x1d1a190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1d1a194: 0x8e2f001c  lw          $t7, 0x1C($s1)
    ctx->pc = 0x1d1a194u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1d1a198: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x1d1a198u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1d1a19c: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x1d1a19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d1a1a0: 0xae0f0038  sw          $t7, 0x38($s0)
    ctx->pc = 0x1d1a1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 15));
    // 0x1d1a1a4: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x1d1a1a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1d1a1a8: 0xae0e0028  sw          $t6, 0x28($s0)
    ctx->pc = 0x1d1a1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 14));
    // 0x1d1a1ac: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1d1a1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d1a1b0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d1a1b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d1a1b4: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1d1a1b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1d1a1b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d1a1b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d1a1bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d1a1bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1a1c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d1a1c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d1a1c4: 0x8746406  j           func_1D19018
    ctx->pc = 0x1D1A1C4u;
    ctx->pc = 0x1D1A1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1A1C4u;
    // 0x1d1a1c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19018u;
    sub_01D19018_0x1d19018(rdram, ctx, runtime); return;
    ctx->pc = 0x1D1A1CCu;
    // 0x1d1a1cc: 0x0  nop
    ctx->pc = 0x1d1a1ccu;
    // NOP
    ctx->pc = 0x1d1a1d0u;
}
