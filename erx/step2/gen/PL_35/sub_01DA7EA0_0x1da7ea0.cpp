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

// Function: sub_01DA7EA0
// Address: 0x1da7ea0 - 0x1da7f88
void sub_01DA7EA0_0x1da7ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DA7EA0_0x1da7ea0");
#endif

    switch (ctx->pc) {
        case 0x1da7ed0u: goto label_1da7ed0;
        case 0x1da7f00u: goto label_1da7f00;
        case 0x1da7f10u: goto label_1da7f10;
        case 0x1da7f20u: goto label_1da7f20;
        default: break;
    }

    ctx->pc = 0x1da7ea0u;

    // 0x1da7ea0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1da7ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1da7ea4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1da7ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1da7ea8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1da7ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1da7eac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1da7eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1da7eb0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1da7eb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da7eb4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1da7eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1da7eb8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1da7eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1da7ebc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1da7ebcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da7ec0: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1da7ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1da7ec4: 0x26130010  addiu       $s3, $s0, 0x10
    ctx->pc = 0x1da7ec4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1da7ec8: 0xc769b98  jal         func_1DA6E60
    ctx->pc = 0x1DA7EC8u;
    SET_GPR_U32(ctx, 31, 0x1DA7ED0u);
    ctx->pc = 0x1DA7ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA7EC8u;
    // 0x1da7ecc: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E60u, 0x1DA7EC8u, 0x1DA7ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA7ED0u;
label_1da7ed0:
    // 0x1da7ed0: 0x24520200  addiu       $s2, $v0, 0x200
    ctx->pc = 0x1da7ed0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1da7ed4: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x1da7ed4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1da7ed8: 0x8e4e004c  lw          $t6, 0x4C($s2)
    ctx->pc = 0x1da7ed8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1da7edc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da7edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da7ee0: 0xae0f0034  sw          $t7, 0x34($s0)
    ctx->pc = 0x1da7ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 15));
    // 0x1da7ee4: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1da7ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1da7ee8: 0x8e2f0008  lw          $t7, 0x8($s1)
    ctx->pc = 0x1da7ee8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1da7eec: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1da7eecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1da7ef0: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1da7ef0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1da7ef4: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1da7ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1da7ef8: 0xc769b86  jal         func_1DA6E18
    ctx->pc = 0x1DA7EF8u;
    SET_GPR_U32(ctx, 31, 0x1DA7F00u);
    ctx->pc = 0x1DA7EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA7EF8u;
    // 0x1da7efc: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E18u, 0x1DA7EF8u, 0x1DA7F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA7F00u;
label_1da7f00:
    // 0x1da7f00: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x1da7f00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1da7f04: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1da7f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da7f08: 0xc769b86  jal         func_1DA6E18
    ctx->pc = 0x1DA7F08u;
    SET_GPR_U32(ctx, 31, 0x1DA7F10u);
    ctx->pc = 0x1DA7F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA7F08u;
    // 0x1da7f0c: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E18u, 0x1DA7F08u, 0x1DA7F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA7F10u;
label_1da7f10:
    // 0x1da7f10: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1da7f10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1da7f14: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1da7f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da7f18: 0xc769b8a  jal         func_1DA6E28
    ctx->pc = 0x1DA7F18u;
    SET_GPR_U32(ctx, 31, 0x1DA7F20u);
    ctx->pc = 0x1DA7F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA7F18u;
    // 0x1da7f1c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E28u, 0x1DA7F18u, 0x1DA7F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA7F20u;
label_1da7f20:
    // 0x1da7f20: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1da7f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da7f24: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1da7f24u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1da7f28: 0x8e2d0000  lw          $t5, 0x0($s1)
    ctx->pc = 0x1da7f28u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1da7f2c: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1da7f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1da7f30: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1da7f30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1da7f34: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1da7f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1da7f38: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1da7f38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1da7f3c: 0x8e4e00b4  lw          $t6, 0xB4($s2)
    ctx->pc = 0x1da7f3cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1da7f40: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1da7f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da7f44: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1da7f44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1da7f48: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x1da7f48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1da7f4c: 0x8e2f001c  lw          $t7, 0x1C($s1)
    ctx->pc = 0x1da7f4cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1da7f50: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x1da7f50u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1da7f54: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x1da7f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da7f58: 0xae0f0038  sw          $t7, 0x38($s0)
    ctx->pc = 0x1da7f58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 15));
    // 0x1da7f5c: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x1da7f5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1da7f60: 0xae0e0028  sw          $t6, 0x28($s0)
    ctx->pc = 0x1da7f60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 14));
    // 0x1da7f64: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1da7f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da7f68: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1da7f68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1da7f6c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1da7f6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1da7f70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1da7f70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1da7f74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1da7f74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da7f78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1da7f78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1da7f7c: 0x8769b86  j           func_1DA6E18
    ctx->pc = 0x1DA7F7Cu;
    ctx->pc = 0x1DA7F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA7F7Cu;
    // 0x1da7f80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E18u;
    sub_01DA6E18_0x1da6e18(rdram, ctx, runtime); return;
    ctx->pc = 0x1DA7F84u;
    // 0x1da7f84: 0x0  nop
    ctx->pc = 0x1da7f84u;
    // NOP
    ctx->pc = 0x1da7f88u;
}
