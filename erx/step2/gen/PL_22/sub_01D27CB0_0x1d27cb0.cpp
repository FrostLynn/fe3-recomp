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

// Function: sub_01D27CB0
// Address: 0x1d27cb0 - 0x1d27d98
void sub_01D27CB0_0x1d27cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D27CB0_0x1d27cb0");
#endif

    switch (ctx->pc) {
        case 0x1d27ce0u: goto label_1d27ce0;
        case 0x1d27d10u: goto label_1d27d10;
        case 0x1d27d20u: goto label_1d27d20;
        case 0x1d27d30u: goto label_1d27d30;
        default: break;
    }

    ctx->pc = 0x1d27cb0u;

    // 0x1d27cb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d27cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d27cb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d27cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d27cb8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d27cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d27cbc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d27cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d27cc0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d27cc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d27cc4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d27cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d27cc8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d27cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d27ccc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1d27cccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d27cd0: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d27cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d27cd4: 0x26130010  addiu       $s3, $s0, 0x10
    ctx->pc = 0x1d27cd4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1d27cd8: 0xc749b1a  jal         func_1D26C68
    ctx->pc = 0x1D27CD8u;
    SET_GPR_U32(ctx, 31, 0x1D27CE0u);
    ctx->pc = 0x1D27CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D27CD8u;
    // 0x1d27cdc: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C68u, 0x1D27CD8u, 0x1D27CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D27CE0u;
label_1d27ce0:
    // 0x1d27ce0: 0x24520200  addiu       $s2, $v0, 0x200
    ctx->pc = 0x1d27ce0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1d27ce4: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x1d27ce4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1d27ce8: 0x8e4e004c  lw          $t6, 0x4C($s2)
    ctx->pc = 0x1d27ce8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1d27cec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d27cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d27cf0: 0xae0f0034  sw          $t7, 0x34($s0)
    ctx->pc = 0x1d27cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 15));
    // 0x1d27cf4: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1d27cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1d27cf8: 0x8e2f0008  lw          $t7, 0x8($s1)
    ctx->pc = 0x1d27cf8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1d27cfc: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1d27cfcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1d27d00: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1d27d00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1d27d04: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1d27d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1d27d08: 0xc749b06  jal         func_1D26C18
    ctx->pc = 0x1D27D08u;
    SET_GPR_U32(ctx, 31, 0x1D27D10u);
    ctx->pc = 0x1D27D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D27D08u;
    // 0x1d27d0c: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C18u, 0x1D27D08u, 0x1D27D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D27D10u;
label_1d27d10:
    // 0x1d27d10: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x1d27d10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1d27d14: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d27d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d27d18: 0xc749b06  jal         func_1D26C18
    ctx->pc = 0x1D27D18u;
    SET_GPR_U32(ctx, 31, 0x1D27D20u);
    ctx->pc = 0x1D27D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D27D18u;
    // 0x1d27d1c: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C18u, 0x1D27D18u, 0x1D27D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D27D20u;
label_1d27d20:
    // 0x1d27d20: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1d27d20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1d27d24: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d27d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d27d28: 0xc749b0c  jal         func_1D26C30
    ctx->pc = 0x1D27D28u;
    SET_GPR_U32(ctx, 31, 0x1D27D30u);
    ctx->pc = 0x1D27D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D27D28u;
    // 0x1d27d2c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C30u, 0x1D27D28u, 0x1D27D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D27D30u;
label_1d27d30:
    // 0x1d27d30: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1d27d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d27d34: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1d27d34u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1d27d38: 0x8e2d0000  lw          $t5, 0x0($s1)
    ctx->pc = 0x1d27d38u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d27d3c: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1d27d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1d27d40: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1d27d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1d27d44: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1d27d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1d27d48: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1d27d48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1d27d4c: 0x8e4e00b4  lw          $t6, 0xB4($s2)
    ctx->pc = 0x1d27d4cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1d27d50: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1d27d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d27d54: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d27d54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d27d58: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x1d27d58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1d27d5c: 0x8e2f001c  lw          $t7, 0x1C($s1)
    ctx->pc = 0x1d27d5cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1d27d60: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x1d27d60u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1d27d64: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x1d27d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d27d68: 0xae0f0038  sw          $t7, 0x38($s0)
    ctx->pc = 0x1d27d68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 15));
    // 0x1d27d6c: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x1d27d6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1d27d70: 0xae0e0028  sw          $t6, 0x28($s0)
    ctx->pc = 0x1d27d70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 14));
    // 0x1d27d74: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1d27d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d27d78: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d27d78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d27d7c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1d27d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1d27d80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d27d80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d27d84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d27d84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d27d88: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d27d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d27d8c: 0x8749b06  j           func_1D26C18
    ctx->pc = 0x1D27D8Cu;
    ctx->pc = 0x1D27D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D27D8Cu;
    // 0x1d27d90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C18u;
    sub_01D26C18_0x1d26c18(rdram, ctx, runtime); return;
    ctx->pc = 0x1D27D94u;
    // 0x1d27d94: 0x0  nop
    ctx->pc = 0x1d27d94u;
    // NOP
    ctx->pc = 0x1d27d98u;
}
