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

// Function: sub_01CB7798
// Address: 0x1cb7798 - 0x1cb7880
void sub_01CB7798_0x1cb7798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB7798_0x1cb7798");
#endif

    switch (ctx->pc) {
        case 0x1cb77c8u: goto label_1cb77c8;
        case 0x1cb77f8u: goto label_1cb77f8;
        case 0x1cb7808u: goto label_1cb7808;
        case 0x1cb7818u: goto label_1cb7818;
        default: break;
    }

    ctx->pc = 0x1cb7798u;

    // 0x1cb7798: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cb7798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cb779c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cb779cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cb77a0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cb77a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1cb77a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cb77a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cb77a8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1cb77a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb77ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cb77acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cb77b0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1cb77b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1cb77b4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1cb77b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb77b8: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cb77b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cb77bc: 0x26130010  addiu       $s3, $s0, 0x10
    ctx->pc = 0x1cb77bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1cb77c0: 0xc72d9d6  jal         func_1CB6758
    ctx->pc = 0x1CB77C0u;
    SET_GPR_U32(ctx, 31, 0x1CB77C8u);
    ctx->pc = 0x1CB77C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB77C0u;
    // 0x1cb77c4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6758u, 0x1CB77C0u, 0x1CB77C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB77C8u;
label_1cb77c8:
    // 0x1cb77c8: 0x24520200  addiu       $s2, $v0, 0x200
    ctx->pc = 0x1cb77c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1cb77cc: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x1cb77ccu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1cb77d0: 0x8e4e004c  lw          $t6, 0x4C($s2)
    ctx->pc = 0x1cb77d0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1cb77d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb77d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb77d8: 0xae0f0034  sw          $t7, 0x34($s0)
    ctx->pc = 0x1cb77d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 15));
    // 0x1cb77dc: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1cb77dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1cb77e0: 0x8e2f0008  lw          $t7, 0x8($s1)
    ctx->pc = 0x1cb77e0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1cb77e4: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1cb77e4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1cb77e8: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1cb77e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1cb77ec: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1cb77ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1cb77f0: 0xc72d9c6  jal         func_1CB6718
    ctx->pc = 0x1CB77F0u;
    SET_GPR_U32(ctx, 31, 0x1CB77F8u);
    ctx->pc = 0x1CB77F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB77F0u;
    // 0x1cb77f4: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6718u, 0x1CB77F0u, 0x1CB77F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB77F8u;
label_1cb77f8:
    // 0x1cb77f8: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x1cb77f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1cb77fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cb77fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb7800: 0xc72d9c6  jal         func_1CB6718
    ctx->pc = 0x1CB7800u;
    SET_GPR_U32(ctx, 31, 0x1CB7808u);
    ctx->pc = 0x1CB7804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB7800u;
    // 0x1cb7804: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6718u, 0x1CB7800u, 0x1CB7808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB7808u;
label_1cb7808:
    // 0x1cb7808: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1cb7808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1cb780c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cb780cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb7810: 0xc72d9c8  jal         func_1CB6720
    ctx->pc = 0x1CB7810u;
    SET_GPR_U32(ctx, 31, 0x1CB7818u);
    ctx->pc = 0x1CB7814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB7810u;
    // 0x1cb7814: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6720u, 0x1CB7810u, 0x1CB7818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB7818u;
label_1cb7818:
    // 0x1cb7818: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1cb7818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb781c: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1cb781cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1cb7820: 0x8e2d0000  lw          $t5, 0x0($s1)
    ctx->pc = 0x1cb7820u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cb7824: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1cb7824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1cb7828: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1cb7828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1cb782c: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1cb782cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1cb7830: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1cb7830u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1cb7834: 0x8e4e00b4  lw          $t6, 0xB4($s2)
    ctx->pc = 0x1cb7834u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1cb7838: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1cb7838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb783c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cb783cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cb7840: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x1cb7840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1cb7844: 0x8e2f001c  lw          $t7, 0x1C($s1)
    ctx->pc = 0x1cb7844u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1cb7848: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x1cb7848u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1cb784c: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x1cb784cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb7850: 0xae0f0038  sw          $t7, 0x38($s0)
    ctx->pc = 0x1cb7850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 15));
    // 0x1cb7854: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x1cb7854u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1cb7858: 0xae0e0028  sw          $t6, 0x28($s0)
    ctx->pc = 0x1cb7858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 14));
    // 0x1cb785c: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1cb785cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb7860: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1cb7860u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cb7864: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1cb7864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1cb7868: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cb7868u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cb786c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cb786cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb7870: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cb7870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cb7874: 0x872d9c6  j           func_1CB6718
    ctx->pc = 0x1CB7874u;
    ctx->pc = 0x1CB7878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB7874u;
    // 0x1cb7878: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6718u;
    sub_01CB6718_0x1cb6718(rdram, ctx, runtime); return;
    ctx->pc = 0x1CB787Cu;
    // 0x1cb787c: 0x0  nop
    ctx->pc = 0x1cb787cu;
    // NOP
    ctx->pc = 0x1cb7880u;
}
