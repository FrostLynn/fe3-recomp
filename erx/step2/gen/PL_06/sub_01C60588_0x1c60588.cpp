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

// Function: sub_01C60588
// Address: 0x1c60588 - 0x1c60670
void sub_01C60588_0x1c60588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C60588_0x1c60588");
#endif

    switch (ctx->pc) {
        case 0x1c605b8u: goto label_1c605b8;
        case 0x1c605e8u: goto label_1c605e8;
        case 0x1c605f8u: goto label_1c605f8;
        case 0x1c60608u: goto label_1c60608;
        default: break;
    }

    ctx->pc = 0x1c60588u;

    // 0x1c60588: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c60588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c6058c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c6058cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c60590: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c60590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c60594: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c60594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c60598: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c60598u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6059c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c6059cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c605a0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c605a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c605a4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1c605a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c605a8: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c605a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c605ac: 0x26130010  addiu       $s3, $s0, 0x10
    ctx->pc = 0x1c605acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1c605b0: 0xc717d56  jal         func_1C5F558
    ctx->pc = 0x1C605B0u;
    SET_GPR_U32(ctx, 31, 0x1C605B8u);
    ctx->pc = 0x1C605B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C605B0u;
    // 0x1c605b4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F558u, 0x1C605B0u, 0x1C605B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C605B8u;
label_1c605b8:
    // 0x1c605b8: 0x24520200  addiu       $s2, $v0, 0x200
    ctx->pc = 0x1c605b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1c605bc: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x1c605bcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c605c0: 0x8e4e004c  lw          $t6, 0x4C($s2)
    ctx->pc = 0x1c605c0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1c605c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c605c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c605c8: 0xae0f0034  sw          $t7, 0x34($s0)
    ctx->pc = 0x1c605c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 15));
    // 0x1c605cc: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1c605ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1c605d0: 0x8e2f0008  lw          $t7, 0x8($s1)
    ctx->pc = 0x1c605d0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1c605d4: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1c605d4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1c605d8: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1c605d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1c605dc: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1c605dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1c605e0: 0xc717d46  jal         func_1C5F518
    ctx->pc = 0x1C605E0u;
    SET_GPR_U32(ctx, 31, 0x1C605E8u);
    ctx->pc = 0x1C605E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C605E0u;
    // 0x1c605e4: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F518u, 0x1C605E0u, 0x1C605E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C605E8u;
label_1c605e8:
    // 0x1c605e8: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x1c605e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1c605ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c605ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c605f0: 0xc717d46  jal         func_1C5F518
    ctx->pc = 0x1C605F0u;
    SET_GPR_U32(ctx, 31, 0x1C605F8u);
    ctx->pc = 0x1C605F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C605F0u;
    // 0x1c605f4: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F518u, 0x1C605F0u, 0x1C605F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C605F8u;
label_1c605f8:
    // 0x1c605f8: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1c605f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1c605fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c605fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c60600: 0xc717d48  jal         func_1C5F520
    ctx->pc = 0x1C60600u;
    SET_GPR_U32(ctx, 31, 0x1C60608u);
    ctx->pc = 0x1C60604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C60600u;
    // 0x1c60604: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F520u, 0x1C60600u, 0x1C60608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C60608u;
label_1c60608:
    // 0x1c60608: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1c60608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6060c: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1c6060cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c60610: 0x8e2d0000  lw          $t5, 0x0($s1)
    ctx->pc = 0x1c60610u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c60614: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1c60614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1c60618: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1c60618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1c6061c: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1c6061cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1c60620: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1c60620u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1c60624: 0x8e4e00b4  lw          $t6, 0xB4($s2)
    ctx->pc = 0x1c60624u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1c60628: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1c60628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6062c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c6062cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c60630: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x1c60630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1c60634: 0x8e2f001c  lw          $t7, 0x1C($s1)
    ctx->pc = 0x1c60634u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1c60638: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x1c60638u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1c6063c: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x1c6063cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c60640: 0xae0f0038  sw          $t7, 0x38($s0)
    ctx->pc = 0x1c60640u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 15));
    // 0x1c60644: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x1c60644u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1c60648: 0xae0e0028  sw          $t6, 0x28($s0)
    ctx->pc = 0x1c60648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 14));
    // 0x1c6064c: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1c6064cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c60650: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c60650u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c60654: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1c60654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1c60658: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c60658u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c6065c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c6065cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c60660: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c60660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c60664: 0x8717d46  j           func_1C5F518
    ctx->pc = 0x1C60664u;
    ctx->pc = 0x1C60668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C60664u;
    // 0x1c60668: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F518u;
    sub_01C5F518_0x1c5f518(rdram, ctx, runtime); return;
    ctx->pc = 0x1C6066Cu;
    // 0x1c6066c: 0x0  nop
    ctx->pc = 0x1c6066cu;
    // NOP
    ctx->pc = 0x1c60670u;
}
