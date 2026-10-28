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

// Function: sub_01DC4EF0
// Address: 0x1dc4ef0 - 0x1dc4f28
void sub_01DC4EF0_0x1dc4ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DC4EF0_0x1dc4ef0");
#endif

    ctx->pc = 0x1dc4ef0u;

    // 0x1dc4ef0: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x1dc4ef0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dc4ef4: 0x3c0d01dd  lui         $t5, 0x1DD
    ctx->pc = 0x1dc4ef4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)477 << 16));
    // 0x1dc4ef8: 0xaf8f805c  sw          $t7, -0x7FA4($gp)
    ctx->pc = 0x1dc4ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934620), GPR_U32(ctx, 15));
    // 0x1dc4efc: 0x25ada274  addiu       $t5, $t5, -0x5D8C
    ctx->pc = 0x1dc4efcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294943348));
    // 0x1dc4f00: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x1dc4f00u;
    { uint32_t bits = FAST_READ32(0x1DCA274u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc4f04: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x1dc4f04u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dc4f08: 0x8c8f024c  lw          $t7, 0x24C($a0)
    ctx->pc = 0x1dc4f08u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 588)));
    // 0x1dc4f0c: 0xac8e0d1c  sw          $t6, 0xD1C($a0)
    ctx->pc = 0x1dc4f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3356), GPR_U32(ctx, 14));
    // 0x1dc4f10: 0xe5e04604  swc1        $f0, 0x4604($t7)
    ctx->pc = 0x1dc4f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 17924), bits); }
    // 0x1dc4f14: 0xac8e0d00  sw          $t6, 0xD00($a0)
    ctx->pc = 0x1dc4f14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3328), GPR_U32(ctx, 14));
    // 0x1dc4f18: 0xac8e0d04  sw          $t6, 0xD04($a0)
    ctx->pc = 0x1dc4f18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3332), GPR_U32(ctx, 14));
    // 0x1dc4f1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC4F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC4F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC4F1Cu;
        // 0x1dc4f20: 0xac8e0d18  sw          $t6, 0xD18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3352), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC4F1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC4F24u;
    // 0x1dc4f24: 0x0  nop
    ctx->pc = 0x1dc4f24u;
    // NOP
    ctx->pc = 0x1dc4f28u;
}
