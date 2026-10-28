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

// Function: sub_01D7E7A8
// Address: 0x1d7e7a8 - 0x1d7e890
void sub_01D7E7A8_0x1d7e7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D7E7A8_0x1d7e7a8");
#endif

    switch (ctx->pc) {
        case 0x1d7e7d8u: goto label_1d7e7d8;
        case 0x1d7e808u: goto label_1d7e808;
        case 0x1d7e818u: goto label_1d7e818;
        case 0x1d7e828u: goto label_1d7e828;
        default: break;
    }

    ctx->pc = 0x1d7e7a8u;

    // 0x1d7e7a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d7e7a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d7e7ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d7e7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d7e7b0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d7e7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d7e7b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d7e7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d7e7b8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d7e7b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e7bc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d7e7bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d7e7c0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d7e7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d7e7c4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1d7e7c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e7c8: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d7e7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d7e7cc: 0x26130010  addiu       $s3, $s0, 0x10
    ctx->pc = 0x1d7e7ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1d7e7d0: 0xc75f5d6  jal         func_1D7D758
    ctx->pc = 0x1D7E7D0u;
    SET_GPR_U32(ctx, 31, 0x1D7E7D8u);
    ctx->pc = 0x1D7E7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E7D0u;
    // 0x1d7e7d4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D758u, 0x1D7E7D0u, 0x1D7E7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E7D8u;
label_1d7e7d8:
    // 0x1d7e7d8: 0x24520200  addiu       $s2, $v0, 0x200
    ctx->pc = 0x1d7e7d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1d7e7dc: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x1d7e7dcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1d7e7e0: 0x8e4e004c  lw          $t6, 0x4C($s2)
    ctx->pc = 0x1d7e7e0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1d7e7e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d7e7e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e7e8: 0xae0f0034  sw          $t7, 0x34($s0)
    ctx->pc = 0x1d7e7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 15));
    // 0x1d7e7ec: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1d7e7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1d7e7f0: 0x8e2f0008  lw          $t7, 0x8($s1)
    ctx->pc = 0x1d7e7f0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1d7e7f4: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1d7e7f4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1d7e7f8: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1d7e7f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1d7e7fc: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1d7e7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1d7e800: 0xc75f5c6  jal         func_1D7D718
    ctx->pc = 0x1D7E800u;
    SET_GPR_U32(ctx, 31, 0x1D7E808u);
    ctx->pc = 0x1D7E804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E800u;
    // 0x1d7e804: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D718u, 0x1D7E800u, 0x1D7E808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E808u;
label_1d7e808:
    // 0x1d7e808: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x1d7e808u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1d7e80c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d7e80cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e810: 0xc75f5c6  jal         func_1D7D718
    ctx->pc = 0x1D7E810u;
    SET_GPR_U32(ctx, 31, 0x1D7E818u);
    ctx->pc = 0x1D7E814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E810u;
    // 0x1d7e814: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D718u, 0x1D7E810u, 0x1D7E818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E818u;
label_1d7e818:
    // 0x1d7e818: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1d7e818u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1d7e81c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d7e81cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e820: 0xc75f5c8  jal         func_1D7D720
    ctx->pc = 0x1D7E820u;
    SET_GPR_U32(ctx, 31, 0x1D7E828u);
    ctx->pc = 0x1D7E824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E820u;
    // 0x1d7e824: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D720u, 0x1D7E820u, 0x1D7E828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E828u;
label_1d7e828:
    // 0x1d7e828: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1d7e828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7e82c: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1d7e82cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1d7e830: 0x8e2d0000  lw          $t5, 0x0($s1)
    ctx->pc = 0x1d7e830u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d7e834: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1d7e834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1d7e838: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1d7e838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1d7e83c: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1d7e83cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1d7e840: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1d7e840u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1d7e844: 0x8e4e00b4  lw          $t6, 0xB4($s2)
    ctx->pc = 0x1d7e844u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1d7e848: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1d7e848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7e84c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d7e84cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7e850: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x1d7e850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1d7e854: 0x8e2f001c  lw          $t7, 0x1C($s1)
    ctx->pc = 0x1d7e854u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1d7e858: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x1d7e858u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1d7e85c: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x1d7e85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7e860: 0xae0f0038  sw          $t7, 0x38($s0)
    ctx->pc = 0x1d7e860u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 15));
    // 0x1d7e864: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x1d7e864u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1d7e868: 0xae0e0028  sw          $t6, 0x28($s0)
    ctx->pc = 0x1d7e868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 14));
    // 0x1d7e86c: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1d7e86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7e870: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d7e870u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d7e874: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1d7e874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1d7e878: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d7e878u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d7e87c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d7e87cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7e880: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d7e880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d7e884: 0x875f5c6  j           func_1D7D718
    ctx->pc = 0x1D7E884u;
    ctx->pc = 0x1D7E888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E884u;
    // 0x1d7e888: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D718u;
    sub_01D7D718_0x1d7d718(rdram, ctx, runtime); return;
    ctx->pc = 0x1D7E88Cu;
    // 0x1d7e88c: 0x0  nop
    ctx->pc = 0x1d7e88cu;
    // NOP
    ctx->pc = 0x1d7e890u;
}
