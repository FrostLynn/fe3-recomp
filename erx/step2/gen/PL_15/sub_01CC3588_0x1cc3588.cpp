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

// Function: sub_01CC3588
// Address: 0x1cc3588 - 0x1cc3688
void sub_01CC3588_0x1cc3588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC3588_0x1cc3588");
#endif

    switch (ctx->pc) {
        case 0x1cc35b8u: goto label_1cc35b8;
        case 0x1cc35e8u: goto label_1cc35e8;
        case 0x1cc35f8u: goto label_1cc35f8;
        case 0x1cc3608u: goto label_1cc3608;
        case 0x1cc3660u: goto label_1cc3660;
        default: break;
    }

    ctx->pc = 0x1cc3588u;

    // 0x1cc3588: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cc3588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cc358c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cc358cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cc3590: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cc3590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1cc3594: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cc3594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cc3598: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1cc3598u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc359c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cc359cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cc35a0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1cc35a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1cc35a4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1cc35a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc35a8: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cc35a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cc35ac: 0x26130060  addiu       $s3, $s0, 0x60
    ctx->pc = 0x1cc35acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1cc35b0: 0xc730918  jal         func_1CC2460
    ctx->pc = 0x1CC35B0u;
    SET_GPR_U32(ctx, 31, 0x1CC35B8u);
    ctx->pc = 0x1CC35B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC35B0u;
    // 0x1cc35b4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2460u, 0x1CC35B0u, 0x1CC35B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC35B8u;
label_1cc35b8:
    // 0x1cc35b8: 0x24520200  addiu       $s2, $v0, 0x200
    ctx->pc = 0x1cc35b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1cc35bc: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x1cc35bcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1cc35c0: 0x8e4e004c  lw          $t6, 0x4C($s2)
    ctx->pc = 0x1cc35c0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1cc35c4: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1cc35c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1cc35c8: 0xae0f0088  sw          $t7, 0x88($s0)
    ctx->pc = 0x1cc35c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 15));
    // 0x1cc35cc: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1cc35ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1cc35d0: 0x8e2f0008  lw          $t7, 0x8($s1)
    ctx->pc = 0x1cc35d0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1cc35d4: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1cc35d4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1cc35d8: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1cc35d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1cc35dc: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1cc35dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1cc35e0: 0xc730906  jal         func_1CC2418
    ctx->pc = 0x1CC35E0u;
    SET_GPR_U32(ctx, 31, 0x1CC35E8u);
    ctx->pc = 0x1CC35E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC35E0u;
    // 0x1cc35e4: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2418u, 0x1CC35E0u, 0x1CC35E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC35E8u;
label_1cc35e8:
    // 0x1cc35e8: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x1cc35e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1cc35ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cc35ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc35f0: 0xc730906  jal         func_1CC2418
    ctx->pc = 0x1CC35F0u;
    SET_GPR_U32(ctx, 31, 0x1CC35F8u);
    ctx->pc = 0x1CC35F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC35F0u;
    // 0x1cc35f4: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2418u, 0x1CC35F0u, 0x1CC35F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC35F8u;
label_1cc35f8:
    // 0x1cc35f8: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x1cc35f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x1cc35fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cc35fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc3600: 0xc73090a  jal         func_1CC2428
    ctx->pc = 0x1CC3600u;
    SET_GPR_U32(ctx, 31, 0x1CC3608u);
    ctx->pc = 0x1CC3604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC3600u;
    // 0x1cc3604: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2428u, 0x1CC3600u, 0x1CC3608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC3608u;
label_1cc3608:
    // 0x1cc3608: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1cc3608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc360c: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1cc360cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1cc3610: 0x8e2e0000  lw          $t6, 0x0($s1)
    ctx->pc = 0x1cc3610u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cc3614: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x1cc3614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x1cc3618: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x1cc3618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x1cc361c: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x1cc361cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1cc3620: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x1cc3620u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1cc3624: 0x8e2d001c  lw          $t5, 0x1C($s1)
    ctx->pc = 0x1cc3624u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1cc3628: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1cc3628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc362c: 0xae0d0084  sw          $t5, 0x84($s0)
    ctx->pc = 0x1cc362cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 13));
    // 0x1cc3630: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x1cc3630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x1cc3634: 0x8e4f00b4  lw          $t7, 0xB4($s2)
    ctx->pc = 0x1cc3634u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1cc3638: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1cc3638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc363c: 0x8e2d0020  lw          $t5, 0x20($s1)
    ctx->pc = 0x1cc363cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1cc3640: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1cc3640u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1cc3644: 0xe600007c  swc1        $f0, 0x7C($s0)
    ctx->pc = 0x1cc3644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x1cc3648: 0xae0f0078  sw          $t7, 0x78($s0)
    ctx->pc = 0x1cc3648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 15));
    // 0x1cc364c: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1cc364cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc3650: 0xae0d008c  sw          $t5, 0x8C($s0)
    ctx->pc = 0x1cc3650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 13));
    // 0x1cc3654: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x1cc3654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x1cc3658: 0xc730906  jal         func_1CC2418
    ctx->pc = 0x1CC3658u;
    SET_GPR_U32(ctx, 31, 0x1CC3660u);
    ctx->pc = 0x1CC365Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC3658u;
    // 0x1cc365c: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2418u, 0x1CC3658u, 0x1CC3660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC3660u;
label_1cc3660:
    // 0x1cc3660: 0x261000b0  addiu       $s0, $s0, 0xB0
    ctx->pc = 0x1cc3660u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x1cc3664: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cc3664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc3668: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cc3668u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc366c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cc366cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc3670: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cc3670u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc3674: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cc3674u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cc3678: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1cc3678u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cc367c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cc367cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cc3680: 0x8730906  j           func_1CC2418
    ctx->pc = 0x1CC3680u;
    ctx->pc = 0x1CC3684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC3680u;
    // 0x1cc3684: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2418u;
    sub_01CC2418_0x1cc2418(rdram, ctx, runtime); return;
    ctx->pc = 0x1CC3688u;
}
