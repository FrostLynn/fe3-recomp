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

// Function: sub_01DCA470
// Address: 0x1dca470 - 0x1dca498
void sub_01DCA470_0x1dca470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DCA470_0x1dca470");
#endif

    switch (ctx->pc) {
        case 0x1dca484u: goto label_1dca484;
        default: break;
    }

    ctx->pc = 0x1dca470u;

    // 0x1dca470: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dca470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dca474: 0x3c0401dd  lui         $a0, 0x1DD
    ctx->pc = 0x1dca474u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)477 << 16));
    // 0x1dca478: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dca478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dca47c: 0xc7728de  jal         func_1DCA378
    ctx->pc = 0x1DCA47Cu;
    SET_GPR_U32(ctx, 31, 0x1DCA484u);
    ctx->pc = 0x1DCA480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCA47Cu;
    // 0x1dca480: 0x2484a870  addiu       $a0, $a0, -0x5790 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCA378u, 0x1DCA47Cu, 0x1DCA484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCA484u;
label_1dca484:
    // 0x1dca484: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dca484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dca488: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1dca488u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1dca48c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCA48Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCA490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCA48Cu;
        // 0x1dca490: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCA48Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCA494u;
    // 0x1dca494: 0x0  nop
    ctx->pc = 0x1dca494u;
    // NOP
    ctx->pc = 0x1dca498u;
}
