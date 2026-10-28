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

// Function: sub_01C010B0
// Address: 0x1c010b0 - 0x1c01198
void sub_01C010B0_0x1c010b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C010B0_0x1c010b0");
#endif

    switch (ctx->pc) {
        case 0x1c010e0u: goto label_1c010e0;
        case 0x1c01110u: goto label_1c01110;
        case 0x1c01120u: goto label_1c01120;
        case 0x1c01130u: goto label_1c01130;
        default: break;
    }

    ctx->pc = 0x1c010b0u;

    // 0x1c010b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c010b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c010b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c010b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c010b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c010b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c010bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c010bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c010c0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c010c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c010c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c010c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c010c8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c010c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c010cc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1c010ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c010d0: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c010d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c010d4: 0x26130010  addiu       $s3, $s0, 0x10
    ctx->pc = 0x1c010d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1c010d8: 0xc700018  jal         func_1C00060
    ctx->pc = 0x1C010D8u;
    SET_GPR_U32(ctx, 31, 0x1C010E0u);
    ctx->pc = 0x1C010DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C010D8u;
    // 0x1c010dc: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00060u, 0x1C010D8u, 0x1C010E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C010E0u;
label_1c010e0:
    // 0x1c010e0: 0x24520200  addiu       $s2, $v0, 0x200
    ctx->pc = 0x1c010e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1c010e4: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x1c010e4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c010e8: 0x8e4e004c  lw          $t6, 0x4C($s2)
    ctx->pc = 0x1c010e8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1c010ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c010ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c010f0: 0xae0f0034  sw          $t7, 0x34($s0)
    ctx->pc = 0x1c010f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 15));
    // 0x1c010f4: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1c010f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1c010f8: 0x8e2f0008  lw          $t7, 0x8($s1)
    ctx->pc = 0x1c010f8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1c010fc: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1c010fcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1c01100: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1c01100u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1c01104: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1c01104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1c01108: 0xc700006  jal         func_1C00018
    ctx->pc = 0x1C01108u;
    SET_GPR_U32(ctx, 31, 0x1C01110u);
    ctx->pc = 0x1C0110Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C01108u;
    // 0x1c0110c: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00018u, 0x1C01108u, 0x1C01110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C01110u;
label_1c01110:
    // 0x1c01110: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x1c01110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1c01114: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c01114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c01118: 0xc700006  jal         func_1C00018
    ctx->pc = 0x1C01118u;
    SET_GPR_U32(ctx, 31, 0x1C01120u);
    ctx->pc = 0x1C0111Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C01118u;
    // 0x1c0111c: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00018u, 0x1C01118u, 0x1C01120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C01120u;
label_1c01120:
    // 0x1c01120: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1c01120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1c01124: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c01124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c01128: 0xc70000a  jal         func_1C00028
    ctx->pc = 0x1C01128u;
    SET_GPR_U32(ctx, 31, 0x1C01130u);
    ctx->pc = 0x1C0112Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C01128u;
    // 0x1c0112c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00028u, 0x1C01128u, 0x1C01130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C01130u;
label_1c01130:
    // 0x1c01130: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1c01130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c01134: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1c01134u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c01138: 0x8e2d0000  lw          $t5, 0x0($s1)
    ctx->pc = 0x1c01138u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c0113c: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1c0113cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1c01140: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1c01140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1c01144: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1c01144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1c01148: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1c01148u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1c0114c: 0x8e4e00b4  lw          $t6, 0xB4($s2)
    ctx->pc = 0x1c0114cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1c01150: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1c01150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c01154: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c01154u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c01158: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x1c01158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1c0115c: 0x8e2f001c  lw          $t7, 0x1C($s1)
    ctx->pc = 0x1c0115cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1c01160: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x1c01160u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1c01164: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x1c01164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c01168: 0xae0f0038  sw          $t7, 0x38($s0)
    ctx->pc = 0x1c01168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 15));
    // 0x1c0116c: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x1c0116cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1c01170: 0xae0e0028  sw          $t6, 0x28($s0)
    ctx->pc = 0x1c01170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 14));
    // 0x1c01174: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1c01174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c01178: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c01178u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c0117c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1c0117cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1c01180: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c01180u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c01184: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c01184u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c01188: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c01188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c0118c: 0x8700006  j           func_1C00018
    ctx->pc = 0x1C0118Cu;
    ctx->pc = 0x1C01190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0118Cu;
    // 0x1c01190: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00018u;
    sub_01C00018_0x1c00018(rdram, ctx, runtime); return;
    ctx->pc = 0x1C01194u;
    // 0x1c01194: 0x0  nop
    ctx->pc = 0x1c01194u;
    // NOP
    ctx->pc = 0x1c01198u;
}
