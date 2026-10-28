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

// Function: sub_01C434C0
// Address: 0x1c434c0 - 0x1c435a8
void sub_01C434C0_0x1c434c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C434C0_0x1c434c0");
#endif

    switch (ctx->pc) {
        case 0x1c434f0u: goto label_1c434f0;
        case 0x1c43520u: goto label_1c43520;
        case 0x1c43530u: goto label_1c43530;
        case 0x1c43540u: goto label_1c43540;
        default: break;
    }

    ctx->pc = 0x1c434c0u;

    // 0x1c434c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c434c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c434c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c434c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c434c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c434c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c434cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c434ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c434d0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c434d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c434d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c434d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c434d8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c434d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c434dc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1c434dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c434e0: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c434e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c434e4: 0x26130010  addiu       $s3, $s0, 0x10
    ctx->pc = 0x1c434e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1c434e8: 0xc710916  jal         func_1C42458
    ctx->pc = 0x1C434E8u;
    SET_GPR_U32(ctx, 31, 0x1C434F0u);
    ctx->pc = 0x1C434ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C434E8u;
    // 0x1c434ec: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42458u, 0x1C434E8u, 0x1C434F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C434F0u;
label_1c434f0:
    // 0x1c434f0: 0x24520200  addiu       $s2, $v0, 0x200
    ctx->pc = 0x1c434f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1c434f4: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x1c434f4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c434f8: 0x8e4e004c  lw          $t6, 0x4C($s2)
    ctx->pc = 0x1c434f8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1c434fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c434fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c43500: 0xae0f0034  sw          $t7, 0x34($s0)
    ctx->pc = 0x1c43500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 15));
    // 0x1c43504: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1c43504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1c43508: 0x8e2f0008  lw          $t7, 0x8($s1)
    ctx->pc = 0x1c43508u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1c4350c: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1c4350cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1c43510: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1c43510u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1c43514: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1c43514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1c43518: 0xc710906  jal         func_1C42418
    ctx->pc = 0x1C43518u;
    SET_GPR_U32(ctx, 31, 0x1C43520u);
    ctx->pc = 0x1C4351Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C43518u;
    // 0x1c4351c: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42418u, 0x1C43518u, 0x1C43520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C43520u;
label_1c43520:
    // 0x1c43520: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x1c43520u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1c43524: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c43524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c43528: 0xc710906  jal         func_1C42418
    ctx->pc = 0x1C43528u;
    SET_GPR_U32(ctx, 31, 0x1C43530u);
    ctx->pc = 0x1C4352Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C43528u;
    // 0x1c4352c: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42418u, 0x1C43528u, 0x1C43530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C43530u;
label_1c43530:
    // 0x1c43530: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1c43530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1c43534: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c43534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c43538: 0xc710908  jal         func_1C42420
    ctx->pc = 0x1C43538u;
    SET_GPR_U32(ctx, 31, 0x1C43540u);
    ctx->pc = 0x1C4353Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C43538u;
    // 0x1c4353c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42420u, 0x1C43538u, 0x1C43540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C43540u;
label_1c43540:
    // 0x1c43540: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1c43540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c43544: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1c43544u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c43548: 0x8e2d0000  lw          $t5, 0x0($s1)
    ctx->pc = 0x1c43548u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c4354c: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1c4354cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1c43550: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1c43550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1c43554: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1c43554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1c43558: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1c43558u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1c4355c: 0x8e4e00b4  lw          $t6, 0xB4($s2)
    ctx->pc = 0x1c4355cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1c43560: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1c43560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c43564: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c43564u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c43568: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x1c43568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1c4356c: 0x8e2f001c  lw          $t7, 0x1C($s1)
    ctx->pc = 0x1c4356cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1c43570: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x1c43570u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1c43574: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x1c43574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c43578: 0xae0f0038  sw          $t7, 0x38($s0)
    ctx->pc = 0x1c43578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 15));
    // 0x1c4357c: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x1c4357cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1c43580: 0xae0e0028  sw          $t6, 0x28($s0)
    ctx->pc = 0x1c43580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 14));
    // 0x1c43584: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1c43584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c43588: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c43588u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c4358c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1c4358cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1c43590: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c43590u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c43594: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c43594u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c43598: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c43598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c4359c: 0x8710906  j           func_1C42418
    ctx->pc = 0x1C4359Cu;
    ctx->pc = 0x1C435A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4359Cu;
    // 0x1c435a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42418u;
    sub_01C42418_0x1c42418(rdram, ctx, runtime); return;
    ctx->pc = 0x1C435A4u;
    // 0x1c435a4: 0x0  nop
    ctx->pc = 0x1c435a4u;
    // NOP
    ctx->pc = 0x1c435a8u;
}
