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

// Function: sub_01D0CE98
// Address: 0x1d0ce98 - 0x1d0cf98
void sub_01D0CE98_0x1d0ce98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0CE98_0x1d0ce98");
#endif

    switch (ctx->pc) {
        case 0x1d0cec8u: goto label_1d0cec8;
        case 0x1d0cef8u: goto label_1d0cef8;
        case 0x1d0cf08u: goto label_1d0cf08;
        case 0x1d0cf18u: goto label_1d0cf18;
        case 0x1d0cf70u: goto label_1d0cf70;
        default: break;
    }

    ctx->pc = 0x1d0ce98u;

    // 0x1d0ce98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d0ce98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d0ce9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d0ce9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d0cea0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d0cea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d0cea4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d0cea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d0cea8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d0cea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0ceac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d0ceacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d0ceb0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d0ceb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d0ceb4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1d0ceb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0ceb8: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d0ceb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d0cebc: 0x26130060  addiu       $s3, $s0, 0x60
    ctx->pc = 0x1d0cebcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1d0cec0: 0xc742f56  jal         func_1D0BD58
    ctx->pc = 0x1D0CEC0u;
    SET_GPR_U32(ctx, 31, 0x1D0CEC8u);
    ctx->pc = 0x1D0CEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0CEC0u;
    // 0x1d0cec4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD58u, 0x1D0CEC0u, 0x1D0CEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0CEC8u;
label_1d0cec8:
    // 0x1d0cec8: 0x24520200  addiu       $s2, $v0, 0x200
    ctx->pc = 0x1d0cec8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1d0cecc: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x1d0ceccu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1d0ced0: 0x8e4e004c  lw          $t6, 0x4C($s2)
    ctx->pc = 0x1d0ced0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1d0ced4: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1d0ced4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1d0ced8: 0xae0f0088  sw          $t7, 0x88($s0)
    ctx->pc = 0x1d0ced8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 15));
    // 0x1d0cedc: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1d0cedcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1d0cee0: 0x8e2f0008  lw          $t7, 0x8($s1)
    ctx->pc = 0x1d0cee0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1d0cee4: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1d0cee4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1d0cee8: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1d0cee8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1d0ceec: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1d0ceecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1d0cef0: 0xc742f46  jal         func_1D0BD18
    ctx->pc = 0x1D0CEF0u;
    SET_GPR_U32(ctx, 31, 0x1D0CEF8u);
    ctx->pc = 0x1D0CEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0CEF0u;
    // 0x1d0cef4: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD18u, 0x1D0CEF0u, 0x1D0CEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0CEF8u;
label_1d0cef8:
    // 0x1d0cef8: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x1d0cef8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1d0cefc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d0cefcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0cf00: 0xc742f46  jal         func_1D0BD18
    ctx->pc = 0x1D0CF00u;
    SET_GPR_U32(ctx, 31, 0x1D0CF08u);
    ctx->pc = 0x1D0CF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0CF00u;
    // 0x1d0cf04: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD18u, 0x1D0CF00u, 0x1D0CF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0CF08u;
label_1d0cf08:
    // 0x1d0cf08: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x1d0cf08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x1d0cf0c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d0cf0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0cf10: 0xc742f48  jal         func_1D0BD20
    ctx->pc = 0x1D0CF10u;
    SET_GPR_U32(ctx, 31, 0x1D0CF18u);
    ctx->pc = 0x1D0CF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0CF10u;
    // 0x1d0cf14: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD20u, 0x1D0CF10u, 0x1D0CF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0CF18u;
label_1d0cf18:
    // 0x1d0cf18: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1d0cf18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0cf1c: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1d0cf1cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1d0cf20: 0x8e2e0000  lw          $t6, 0x0($s1)
    ctx->pc = 0x1d0cf20u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d0cf24: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x1d0cf24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x1d0cf28: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x1d0cf28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x1d0cf2c: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x1d0cf2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1d0cf30: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x1d0cf30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1d0cf34: 0x8e2d001c  lw          $t5, 0x1C($s1)
    ctx->pc = 0x1d0cf34u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1d0cf38: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1d0cf38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0cf3c: 0xae0d0084  sw          $t5, 0x84($s0)
    ctx->pc = 0x1d0cf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 13));
    // 0x1d0cf40: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x1d0cf40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x1d0cf44: 0x8e4f00b4  lw          $t7, 0xB4($s2)
    ctx->pc = 0x1d0cf44u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1d0cf48: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1d0cf48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0cf4c: 0x8e2d0020  lw          $t5, 0x20($s1)
    ctx->pc = 0x1d0cf4cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1d0cf50: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d0cf50u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d0cf54: 0xe600007c  swc1        $f0, 0x7C($s0)
    ctx->pc = 0x1d0cf54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x1d0cf58: 0xae0f0078  sw          $t7, 0x78($s0)
    ctx->pc = 0x1d0cf58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 15));
    // 0x1d0cf5c: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1d0cf5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0cf60: 0xae0d008c  sw          $t5, 0x8C($s0)
    ctx->pc = 0x1d0cf60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 13));
    // 0x1d0cf64: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x1d0cf64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x1d0cf68: 0xc742f46  jal         func_1D0BD18
    ctx->pc = 0x1D0CF68u;
    SET_GPR_U32(ctx, 31, 0x1D0CF70u);
    ctx->pc = 0x1D0CF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0CF68u;
    // 0x1d0cf6c: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD18u, 0x1D0CF68u, 0x1D0CF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0CF70u;
label_1d0cf70:
    // 0x1d0cf70: 0x261000b0  addiu       $s0, $s0, 0xB0
    ctx->pc = 0x1d0cf70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x1d0cf74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0cf74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0cf78: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d0cf78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0cf7c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d0cf7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0cf80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d0cf80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0cf84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d0cf84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d0cf88: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d0cf88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d0cf8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d0cf8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d0cf90: 0x8742f46  j           func_1D0BD18
    ctx->pc = 0x1D0CF90u;
    ctx->pc = 0x1D0CF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0CF90u;
    // 0x1d0cf94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD18u;
    sub_01D0BD18_0x1d0bd18(rdram, ctx, runtime); return;
    ctx->pc = 0x1D0CF98u;
}
