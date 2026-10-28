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

// Function: sub_01D34590
// Address: 0x1d34590 - 0x1d34678
void sub_01D34590_0x1d34590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D34590_0x1d34590");
#endif

    switch (ctx->pc) {
        case 0x1d345c0u: goto label_1d345c0;
        case 0x1d345f0u: goto label_1d345f0;
        case 0x1d34600u: goto label_1d34600;
        case 0x1d34610u: goto label_1d34610;
        default: break;
    }

    ctx->pc = 0x1d34590u;

    // 0x1d34590: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d34590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d34594: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d34594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d34598: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d34598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d3459c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d3459cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d345a0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d345a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d345a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d345a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d345a8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d345a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d345ac: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1d345acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d345b0: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d345b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d345b4: 0x26130010  addiu       $s3, $s0, 0x10
    ctx->pc = 0x1d345b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1d345b8: 0xc74cd56  jal         func_1D33558
    ctx->pc = 0x1D345B8u;
    SET_GPR_U32(ctx, 31, 0x1D345C0u);
    ctx->pc = 0x1D345BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D345B8u;
    // 0x1d345bc: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33558u, 0x1D345B8u, 0x1D345C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D345C0u;
label_1d345c0:
    // 0x1d345c0: 0x24520200  addiu       $s2, $v0, 0x200
    ctx->pc = 0x1d345c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1d345c4: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x1d345c4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1d345c8: 0x8e4e004c  lw          $t6, 0x4C($s2)
    ctx->pc = 0x1d345c8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1d345cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d345ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d345d0: 0xae0f0034  sw          $t7, 0x34($s0)
    ctx->pc = 0x1d345d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 15));
    // 0x1d345d4: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1d345d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1d345d8: 0x8e2f0008  lw          $t7, 0x8($s1)
    ctx->pc = 0x1d345d8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1d345dc: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1d345dcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1d345e0: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1d345e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1d345e4: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1d345e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1d345e8: 0xc74cd46  jal         func_1D33518
    ctx->pc = 0x1D345E8u;
    SET_GPR_U32(ctx, 31, 0x1D345F0u);
    ctx->pc = 0x1D345ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D345E8u;
    // 0x1d345ec: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33518u, 0x1D345E8u, 0x1D345F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D345F0u;
label_1d345f0:
    // 0x1d345f0: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x1d345f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1d345f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d345f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d345f8: 0xc74cd46  jal         func_1D33518
    ctx->pc = 0x1D345F8u;
    SET_GPR_U32(ctx, 31, 0x1D34600u);
    ctx->pc = 0x1D345FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D345F8u;
    // 0x1d345fc: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33518u, 0x1D345F8u, 0x1D34600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D34600u;
label_1d34600:
    // 0x1d34600: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1d34600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1d34604: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d34604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d34608: 0xc74cd48  jal         func_1D33520
    ctx->pc = 0x1D34608u;
    SET_GPR_U32(ctx, 31, 0x1D34610u);
    ctx->pc = 0x1D3460Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D34608u;
    // 0x1d3460c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33520u, 0x1D34608u, 0x1D34610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D34610u;
label_1d34610:
    // 0x1d34610: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1d34610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d34614: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1d34614u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1d34618: 0x8e2d0000  lw          $t5, 0x0($s1)
    ctx->pc = 0x1d34618u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d3461c: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1d3461cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1d34620: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1d34620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1d34624: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1d34624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1d34628: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1d34628u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1d3462c: 0x8e4e00b4  lw          $t6, 0xB4($s2)
    ctx->pc = 0x1d3462cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1d34630: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1d34630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d34634: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d34634u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d34638: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x1d34638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1d3463c: 0x8e2f001c  lw          $t7, 0x1C($s1)
    ctx->pc = 0x1d3463cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1d34640: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x1d34640u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1d34644: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x1d34644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d34648: 0xae0f0038  sw          $t7, 0x38($s0)
    ctx->pc = 0x1d34648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 15));
    // 0x1d3464c: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x1d3464cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1d34650: 0xae0e0028  sw          $t6, 0x28($s0)
    ctx->pc = 0x1d34650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 14));
    // 0x1d34654: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1d34654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d34658: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d34658u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d3465c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1d3465cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1d34660: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d34660u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d34664: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d34664u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d34668: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d34668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d3466c: 0x874cd46  j           func_1D33518
    ctx->pc = 0x1D3466Cu;
    ctx->pc = 0x1D34670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3466Cu;
    // 0x1d34670: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33518u;
    sub_01D33518_0x1d33518(rdram, ctx, runtime); return;
    ctx->pc = 0x1D34674u;
    // 0x1d34674: 0x0  nop
    ctx->pc = 0x1d34674u;
    // NOP
    ctx->pc = 0x1d34678u;
}
