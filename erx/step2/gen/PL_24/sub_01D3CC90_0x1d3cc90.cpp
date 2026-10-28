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

// Function: sub_01D3CC90
// Address: 0x1d3cc90 - 0x1d3cd78
void sub_01D3CC90_0x1d3cc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D3CC90_0x1d3cc90");
#endif

    switch (ctx->pc) {
        case 0x1d3ccc0u: goto label_1d3ccc0;
        case 0x1d3ccf0u: goto label_1d3ccf0;
        case 0x1d3cd00u: goto label_1d3cd00;
        case 0x1d3cd10u: goto label_1d3cd10;
        default: break;
    }

    ctx->pc = 0x1d3cc90u;

    // 0x1d3cc90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d3cc90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d3cc94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d3cc94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d3cc98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d3cc98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d3cc9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d3cc9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d3cca0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d3cca0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3cca4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d3cca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d3cca8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d3cca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d3ccac: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1d3ccacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3ccb0: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d3ccb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d3ccb4: 0x26130010  addiu       $s3, $s0, 0x10
    ctx->pc = 0x1d3ccb4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1d3ccb8: 0xc74ef16  jal         func_1D3BC58
    ctx->pc = 0x1D3CCB8u;
    SET_GPR_U32(ctx, 31, 0x1D3CCC0u);
    ctx->pc = 0x1D3CCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3CCB8u;
    // 0x1d3ccbc: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC58u, 0x1D3CCB8u, 0x1D3CCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3CCC0u;
label_1d3ccc0:
    // 0x1d3ccc0: 0x24520200  addiu       $s2, $v0, 0x200
    ctx->pc = 0x1d3ccc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1d3ccc4: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x1d3ccc4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1d3ccc8: 0x8e4e004c  lw          $t6, 0x4C($s2)
    ctx->pc = 0x1d3ccc8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1d3cccc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3ccccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3ccd0: 0xae0f0034  sw          $t7, 0x34($s0)
    ctx->pc = 0x1d3ccd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 15));
    // 0x1d3ccd4: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1d3ccd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1d3ccd8: 0x8e2f0008  lw          $t7, 0x8($s1)
    ctx->pc = 0x1d3ccd8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1d3ccdc: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1d3ccdcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1d3cce0: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1d3cce0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1d3cce4: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1d3cce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1d3cce8: 0xc74ef06  jal         func_1D3BC18
    ctx->pc = 0x1D3CCE8u;
    SET_GPR_U32(ctx, 31, 0x1D3CCF0u);
    ctx->pc = 0x1D3CCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3CCE8u;
    // 0x1d3ccec: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC18u, 0x1D3CCE8u, 0x1D3CCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3CCF0u;
label_1d3ccf0:
    // 0x1d3ccf0: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x1d3ccf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1d3ccf4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d3ccf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3ccf8: 0xc74ef06  jal         func_1D3BC18
    ctx->pc = 0x1D3CCF8u;
    SET_GPR_U32(ctx, 31, 0x1D3CD00u);
    ctx->pc = 0x1D3CCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3CCF8u;
    // 0x1d3ccfc: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC18u, 0x1D3CCF8u, 0x1D3CD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3CD00u;
label_1d3cd00:
    // 0x1d3cd00: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1d3cd00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1d3cd04: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d3cd04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3cd08: 0xc74ef08  jal         func_1D3BC20
    ctx->pc = 0x1D3CD08u;
    SET_GPR_U32(ctx, 31, 0x1D3CD10u);
    ctx->pc = 0x1D3CD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3CD08u;
    // 0x1d3cd0c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC20u, 0x1D3CD08u, 0x1D3CD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3CD10u;
label_1d3cd10:
    // 0x1d3cd10: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1d3cd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3cd14: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1d3cd14u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1d3cd18: 0x8e2d0000  lw          $t5, 0x0($s1)
    ctx->pc = 0x1d3cd18u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3cd1c: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1d3cd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1d3cd20: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1d3cd20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1d3cd24: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1d3cd24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1d3cd28: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1d3cd28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1d3cd2c: 0x8e4e00b4  lw          $t6, 0xB4($s2)
    ctx->pc = 0x1d3cd2cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1d3cd30: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1d3cd30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3cd34: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d3cd34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d3cd38: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x1d3cd38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1d3cd3c: 0x8e2f001c  lw          $t7, 0x1C($s1)
    ctx->pc = 0x1d3cd3cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1d3cd40: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x1d3cd40u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1d3cd44: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x1d3cd44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d3cd48: 0xae0f0038  sw          $t7, 0x38($s0)
    ctx->pc = 0x1d3cd48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 15));
    // 0x1d3cd4c: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x1d3cd4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1d3cd50: 0xae0e0028  sw          $t6, 0x28($s0)
    ctx->pc = 0x1d3cd50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 14));
    // 0x1d3cd54: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1d3cd54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3cd58: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d3cd58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d3cd5c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1d3cd5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1d3cd60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d3cd60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d3cd64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d3cd64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3cd68: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d3cd68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d3cd6c: 0x874ef06  j           func_1D3BC18
    ctx->pc = 0x1D3CD6Cu;
    ctx->pc = 0x1D3CD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3CD6Cu;
    // 0x1d3cd70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC18u;
    sub_01D3BC18_0x1d3bc18(rdram, ctx, runtime); return;
    ctx->pc = 0x1D3CD74u;
    // 0x1d3cd74: 0x0  nop
    ctx->pc = 0x1d3cd74u;
    // NOP
    ctx->pc = 0x1d3cd78u;
}
