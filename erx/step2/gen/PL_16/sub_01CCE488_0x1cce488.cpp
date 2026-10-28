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

// Function: sub_01CCE488
// Address: 0x1cce488 - 0x1cce570
void sub_01CCE488_0x1cce488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCE488_0x1cce488");
#endif

    switch (ctx->pc) {
        case 0x1cce4b8u: goto label_1cce4b8;
        case 0x1cce4e8u: goto label_1cce4e8;
        case 0x1cce4f8u: goto label_1cce4f8;
        case 0x1cce508u: goto label_1cce508;
        default: break;
    }

    ctx->pc = 0x1cce488u;

    // 0x1cce488: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cce488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cce48c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cce48cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cce490: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cce490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1cce494: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cce494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cce498: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1cce498u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce49c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cce49cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cce4a0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1cce4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1cce4a4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1cce4a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce4a8: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cce4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cce4ac: 0x26130010  addiu       $s3, $s0, 0x10
    ctx->pc = 0x1cce4acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1cce4b0: 0xc733516  jal         func_1CCD458
    ctx->pc = 0x1CCE4B0u;
    SET_GPR_U32(ctx, 31, 0x1CCE4B8u);
    ctx->pc = 0x1CCE4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE4B0u;
    // 0x1cce4b4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD458u, 0x1CCE4B0u, 0x1CCE4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE4B8u;
label_1cce4b8:
    // 0x1cce4b8: 0x24520200  addiu       $s2, $v0, 0x200
    ctx->pc = 0x1cce4b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1cce4bc: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x1cce4bcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1cce4c0: 0x8e4e004c  lw          $t6, 0x4C($s2)
    ctx->pc = 0x1cce4c0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1cce4c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cce4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce4c8: 0xae0f0034  sw          $t7, 0x34($s0)
    ctx->pc = 0x1cce4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 15));
    // 0x1cce4cc: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1cce4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1cce4d0: 0x8e2f0008  lw          $t7, 0x8($s1)
    ctx->pc = 0x1cce4d0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1cce4d4: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1cce4d4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1cce4d8: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1cce4d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1cce4dc: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1cce4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1cce4e0: 0xc733506  jal         func_1CCD418
    ctx->pc = 0x1CCE4E0u;
    SET_GPR_U32(ctx, 31, 0x1CCE4E8u);
    ctx->pc = 0x1CCE4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE4E0u;
    // 0x1cce4e4: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD418u, 0x1CCE4E0u, 0x1CCE4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE4E8u;
label_1cce4e8:
    // 0x1cce4e8: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x1cce4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1cce4ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cce4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce4f0: 0xc733506  jal         func_1CCD418
    ctx->pc = 0x1CCE4F0u;
    SET_GPR_U32(ctx, 31, 0x1CCE4F8u);
    ctx->pc = 0x1CCE4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE4F0u;
    // 0x1cce4f4: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD418u, 0x1CCE4F0u, 0x1CCE4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE4F8u;
label_1cce4f8:
    // 0x1cce4f8: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1cce4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1cce4fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cce4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce500: 0xc733508  jal         func_1CCD420
    ctx->pc = 0x1CCE500u;
    SET_GPR_U32(ctx, 31, 0x1CCE508u);
    ctx->pc = 0x1CCE504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE500u;
    // 0x1cce504: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD420u, 0x1CCE500u, 0x1CCE508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE508u;
label_1cce508:
    // 0x1cce508: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1cce508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cce50c: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1cce50cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1cce510: 0x8e2d0000  lw          $t5, 0x0($s1)
    ctx->pc = 0x1cce510u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cce514: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1cce514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1cce518: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1cce518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1cce51c: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1cce51cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1cce520: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1cce520u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1cce524: 0x8e4e00b4  lw          $t6, 0xB4($s2)
    ctx->pc = 0x1cce524u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1cce528: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1cce528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cce52c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cce52cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cce530: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x1cce530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1cce534: 0x8e2f001c  lw          $t7, 0x1C($s1)
    ctx->pc = 0x1cce534u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1cce538: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x1cce538u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1cce53c: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x1cce53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cce540: 0xae0f0038  sw          $t7, 0x38($s0)
    ctx->pc = 0x1cce540u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 15));
    // 0x1cce544: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x1cce544u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1cce548: 0xae0e0028  sw          $t6, 0x28($s0)
    ctx->pc = 0x1cce548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 14));
    // 0x1cce54c: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1cce54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cce550: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1cce550u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cce554: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1cce554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1cce558: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cce558u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cce55c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cce55cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cce560: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cce560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cce564: 0x8733506  j           func_1CCD418
    ctx->pc = 0x1CCE564u;
    ctx->pc = 0x1CCE568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE564u;
    // 0x1cce568: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD418u;
    sub_01CCD418_0x1ccd418(rdram, ctx, runtime); return;
    ctx->pc = 0x1CCE56Cu;
    // 0x1cce56c: 0x0  nop
    ctx->pc = 0x1cce56cu;
    // NOP
    ctx->pc = 0x1cce570u;
}
