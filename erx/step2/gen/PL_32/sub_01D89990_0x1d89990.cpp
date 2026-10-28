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

// Function: sub_01D89990
// Address: 0x1d89990 - 0x1d89a78
void sub_01D89990_0x1d89990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D89990_0x1d89990");
#endif

    switch (ctx->pc) {
        case 0x1d899c0u: goto label_1d899c0;
        case 0x1d899f0u: goto label_1d899f0;
        case 0x1d89a00u: goto label_1d89a00;
        case 0x1d89a10u: goto label_1d89a10;
        default: break;
    }

    ctx->pc = 0x1d89990u;

    // 0x1d89990: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d89990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d89994: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d89994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d89998: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d89998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d8999c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d8999cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d899a0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d899a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d899a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d899a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d899a8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d899a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d899ac: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1d899acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d899b0: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d899b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d899b4: 0x26130010  addiu       $s3, $s0, 0x10
    ctx->pc = 0x1d899b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1d899b8: 0xc762256  jal         func_1D88958
    ctx->pc = 0x1D899B8u;
    SET_GPR_U32(ctx, 31, 0x1D899C0u);
    ctx->pc = 0x1D899BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D899B8u;
    // 0x1d899bc: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88958u, 0x1D899B8u, 0x1D899C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D899C0u;
label_1d899c0:
    // 0x1d899c0: 0x24520200  addiu       $s2, $v0, 0x200
    ctx->pc = 0x1d899c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1d899c4: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x1d899c4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1d899c8: 0x8e4e004c  lw          $t6, 0x4C($s2)
    ctx->pc = 0x1d899c8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1d899cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d899ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d899d0: 0xae0f0034  sw          $t7, 0x34($s0)
    ctx->pc = 0x1d899d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 15));
    // 0x1d899d4: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1d899d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1d899d8: 0x8e2f0008  lw          $t7, 0x8($s1)
    ctx->pc = 0x1d899d8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1d899dc: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1d899dcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1d899e0: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1d899e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1d899e4: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1d899e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1d899e8: 0xc762246  jal         func_1D88918
    ctx->pc = 0x1D899E8u;
    SET_GPR_U32(ctx, 31, 0x1D899F0u);
    ctx->pc = 0x1D899ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D899E8u;
    // 0x1d899ec: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88918u, 0x1D899E8u, 0x1D899F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D899F0u;
label_1d899f0:
    // 0x1d899f0: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x1d899f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1d899f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d899f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d899f8: 0xc762246  jal         func_1D88918
    ctx->pc = 0x1D899F8u;
    SET_GPR_U32(ctx, 31, 0x1D89A00u);
    ctx->pc = 0x1D899FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D899F8u;
    // 0x1d899fc: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88918u, 0x1D899F8u, 0x1D89A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D89A00u;
label_1d89a00:
    // 0x1d89a00: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1d89a00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1d89a04: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d89a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d89a08: 0xc762248  jal         func_1D88920
    ctx->pc = 0x1D89A08u;
    SET_GPR_U32(ctx, 31, 0x1D89A10u);
    ctx->pc = 0x1D89A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D89A08u;
    // 0x1d89a0c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88920u, 0x1D89A08u, 0x1D89A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D89A10u;
label_1d89a10:
    // 0x1d89a10: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1d89a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d89a14: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1d89a14u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1d89a18: 0x8e2d0000  lw          $t5, 0x0($s1)
    ctx->pc = 0x1d89a18u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d89a1c: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1d89a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1d89a20: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1d89a20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1d89a24: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1d89a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1d89a28: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1d89a28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1d89a2c: 0x8e4e00b4  lw          $t6, 0xB4($s2)
    ctx->pc = 0x1d89a2cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1d89a30: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1d89a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d89a34: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d89a34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d89a38: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x1d89a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1d89a3c: 0x8e2f001c  lw          $t7, 0x1C($s1)
    ctx->pc = 0x1d89a3cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1d89a40: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x1d89a40u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1d89a44: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x1d89a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d89a48: 0xae0f0038  sw          $t7, 0x38($s0)
    ctx->pc = 0x1d89a48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 15));
    // 0x1d89a4c: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x1d89a4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1d89a50: 0xae0e0028  sw          $t6, 0x28($s0)
    ctx->pc = 0x1d89a50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 14));
    // 0x1d89a54: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1d89a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d89a58: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d89a58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d89a5c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1d89a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1d89a60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d89a60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d89a64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d89a64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d89a68: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d89a68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d89a6c: 0x8762246  j           func_1D88918
    ctx->pc = 0x1D89A6Cu;
    ctx->pc = 0x1D89A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D89A6Cu;
    // 0x1d89a70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88918u;
    sub_01D88918_0x1d88918(rdram, ctx, runtime); return;
    ctx->pc = 0x1D89A74u;
    // 0x1d89a74: 0x0  nop
    ctx->pc = 0x1d89a74u;
    // NOP
    ctx->pc = 0x1d89a78u;
}
