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

// Function: sub_01C99B78
// Address: 0x1c99b78 - 0x1c99ba0
void sub_01C99B78_0x1c99b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C99B78_0x1c99b78");
#endif

    switch (ctx->pc) {
        case 0x1c99b8cu: goto label_1c99b8c;
        default: break;
    }

    ctx->pc = 0x1c99b78u;

    // 0x1c99b78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c99b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c99b7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c99b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c99b80: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c99b80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c99b84: 0xc7262d6  jal         func_1C98B58
    ctx->pc = 0x1C99B84u;
    SET_GPR_U32(ctx, 31, 0x1C99B8Cu);
    ctx->pc = 0x1C99B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C99B84u;
    // 0x1c99b88: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B58u, 0x1C99B84u, 0x1C99B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C99B8Cu;
label_1c99b8c:
    // 0x1c99b8c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c99b8cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c99b90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c99b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c99b94: 0xa04f0950  sb          $t7, 0x950($v0)
    ctx->pc = 0x1c99b94u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2384), (uint8_t)GPR_U32(ctx, 15));
    // 0x1c99b98: 0x3e00008  jr          $ra
    ctx->pc = 0x1C99B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C99B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C99B98u;
        // 0x1c99b9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C99B98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C99BA0u;
}
