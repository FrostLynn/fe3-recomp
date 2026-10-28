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

// Function: sub_01DBDDD8
// Address: 0x1dbddd8 - 0x1dbde98
void sub_01DBDDD8_0x1dbddd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBDDD8_0x1dbddd8");
#endif

    switch (ctx->pc) {
        case 0x1dbddf8u: goto label_1dbddf8;
        case 0x1dbde64u: goto label_1dbde64;
        case 0x1dbde74u: goto label_1dbde74;
        case 0x1dbde84u: goto label_1dbde84;
        default: break;
    }

    ctx->pc = 0x1dbddd8u;

    // 0x1dbddd8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dbddd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dbdddc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1dbdddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1dbdde0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1dbdde0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1dbdde4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1dbdde4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1dbdde8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dbdde8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbddec: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1dbddecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1dbddf0: 0xc76ee58  jal         func_1DBB960
    ctx->pc = 0x1DBDDF0u;
    SET_GPR_U32(ctx, 31, 0x1DBDDF8u);
    ctx->pc = 0x1DBDDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBDDF0u;
    // 0x1dbddf4: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB960u, 0x1DBDDF0u, 0x1DBDDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBDDF8u;
label_1dbddf8:
    // 0x1dbddf8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1dbddf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbddfc: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x1dbddfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbde00: 0x8e2f024c  lw          $t7, 0x24C($s1)
    ctx->pc = 0x1dbde00u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 588)));
    // 0x1dbde04: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dbde04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbde08: 0xc7818034  lwc1        $f1, -0x7FCC($gp)
    ctx->pc = 0x1dbde08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dbde0c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1dbde0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbde10: 0x8de50084  lw          $a1, 0x84($t7)
    ctx->pc = 0x1dbde10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 132)));
    // 0x1dbde14: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1dbde14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbde18: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1dbde18u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1dbde1c: 0x3c0f01dc  lui         $t7, 0x1DC
    ctx->pc = 0x1dbde1cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)476 << 16));
    // 0x1dbde20: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1dbde20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1dbde24: 0x25ef40d8  addiu       $t7, $t7, 0x40D8
    ctx->pc = 0x1dbde24u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 16600));
    // 0x1dbde28: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1dbde28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1dbde2c: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x1dbde2cu;
    { uint32_t bits = FAST_READ32(0x1DC40D8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dbde30: 0x24a500e0  addiu       $a1, $a1, 0xE0
    ctx->pc = 0x1dbde30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 224));
    // 0x1dbde34: 0xe7818034  swc1        $f1, -0x7FCC($gp)
    ctx->pc = 0x1dbde34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294934580), bits); }
    // 0x1dbde38: 0x3c0f01dc  lui         $t7, 0x1DC
    ctx->pc = 0x1dbde38u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)476 << 16));
    // 0x1dbde3c: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x1dbde3cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1dbde40: 0x25ef40dc  addiu       $t7, $t7, 0x40DC
    ctx->pc = 0x1dbde40u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 16604));
    // 0x1dbde44: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1dbde44u;
    { uint32_t bits = FAST_READ32(0x1DC40DCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbde48: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1dbde48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1dbde4c: 0x3c0f01dc  lui         $t7, 0x1DC
    ctx->pc = 0x1dbde4cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)476 << 16));
    // 0x1dbde50: 0x25ef40e0  addiu       $t7, $t7, 0x40E0
    ctx->pc = 0x1dbde50u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 16608));
    // 0x1dbde54: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1dbde54u;
    { uint32_t bits = FAST_READ32(0x1DC40E0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbde58: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1dbde58u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1dbde5c: 0xc76ef40  jal         func_1DBBD00
    ctx->pc = 0x1DBDE5Cu;
    SET_GPR_U32(ctx, 31, 0x1DBDE64u);
    ctx->pc = 0x1DBDE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBDE5Cu;
    // 0x1dbde60: 0xe7a20008  swc1        $f2, 0x8($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBBD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBBD00u, 0x1DBDE5Cu, 0x1DBDE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBDE64u;
label_1dbde64:
    // 0x1dbde64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dbde64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbde68: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1dbde68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbde6c: 0xc76ef38  jal         func_1DBBCE0
    ctx->pc = 0x1DBDE6Cu;
    SET_GPR_U32(ctx, 31, 0x1DBDE74u);
    ctx->pc = 0x1DBDE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBDE6Cu;
    // 0x1dbde70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBBCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBBCE0u, 0x1DBDE6Cu, 0x1DBDE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBDE74u;
label_1dbde74:
    // 0x1dbde74: 0x26250160  addiu       $a1, $s1, 0x160
    ctx->pc = 0x1dbde74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
    // 0x1dbde78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dbde78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbde7c: 0xc76ef3a  jal         func_1DBBCE8
    ctx->pc = 0x1DBDE7Cu;
    SET_GPR_U32(ctx, 31, 0x1DBDE84u);
    ctx->pc = 0x1DBDE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBDE7Cu;
    // 0x1dbde80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBBCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBBCE8u, 0x1DBDE7Cu, 0x1DBDE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBDE84u;
label_1dbde84:
    // 0x1dbde84: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1dbde84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dbde88: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1dbde88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dbde8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1dbde8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dbde90: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBDE90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBDE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBDE90u;
        // 0x1dbde94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBDE90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBDE98u;
}
