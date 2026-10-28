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

// Function: sub_01C50AE0
// Address: 0x1c50ae0 - 0x1c50be0
void sub_01C50AE0_0x1c50ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C50AE0_0x1c50ae0");
#endif

    switch (ctx->pc) {
        case 0x1c50b10u: goto label_1c50b10;
        case 0x1c50b40u: goto label_1c50b40;
        case 0x1c50b50u: goto label_1c50b50;
        case 0x1c50b60u: goto label_1c50b60;
        case 0x1c50bb8u: goto label_1c50bb8;
        default: break;
    }

    ctx->pc = 0x1c50ae0u;

    // 0x1c50ae0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c50ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c50ae4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c50ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c50ae8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c50ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c50aec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c50aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c50af0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c50af0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c50af4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c50af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c50af8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c50af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c50afc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1c50afcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c50b00: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c50b00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c50b04: 0x26130060  addiu       $s3, $s0, 0x60
    ctx->pc = 0x1c50b04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1c50b08: 0xc713e62  jal         func_1C4F988
    ctx->pc = 0x1C50B08u;
    SET_GPR_U32(ctx, 31, 0x1C50B10u);
    ctx->pc = 0x1C50B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C50B08u;
    // 0x1c50b0c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F988u, 0x1C50B08u, 0x1C50B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C50B10u;
label_1c50b10:
    // 0x1c50b10: 0x24520200  addiu       $s2, $v0, 0x200
    ctx->pc = 0x1c50b10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1c50b14: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x1c50b14u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c50b18: 0x8e4e004c  lw          $t6, 0x4C($s2)
    ctx->pc = 0x1c50b18u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1c50b1c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1c50b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1c50b20: 0xae0f0088  sw          $t7, 0x88($s0)
    ctx->pc = 0x1c50b20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 15));
    // 0x1c50b24: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1c50b24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1c50b28: 0x8e2f0008  lw          $t7, 0x8($s1)
    ctx->pc = 0x1c50b28u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1c50b2c: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1c50b2cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1c50b30: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1c50b30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1c50b34: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1c50b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1c50b38: 0xc713e46  jal         func_1C4F918
    ctx->pc = 0x1C50B38u;
    SET_GPR_U32(ctx, 31, 0x1C50B40u);
    ctx->pc = 0x1C50B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C50B38u;
    // 0x1c50b3c: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F918u, 0x1C50B38u, 0x1C50B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C50B40u;
label_1c50b40:
    // 0x1c50b40: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x1c50b40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1c50b44: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c50b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c50b48: 0xc713e46  jal         func_1C4F918
    ctx->pc = 0x1C50B48u;
    SET_GPR_U32(ctx, 31, 0x1C50B50u);
    ctx->pc = 0x1C50B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C50B48u;
    // 0x1c50b4c: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F918u, 0x1C50B48u, 0x1C50B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C50B50u;
label_1c50b50:
    // 0x1c50b50: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x1c50b50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x1c50b54: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c50b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c50b58: 0xc713e4c  jal         func_1C4F930
    ctx->pc = 0x1C50B58u;
    SET_GPR_U32(ctx, 31, 0x1C50B60u);
    ctx->pc = 0x1C50B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C50B58u;
    // 0x1c50b5c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F930u, 0x1C50B58u, 0x1C50B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C50B60u;
label_1c50b60:
    // 0x1c50b60: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1c50b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c50b64: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1c50b64u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c50b68: 0x8e2e0000  lw          $t6, 0x0($s1)
    ctx->pc = 0x1c50b68u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c50b6c: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x1c50b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x1c50b70: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x1c50b70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x1c50b74: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x1c50b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1c50b78: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x1c50b78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1c50b7c: 0x8e2d001c  lw          $t5, 0x1C($s1)
    ctx->pc = 0x1c50b7cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1c50b80: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1c50b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c50b84: 0xae0d0084  sw          $t5, 0x84($s0)
    ctx->pc = 0x1c50b84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 13));
    // 0x1c50b88: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x1c50b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x1c50b8c: 0x8e4f00b4  lw          $t7, 0xB4($s2)
    ctx->pc = 0x1c50b8cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1c50b90: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1c50b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c50b94: 0x8e2d0020  lw          $t5, 0x20($s1)
    ctx->pc = 0x1c50b94u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1c50b98: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1c50b98u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1c50b9c: 0xe600007c  swc1        $f0, 0x7C($s0)
    ctx->pc = 0x1c50b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x1c50ba0: 0xae0f0078  sw          $t7, 0x78($s0)
    ctx->pc = 0x1c50ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 15));
    // 0x1c50ba4: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1c50ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c50ba8: 0xae0d008c  sw          $t5, 0x8C($s0)
    ctx->pc = 0x1c50ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 13));
    // 0x1c50bac: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x1c50bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x1c50bb0: 0xc713e46  jal         func_1C4F918
    ctx->pc = 0x1C50BB0u;
    SET_GPR_U32(ctx, 31, 0x1C50BB8u);
    ctx->pc = 0x1C50BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C50BB0u;
    // 0x1c50bb4: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F918u, 0x1C50BB0u, 0x1C50BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C50BB8u;
label_1c50bb8:
    // 0x1c50bb8: 0x261000b0  addiu       $s0, $s0, 0xB0
    ctx->pc = 0x1c50bb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x1c50bbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c50bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c50bc0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c50bc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c50bc4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c50bc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c50bc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c50bc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c50bcc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c50bccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c50bd0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c50bd0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c50bd4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c50bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c50bd8: 0x8713e46  j           func_1C4F918
    ctx->pc = 0x1C50BD8u;
    ctx->pc = 0x1C50BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C50BD8u;
    // 0x1c50bdc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F918u;
    sub_01C4F918_0x1c4f918(rdram, ctx, runtime); return;
    ctx->pc = 0x1C50BE0u;
}
