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

// Function: sub_01C10790
// Address: 0x1c10790 - 0x1c10878
void sub_01C10790_0x1c10790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C10790_0x1c10790");
#endif

    switch (ctx->pc) {
        case 0x1c107c0u: goto label_1c107c0;
        case 0x1c107f0u: goto label_1c107f0;
        case 0x1c10800u: goto label_1c10800;
        case 0x1c10810u: goto label_1c10810;
        default: break;
    }

    ctx->pc = 0x1c10790u;

    // 0x1c10790: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c10790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c10794: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c10794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c10798: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c10798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c1079c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c1079cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c107a0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c107a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c107a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c107a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c107a8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c107a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c107ac: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1c107acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c107b0: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c107b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c107b4: 0x26130010  addiu       $s3, $s0, 0x10
    ctx->pc = 0x1c107b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1c107b8: 0xc703dd6  jal         func_1C0F758
    ctx->pc = 0x1C107B8u;
    SET_GPR_U32(ctx, 31, 0x1C107C0u);
    ctx->pc = 0x1C107BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C107B8u;
    // 0x1c107bc: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F758u, 0x1C107B8u, 0x1C107C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C107C0u;
label_1c107c0:
    // 0x1c107c0: 0x24520200  addiu       $s2, $v0, 0x200
    ctx->pc = 0x1c107c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1c107c4: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x1c107c4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c107c8: 0x8e4e004c  lw          $t6, 0x4C($s2)
    ctx->pc = 0x1c107c8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1c107cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c107ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c107d0: 0xae0f0034  sw          $t7, 0x34($s0)
    ctx->pc = 0x1c107d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 15));
    // 0x1c107d4: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1c107d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1c107d8: 0x8e2f0008  lw          $t7, 0x8($s1)
    ctx->pc = 0x1c107d8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1c107dc: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1c107dcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1c107e0: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1c107e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1c107e4: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1c107e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1c107e8: 0xc703dc6  jal         func_1C0F718
    ctx->pc = 0x1C107E8u;
    SET_GPR_U32(ctx, 31, 0x1C107F0u);
    ctx->pc = 0x1C107ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C107E8u;
    // 0x1c107ec: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F718u, 0x1C107E8u, 0x1C107F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C107F0u;
label_1c107f0:
    // 0x1c107f0: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x1c107f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1c107f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c107f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c107f8: 0xc703dc6  jal         func_1C0F718
    ctx->pc = 0x1C107F8u;
    SET_GPR_U32(ctx, 31, 0x1C10800u);
    ctx->pc = 0x1C107FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C107F8u;
    // 0x1c107fc: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F718u, 0x1C107F8u, 0x1C10800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C10800u;
label_1c10800:
    // 0x1c10800: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1c10800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1c10804: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c10804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c10808: 0xc703dc8  jal         func_1C0F720
    ctx->pc = 0x1C10808u;
    SET_GPR_U32(ctx, 31, 0x1C10810u);
    ctx->pc = 0x1C1080Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C10808u;
    // 0x1c1080c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F720u, 0x1C10808u, 0x1C10810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C10810u;
label_1c10810:
    // 0x1c10810: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1c10810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c10814: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1c10814u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c10818: 0x8e2d0000  lw          $t5, 0x0($s1)
    ctx->pc = 0x1c10818u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c1081c: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1c1081cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1c10820: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1c10820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1c10824: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1c10824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1c10828: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1c10828u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1c1082c: 0x8e4e00b4  lw          $t6, 0xB4($s2)
    ctx->pc = 0x1c1082cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1c10830: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1c10830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c10834: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c10834u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c10838: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x1c10838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1c1083c: 0x8e2f001c  lw          $t7, 0x1C($s1)
    ctx->pc = 0x1c1083cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1c10840: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x1c10840u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1c10844: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x1c10844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c10848: 0xae0f0038  sw          $t7, 0x38($s0)
    ctx->pc = 0x1c10848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 15));
    // 0x1c1084c: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x1c1084cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1c10850: 0xae0e0028  sw          $t6, 0x28($s0)
    ctx->pc = 0x1c10850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 14));
    // 0x1c10854: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1c10854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c10858: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c10858u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c1085c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1c1085cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1c10860: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c10860u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c10864: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c10864u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c10868: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c10868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c1086c: 0x8703dc6  j           func_1C0F718
    ctx->pc = 0x1C1086Cu;
    ctx->pc = 0x1C10870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1086Cu;
    // 0x1c10870: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F718u;
    sub_01C0F718_0x1c0f718(rdram, ctx, runtime); return;
    ctx->pc = 0x1C10874u;
    // 0x1c10874: 0x0  nop
    ctx->pc = 0x1c10874u;
    // NOP
    ctx->pc = 0x1c10878u;
}
