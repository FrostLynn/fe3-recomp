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

// Function: sub_01D46D98
// Address: 0x1d46d98 - 0x1d46e80
void sub_01D46D98_0x1d46d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D46D98_0x1d46d98");
#endif

    switch (ctx->pc) {
        case 0x1d46dc8u: goto label_1d46dc8;
        case 0x1d46df8u: goto label_1d46df8;
        case 0x1d46e08u: goto label_1d46e08;
        case 0x1d46e18u: goto label_1d46e18;
        default: break;
    }

    ctx->pc = 0x1d46d98u;

    // 0x1d46d98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d46d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d46d9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d46d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d46da0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d46da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d46da4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d46da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d46da8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d46da8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d46dac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d46dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d46db0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d46db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d46db4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1d46db4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d46db8: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d46db8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d46dbc: 0x26130010  addiu       $s3, $s0, 0x10
    ctx->pc = 0x1d46dbcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1d46dc0: 0xc751756  jal         func_1D45D58
    ctx->pc = 0x1D46DC0u;
    SET_GPR_U32(ctx, 31, 0x1D46DC8u);
    ctx->pc = 0x1D46DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D46DC0u;
    // 0x1d46dc4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D58u, 0x1D46DC0u, 0x1D46DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D46DC8u;
label_1d46dc8:
    // 0x1d46dc8: 0x24520200  addiu       $s2, $v0, 0x200
    ctx->pc = 0x1d46dc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1d46dcc: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x1d46dccu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1d46dd0: 0x8e4e004c  lw          $t6, 0x4C($s2)
    ctx->pc = 0x1d46dd0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1d46dd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d46dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d46dd8: 0xae0f0034  sw          $t7, 0x34($s0)
    ctx->pc = 0x1d46dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 15));
    // 0x1d46ddc: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1d46ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1d46de0: 0x8e2f0008  lw          $t7, 0x8($s1)
    ctx->pc = 0x1d46de0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1d46de4: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1d46de4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1d46de8: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1d46de8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1d46dec: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1d46decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1d46df0: 0xc751746  jal         func_1D45D18
    ctx->pc = 0x1D46DF0u;
    SET_GPR_U32(ctx, 31, 0x1D46DF8u);
    ctx->pc = 0x1D46DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D46DF0u;
    // 0x1d46df4: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D18u, 0x1D46DF0u, 0x1D46DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D46DF8u;
label_1d46df8:
    // 0x1d46df8: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x1d46df8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1d46dfc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d46dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d46e00: 0xc751746  jal         func_1D45D18
    ctx->pc = 0x1D46E00u;
    SET_GPR_U32(ctx, 31, 0x1D46E08u);
    ctx->pc = 0x1D46E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D46E00u;
    // 0x1d46e04: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D18u, 0x1D46E00u, 0x1D46E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D46E08u;
label_1d46e08:
    // 0x1d46e08: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1d46e08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1d46e0c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d46e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d46e10: 0xc751748  jal         func_1D45D20
    ctx->pc = 0x1D46E10u;
    SET_GPR_U32(ctx, 31, 0x1D46E18u);
    ctx->pc = 0x1D46E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D46E10u;
    // 0x1d46e14: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D20u, 0x1D46E10u, 0x1D46E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D46E18u;
label_1d46e18:
    // 0x1d46e18: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1d46e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d46e1c: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1d46e1cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1d46e20: 0x8e2d0000  lw          $t5, 0x0($s1)
    ctx->pc = 0x1d46e20u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d46e24: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1d46e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1d46e28: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1d46e28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1d46e2c: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1d46e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1d46e30: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1d46e30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1d46e34: 0x8e4e00b4  lw          $t6, 0xB4($s2)
    ctx->pc = 0x1d46e34u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1d46e38: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1d46e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d46e3c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d46e3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d46e40: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x1d46e40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1d46e44: 0x8e2f001c  lw          $t7, 0x1C($s1)
    ctx->pc = 0x1d46e44u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1d46e48: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x1d46e48u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1d46e4c: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x1d46e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d46e50: 0xae0f0038  sw          $t7, 0x38($s0)
    ctx->pc = 0x1d46e50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 15));
    // 0x1d46e54: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x1d46e54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1d46e58: 0xae0e0028  sw          $t6, 0x28($s0)
    ctx->pc = 0x1d46e58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 14));
    // 0x1d46e5c: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1d46e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d46e60: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d46e60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d46e64: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1d46e64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1d46e68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d46e68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d46e6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d46e6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d46e70: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d46e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d46e74: 0x8751746  j           func_1D45D18
    ctx->pc = 0x1D46E74u;
    ctx->pc = 0x1D46E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D46E74u;
    // 0x1d46e78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D18u;
    sub_01D45D18_0x1d45d18(rdram, ctx, runtime); return;
    ctx->pc = 0x1D46E7Cu;
    // 0x1d46e7c: 0x0  nop
    ctx->pc = 0x1d46e7cu;
    // NOP
    ctx->pc = 0x1d46e80u;
}
