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

// Function: sub_01D0E9C0
// Address: 0x1d0e9c0 - 0x1d0ea58
void sub_01D0E9C0_0x1d0e9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0E9C0_0x1d0e9c0");
#endif

    switch (ctx->pc) {
        case 0x1d0e9dcu: goto label_1d0e9dc;
        case 0x1d0ea3cu: goto label_1d0ea3c;
        default: break;
    }

    ctx->pc = 0x1d0e9c0u;

    // 0x1d0e9c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d0e9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d0e9c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d0e9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d0e9c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d0e9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d0e9cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d0e9ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0e9d0: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1d0e9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d0e9d4: 0xc742f56  jal         func_1D0BD58
    ctx->pc = 0x1D0E9D4u;
    SET_GPR_U32(ctx, 31, 0x1D0E9DCu);
    ctx->pc = 0x1D0E9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0E9D4u;
    // 0x1d0e9d8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD58u, 0x1D0E9D4u, 0x1D0E9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0E9DCu;
label_1d0e9dc:
    // 0x1d0e9dc: 0x8e0e0018  lw          $t6, 0x18($s0)
    ctx->pc = 0x1d0e9dcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1d0e9e0: 0x240f000c  addiu       $t7, $zero, 0xC
    ctx->pc = 0x1d0e9e0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1d0e9e4: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1d0e9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d0e9e8: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x1d0e9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0e9ec: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x1d0e9ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1d0e9f0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1d0e9f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d0e9f4: 0x8f8f807c  lw          $t7, -0x7F84($gp)
    ctx->pc = 0x1d0e9f4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934652)));
    // 0x1d0e9f8: 0xe601001c  swc1        $f1, 0x1C($s0)
    ctx->pc = 0x1d0e9f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x1d0e9fc: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x1d0e9fcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x1d0ea00: 0xc5c00000  lwc1        $f0, 0x0($t6)
    ctx->pc = 0x1d0ea00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0ea04: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1d0ea04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d0ea08: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x1D0EA08u;
    {
        const bool branch_taken_0x1d0ea08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D0EA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0EA08u;
        // 0x1d0ea0c: 0x240fffff  addiu       $t7, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0ea08) {
            ctx->pc = 0x1D0EA48u;
            goto label_1d0ea48;
        }
    }
    ctx->pc = 0x1D0EA10u;
    // 0x1d0ea10: 0x8dce0004  lw          $t6, 0x4($t6)
    ctx->pc = 0x1d0ea10u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x1d0ea14: 0x15cf0006  bne         $t6, $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D0EA14u;
    {
        const bool branch_taken_0x1d0ea14 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D0EA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0EA14u;
        // 0x1d0ea18: 0x1c0282d  daddu       $a1, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0ea14) {
            ctx->pc = 0x1D0EA30u;
            goto label_1d0ea30;
        }
    }
    ctx->pc = 0x1D0EA1Cu;
    // 0x1d0ea1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0ea1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0ea20: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d0ea20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d0ea24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d0ea24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0ea28: 0x8743a38  j           func_1D0E8E0
    ctx->pc = 0x1D0EA28u;
    ctx->pc = 0x1D0EA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0EA28u;
    // 0x1d0ea2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0E8E0u;
    sub_01D0E8E0_0x1d0e8e0(rdram, ctx, runtime); return;
    ctx->pc = 0x1D0EA30u;
label_1d0ea30:
    // 0x1d0ea30: 0x24440390  addiu       $a0, $v0, 0x390
    ctx->pc = 0x1d0ea30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 912));
    // 0x1d0ea34: 0xc742f5c  jal         func_1D0BD70
    ctx->pc = 0x1D0EA34u;
    SET_GPR_U32(ctx, 31, 0x1D0EA3Cu);
    ctx->pc = 0x1D0EA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0EA34u;
    // 0x1d0ea38: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD70u, 0x1D0EA34u, 0x1D0EA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0EA3Cu;
label_1d0ea3c:
    // 0x1d0ea3c: 0x8e0f0018  lw          $t7, 0x18($s0)
    ctx->pc = 0x1d0ea3cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1d0ea40: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x1d0ea40u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x1d0ea44: 0xae0f0018  sw          $t7, 0x18($s0)
    ctx->pc = 0x1d0ea44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 15));
label_1d0ea48:
    // 0x1d0ea48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d0ea48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0ea4c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d0ea4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d0ea50: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0EA50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0EA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0EA50u;
        // 0x1d0ea54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0EA50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0EA58u;
}
