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

// Function: sub_01DD5C20
// Address: 0x1dd5c20 - 0x1dd5c80
void sub_01DD5C20_0x1dd5c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD5C20_0x1dd5c20");
#endif

    switch (ctx->pc) {
        case 0x1dd5c5cu: goto label_1dd5c5c;
        default: break;
    }

    ctx->pc = 0x1dd5c20u;

    // 0x1dd5c20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dd5c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dd5c24: 0x8f8e8018  lw          $t6, -0x7FE8($gp)
    ctx->pc = 0x1dd5c24u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dd5c28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd5c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dd5c2c: 0x8dcf00dc  lw          $t7, 0xDC($t6)
    ctx->pc = 0x1dd5c2cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 220)));
    // 0x1dd5c30: 0xc5e108d8  lwc1        $f1, 0x8D8($t7)
    ctx->pc = 0x1dd5c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 2264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dd5c34: 0x3c0f01dd  lui         $t7, 0x1DD
    ctx->pc = 0x1dd5c34u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)477 << 16));
    // 0x1dd5c38: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1dd5c38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1dd5c3c: 0x25ef6bd0  addiu       $t7, $t7, 0x6BD0
    ctx->pc = 0x1dd5c3cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 27600));
    // 0x1dd5c40: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1dd5c40u;
    { uint32_t bits = FAST_READ32(0x1DD6BD0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd5c44: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1dd5c44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dd5c48: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1DD5C48u;
    {
        const bool branch_taken_0x1dd5c48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DD5C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD5C48u;
        // 0x1dd5c4c: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd5c48) {
            ctx->pc = 0x1DD5C54u;
            goto label_1dd5c54;
        }
    }
    ctx->pc = 0x1DD5C50u;
    // 0x1dd5c50: 0xa1cf0428  sb          $t7, 0x428($t6)
    ctx->pc = 0x1dd5c50u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 1064), (uint8_t)GPR_U32(ctx, 15));
label_1dd5c54:
    // 0x1dd5c54: 0xc7756e4  jal         func_1DD5B90
    ctx->pc = 0x1DD5C54u;
    SET_GPR_U32(ctx, 31, 0x1DD5C5Cu);
    ctx->pc = 0x1DD5B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD5B90u, 0x1DD5C54u, 0x1DD5C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD5C5Cu;
label_1dd5c5c:
    // 0x1dd5c5c: 0x8f848018  lw          $a0, -0x7FE8($gp)
    ctx->pc = 0x1dd5c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dd5c60: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1dd5c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dd5c64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd5c64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd5c68: 0x2406270f  addiu       $a2, $zero, 0x270F
    ctx->pc = 0x1dd5c68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x1dd5c6c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1dd5c6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dd5c70: 0x2408fffe  addiu       $t0, $zero, -0x2
    ctx->pc = 0x1dd5c70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1dd5c74: 0x8775696  j           func_1DD5A58
    ctx->pc = 0x1DD5C74u;
    ctx->pc = 0x1DD5C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD5C74u;
    // 0x1dd5c78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD5A58u;
    sub_01DD5A58_0x1dd5a58(rdram, ctx, runtime); return;
    ctx->pc = 0x1DD5C7Cu;
    // 0x1dd5c7c: 0x0  nop
    ctx->pc = 0x1dd5c7cu;
    // NOP
    ctx->pc = 0x1dd5c80u;
}
