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

// Function: sub_01CC34A0
// Address: 0x1cc34a0 - 0x1cc3588
void sub_01CC34A0_0x1cc34a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC34A0_0x1cc34a0");
#endif

    switch (ctx->pc) {
        case 0x1cc34d0u: goto label_1cc34d0;
        case 0x1cc3500u: goto label_1cc3500;
        case 0x1cc3510u: goto label_1cc3510;
        case 0x1cc3520u: goto label_1cc3520;
        default: break;
    }

    ctx->pc = 0x1cc34a0u;

    // 0x1cc34a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cc34a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cc34a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cc34a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cc34a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cc34a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1cc34ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cc34acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cc34b0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1cc34b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc34b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cc34b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cc34b8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1cc34b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1cc34bc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1cc34bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc34c0: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cc34c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cc34c4: 0x26130010  addiu       $s3, $s0, 0x10
    ctx->pc = 0x1cc34c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1cc34c8: 0xc730918  jal         func_1CC2460
    ctx->pc = 0x1CC34C8u;
    SET_GPR_U32(ctx, 31, 0x1CC34D0u);
    ctx->pc = 0x1CC34CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC34C8u;
    // 0x1cc34cc: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2460u, 0x1CC34C8u, 0x1CC34D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC34D0u;
label_1cc34d0:
    // 0x1cc34d0: 0x24520200  addiu       $s2, $v0, 0x200
    ctx->pc = 0x1cc34d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1cc34d4: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x1cc34d4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1cc34d8: 0x8e4e004c  lw          $t6, 0x4C($s2)
    ctx->pc = 0x1cc34d8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1cc34dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cc34dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc34e0: 0xae0f0034  sw          $t7, 0x34($s0)
    ctx->pc = 0x1cc34e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 15));
    // 0x1cc34e4: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1cc34e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1cc34e8: 0x8e2f0008  lw          $t7, 0x8($s1)
    ctx->pc = 0x1cc34e8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1cc34ec: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1cc34ecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1cc34f0: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1cc34f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1cc34f4: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1cc34f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1cc34f8: 0xc730906  jal         func_1CC2418
    ctx->pc = 0x1CC34F8u;
    SET_GPR_U32(ctx, 31, 0x1CC3500u);
    ctx->pc = 0x1CC34FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC34F8u;
    // 0x1cc34fc: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2418u, 0x1CC34F8u, 0x1CC3500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC3500u;
label_1cc3500:
    // 0x1cc3500: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x1cc3500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1cc3504: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cc3504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc3508: 0xc730906  jal         func_1CC2418
    ctx->pc = 0x1CC3508u;
    SET_GPR_U32(ctx, 31, 0x1CC3510u);
    ctx->pc = 0x1CC350Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC3508u;
    // 0x1cc350c: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2418u, 0x1CC3508u, 0x1CC3510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC3510u;
label_1cc3510:
    // 0x1cc3510: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1cc3510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1cc3514: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cc3514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc3518: 0xc73090a  jal         func_1CC2428
    ctx->pc = 0x1CC3518u;
    SET_GPR_U32(ctx, 31, 0x1CC3520u);
    ctx->pc = 0x1CC351Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC3518u;
    // 0x1cc351c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2428u, 0x1CC3518u, 0x1CC3520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC3520u;
label_1cc3520:
    // 0x1cc3520: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1cc3520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc3524: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1cc3524u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1cc3528: 0x8e2d0000  lw          $t5, 0x0($s1)
    ctx->pc = 0x1cc3528u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cc352c: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1cc352cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1cc3530: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1cc3530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1cc3534: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1cc3534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1cc3538: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1cc3538u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1cc353c: 0x8e4e00b4  lw          $t6, 0xB4($s2)
    ctx->pc = 0x1cc353cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1cc3540: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1cc3540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc3544: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cc3544u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc3548: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x1cc3548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1cc354c: 0x8e2f001c  lw          $t7, 0x1C($s1)
    ctx->pc = 0x1cc354cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1cc3550: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x1cc3550u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1cc3554: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x1cc3554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cc3558: 0xae0f0038  sw          $t7, 0x38($s0)
    ctx->pc = 0x1cc3558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 15));
    // 0x1cc355c: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x1cc355cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1cc3560: 0xae0e0028  sw          $t6, 0x28($s0)
    ctx->pc = 0x1cc3560u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 14));
    // 0x1cc3564: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1cc3564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc3568: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1cc3568u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cc356c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1cc356cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1cc3570: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cc3570u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cc3574: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cc3574u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc3578: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cc3578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cc357c: 0x8730906  j           func_1CC2418
    ctx->pc = 0x1CC357Cu;
    ctx->pc = 0x1CC3580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC357Cu;
    // 0x1cc3580: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2418u;
    sub_01CC2418_0x1cc2418(rdram, ctx, runtime); return;
    ctx->pc = 0x1CC3584u;
    // 0x1cc3584: 0x0  nop
    ctx->pc = 0x1cc3584u;
    // NOP
    ctx->pc = 0x1cc3588u;
}
