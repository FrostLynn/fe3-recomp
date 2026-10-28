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

// Function: sub_01CFE2E0
// Address: 0x1cfe2e0 - 0x1cfe3c8
void sub_01CFE2E0_0x1cfe2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFE2E0_0x1cfe2e0");
#endif

    switch (ctx->pc) {
        case 0x1cfe310u: goto label_1cfe310;
        case 0x1cfe340u: goto label_1cfe340;
        case 0x1cfe350u: goto label_1cfe350;
        case 0x1cfe360u: goto label_1cfe360;
        default: break;
    }

    ctx->pc = 0x1cfe2e0u;

    // 0x1cfe2e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cfe2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cfe2e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cfe2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cfe2e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cfe2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1cfe2ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cfe2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cfe2f0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1cfe2f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe2f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cfe2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cfe2f8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1cfe2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1cfe2fc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1cfe2fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe300: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cfe300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cfe304: 0x26130010  addiu       $s3, $s0, 0x10
    ctx->pc = 0x1cfe304u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1cfe308: 0xc73f49a  jal         func_1CFD268
    ctx->pc = 0x1CFE308u;
    SET_GPR_U32(ctx, 31, 0x1CFE310u);
    ctx->pc = 0x1CFE30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE308u;
    // 0x1cfe30c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD268u, 0x1CFE308u, 0x1CFE310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE310u;
label_1cfe310:
    // 0x1cfe310: 0x24520200  addiu       $s2, $v0, 0x200
    ctx->pc = 0x1cfe310u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1cfe314: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x1cfe314u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1cfe318: 0x8e4e004c  lw          $t6, 0x4C($s2)
    ctx->pc = 0x1cfe318u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1cfe31c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cfe31cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe320: 0xae0f0034  sw          $t7, 0x34($s0)
    ctx->pc = 0x1cfe320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 15));
    // 0x1cfe324: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1cfe324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1cfe328: 0x8e2f0008  lw          $t7, 0x8($s1)
    ctx->pc = 0x1cfe328u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1cfe32c: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1cfe32cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1cfe330: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1cfe330u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1cfe334: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1cfe334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1cfe338: 0xc73f486  jal         func_1CFD218
    ctx->pc = 0x1CFE338u;
    SET_GPR_U32(ctx, 31, 0x1CFE340u);
    ctx->pc = 0x1CFE33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE338u;
    // 0x1cfe33c: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD218u, 0x1CFE338u, 0x1CFE340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE340u;
label_1cfe340:
    // 0x1cfe340: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x1cfe340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1cfe344: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cfe344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe348: 0xc73f486  jal         func_1CFD218
    ctx->pc = 0x1CFE348u;
    SET_GPR_U32(ctx, 31, 0x1CFE350u);
    ctx->pc = 0x1CFE34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE348u;
    // 0x1cfe34c: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD218u, 0x1CFE348u, 0x1CFE350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE350u;
label_1cfe350:
    // 0x1cfe350: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1cfe350u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1cfe354: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cfe354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe358: 0xc73f48c  jal         func_1CFD230
    ctx->pc = 0x1CFE358u;
    SET_GPR_U32(ctx, 31, 0x1CFE360u);
    ctx->pc = 0x1CFE35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE358u;
    // 0x1cfe35c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD230u, 0x1CFE358u, 0x1CFE360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE360u;
label_1cfe360:
    // 0x1cfe360: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1cfe360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cfe364: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1cfe364u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1cfe368: 0x8e2d0000  lw          $t5, 0x0($s1)
    ctx->pc = 0x1cfe368u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cfe36c: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1cfe36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1cfe370: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1cfe370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1cfe374: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1cfe374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1cfe378: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1cfe378u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1cfe37c: 0x8e4e00b4  lw          $t6, 0xB4($s2)
    ctx->pc = 0x1cfe37cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1cfe380: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1cfe380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cfe384: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cfe384u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cfe388: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x1cfe388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1cfe38c: 0x8e2f001c  lw          $t7, 0x1C($s1)
    ctx->pc = 0x1cfe38cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1cfe390: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x1cfe390u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1cfe394: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x1cfe394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cfe398: 0xae0f0038  sw          $t7, 0x38($s0)
    ctx->pc = 0x1cfe398u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 15));
    // 0x1cfe39c: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x1cfe39cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1cfe3a0: 0xae0e0028  sw          $t6, 0x28($s0)
    ctx->pc = 0x1cfe3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 14));
    // 0x1cfe3a4: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1cfe3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cfe3a8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1cfe3a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cfe3ac: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1cfe3acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1cfe3b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cfe3b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cfe3b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cfe3b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cfe3b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cfe3b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cfe3bc: 0x873f486  j           func_1CFD218
    ctx->pc = 0x1CFE3BCu;
    ctx->pc = 0x1CFE3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE3BCu;
    // 0x1cfe3c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD218u;
    sub_01CFD218_0x1cfd218(rdram, ctx, runtime); return;
    ctx->pc = 0x1CFE3C4u;
    // 0x1cfe3c4: 0x0  nop
    ctx->pc = 0x1cfe3c4u;
    // NOP
    ctx->pc = 0x1cfe3c8u;
}
