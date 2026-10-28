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

// Function: sub_01D27D98
// Address: 0x1d27d98 - 0x1d27e98
void sub_01D27D98_0x1d27d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D27D98_0x1d27d98");
#endif

    switch (ctx->pc) {
        case 0x1d27dc8u: goto label_1d27dc8;
        case 0x1d27df8u: goto label_1d27df8;
        case 0x1d27e08u: goto label_1d27e08;
        case 0x1d27e18u: goto label_1d27e18;
        case 0x1d27e70u: goto label_1d27e70;
        default: break;
    }

    ctx->pc = 0x1d27d98u;

    // 0x1d27d98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d27d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d27d9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d27d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d27da0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d27da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d27da4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d27da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d27da8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d27da8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d27dac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d27dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d27db0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d27db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d27db4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1d27db4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d27db8: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d27db8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d27dbc: 0x26130060  addiu       $s3, $s0, 0x60
    ctx->pc = 0x1d27dbcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1d27dc0: 0xc749b1a  jal         func_1D26C68
    ctx->pc = 0x1D27DC0u;
    SET_GPR_U32(ctx, 31, 0x1D27DC8u);
    ctx->pc = 0x1D27DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D27DC0u;
    // 0x1d27dc4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C68u, 0x1D27DC0u, 0x1D27DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D27DC8u;
label_1d27dc8:
    // 0x1d27dc8: 0x24520200  addiu       $s2, $v0, 0x200
    ctx->pc = 0x1d27dc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1d27dcc: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x1d27dccu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1d27dd0: 0x8e4e004c  lw          $t6, 0x4C($s2)
    ctx->pc = 0x1d27dd0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1d27dd4: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1d27dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1d27dd8: 0xae0f0088  sw          $t7, 0x88($s0)
    ctx->pc = 0x1d27dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 15));
    // 0x1d27ddc: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1d27ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1d27de0: 0x8e2f0008  lw          $t7, 0x8($s1)
    ctx->pc = 0x1d27de0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1d27de4: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1d27de4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1d27de8: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1d27de8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1d27dec: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1d27decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1d27df0: 0xc749b06  jal         func_1D26C18
    ctx->pc = 0x1D27DF0u;
    SET_GPR_U32(ctx, 31, 0x1D27DF8u);
    ctx->pc = 0x1D27DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D27DF0u;
    // 0x1d27df4: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C18u, 0x1D27DF0u, 0x1D27DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D27DF8u;
label_1d27df8:
    // 0x1d27df8: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x1d27df8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1d27dfc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d27dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d27e00: 0xc749b06  jal         func_1D26C18
    ctx->pc = 0x1D27E00u;
    SET_GPR_U32(ctx, 31, 0x1D27E08u);
    ctx->pc = 0x1D27E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D27E00u;
    // 0x1d27e04: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C18u, 0x1D27E00u, 0x1D27E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D27E08u;
label_1d27e08:
    // 0x1d27e08: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x1d27e08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x1d27e0c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d27e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d27e10: 0xc749b0c  jal         func_1D26C30
    ctx->pc = 0x1D27E10u;
    SET_GPR_U32(ctx, 31, 0x1D27E18u);
    ctx->pc = 0x1D27E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D27E10u;
    // 0x1d27e14: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C30u, 0x1D27E10u, 0x1D27E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D27E18u;
label_1d27e18:
    // 0x1d27e18: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1d27e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d27e1c: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1d27e1cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1d27e20: 0x8e2e0000  lw          $t6, 0x0($s1)
    ctx->pc = 0x1d27e20u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d27e24: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x1d27e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x1d27e28: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x1d27e28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x1d27e2c: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x1d27e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1d27e30: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x1d27e30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1d27e34: 0x8e2d001c  lw          $t5, 0x1C($s1)
    ctx->pc = 0x1d27e34u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1d27e38: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1d27e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d27e3c: 0xae0d0084  sw          $t5, 0x84($s0)
    ctx->pc = 0x1d27e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 13));
    // 0x1d27e40: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x1d27e40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x1d27e44: 0x8e4f00b4  lw          $t7, 0xB4($s2)
    ctx->pc = 0x1d27e44u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1d27e48: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1d27e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d27e4c: 0x8e2d0020  lw          $t5, 0x20($s1)
    ctx->pc = 0x1d27e4cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1d27e50: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d27e50u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d27e54: 0xe600007c  swc1        $f0, 0x7C($s0)
    ctx->pc = 0x1d27e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x1d27e58: 0xae0f0078  sw          $t7, 0x78($s0)
    ctx->pc = 0x1d27e58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 15));
    // 0x1d27e5c: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1d27e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d27e60: 0xae0d008c  sw          $t5, 0x8C($s0)
    ctx->pc = 0x1d27e60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 13));
    // 0x1d27e64: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x1d27e64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x1d27e68: 0xc749b06  jal         func_1D26C18
    ctx->pc = 0x1D27E68u;
    SET_GPR_U32(ctx, 31, 0x1D27E70u);
    ctx->pc = 0x1D27E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D27E68u;
    // 0x1d27e6c: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C18u, 0x1D27E68u, 0x1D27E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D27E70u;
label_1d27e70:
    // 0x1d27e70: 0x261000b0  addiu       $s0, $s0, 0xB0
    ctx->pc = 0x1d27e70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x1d27e74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d27e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d27e78: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d27e78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d27e7c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d27e7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d27e80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d27e80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d27e84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d27e84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d27e88: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d27e88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d27e8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d27e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d27e90: 0x8749b06  j           func_1D26C18
    ctx->pc = 0x1D27E90u;
    ctx->pc = 0x1D27E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D27E90u;
    // 0x1d27e94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C18u;
    sub_01D26C18_0x1d26c18(rdram, ctx, runtime); return;
    ctx->pc = 0x1D27E98u;
}
