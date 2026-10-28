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

// Function: sub_01D938A8
// Address: 0x1d938a8 - 0x1d93990
void sub_01D938A8_0x1d938a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D938A8_0x1d938a8");
#endif

    switch (ctx->pc) {
        case 0x1d938d8u: goto label_1d938d8;
        case 0x1d93908u: goto label_1d93908;
        case 0x1d93918u: goto label_1d93918;
        case 0x1d93928u: goto label_1d93928;
        default: break;
    }

    ctx->pc = 0x1d938a8u;

    // 0x1d938a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d938a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d938ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d938acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d938b0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d938b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d938b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d938b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d938b8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d938b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d938bc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d938bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d938c0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d938c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d938c4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1d938c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d938c8: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d938c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d938cc: 0x26130010  addiu       $s3, $s0, 0x10
    ctx->pc = 0x1d938ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1d938d0: 0xc764a16  jal         func_1D92858
    ctx->pc = 0x1D938D0u;
    SET_GPR_U32(ctx, 31, 0x1D938D8u);
    ctx->pc = 0x1D938D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D938D0u;
    // 0x1d938d4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92858u, 0x1D938D0u, 0x1D938D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D938D8u;
label_1d938d8:
    // 0x1d938d8: 0x24520200  addiu       $s2, $v0, 0x200
    ctx->pc = 0x1d938d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1d938dc: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x1d938dcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1d938e0: 0x8e4e004c  lw          $t6, 0x4C($s2)
    ctx->pc = 0x1d938e0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1d938e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d938e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d938e8: 0xae0f0034  sw          $t7, 0x34($s0)
    ctx->pc = 0x1d938e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 15));
    // 0x1d938ec: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1d938ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1d938f0: 0x8e2f0008  lw          $t7, 0x8($s1)
    ctx->pc = 0x1d938f0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1d938f4: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1d938f4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1d938f8: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1d938f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1d938fc: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1d938fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1d93900: 0xc764a06  jal         func_1D92818
    ctx->pc = 0x1D93900u;
    SET_GPR_U32(ctx, 31, 0x1D93908u);
    ctx->pc = 0x1D93904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D93900u;
    // 0x1d93904: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92818u, 0x1D93900u, 0x1D93908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D93908u;
label_1d93908:
    // 0x1d93908: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x1d93908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1d9390c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d9390cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d93910: 0xc764a06  jal         func_1D92818
    ctx->pc = 0x1D93910u;
    SET_GPR_U32(ctx, 31, 0x1D93918u);
    ctx->pc = 0x1D93914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D93910u;
    // 0x1d93914: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92818u, 0x1D93910u, 0x1D93918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D93918u;
label_1d93918:
    // 0x1d93918: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1d93918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1d9391c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d9391cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d93920: 0xc764a08  jal         func_1D92820
    ctx->pc = 0x1D93920u;
    SET_GPR_U32(ctx, 31, 0x1D93928u);
    ctx->pc = 0x1D93924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D93920u;
    // 0x1d93924: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92820u, 0x1D93920u, 0x1D93928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D93928u;
label_1d93928:
    // 0x1d93928: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1d93928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9392c: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1d9392cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1d93930: 0x8e2d0000  lw          $t5, 0x0($s1)
    ctx->pc = 0x1d93930u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d93934: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1d93934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1d93938: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1d93938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1d9393c: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1d9393cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1d93940: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1d93940u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1d93944: 0x8e4e00b4  lw          $t6, 0xB4($s2)
    ctx->pc = 0x1d93944u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1d93948: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1d93948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9394c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d9394cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d93950: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x1d93950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1d93954: 0x8e2f001c  lw          $t7, 0x1C($s1)
    ctx->pc = 0x1d93954u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1d93958: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x1d93958u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1d9395c: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x1d9395cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d93960: 0xae0f0038  sw          $t7, 0x38($s0)
    ctx->pc = 0x1d93960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 15));
    // 0x1d93964: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x1d93964u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1d93968: 0xae0e0028  sw          $t6, 0x28($s0)
    ctx->pc = 0x1d93968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 14));
    // 0x1d9396c: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1d9396cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d93970: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d93970u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d93974: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1d93974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1d93978: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d93978u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d9397c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9397cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d93980: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d93980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d93984: 0x8764a06  j           func_1D92818
    ctx->pc = 0x1D93984u;
    ctx->pc = 0x1D93988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D93984u;
    // 0x1d93988: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92818u;
    sub_01D92818_0x1d92818(rdram, ctx, runtime); return;
    ctx->pc = 0x1D9398Cu;
    // 0x1d9398c: 0x0  nop
    ctx->pc = 0x1d9398cu;
    // NOP
    ctx->pc = 0x1d93990u;
}
