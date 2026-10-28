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

// Function: sub_01C99BA0
// Address: 0x1c99ba0 - 0x1c99c88
void sub_01C99BA0_0x1c99ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C99BA0_0x1c99ba0");
#endif

    switch (ctx->pc) {
        case 0x1c99bd0u: goto label_1c99bd0;
        case 0x1c99c00u: goto label_1c99c00;
        case 0x1c99c10u: goto label_1c99c10;
        case 0x1c99c20u: goto label_1c99c20;
        default: break;
    }

    ctx->pc = 0x1c99ba0u;

    // 0x1c99ba0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c99ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c99ba4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c99ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c99ba8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c99ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c99bac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c99bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c99bb0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c99bb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c99bb4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c99bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c99bb8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c99bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c99bbc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1c99bbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c99bc0: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c99bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c99bc4: 0x26130010  addiu       $s3, $s0, 0x10
    ctx->pc = 0x1c99bc4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1c99bc8: 0xc7262d6  jal         func_1C98B58
    ctx->pc = 0x1C99BC8u;
    SET_GPR_U32(ctx, 31, 0x1C99BD0u);
    ctx->pc = 0x1C99BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C99BC8u;
    // 0x1c99bcc: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B58u, 0x1C99BC8u, 0x1C99BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C99BD0u;
label_1c99bd0:
    // 0x1c99bd0: 0x24520200  addiu       $s2, $v0, 0x200
    ctx->pc = 0x1c99bd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1c99bd4: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x1c99bd4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c99bd8: 0x8e4e004c  lw          $t6, 0x4C($s2)
    ctx->pc = 0x1c99bd8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1c99bdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c99bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c99be0: 0xae0f0034  sw          $t7, 0x34($s0)
    ctx->pc = 0x1c99be0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 15));
    // 0x1c99be4: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1c99be4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1c99be8: 0x8e2f0008  lw          $t7, 0x8($s1)
    ctx->pc = 0x1c99be8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1c99bec: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1c99becu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1c99bf0: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1c99bf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1c99bf4: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1c99bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1c99bf8: 0xc7262c6  jal         func_1C98B18
    ctx->pc = 0x1C99BF8u;
    SET_GPR_U32(ctx, 31, 0x1C99C00u);
    ctx->pc = 0x1C99BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C99BF8u;
    // 0x1c99bfc: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B18u, 0x1C99BF8u, 0x1C99C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C99C00u;
label_1c99c00:
    // 0x1c99c00: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x1c99c00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1c99c04: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c99c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c99c08: 0xc7262c6  jal         func_1C98B18
    ctx->pc = 0x1C99C08u;
    SET_GPR_U32(ctx, 31, 0x1C99C10u);
    ctx->pc = 0x1C99C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C99C08u;
    // 0x1c99c0c: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B18u, 0x1C99C08u, 0x1C99C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C99C10u;
label_1c99c10:
    // 0x1c99c10: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1c99c10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1c99c14: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c99c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c99c18: 0xc7262c8  jal         func_1C98B20
    ctx->pc = 0x1C99C18u;
    SET_GPR_U32(ctx, 31, 0x1C99C20u);
    ctx->pc = 0x1C99C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C99C18u;
    // 0x1c99c1c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B20u, 0x1C99C18u, 0x1C99C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C99C20u;
label_1c99c20:
    // 0x1c99c20: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1c99c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c99c24: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1c99c24u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c99c28: 0x8e2d0000  lw          $t5, 0x0($s1)
    ctx->pc = 0x1c99c28u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c99c2c: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1c99c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1c99c30: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1c99c30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1c99c34: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1c99c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1c99c38: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1c99c38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1c99c3c: 0x8e4e00b4  lw          $t6, 0xB4($s2)
    ctx->pc = 0x1c99c3cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1c99c40: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1c99c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c99c44: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c99c44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c99c48: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x1c99c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1c99c4c: 0x8e2f001c  lw          $t7, 0x1C($s1)
    ctx->pc = 0x1c99c4cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1c99c50: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x1c99c50u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1c99c54: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x1c99c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c99c58: 0xae0f0038  sw          $t7, 0x38($s0)
    ctx->pc = 0x1c99c58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 15));
    // 0x1c99c5c: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x1c99c5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1c99c60: 0xae0e0028  sw          $t6, 0x28($s0)
    ctx->pc = 0x1c99c60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 14));
    // 0x1c99c64: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1c99c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c99c68: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c99c68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c99c6c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1c99c6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1c99c70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c99c70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c99c74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c99c74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c99c78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c99c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c99c7c: 0x87262c6  j           func_1C98B18
    ctx->pc = 0x1C99C7Cu;
    ctx->pc = 0x1C99C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C99C7Cu;
    // 0x1c99c80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B18u;
    sub_01C98B18_0x1c98b18(rdram, ctx, runtime); return;
    ctx->pc = 0x1C99C84u;
    // 0x1c99c84: 0x0  nop
    ctx->pc = 0x1c99c84u;
    // NOP
    ctx->pc = 0x1c99c88u;
}
