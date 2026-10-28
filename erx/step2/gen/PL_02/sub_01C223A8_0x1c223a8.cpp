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

// Function: sub_01C223A8
// Address: 0x1c223a8 - 0x1c22418
void sub_01C223A8_0x1c223a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C223A8_0x1c223a8");
#endif

    ctx->pc = 0x1c223a8u;

    // 0x1c223a8: 0x248f0200  addiu       $t7, $a0, 0x200
    ctx->pc = 0x1c223a8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), 512));
    // 0x1c223ac: 0x8dee0048  lw          $t6, 0x48($t7)
    ctx->pc = 0x1c223acu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 72)));
    // 0x1c223b0: 0x8ded004c  lw          $t5, 0x4C($t7)
    ctx->pc = 0x1c223b0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 76)));
    // 0x1c223b4: 0x8dce0044  lw          $t6, 0x44($t6)
    ctx->pc = 0x1c223b4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 68)));
    // 0x1c223b8: 0x3c0f01c3  lui         $t7, 0x1C3
    ctx->pc = 0x1c223b8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)451 << 16));
    // 0x1c223bc: 0x25ad0070  addiu       $t5, $t5, 0x70
    ctx->pc = 0x1c223bcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 112));
    // 0x1c223c0: 0x25eff5f4  addiu       $t7, $t7, -0xA0C
    ctx->pc = 0x1c223c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964724));
    // 0x1c223c4: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1c223c4u;
    { uint32_t bits = FAST_READ32(0x1C2F5F4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c223c8: 0x8dcf0018  lw          $t7, 0x18($t6)
    ctx->pc = 0x1c223c8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 24)));
    // 0x1c223cc: 0x15e00007  bnez        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C223CCu;
    {
        const bool branch_taken_0x1c223cc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C223D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C223CCu;
        // 0x1c223d0: 0xe5a04594  swc1        $f0, 0x4594($t5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 17812), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c223cc) {
            ctx->pc = 0x1C223ECu;
            goto label_1c223ec;
        }
    }
    ctx->pc = 0x1C223D4u;
    // 0x1c223d4: 0x8dce043c  lw          $t6, 0x43C($t6)
    ctx->pc = 0x1c223d4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 1084)));
    // 0x1c223d8: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x1c223d8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c223dc: 0x55cf0004  bnel        $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C223DCu;
    {
        const bool branch_taken_0x1c223dc = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x1c223dc) {
            ctx->pc = 0x1C223E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C223DCu;
            // 0x1c223e0: 0x240f0148  addiu       $t7, $zero, 0x148 (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 328));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C223F0u;
            goto label_1c223f0;
        }
    }
    ctx->pc = 0x1C223E4u;
    // 0x1c223e4: 0x8daf0014  lw          $t7, 0x14($t5)
    ctx->pc = 0x1c223e4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 20)));
    // 0x1c223e8: 0xa1e047a6  sb          $zero, 0x47A6($t7)
    ctx->pc = 0x1c223e8u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 18342), (uint8_t)GPR_U32(ctx, 0));
label_1c223ec:
    // 0x1c223ec: 0x240f0148  addiu       $t7, $zero, 0x148
    ctx->pc = 0x1c223ecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 328));
label_1c223f0:
    // 0x1c223f0: 0x240e0080  addiu       $t6, $zero, 0x80
    ctx->pc = 0x1c223f0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c223f4: 0xac8f0d20  sw          $t7, 0xD20($a0)
    ctx->pc = 0x1c223f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3360), GPR_U32(ctx, 15));
    // 0x1c223f8: 0xac8e0d00  sw          $t6, 0xD00($a0)
    ctx->pc = 0x1c223f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3328), GPR_U32(ctx, 14));
    // 0x1c223fc: 0x240f007e  addiu       $t7, $zero, 0x7E
    ctx->pc = 0x1c223fcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x1c22400: 0xac8f0d04  sw          $t7, 0xD04($a0)
    ctx->pc = 0x1c22400u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3332), GPR_U32(ctx, 15));
    // 0x1c22404: 0x240e0147  addiu       $t6, $zero, 0x147
    ctx->pc = 0x1c22404u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 327));
    // 0x1c22408: 0xac8e0d18  sw          $t6, 0xD18($a0)
    ctx->pc = 0x1c22408u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3352), GPR_U32(ctx, 14));
    // 0x1c2240c: 0x240f0149  addiu       $t7, $zero, 0x149
    ctx->pc = 0x1c2240cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 329));
    // 0x1c22410: 0x3e00008  jr          $ra
    ctx->pc = 0x1C22410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C22414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C22410u;
        // 0x1c22414: 0xac8f0d1c  sw          $t7, 0xD1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3356), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C22410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C22418u;
}
