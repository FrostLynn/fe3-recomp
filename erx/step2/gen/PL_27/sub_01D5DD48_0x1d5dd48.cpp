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

// Function: sub_01D5DD48
// Address: 0x1d5dd48 - 0x1d5de30
void sub_01D5DD48_0x1d5dd48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D5DD48_0x1d5dd48");
#endif

    switch (ctx->pc) {
        case 0x1d5dd78u: goto label_1d5dd78;
        case 0x1d5dda8u: goto label_1d5dda8;
        case 0x1d5ddb8u: goto label_1d5ddb8;
        case 0x1d5ddc8u: goto label_1d5ddc8;
        default: break;
    }

    ctx->pc = 0x1d5dd48u;

    // 0x1d5dd48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d5dd48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d5dd4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d5dd4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d5dd50: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d5dd50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d5dd54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d5dd54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d5dd58: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d5dd58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5dd5c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d5dd5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d5dd60: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d5dd60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d5dd64: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1d5dd64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5dd68: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d5dd68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d5dd6c: 0x26130010  addiu       $s3, $s0, 0x10
    ctx->pc = 0x1d5dd6cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1d5dd70: 0xc757356  jal         func_1D5CD58
    ctx->pc = 0x1D5DD70u;
    SET_GPR_U32(ctx, 31, 0x1D5DD78u);
    ctx->pc = 0x1D5DD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5DD70u;
    // 0x1d5dd74: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD58u, 0x1D5DD70u, 0x1D5DD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5DD78u;
label_1d5dd78:
    // 0x1d5dd78: 0x24520200  addiu       $s2, $v0, 0x200
    ctx->pc = 0x1d5dd78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1d5dd7c: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x1d5dd7cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1d5dd80: 0x8e4e004c  lw          $t6, 0x4C($s2)
    ctx->pc = 0x1d5dd80u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1d5dd84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5dd84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5dd88: 0xae0f0034  sw          $t7, 0x34($s0)
    ctx->pc = 0x1d5dd88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 15));
    // 0x1d5dd8c: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1d5dd8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1d5dd90: 0x8e2f0008  lw          $t7, 0x8($s1)
    ctx->pc = 0x1d5dd90u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1d5dd94: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1d5dd94u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1d5dd98: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1d5dd98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1d5dd9c: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1d5dd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1d5dda0: 0xc757346  jal         func_1D5CD18
    ctx->pc = 0x1D5DDA0u;
    SET_GPR_U32(ctx, 31, 0x1D5DDA8u);
    ctx->pc = 0x1D5DDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5DDA0u;
    // 0x1d5dda4: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD18u, 0x1D5DDA0u, 0x1D5DDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5DDA8u;
label_1d5dda8:
    // 0x1d5dda8: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x1d5dda8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1d5ddac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d5ddacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ddb0: 0xc757346  jal         func_1D5CD18
    ctx->pc = 0x1D5DDB0u;
    SET_GPR_U32(ctx, 31, 0x1D5DDB8u);
    ctx->pc = 0x1D5DDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5DDB0u;
    // 0x1d5ddb4: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD18u, 0x1D5DDB0u, 0x1D5DDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5DDB8u;
label_1d5ddb8:
    // 0x1d5ddb8: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1d5ddb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1d5ddbc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d5ddbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ddc0: 0xc757348  jal         func_1D5CD20
    ctx->pc = 0x1D5DDC0u;
    SET_GPR_U32(ctx, 31, 0x1D5DDC8u);
    ctx->pc = 0x1D5DDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5DDC0u;
    // 0x1d5ddc4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD20u, 0x1D5DDC0u, 0x1D5DDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5DDC8u;
label_1d5ddc8:
    // 0x1d5ddc8: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1d5ddc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d5ddcc: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1d5ddccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1d5ddd0: 0x8e2d0000  lw          $t5, 0x0($s1)
    ctx->pc = 0x1d5ddd0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d5ddd4: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1d5ddd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1d5ddd8: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1d5ddd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1d5dddc: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1d5dddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1d5dde0: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1d5dde0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1d5dde4: 0x8e4e00b4  lw          $t6, 0xB4($s2)
    ctx->pc = 0x1d5dde4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1d5dde8: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1d5dde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d5ddec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d5ddecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5ddf0: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x1d5ddf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1d5ddf4: 0x8e2f001c  lw          $t7, 0x1C($s1)
    ctx->pc = 0x1d5ddf4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1d5ddf8: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x1d5ddf8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1d5ddfc: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x1d5ddfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d5de00: 0xae0f0038  sw          $t7, 0x38($s0)
    ctx->pc = 0x1d5de00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 15));
    // 0x1d5de04: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x1d5de04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1d5de08: 0xae0e0028  sw          $t6, 0x28($s0)
    ctx->pc = 0x1d5de08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 14));
    // 0x1d5de0c: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1d5de0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d5de10: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d5de10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d5de14: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1d5de14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1d5de18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d5de18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d5de1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d5de1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5de20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d5de20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d5de24: 0x8757346  j           func_1D5CD18
    ctx->pc = 0x1D5DE24u;
    ctx->pc = 0x1D5DE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5DE24u;
    // 0x1d5de28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD18u;
    sub_01D5CD18_0x1d5cd18(rdram, ctx, runtime); return;
    ctx->pc = 0x1D5DE2Cu;
    // 0x1d5de2c: 0x0  nop
    ctx->pc = 0x1d5de2cu;
    // NOP
    ctx->pc = 0x1d5de30u;
}
