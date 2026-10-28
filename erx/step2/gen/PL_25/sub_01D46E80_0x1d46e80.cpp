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

// Function: sub_01D46E80
// Address: 0x1d46e80 - 0x1d46f80
void sub_01D46E80_0x1d46e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D46E80_0x1d46e80");
#endif

    switch (ctx->pc) {
        case 0x1d46eb0u: goto label_1d46eb0;
        case 0x1d46ee0u: goto label_1d46ee0;
        case 0x1d46ef0u: goto label_1d46ef0;
        case 0x1d46f00u: goto label_1d46f00;
        case 0x1d46f58u: goto label_1d46f58;
        default: break;
    }

    ctx->pc = 0x1d46e80u;

    // 0x1d46e80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d46e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d46e84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d46e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d46e88: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d46e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d46e8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d46e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d46e90: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d46e90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d46e94: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d46e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d46e98: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d46e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d46e9c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1d46e9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d46ea0: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d46ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d46ea4: 0x26130060  addiu       $s3, $s0, 0x60
    ctx->pc = 0x1d46ea4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1d46ea8: 0xc751756  jal         func_1D45D58
    ctx->pc = 0x1D46EA8u;
    SET_GPR_U32(ctx, 31, 0x1D46EB0u);
    ctx->pc = 0x1D46EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D46EA8u;
    // 0x1d46eac: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D58u, 0x1D46EA8u, 0x1D46EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D46EB0u;
label_1d46eb0:
    // 0x1d46eb0: 0x24520200  addiu       $s2, $v0, 0x200
    ctx->pc = 0x1d46eb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1d46eb4: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x1d46eb4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1d46eb8: 0x8e4e004c  lw          $t6, 0x4C($s2)
    ctx->pc = 0x1d46eb8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1d46ebc: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1d46ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1d46ec0: 0xae0f0088  sw          $t7, 0x88($s0)
    ctx->pc = 0x1d46ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 15));
    // 0x1d46ec4: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1d46ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1d46ec8: 0x8e2f0008  lw          $t7, 0x8($s1)
    ctx->pc = 0x1d46ec8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1d46ecc: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1d46eccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1d46ed0: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1d46ed0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1d46ed4: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1d46ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1d46ed8: 0xc751746  jal         func_1D45D18
    ctx->pc = 0x1D46ED8u;
    SET_GPR_U32(ctx, 31, 0x1D46EE0u);
    ctx->pc = 0x1D46EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D46ED8u;
    // 0x1d46edc: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D18u, 0x1D46ED8u, 0x1D46EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D46EE0u;
label_1d46ee0:
    // 0x1d46ee0: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x1d46ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1d46ee4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d46ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d46ee8: 0xc751746  jal         func_1D45D18
    ctx->pc = 0x1D46EE8u;
    SET_GPR_U32(ctx, 31, 0x1D46EF0u);
    ctx->pc = 0x1D46EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D46EE8u;
    // 0x1d46eec: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D18u, 0x1D46EE8u, 0x1D46EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D46EF0u;
label_1d46ef0:
    // 0x1d46ef0: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x1d46ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x1d46ef4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d46ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d46ef8: 0xc751748  jal         func_1D45D20
    ctx->pc = 0x1D46EF8u;
    SET_GPR_U32(ctx, 31, 0x1D46F00u);
    ctx->pc = 0x1D46EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D46EF8u;
    // 0x1d46efc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D20u, 0x1D46EF8u, 0x1D46F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D46F00u;
label_1d46f00:
    // 0x1d46f00: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1d46f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d46f04: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1d46f04u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1d46f08: 0x8e2e0000  lw          $t6, 0x0($s1)
    ctx->pc = 0x1d46f08u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d46f0c: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x1d46f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x1d46f10: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x1d46f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x1d46f14: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x1d46f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1d46f18: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x1d46f18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1d46f1c: 0x8e2d001c  lw          $t5, 0x1C($s1)
    ctx->pc = 0x1d46f1cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1d46f20: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1d46f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d46f24: 0xae0d0084  sw          $t5, 0x84($s0)
    ctx->pc = 0x1d46f24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 13));
    // 0x1d46f28: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x1d46f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x1d46f2c: 0x8e4f00b4  lw          $t7, 0xB4($s2)
    ctx->pc = 0x1d46f2cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1d46f30: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1d46f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d46f34: 0x8e2d0020  lw          $t5, 0x20($s1)
    ctx->pc = 0x1d46f34u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1d46f38: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d46f38u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d46f3c: 0xe600007c  swc1        $f0, 0x7C($s0)
    ctx->pc = 0x1d46f3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x1d46f40: 0xae0f0078  sw          $t7, 0x78($s0)
    ctx->pc = 0x1d46f40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 15));
    // 0x1d46f44: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1d46f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d46f48: 0xae0d008c  sw          $t5, 0x8C($s0)
    ctx->pc = 0x1d46f48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 13));
    // 0x1d46f4c: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x1d46f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x1d46f50: 0xc751746  jal         func_1D45D18
    ctx->pc = 0x1D46F50u;
    SET_GPR_U32(ctx, 31, 0x1D46F58u);
    ctx->pc = 0x1D46F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D46F50u;
    // 0x1d46f54: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D18u, 0x1D46F50u, 0x1D46F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D46F58u;
label_1d46f58:
    // 0x1d46f58: 0x261000b0  addiu       $s0, $s0, 0xB0
    ctx->pc = 0x1d46f58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x1d46f5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d46f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d46f60: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d46f60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d46f64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d46f64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d46f68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d46f68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d46f6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d46f6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d46f70: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d46f70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d46f74: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d46f74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d46f78: 0x8751746  j           func_1D45D18
    ctx->pc = 0x1D46F78u;
    ctx->pc = 0x1D46F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D46F78u;
    // 0x1d46f7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D18u;
    sub_01D45D18_0x1d45d18(rdram, ctx, runtime); return;
    ctx->pc = 0x1D46F80u;
}
