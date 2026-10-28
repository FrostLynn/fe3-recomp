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

// Function: sub_01DD3F98
// Address: 0x1dd3f98 - 0x1dd3fd8
void sub_01DD3F98_0x1dd3f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD3F98_0x1dd3f98");
#endif

    switch (ctx->pc) {
        case 0x1dd3fbcu: goto label_1dd3fbc;
        default: break;
    }

    ctx->pc = 0x1dd3f98u;

    // 0x1dd3f98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dd3f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dd3f9c: 0x8f848014  lw          $a0, -0x7FEC($gp)
    ctx->pc = 0x1dd3f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd3fa0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dd3fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dd3fa4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1dd3fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1dd3fa8: 0xaf808018  sw          $zero, -0x7FE8($gp)
    ctx->pc = 0x1dd3fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934552), GPR_U32(ctx, 0));
    // 0x1dd3fac: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1dd3facu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd3fb0: 0x8c8f00dc  lw          $t7, 0xDC($a0)
    ctx->pc = 0x1dd3fb0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x1dd3fb4: 0xc774f54  jal         func_1DD3D50
    ctx->pc = 0x1DD3FB4u;
    SET_GPR_U32(ctx, 31, 0x1DD3FBCu);
    ctx->pc = 0x1DD3FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD3FB4u;
    // 0x1dd3fb8: 0xadf00cd8  sw          $s0, 0xCD8($t7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 15), 3288), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD3D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD3D50u, 0x1DD3FB4u, 0x1DD3FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD3FBCu;
label_1dd3fbc:
    // 0x1dd3fbc: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dd3fbcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd3fc0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dd3fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dd3fc4: 0xa1f00430  sb          $s0, 0x430($t7)
    ctx->pc = 0x1dd3fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 1072), (uint8_t)GPR_U32(ctx, 16));
    // 0x1dd3fc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dd3fc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd3fcc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD3FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD3FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD3FCCu;
        // 0x1dd3fd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD3FCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD3FD4u;
    // 0x1dd3fd4: 0x0  nop
    ctx->pc = 0x1dd3fd4u;
    // NOP
    ctx->pc = 0x1dd3fd8u;
}
