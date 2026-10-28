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

// Function: sub_01D9DA78
// Address: 0x1d9da78 - 0x1d9db78
void sub_01D9DA78_0x1d9da78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D9DA78_0x1d9da78");
#endif

    switch (ctx->pc) {
        case 0x1d9daa8u: goto label_1d9daa8;
        case 0x1d9dad8u: goto label_1d9dad8;
        case 0x1d9dae8u: goto label_1d9dae8;
        case 0x1d9daf8u: goto label_1d9daf8;
        case 0x1d9db50u: goto label_1d9db50;
        default: break;
    }

    ctx->pc = 0x1d9da78u;

    // 0x1d9da78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d9da78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d9da7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d9da7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d9da80: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d9da80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d9da84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d9da84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d9da88: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d9da88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9da8c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d9da8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d9da90: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d9da90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d9da94: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1d9da94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9da98: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d9da98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d9da9c: 0x26130060  addiu       $s3, $s0, 0x60
    ctx->pc = 0x1d9da9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1d9daa0: 0xc767256  jal         func_1D9C958
    ctx->pc = 0x1D9DAA0u;
    SET_GPR_U32(ctx, 31, 0x1D9DAA8u);
    ctx->pc = 0x1D9DAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9DAA0u;
    // 0x1d9daa4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C958u, 0x1D9DAA0u, 0x1D9DAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9DAA8u;
label_1d9daa8:
    // 0x1d9daa8: 0x24520200  addiu       $s2, $v0, 0x200
    ctx->pc = 0x1d9daa8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1d9daac: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x1d9daacu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1d9dab0: 0x8e4e004c  lw          $t6, 0x4C($s2)
    ctx->pc = 0x1d9dab0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1d9dab4: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1d9dab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1d9dab8: 0xae0f0088  sw          $t7, 0x88($s0)
    ctx->pc = 0x1d9dab8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 15));
    // 0x1d9dabc: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1d9dabcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1d9dac0: 0x8e2f0008  lw          $t7, 0x8($s1)
    ctx->pc = 0x1d9dac0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1d9dac4: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1d9dac4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1d9dac8: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1d9dac8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1d9dacc: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1d9daccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1d9dad0: 0xc767246  jal         func_1D9C918
    ctx->pc = 0x1D9DAD0u;
    SET_GPR_U32(ctx, 31, 0x1D9DAD8u);
    ctx->pc = 0x1D9DAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9DAD0u;
    // 0x1d9dad4: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C918u, 0x1D9DAD0u, 0x1D9DAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9DAD8u;
label_1d9dad8:
    // 0x1d9dad8: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x1d9dad8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1d9dadc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d9dadcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9dae0: 0xc767246  jal         func_1D9C918
    ctx->pc = 0x1D9DAE0u;
    SET_GPR_U32(ctx, 31, 0x1D9DAE8u);
    ctx->pc = 0x1D9DAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9DAE0u;
    // 0x1d9dae4: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C918u, 0x1D9DAE0u, 0x1D9DAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9DAE8u;
label_1d9dae8:
    // 0x1d9dae8: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x1d9dae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x1d9daec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d9daecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9daf0: 0xc767248  jal         func_1D9C920
    ctx->pc = 0x1D9DAF0u;
    SET_GPR_U32(ctx, 31, 0x1D9DAF8u);
    ctx->pc = 0x1D9DAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9DAF0u;
    // 0x1d9daf4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C920u, 0x1D9DAF0u, 0x1D9DAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9DAF8u;
label_1d9daf8:
    // 0x1d9daf8: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1d9daf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9dafc: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1d9dafcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1d9db00: 0x8e2e0000  lw          $t6, 0x0($s1)
    ctx->pc = 0x1d9db00u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d9db04: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x1d9db04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x1d9db08: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x1d9db08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x1d9db0c: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x1d9db0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1d9db10: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x1d9db10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1d9db14: 0x8e2d001c  lw          $t5, 0x1C($s1)
    ctx->pc = 0x1d9db14u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1d9db18: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1d9db18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9db1c: 0xae0d0084  sw          $t5, 0x84($s0)
    ctx->pc = 0x1d9db1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 13));
    // 0x1d9db20: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x1d9db20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x1d9db24: 0x8e4f00b4  lw          $t7, 0xB4($s2)
    ctx->pc = 0x1d9db24u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1d9db28: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1d9db28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9db2c: 0x8e2d0020  lw          $t5, 0x20($s1)
    ctx->pc = 0x1d9db2cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1d9db30: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d9db30u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d9db34: 0xe600007c  swc1        $f0, 0x7C($s0)
    ctx->pc = 0x1d9db34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x1d9db38: 0xae0f0078  sw          $t7, 0x78($s0)
    ctx->pc = 0x1d9db38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 15));
    // 0x1d9db3c: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1d9db3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9db40: 0xae0d008c  sw          $t5, 0x8C($s0)
    ctx->pc = 0x1d9db40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 13));
    // 0x1d9db44: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x1d9db44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x1d9db48: 0xc767246  jal         func_1D9C918
    ctx->pc = 0x1D9DB48u;
    SET_GPR_U32(ctx, 31, 0x1D9DB50u);
    ctx->pc = 0x1D9DB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9DB48u;
    // 0x1d9db4c: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C918u, 0x1D9DB48u, 0x1D9DB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9DB50u;
label_1d9db50:
    // 0x1d9db50: 0x261000b0  addiu       $s0, $s0, 0xB0
    ctx->pc = 0x1d9db50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x1d9db54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d9db54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9db58: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d9db58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9db5c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d9db5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9db60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9db60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9db64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d9db64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d9db68: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d9db68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d9db6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d9db6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d9db70: 0x8767246  j           func_1D9C918
    ctx->pc = 0x1D9DB70u;
    ctx->pc = 0x1D9DB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9DB70u;
    // 0x1d9db74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C918u;
    sub_01D9C918_0x1d9c918(rdram, ctx, runtime); return;
    ctx->pc = 0x1D9DB78u;
}
