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

// Function: sub_01DB3290
// Address: 0x1db3290 - 0x1db32f0
void sub_01DB3290_0x1db3290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB3290_0x1db3290");
#endif

    switch (ctx->pc) {
        case 0x1db32acu: goto label_1db32ac;
        case 0x1db32ccu: goto label_1db32cc;
        case 0x1db32d8u: goto label_1db32d8;
        default: break;
    }

    ctx->pc = 0x1db3290u;

    // 0x1db3290: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1db3290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1db3294: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1db3294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1db3298: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1db3298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1db329c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1db329cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1db32a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1db32a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db32a4: 0xc76c3d6  jal         func_1DB0F58
    ctx->pc = 0x1DB32A4u;
    SET_GPR_U32(ctx, 31, 0x1DB32ACu);
    ctx->pc = 0x1DB32A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB32A4u;
    // 0x1db32a8: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F58u, 0x1DB32A4u, 0x1DB32ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB32ACu;
label_1db32ac:
    // 0x1db32ac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1db32acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1db32b0: 0x3c0f01dc  lui         $t7, 0x1DC
    ctx->pc = 0x1db32b0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)476 << 16));
    // 0x1db32b4: 0x25efb7d8  addiu       $t7, $t7, -0x4828
    ctx->pc = 0x1db32b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294948824));
    // 0x1db32b8: 0x24440580  addiu       $a0, $v0, 0x580
    ctx->pc = 0x1db32b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x1db32bc: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1db32bcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x1db32c0: 0x460063c6  mov.s       $f15, $f12
    ctx->pc = 0x1db32c0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    // 0x1db32c4: 0xc76c664  jal         func_1DB1990
    ctx->pc = 0x1DB32C4u;
    SET_GPR_U32(ctx, 31, 0x1DB32CCu);
    ctx->pc = 0x1DB32C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB32C4u;
    // 0x1db32c8: 0xc5ed0000  lwc1        $f13, 0x0($t7) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB1990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB1990u, 0x1DB32C4u, 0x1DB32CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB32CCu;
label_1db32cc:
    // 0x1db32cc: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1db32ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1db32d0: 0xc76c3d6  jal         func_1DB0F58
    ctx->pc = 0x1DB32D0u;
    SET_GPR_U32(ctx, 31, 0x1DB32D8u);
    ctx->pc = 0x1DB32D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB32D0u;
    // 0x1db32d4: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F58u, 0x1DB32D0u, 0x1DB32D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB32D8u;
label_1db32d8:
    // 0x1db32d8: 0xac40074c  sw          $zero, 0x74C($v0)
    ctx->pc = 0x1db32d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 0));
    // 0x1db32dc: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1db32dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1db32e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1db32e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db32e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1db32e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1db32e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB32E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB32ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB32E8u;
        // 0x1db32ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB32E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB32F0u;
}
