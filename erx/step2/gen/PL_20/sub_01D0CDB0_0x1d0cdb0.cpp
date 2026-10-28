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

// Function: sub_01D0CDB0
// Address: 0x1d0cdb0 - 0x1d0ce98
void sub_01D0CDB0_0x1d0cdb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0CDB0_0x1d0cdb0");
#endif

    switch (ctx->pc) {
        case 0x1d0cde0u: goto label_1d0cde0;
        case 0x1d0ce10u: goto label_1d0ce10;
        case 0x1d0ce20u: goto label_1d0ce20;
        case 0x1d0ce30u: goto label_1d0ce30;
        default: break;
    }

    ctx->pc = 0x1d0cdb0u;

    // 0x1d0cdb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d0cdb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d0cdb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d0cdb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d0cdb8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d0cdb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d0cdbc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d0cdbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d0cdc0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d0cdc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0cdc4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d0cdc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d0cdc8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d0cdc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d0cdcc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1d0cdccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0cdd0: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d0cdd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d0cdd4: 0x26130010  addiu       $s3, $s0, 0x10
    ctx->pc = 0x1d0cdd4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1d0cdd8: 0xc742f56  jal         func_1D0BD58
    ctx->pc = 0x1D0CDD8u;
    SET_GPR_U32(ctx, 31, 0x1D0CDE0u);
    ctx->pc = 0x1D0CDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0CDD8u;
    // 0x1d0cddc: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD58u, 0x1D0CDD8u, 0x1D0CDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0CDE0u;
label_1d0cde0:
    // 0x1d0cde0: 0x24520200  addiu       $s2, $v0, 0x200
    ctx->pc = 0x1d0cde0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1d0cde4: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x1d0cde4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1d0cde8: 0x8e4e004c  lw          $t6, 0x4C($s2)
    ctx->pc = 0x1d0cde8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1d0cdec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0cdecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0cdf0: 0xae0f0034  sw          $t7, 0x34($s0)
    ctx->pc = 0x1d0cdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 15));
    // 0x1d0cdf4: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1d0cdf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1d0cdf8: 0x8e2f0008  lw          $t7, 0x8($s1)
    ctx->pc = 0x1d0cdf8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1d0cdfc: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1d0cdfcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1d0ce00: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1d0ce00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1d0ce04: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1d0ce04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1d0ce08: 0xc742f46  jal         func_1D0BD18
    ctx->pc = 0x1D0CE08u;
    SET_GPR_U32(ctx, 31, 0x1D0CE10u);
    ctx->pc = 0x1D0CE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0CE08u;
    // 0x1d0ce0c: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD18u, 0x1D0CE08u, 0x1D0CE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0CE10u;
label_1d0ce10:
    // 0x1d0ce10: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x1d0ce10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1d0ce14: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d0ce14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0ce18: 0xc742f46  jal         func_1D0BD18
    ctx->pc = 0x1D0CE18u;
    SET_GPR_U32(ctx, 31, 0x1D0CE20u);
    ctx->pc = 0x1D0CE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0CE18u;
    // 0x1d0ce1c: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD18u, 0x1D0CE18u, 0x1D0CE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0CE20u;
label_1d0ce20:
    // 0x1d0ce20: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1d0ce20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1d0ce24: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d0ce24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0ce28: 0xc742f48  jal         func_1D0BD20
    ctx->pc = 0x1D0CE28u;
    SET_GPR_U32(ctx, 31, 0x1D0CE30u);
    ctx->pc = 0x1D0CE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0CE28u;
    // 0x1d0ce2c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD20u, 0x1D0CE28u, 0x1D0CE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0CE30u;
label_1d0ce30:
    // 0x1d0ce30: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1d0ce30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0ce34: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1d0ce34u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1d0ce38: 0x8e2d0000  lw          $t5, 0x0($s1)
    ctx->pc = 0x1d0ce38u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d0ce3c: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1d0ce3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1d0ce40: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1d0ce40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1d0ce44: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1d0ce44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1d0ce48: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1d0ce48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1d0ce4c: 0x8e4e00b4  lw          $t6, 0xB4($s2)
    ctx->pc = 0x1d0ce4cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1d0ce50: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1d0ce50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0ce54: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d0ce54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0ce58: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x1d0ce58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1d0ce5c: 0x8e2f001c  lw          $t7, 0x1C($s1)
    ctx->pc = 0x1d0ce5cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1d0ce60: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x1d0ce60u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1d0ce64: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x1d0ce64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d0ce68: 0xae0f0038  sw          $t7, 0x38($s0)
    ctx->pc = 0x1d0ce68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 15));
    // 0x1d0ce6c: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x1d0ce6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1d0ce70: 0xae0e0028  sw          $t6, 0x28($s0)
    ctx->pc = 0x1d0ce70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 14));
    // 0x1d0ce74: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1d0ce74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0ce78: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d0ce78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d0ce7c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1d0ce7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1d0ce80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d0ce80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d0ce84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d0ce84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0ce88: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d0ce88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d0ce8c: 0x8742f46  j           func_1D0BD18
    ctx->pc = 0x1D0CE8Cu;
    ctx->pc = 0x1D0CE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0CE8Cu;
    // 0x1d0ce90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD18u;
    sub_01D0BD18_0x1d0bd18(rdram, ctx, runtime); return;
    ctx->pc = 0x1D0CE94u;
    // 0x1d0ce94: 0x0  nop
    ctx->pc = 0x1d0ce94u;
    // NOP
    ctx->pc = 0x1d0ce98u;
}
