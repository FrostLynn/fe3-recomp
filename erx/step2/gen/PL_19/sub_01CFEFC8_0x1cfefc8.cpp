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

// Function: sub_01CFEFC8
// Address: 0x1cfefc8 - 0x1cfeff0
void sub_01CFEFC8_0x1cfefc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFEFC8_0x1cfefc8");
#endif

    switch (ctx->pc) {
        case 0x1cfefd8u: goto label_1cfefd8;
        default: break;
    }

    ctx->pc = 0x1cfefc8u;

    // 0x1cfefc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cfefc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cfefcc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cfefccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cfefd0: 0xc73f760  jal         func_1CFDD80
    ctx->pc = 0x1CFEFD0u;
    SET_GPR_U32(ctx, 31, 0x1CFEFD8u);
    ctx->pc = 0x1CFDD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFDD80u, 0x1CFEFD0u, 0x1CFEFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFEFD8u;
label_1cfefd8:
    // 0x1cfefd8: 0x40782d  daddu       $t7, $v0, $zero
    ctx->pc = 0x1cfefd8u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfefdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cfefdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cfefe0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1cfefe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1cfefe4: 0xf100a  movz        $v0, $zero, $t7
    ctx->pc = 0x1cfefe4u;
    if (GPR_U64(ctx, 15) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1cfefe8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFEFE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFEFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFEFE8u;
        // 0x1cfefec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFEFE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CFEFF0u;
}
