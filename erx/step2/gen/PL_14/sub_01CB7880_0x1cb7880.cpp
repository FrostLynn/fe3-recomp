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

// Function: sub_01CB7880
// Address: 0x1cb7880 - 0x1cb7980
void sub_01CB7880_0x1cb7880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB7880_0x1cb7880");
#endif

    switch (ctx->pc) {
        case 0x1cb78b0u: goto label_1cb78b0;
        case 0x1cb78e0u: goto label_1cb78e0;
        case 0x1cb78f0u: goto label_1cb78f0;
        case 0x1cb7900u: goto label_1cb7900;
        case 0x1cb7958u: goto label_1cb7958;
        default: break;
    }

    ctx->pc = 0x1cb7880u;

    // 0x1cb7880: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cb7880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cb7884: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cb7884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cb7888: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cb7888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1cb788c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cb788cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cb7890: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1cb7890u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb7894: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cb7894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cb7898: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1cb7898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1cb789c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1cb789cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb78a0: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cb78a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cb78a4: 0x26130060  addiu       $s3, $s0, 0x60
    ctx->pc = 0x1cb78a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1cb78a8: 0xc72d9d6  jal         func_1CB6758
    ctx->pc = 0x1CB78A8u;
    SET_GPR_U32(ctx, 31, 0x1CB78B0u);
    ctx->pc = 0x1CB78ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB78A8u;
    // 0x1cb78ac: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6758u, 0x1CB78A8u, 0x1CB78B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB78B0u;
label_1cb78b0:
    // 0x1cb78b0: 0x24520200  addiu       $s2, $v0, 0x200
    ctx->pc = 0x1cb78b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1cb78b4: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x1cb78b4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1cb78b8: 0x8e4e004c  lw          $t6, 0x4C($s2)
    ctx->pc = 0x1cb78b8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1cb78bc: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1cb78bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1cb78c0: 0xae0f0088  sw          $t7, 0x88($s0)
    ctx->pc = 0x1cb78c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 15));
    // 0x1cb78c4: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1cb78c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1cb78c8: 0x8e2f0008  lw          $t7, 0x8($s1)
    ctx->pc = 0x1cb78c8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1cb78cc: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1cb78ccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1cb78d0: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1cb78d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1cb78d4: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1cb78d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1cb78d8: 0xc72d9c6  jal         func_1CB6718
    ctx->pc = 0x1CB78D8u;
    SET_GPR_U32(ctx, 31, 0x1CB78E0u);
    ctx->pc = 0x1CB78DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB78D8u;
    // 0x1cb78dc: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6718u, 0x1CB78D8u, 0x1CB78E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB78E0u;
label_1cb78e0:
    // 0x1cb78e0: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x1cb78e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1cb78e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cb78e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb78e8: 0xc72d9c6  jal         func_1CB6718
    ctx->pc = 0x1CB78E8u;
    SET_GPR_U32(ctx, 31, 0x1CB78F0u);
    ctx->pc = 0x1CB78ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB78E8u;
    // 0x1cb78ec: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6718u, 0x1CB78E8u, 0x1CB78F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB78F0u;
label_1cb78f0:
    // 0x1cb78f0: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x1cb78f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x1cb78f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cb78f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb78f8: 0xc72d9c8  jal         func_1CB6720
    ctx->pc = 0x1CB78F8u;
    SET_GPR_U32(ctx, 31, 0x1CB7900u);
    ctx->pc = 0x1CB78FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB78F8u;
    // 0x1cb78fc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6720u, 0x1CB78F8u, 0x1CB7900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB7900u;
label_1cb7900:
    // 0x1cb7900: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1cb7900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb7904: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1cb7904u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1cb7908: 0x8e2e0000  lw          $t6, 0x0($s1)
    ctx->pc = 0x1cb7908u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cb790c: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x1cb790cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x1cb7910: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x1cb7910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x1cb7914: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x1cb7914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1cb7918: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x1cb7918u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1cb791c: 0x8e2d001c  lw          $t5, 0x1C($s1)
    ctx->pc = 0x1cb791cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1cb7920: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1cb7920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb7924: 0xae0d0084  sw          $t5, 0x84($s0)
    ctx->pc = 0x1cb7924u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 13));
    // 0x1cb7928: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x1cb7928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x1cb792c: 0x8e4f00b4  lw          $t7, 0xB4($s2)
    ctx->pc = 0x1cb792cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1cb7930: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1cb7930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb7934: 0x8e2d0020  lw          $t5, 0x20($s1)
    ctx->pc = 0x1cb7934u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1cb7938: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1cb7938u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1cb793c: 0xe600007c  swc1        $f0, 0x7C($s0)
    ctx->pc = 0x1cb793cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x1cb7940: 0xae0f0078  sw          $t7, 0x78($s0)
    ctx->pc = 0x1cb7940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 15));
    // 0x1cb7944: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1cb7944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb7948: 0xae0d008c  sw          $t5, 0x8C($s0)
    ctx->pc = 0x1cb7948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 13));
    // 0x1cb794c: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x1cb794cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x1cb7950: 0xc72d9c6  jal         func_1CB6718
    ctx->pc = 0x1CB7950u;
    SET_GPR_U32(ctx, 31, 0x1CB7958u);
    ctx->pc = 0x1CB7954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB7950u;
    // 0x1cb7954: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6718u, 0x1CB7950u, 0x1CB7958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB7958u;
label_1cb7958:
    // 0x1cb7958: 0x261000b0  addiu       $s0, $s0, 0xB0
    ctx->pc = 0x1cb7958u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x1cb795c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb795cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb7960: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cb7960u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cb7964: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cb7964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb7968: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cb7968u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb796c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cb796cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cb7970: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1cb7970u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cb7974: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cb7974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cb7978: 0x872d9c6  j           func_1CB6718
    ctx->pc = 0x1CB7978u;
    ctx->pc = 0x1CB797Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB7978u;
    // 0x1cb797c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6718u;
    sub_01CB6718_0x1cb6718(rdram, ctx, runtime); return;
    ctx->pc = 0x1CB7980u;
}
