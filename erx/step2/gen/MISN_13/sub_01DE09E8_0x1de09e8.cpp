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

// Function: sub_01DE09E8
// Address: 0x1de09e8 - 0x1de0a48
void sub_01DE09E8_0x1de09e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE09E8_0x1de09e8");
#endif

    switch (ctx->pc) {
        case 0x1de09f8u: goto label_1de09f8;
        default: break;
    }

    ctx->pc = 0x1de09e8u;

    // 0x1de09e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1de09e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1de09ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1de09ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1de09f0: 0xc778220  jal         func_1DE0880
    ctx->pc = 0x1DE09F0u;
    SET_GPR_U32(ctx, 31, 0x1DE09F8u);
    ctx->pc = 0x1DE0880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE0880u, 0x1DE09F0u, 0x1DE09F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE09F8u;
label_1de09f8:
    // 0x1de09f8: 0x8f8e8018  lw          $t6, -0x7FE8($gp)
    ctx->pc = 0x1de09f8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1de09fc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1de09fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1de0a00: 0x8f848018  lw          $a0, -0x7FE8($gp)
    ctx->pc = 0x1de0a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1de0a04: 0x2406f6d3  addiu       $a2, $zero, -0x92D
    ctx->pc = 0x1de0a04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294964947));
    // 0x1de0a08: 0x8dcf00dc  lw          $t7, 0xDC($t6)
    ctx->pc = 0x1de0a08u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 220)));
    // 0x1de0a0c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1de0a0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1de0a10: 0xc5e108d8  lwc1        $f1, 0x8D8($t7)
    ctx->pc = 0x1de0a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 2264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de0a14: 0x3c0f01de  lui         $t7, 0x1DE
    ctx->pc = 0x1de0a14u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)478 << 16));
    // 0x1de0a18: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1de0a18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1de0a1c: 0x25ef1830  addiu       $t7, $t7, 0x1830
    ctx->pc = 0x1de0a1cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 6192));
    // 0x1de0a20: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1de0a20u;
    { uint32_t bits = FAST_READ32(0x1DE1830u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de0a24: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1de0a24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de0a28: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1DE0A28u;
    {
        const bool branch_taken_0x1de0a28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DE0A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE0A28u;
        // 0x1de0a2c: 0x2408fffe  addiu       $t0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de0a28) {
            ctx->pc = 0x1DE0A38u;
            goto label_1de0a38;
        }
    }
    ctx->pc = 0x1DE0A30u;
    // 0x1de0a30: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1de0a30u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de0a34: 0xa1cf0428  sb          $t7, 0x428($t6)
    ctx->pc = 0x1de0a34u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 1064), (uint8_t)GPR_U32(ctx, 15));
label_1de0a38:
    // 0x1de0a38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1de0a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de0a3c: 0x87781d4  j           func_1DE0750
    ctx->pc = 0x1DE0A3Cu;
    ctx->pc = 0x1DE0A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE0A3Cu;
    // 0x1de0a40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE0750u;
    sub_01DE0750_0x1de0750(rdram, ctx, runtime); return;
    ctx->pc = 0x1DE0A44u;
    // 0x1de0a44: 0x0  nop
    ctx->pc = 0x1de0a44u;
    // NOP
    ctx->pc = 0x1de0a48u;
}
