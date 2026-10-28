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

// Function: sub_01D7E890
// Address: 0x1d7e890 - 0x1d7e990
void sub_01D7E890_0x1d7e890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D7E890_0x1d7e890");
#endif

    switch (ctx->pc) {
        case 0x1d7e8c0u: goto label_1d7e8c0;
        case 0x1d7e8f0u: goto label_1d7e8f0;
        case 0x1d7e900u: goto label_1d7e900;
        case 0x1d7e910u: goto label_1d7e910;
        case 0x1d7e968u: goto label_1d7e968;
        default: break;
    }

    ctx->pc = 0x1d7e890u;

    // 0x1d7e890: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d7e890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d7e894: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d7e894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d7e898: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d7e898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d7e89c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d7e89cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d7e8a0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d7e8a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e8a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d7e8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d7e8a8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d7e8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d7e8ac: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1d7e8acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e8b0: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d7e8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d7e8b4: 0x26130060  addiu       $s3, $s0, 0x60
    ctx->pc = 0x1d7e8b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1d7e8b8: 0xc75f5d6  jal         func_1D7D758
    ctx->pc = 0x1D7E8B8u;
    SET_GPR_U32(ctx, 31, 0x1D7E8C0u);
    ctx->pc = 0x1D7E8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E8B8u;
    // 0x1d7e8bc: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D758u, 0x1D7E8B8u, 0x1D7E8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E8C0u;
label_1d7e8c0:
    // 0x1d7e8c0: 0x24520200  addiu       $s2, $v0, 0x200
    ctx->pc = 0x1d7e8c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1d7e8c4: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x1d7e8c4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1d7e8c8: 0x8e4e004c  lw          $t6, 0x4C($s2)
    ctx->pc = 0x1d7e8c8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1d7e8cc: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1d7e8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1d7e8d0: 0xae0f0088  sw          $t7, 0x88($s0)
    ctx->pc = 0x1d7e8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 15));
    // 0x1d7e8d4: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1d7e8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1d7e8d8: 0x8e2f0008  lw          $t7, 0x8($s1)
    ctx->pc = 0x1d7e8d8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1d7e8dc: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1d7e8dcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1d7e8e0: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1d7e8e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1d7e8e4: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1d7e8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1d7e8e8: 0xc75f5c6  jal         func_1D7D718
    ctx->pc = 0x1D7E8E8u;
    SET_GPR_U32(ctx, 31, 0x1D7E8F0u);
    ctx->pc = 0x1D7E8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E8E8u;
    // 0x1d7e8ec: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D718u, 0x1D7E8E8u, 0x1D7E8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E8F0u;
label_1d7e8f0:
    // 0x1d7e8f0: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x1d7e8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1d7e8f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d7e8f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e8f8: 0xc75f5c6  jal         func_1D7D718
    ctx->pc = 0x1D7E8F8u;
    SET_GPR_U32(ctx, 31, 0x1D7E900u);
    ctx->pc = 0x1D7E8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E8F8u;
    // 0x1d7e8fc: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D718u, 0x1D7E8F8u, 0x1D7E900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E900u;
label_1d7e900:
    // 0x1d7e900: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x1d7e900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x1d7e904: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d7e904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e908: 0xc75f5c8  jal         func_1D7D720
    ctx->pc = 0x1D7E908u;
    SET_GPR_U32(ctx, 31, 0x1D7E910u);
    ctx->pc = 0x1D7E90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E908u;
    // 0x1d7e90c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D720u, 0x1D7E908u, 0x1D7E910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E910u;
label_1d7e910:
    // 0x1d7e910: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1d7e910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7e914: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1d7e914u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1d7e918: 0x8e2e0000  lw          $t6, 0x0($s1)
    ctx->pc = 0x1d7e918u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d7e91c: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x1d7e91cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x1d7e920: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x1d7e920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x1d7e924: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x1d7e924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1d7e928: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x1d7e928u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1d7e92c: 0x8e2d001c  lw          $t5, 0x1C($s1)
    ctx->pc = 0x1d7e92cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1d7e930: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1d7e930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7e934: 0xae0d0084  sw          $t5, 0x84($s0)
    ctx->pc = 0x1d7e934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 13));
    // 0x1d7e938: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x1d7e938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x1d7e93c: 0x8e4f00b4  lw          $t7, 0xB4($s2)
    ctx->pc = 0x1d7e93cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1d7e940: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1d7e940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7e944: 0x8e2d0020  lw          $t5, 0x20($s1)
    ctx->pc = 0x1d7e944u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1d7e948: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d7e948u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d7e94c: 0xe600007c  swc1        $f0, 0x7C($s0)
    ctx->pc = 0x1d7e94cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x1d7e950: 0xae0f0078  sw          $t7, 0x78($s0)
    ctx->pc = 0x1d7e950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 15));
    // 0x1d7e954: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1d7e954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7e958: 0xae0d008c  sw          $t5, 0x8C($s0)
    ctx->pc = 0x1d7e958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 13));
    // 0x1d7e95c: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x1d7e95cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x1d7e960: 0xc75f5c6  jal         func_1D7D718
    ctx->pc = 0x1D7E960u;
    SET_GPR_U32(ctx, 31, 0x1D7E968u);
    ctx->pc = 0x1D7E964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E960u;
    // 0x1d7e964: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D718u, 0x1D7E960u, 0x1D7E968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E968u;
label_1d7e968:
    // 0x1d7e968: 0x261000b0  addiu       $s0, $s0, 0xB0
    ctx->pc = 0x1d7e968u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x1d7e96c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d7e96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e970: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d7e970u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7e974: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d7e974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e978: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d7e978u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7e97c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d7e97cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d7e980: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d7e980u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d7e984: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d7e984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d7e988: 0x875f5c6  j           func_1D7D718
    ctx->pc = 0x1D7E988u;
    ctx->pc = 0x1D7E98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E988u;
    // 0x1d7e98c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D718u;
    sub_01D7D718_0x1d7d718(rdram, ctx, runtime); return;
    ctx->pc = 0x1D7E990u;
}
