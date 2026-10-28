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

// Function: sub_01C99C88
// Address: 0x1c99c88 - 0x1c99d88
void sub_01C99C88_0x1c99c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C99C88_0x1c99c88");
#endif

    switch (ctx->pc) {
        case 0x1c99cb8u: goto label_1c99cb8;
        case 0x1c99ce8u: goto label_1c99ce8;
        case 0x1c99cf8u: goto label_1c99cf8;
        case 0x1c99d08u: goto label_1c99d08;
        case 0x1c99d60u: goto label_1c99d60;
        default: break;
    }

    ctx->pc = 0x1c99c88u;

    // 0x1c99c88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c99c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c99c8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c99c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c99c90: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c99c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c99c94: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c99c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c99c98: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c99c98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c99c9c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c99c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c99ca0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c99ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c99ca4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1c99ca4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c99ca8: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c99ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c99cac: 0x26130060  addiu       $s3, $s0, 0x60
    ctx->pc = 0x1c99cacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1c99cb0: 0xc7262d6  jal         func_1C98B58
    ctx->pc = 0x1C99CB0u;
    SET_GPR_U32(ctx, 31, 0x1C99CB8u);
    ctx->pc = 0x1C99CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C99CB0u;
    // 0x1c99cb4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B58u, 0x1C99CB0u, 0x1C99CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C99CB8u;
label_1c99cb8:
    // 0x1c99cb8: 0x24520200  addiu       $s2, $v0, 0x200
    ctx->pc = 0x1c99cb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1c99cbc: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x1c99cbcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c99cc0: 0x8e4e004c  lw          $t6, 0x4C($s2)
    ctx->pc = 0x1c99cc0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1c99cc4: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1c99cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1c99cc8: 0xae0f0088  sw          $t7, 0x88($s0)
    ctx->pc = 0x1c99cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 15));
    // 0x1c99ccc: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1c99cccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1c99cd0: 0x8e2f0008  lw          $t7, 0x8($s1)
    ctx->pc = 0x1c99cd0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1c99cd4: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1c99cd4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1c99cd8: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1c99cd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1c99cdc: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1c99cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1c99ce0: 0xc7262c6  jal         func_1C98B18
    ctx->pc = 0x1C99CE0u;
    SET_GPR_U32(ctx, 31, 0x1C99CE8u);
    ctx->pc = 0x1C99CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C99CE0u;
    // 0x1c99ce4: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B18u, 0x1C99CE0u, 0x1C99CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C99CE8u;
label_1c99ce8:
    // 0x1c99ce8: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x1c99ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1c99cec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c99cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c99cf0: 0xc7262c6  jal         func_1C98B18
    ctx->pc = 0x1C99CF0u;
    SET_GPR_U32(ctx, 31, 0x1C99CF8u);
    ctx->pc = 0x1C99CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C99CF0u;
    // 0x1c99cf4: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B18u, 0x1C99CF0u, 0x1C99CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C99CF8u;
label_1c99cf8:
    // 0x1c99cf8: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x1c99cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x1c99cfc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c99cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c99d00: 0xc7262c8  jal         func_1C98B20
    ctx->pc = 0x1C99D00u;
    SET_GPR_U32(ctx, 31, 0x1C99D08u);
    ctx->pc = 0x1C99D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C99D00u;
    // 0x1c99d04: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B20u, 0x1C99D00u, 0x1C99D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C99D08u;
label_1c99d08:
    // 0x1c99d08: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1c99d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c99d0c: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1c99d0cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c99d10: 0x8e2e0000  lw          $t6, 0x0($s1)
    ctx->pc = 0x1c99d10u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c99d14: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x1c99d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x1c99d18: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x1c99d18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x1c99d1c: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x1c99d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1c99d20: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x1c99d20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1c99d24: 0x8e2d001c  lw          $t5, 0x1C($s1)
    ctx->pc = 0x1c99d24u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1c99d28: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1c99d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c99d2c: 0xae0d0084  sw          $t5, 0x84($s0)
    ctx->pc = 0x1c99d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 13));
    // 0x1c99d30: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x1c99d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x1c99d34: 0x8e4f00b4  lw          $t7, 0xB4($s2)
    ctx->pc = 0x1c99d34u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1c99d38: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1c99d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c99d3c: 0x8e2d0020  lw          $t5, 0x20($s1)
    ctx->pc = 0x1c99d3cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1c99d40: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1c99d40u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1c99d44: 0xe600007c  swc1        $f0, 0x7C($s0)
    ctx->pc = 0x1c99d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x1c99d48: 0xae0f0078  sw          $t7, 0x78($s0)
    ctx->pc = 0x1c99d48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 15));
    // 0x1c99d4c: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1c99d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c99d50: 0xae0d008c  sw          $t5, 0x8C($s0)
    ctx->pc = 0x1c99d50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 13));
    // 0x1c99d54: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x1c99d54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x1c99d58: 0xc7262c6  jal         func_1C98B18
    ctx->pc = 0x1C99D58u;
    SET_GPR_U32(ctx, 31, 0x1C99D60u);
    ctx->pc = 0x1C99D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C99D58u;
    // 0x1c99d5c: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B18u, 0x1C99D58u, 0x1C99D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C99D60u;
label_1c99d60:
    // 0x1c99d60: 0x261000b0  addiu       $s0, $s0, 0xB0
    ctx->pc = 0x1c99d60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x1c99d64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c99d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c99d68: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c99d68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c99d6c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c99d6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c99d70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c99d70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c99d74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c99d74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c99d78: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c99d78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c99d7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c99d7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c99d80: 0x87262c6  j           func_1C98B18
    ctx->pc = 0x1C99D80u;
    ctx->pc = 0x1C99D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C99D80u;
    // 0x1c99d84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B18u;
    sub_01C98B18_0x1c98b18(rdram, ctx, runtime); return;
    ctx->pc = 0x1C99D88u;
}
