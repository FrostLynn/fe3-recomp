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

// Function: sub_01C509F8
// Address: 0x1c509f8 - 0x1c50ae0
void sub_01C509F8_0x1c509f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C509F8_0x1c509f8");
#endif

    switch (ctx->pc) {
        case 0x1c50a28u: goto label_1c50a28;
        case 0x1c50a58u: goto label_1c50a58;
        case 0x1c50a68u: goto label_1c50a68;
        case 0x1c50a78u: goto label_1c50a78;
        default: break;
    }

    ctx->pc = 0x1c509f8u;

    // 0x1c509f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c509f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c509fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c509fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c50a00: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c50a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c50a04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c50a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c50a08: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c50a08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c50a0c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c50a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c50a10: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c50a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c50a14: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1c50a14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c50a18: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c50a18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c50a1c: 0x26130010  addiu       $s3, $s0, 0x10
    ctx->pc = 0x1c50a1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1c50a20: 0xc713e62  jal         func_1C4F988
    ctx->pc = 0x1C50A20u;
    SET_GPR_U32(ctx, 31, 0x1C50A28u);
    ctx->pc = 0x1C50A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C50A20u;
    // 0x1c50a24: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F988u, 0x1C50A20u, 0x1C50A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C50A28u;
label_1c50a28:
    // 0x1c50a28: 0x24520200  addiu       $s2, $v0, 0x200
    ctx->pc = 0x1c50a28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1c50a2c: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x1c50a2cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c50a30: 0x8e4e004c  lw          $t6, 0x4C($s2)
    ctx->pc = 0x1c50a30u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1c50a34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c50a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c50a38: 0xae0f0034  sw          $t7, 0x34($s0)
    ctx->pc = 0x1c50a38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 15));
    // 0x1c50a3c: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1c50a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1c50a40: 0x8e2f0008  lw          $t7, 0x8($s1)
    ctx->pc = 0x1c50a40u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1c50a44: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1c50a44u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1c50a48: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1c50a48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1c50a4c: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1c50a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1c50a50: 0xc713e46  jal         func_1C4F918
    ctx->pc = 0x1C50A50u;
    SET_GPR_U32(ctx, 31, 0x1C50A58u);
    ctx->pc = 0x1C50A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C50A50u;
    // 0x1c50a54: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F918u, 0x1C50A50u, 0x1C50A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C50A58u;
label_1c50a58:
    // 0x1c50a58: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x1c50a58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1c50a5c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c50a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c50a60: 0xc713e46  jal         func_1C4F918
    ctx->pc = 0x1C50A60u;
    SET_GPR_U32(ctx, 31, 0x1C50A68u);
    ctx->pc = 0x1C50A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C50A60u;
    // 0x1c50a64: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F918u, 0x1C50A60u, 0x1C50A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C50A68u;
label_1c50a68:
    // 0x1c50a68: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1c50a68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1c50a6c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c50a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c50a70: 0xc713e4c  jal         func_1C4F930
    ctx->pc = 0x1C50A70u;
    SET_GPR_U32(ctx, 31, 0x1C50A78u);
    ctx->pc = 0x1C50A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C50A70u;
    // 0x1c50a74: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F930u, 0x1C50A70u, 0x1C50A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C50A78u;
label_1c50a78:
    // 0x1c50a78: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1c50a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c50a7c: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1c50a7cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c50a80: 0x8e2d0000  lw          $t5, 0x0($s1)
    ctx->pc = 0x1c50a80u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c50a84: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1c50a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1c50a88: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1c50a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1c50a8c: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1c50a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1c50a90: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1c50a90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1c50a94: 0x8e4e00b4  lw          $t6, 0xB4($s2)
    ctx->pc = 0x1c50a94u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1c50a98: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1c50a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c50a9c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c50a9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c50aa0: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x1c50aa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1c50aa4: 0x8e2f001c  lw          $t7, 0x1C($s1)
    ctx->pc = 0x1c50aa4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1c50aa8: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x1c50aa8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1c50aac: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x1c50aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c50ab0: 0xae0f0038  sw          $t7, 0x38($s0)
    ctx->pc = 0x1c50ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 15));
    // 0x1c50ab4: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x1c50ab4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1c50ab8: 0xae0e0028  sw          $t6, 0x28($s0)
    ctx->pc = 0x1c50ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 14));
    // 0x1c50abc: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1c50abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c50ac0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c50ac0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c50ac4: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1c50ac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1c50ac8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c50ac8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c50acc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c50accu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c50ad0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c50ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c50ad4: 0x8713e46  j           func_1C4F918
    ctx->pc = 0x1C50AD4u;
    ctx->pc = 0x1C50AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C50AD4u;
    // 0x1c50ad8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F918u;
    sub_01C4F918_0x1c4f918(rdram, ctx, runtime); return;
    ctx->pc = 0x1C50ADCu;
    // 0x1c50adc: 0x0  nop
    ctx->pc = 0x1c50adcu;
    // NOP
    ctx->pc = 0x1c50ae0u;
}
