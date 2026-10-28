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

// Function: sub_01C76A60
// Address: 0x1c76a60 - 0x1c76b60
void sub_01C76A60_0x1c76a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C76A60_0x1c76a60");
#endif

    switch (ctx->pc) {
        case 0x1c76a90u: goto label_1c76a90;
        case 0x1c76ac0u: goto label_1c76ac0;
        case 0x1c76ad0u: goto label_1c76ad0;
        case 0x1c76ae0u: goto label_1c76ae0;
        case 0x1c76b38u: goto label_1c76b38;
        default: break;
    }

    ctx->pc = 0x1c76a60u;

    // 0x1c76a60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c76a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c76a64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c76a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c76a68: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c76a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c76a6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c76a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c76a70: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c76a70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c76a74: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c76a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c76a78: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c76a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c76a7c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1c76a7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c76a80: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c76a80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c76a84: 0x26130060  addiu       $s3, $s0, 0x60
    ctx->pc = 0x1c76a84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1c76a88: 0xc71d656  jal         func_1C75958
    ctx->pc = 0x1C76A88u;
    SET_GPR_U32(ctx, 31, 0x1C76A90u);
    ctx->pc = 0x1C76A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C76A88u;
    // 0x1c76a8c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75958u, 0x1C76A88u, 0x1C76A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C76A90u;
label_1c76a90:
    // 0x1c76a90: 0x24520200  addiu       $s2, $v0, 0x200
    ctx->pc = 0x1c76a90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1c76a94: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x1c76a94u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c76a98: 0x8e4e004c  lw          $t6, 0x4C($s2)
    ctx->pc = 0x1c76a98u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1c76a9c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1c76a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1c76aa0: 0xae0f0088  sw          $t7, 0x88($s0)
    ctx->pc = 0x1c76aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 15));
    // 0x1c76aa4: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1c76aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1c76aa8: 0x8e2f0008  lw          $t7, 0x8($s1)
    ctx->pc = 0x1c76aa8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1c76aac: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1c76aacu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1c76ab0: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1c76ab0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1c76ab4: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1c76ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1c76ab8: 0xc71d646  jal         func_1C75918
    ctx->pc = 0x1C76AB8u;
    SET_GPR_U32(ctx, 31, 0x1C76AC0u);
    ctx->pc = 0x1C76ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C76AB8u;
    // 0x1c76abc: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75918u, 0x1C76AB8u, 0x1C76AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C76AC0u;
label_1c76ac0:
    // 0x1c76ac0: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x1c76ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1c76ac4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c76ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c76ac8: 0xc71d646  jal         func_1C75918
    ctx->pc = 0x1C76AC8u;
    SET_GPR_U32(ctx, 31, 0x1C76AD0u);
    ctx->pc = 0x1C76ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C76AC8u;
    // 0x1c76acc: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75918u, 0x1C76AC8u, 0x1C76AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C76AD0u;
label_1c76ad0:
    // 0x1c76ad0: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x1c76ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x1c76ad4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c76ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c76ad8: 0xc71d648  jal         func_1C75920
    ctx->pc = 0x1C76AD8u;
    SET_GPR_U32(ctx, 31, 0x1C76AE0u);
    ctx->pc = 0x1C76ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C76AD8u;
    // 0x1c76adc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75920u, 0x1C76AD8u, 0x1C76AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C76AE0u;
label_1c76ae0:
    // 0x1c76ae0: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1c76ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c76ae4: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1c76ae4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c76ae8: 0x8e2e0000  lw          $t6, 0x0($s1)
    ctx->pc = 0x1c76ae8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c76aec: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x1c76aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x1c76af0: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x1c76af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x1c76af4: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x1c76af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1c76af8: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x1c76af8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1c76afc: 0x8e2d001c  lw          $t5, 0x1C($s1)
    ctx->pc = 0x1c76afcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1c76b00: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1c76b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c76b04: 0xae0d0084  sw          $t5, 0x84($s0)
    ctx->pc = 0x1c76b04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 13));
    // 0x1c76b08: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x1c76b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x1c76b0c: 0x8e4f00b4  lw          $t7, 0xB4($s2)
    ctx->pc = 0x1c76b0cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1c76b10: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1c76b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c76b14: 0x8e2d0020  lw          $t5, 0x20($s1)
    ctx->pc = 0x1c76b14u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1c76b18: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1c76b18u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1c76b1c: 0xe600007c  swc1        $f0, 0x7C($s0)
    ctx->pc = 0x1c76b1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x1c76b20: 0xae0f0078  sw          $t7, 0x78($s0)
    ctx->pc = 0x1c76b20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 15));
    // 0x1c76b24: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1c76b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c76b28: 0xae0d008c  sw          $t5, 0x8C($s0)
    ctx->pc = 0x1c76b28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 13));
    // 0x1c76b2c: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x1c76b2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x1c76b30: 0xc71d646  jal         func_1C75918
    ctx->pc = 0x1C76B30u;
    SET_GPR_U32(ctx, 31, 0x1C76B38u);
    ctx->pc = 0x1C76B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C76B30u;
    // 0x1c76b34: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75918u, 0x1C76B30u, 0x1C76B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C76B38u;
label_1c76b38:
    // 0x1c76b38: 0x261000b0  addiu       $s0, $s0, 0xB0
    ctx->pc = 0x1c76b38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x1c76b3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c76b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c76b40: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c76b40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c76b44: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c76b44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c76b48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c76b48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c76b4c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c76b4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c76b50: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c76b50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c76b54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c76b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c76b58: 0x871d646  j           func_1C75918
    ctx->pc = 0x1C76B58u;
    ctx->pc = 0x1C76B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C76B58u;
    // 0x1c76b5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75918u;
    sub_01C75918_0x1c75918(rdram, ctx, runtime); return;
    ctx->pc = 0x1C76B60u;
}
