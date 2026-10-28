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

// Function: sub_01CF05B8
// Address: 0x1cf05b8 - 0x1cf06a0
void sub_01CF05B8_0x1cf05b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CF05B8_0x1cf05b8");
#endif

    switch (ctx->pc) {
        case 0x1cf05e8u: goto label_1cf05e8;
        case 0x1cf0618u: goto label_1cf0618;
        case 0x1cf0628u: goto label_1cf0628;
        case 0x1cf0638u: goto label_1cf0638;
        default: break;
    }

    ctx->pc = 0x1cf05b8u;

    // 0x1cf05b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cf05b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cf05bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cf05bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cf05c0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cf05c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1cf05c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cf05c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cf05c8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1cf05c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf05cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cf05ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cf05d0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1cf05d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1cf05d4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1cf05d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf05d8: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cf05d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cf05dc: 0x26130010  addiu       $s3, $s0, 0x10
    ctx->pc = 0x1cf05dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1cf05e0: 0xc73bd58  jal         func_1CEF560
    ctx->pc = 0x1CF05E0u;
    SET_GPR_U32(ctx, 31, 0x1CF05E8u);
    ctx->pc = 0x1CF05E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF05E0u;
    // 0x1cf05e4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF560u, 0x1CF05E0u, 0x1CF05E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF05E8u;
label_1cf05e8:
    // 0x1cf05e8: 0x24520200  addiu       $s2, $v0, 0x200
    ctx->pc = 0x1cf05e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1cf05ec: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x1cf05ecu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1cf05f0: 0x8e4e004c  lw          $t6, 0x4C($s2)
    ctx->pc = 0x1cf05f0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1cf05f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cf05f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf05f8: 0xae0f0034  sw          $t7, 0x34($s0)
    ctx->pc = 0x1cf05f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 15));
    // 0x1cf05fc: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1cf05fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1cf0600: 0x8e2f0008  lw          $t7, 0x8($s1)
    ctx->pc = 0x1cf0600u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1cf0604: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1cf0604u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1cf0608: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1cf0608u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1cf060c: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1cf060cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1cf0610: 0xc73bd46  jal         func_1CEF518
    ctx->pc = 0x1CF0610u;
    SET_GPR_U32(ctx, 31, 0x1CF0618u);
    ctx->pc = 0x1CF0614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF0610u;
    // 0x1cf0614: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF518u, 0x1CF0610u, 0x1CF0618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF0618u;
label_1cf0618:
    // 0x1cf0618: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x1cf0618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1cf061c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cf061cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf0620: 0xc73bd46  jal         func_1CEF518
    ctx->pc = 0x1CF0620u;
    SET_GPR_U32(ctx, 31, 0x1CF0628u);
    ctx->pc = 0x1CF0624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF0620u;
    // 0x1cf0624: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF518u, 0x1CF0620u, 0x1CF0628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF0628u;
label_1cf0628:
    // 0x1cf0628: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1cf0628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1cf062c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cf062cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf0630: 0xc73bd4a  jal         func_1CEF528
    ctx->pc = 0x1CF0630u;
    SET_GPR_U32(ctx, 31, 0x1CF0638u);
    ctx->pc = 0x1CF0634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF0630u;
    // 0x1cf0634: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF528u, 0x1CF0630u, 0x1CF0638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF0638u;
label_1cf0638:
    // 0x1cf0638: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1cf0638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf063c: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1cf063cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1cf0640: 0x8e2d0000  lw          $t5, 0x0($s1)
    ctx->pc = 0x1cf0640u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cf0644: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1cf0644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1cf0648: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1cf0648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1cf064c: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1cf064cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1cf0650: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1cf0650u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1cf0654: 0x8e4e00b4  lw          $t6, 0xB4($s2)
    ctx->pc = 0x1cf0654u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1cf0658: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1cf0658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf065c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cf065cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf0660: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x1cf0660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1cf0664: 0x8e2f001c  lw          $t7, 0x1C($s1)
    ctx->pc = 0x1cf0664u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1cf0668: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x1cf0668u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1cf066c: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x1cf066cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf0670: 0xae0f0038  sw          $t7, 0x38($s0)
    ctx->pc = 0x1cf0670u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 15));
    // 0x1cf0674: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x1cf0674u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1cf0678: 0xae0e0028  sw          $t6, 0x28($s0)
    ctx->pc = 0x1cf0678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 14));
    // 0x1cf067c: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1cf067cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf0680: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1cf0680u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cf0684: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1cf0684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1cf0688: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cf0688u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cf068c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cf068cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf0690: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cf0690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cf0694: 0x873bd46  j           func_1CEF518
    ctx->pc = 0x1CF0694u;
    ctx->pc = 0x1CF0698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF0694u;
    // 0x1cf0698: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF518u;
    sub_01CEF518_0x1cef518(rdram, ctx, runtime); return;
    ctx->pc = 0x1CF069Cu;
    // 0x1cf069c: 0x0  nop
    ctx->pc = 0x1cf069cu;
    // NOP
    ctx->pc = 0x1cf06a0u;
}
