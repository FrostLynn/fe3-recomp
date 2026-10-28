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

// Function: sub_01D484E8
// Address: 0x1d484e8 - 0x1d48540
void sub_01D484E8_0x1d484e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D484E8_0x1d484e8");
#endif

    ctx->pc = 0x1d484e8u;

    // 0x1d484e8: 0x3c0901d5  lui         $t1, 0x1D5
    ctx->pc = 0x1d484e8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)469 << 16));
    // 0x1d484ec: 0x8c8f024c  lw          $t7, 0x24C($a0)
    ctx->pc = 0x1d484ecu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 588)));
    // 0x1d484f0: 0x25290e38  addiu       $t1, $t1, 0xE38
    ctx->pc = 0x1d484f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3640));
    // 0x1d484f4: 0x240e0080  addiu       $t6, $zero, 0x80
    ctx->pc = 0x1d484f4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d484f8: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x1d484f8u;
    { uint32_t bits = FAST_READ32(0x1D50E38u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d484fc: 0x240d007e  addiu       $t5, $zero, 0x7E
    ctx->pc = 0x1d484fcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x1d48500: 0x240c0147  addiu       $t4, $zero, 0x147
    ctx->pc = 0x1d48500u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 327));
    // 0x1d48504: 0xac8e0d08  sw          $t6, 0xD08($a0)
    ctx->pc = 0x1d48504u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3336), GPR_U32(ctx, 14));
    // 0x1d48508: 0x240b0149  addiu       $t3, $zero, 0x149
    ctx->pc = 0x1d48508u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 329));
    // 0x1d4850c: 0xe5e04604  swc1        $f0, 0x4604($t7)
    ctx->pc = 0x1d4850cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 17924), bits); }
    // 0x1d48510: 0x240a0148  addiu       $t2, $zero, 0x148
    ctx->pc = 0x1d48510u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 328));
    // 0x1d48514: 0xac8d0d0c  sw          $t5, 0xD0C($a0)
    ctx->pc = 0x1d48514u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3340), GPR_U32(ctx, 13));
    // 0x1d48518: 0xac8a0d2c  sw          $t2, 0xD2C($a0)
    ctx->pc = 0x1d48518u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3372), GPR_U32(ctx, 10));
    // 0x1d4851c: 0xac8c0d24  sw          $t4, 0xD24($a0)
    ctx->pc = 0x1d4851cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3364), GPR_U32(ctx, 12));
    // 0x1d48520: 0xac8b0d28  sw          $t3, 0xD28($a0)
    ctx->pc = 0x1d48520u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3368), GPR_U32(ctx, 11));
    // 0x1d48524: 0xac8e0d00  sw          $t6, 0xD00($a0)
    ctx->pc = 0x1d48524u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3328), GPR_U32(ctx, 14));
    // 0x1d48528: 0xac8d0d04  sw          $t5, 0xD04($a0)
    ctx->pc = 0x1d48528u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3332), GPR_U32(ctx, 13));
    // 0x1d4852c: 0xac8c0d18  sw          $t4, 0xD18($a0)
    ctx->pc = 0x1d4852cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3352), GPR_U32(ctx, 12));
    // 0x1d48530: 0xac8b0d1c  sw          $t3, 0xD1C($a0)
    ctx->pc = 0x1d48530u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3356), GPR_U32(ctx, 11));
    // 0x1d48534: 0x3e00008  jr          $ra
    ctx->pc = 0x1D48534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D48538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D48534u;
        // 0x1d48538: 0xac8a0d20  sw          $t2, 0xD20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3360), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D48534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D4853Cu;
    // 0x1d4853c: 0x0  nop
    ctx->pc = 0x1d4853cu;
    // NOP
    ctx->pc = 0x1d48540u;
}
