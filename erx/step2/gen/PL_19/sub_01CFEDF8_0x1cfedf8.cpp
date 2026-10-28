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

// Function: sub_01CFEDF8
// Address: 0x1cfedf8 - 0x1cfee20
void sub_01CFEDF8_0x1cfedf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFEDF8_0x1cfedf8");
#endif

    switch (ctx->pc) {
        case 0x1cfee08u: goto label_1cfee08;
        default: break;
    }

    ctx->pc = 0x1cfedf8u;

    // 0x1cfedf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cfedf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cfedfc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cfedfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cfee00: 0xc73f760  jal         func_1CFDD80
    ctx->pc = 0x1CFEE00u;
    SET_GPR_U32(ctx, 31, 0x1CFEE08u);
    ctx->pc = 0x1CFDD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFDD80u, 0x1CFEE00u, 0x1CFEE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFEE08u;
label_1cfee08:
    // 0x1cfee08: 0x40782d  daddu       $t7, $v0, $zero
    ctx->pc = 0x1cfee08u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfee0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cfee0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cfee10: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1cfee10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1cfee14: 0xf100a  movz        $v0, $zero, $t7
    ctx->pc = 0x1cfee14u;
    if (GPR_U64(ctx, 15) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1cfee18: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFEE18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFEE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFEE18u;
        // 0x1cfee1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFEE18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CFEE20u;
}
