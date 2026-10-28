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

// Function: sub_01CFED00
// Address: 0x1cfed00 - 0x1cfed28
void sub_01CFED00_0x1cfed00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFED00_0x1cfed00");
#endif

    switch (ctx->pc) {
        case 0x1cfed10u: goto label_1cfed10;
        default: break;
    }

    ctx->pc = 0x1cfed00u;

    // 0x1cfed00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cfed00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cfed04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cfed04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cfed08: 0xc73f760  jal         func_1CFDD80
    ctx->pc = 0x1CFED08u;
    SET_GPR_U32(ctx, 31, 0x1CFED10u);
    ctx->pc = 0x1CFDD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFDD80u, 0x1CFED08u, 0x1CFED10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFED10u;
label_1cfed10:
    // 0x1cfed10: 0x40782d  daddu       $t7, $v0, $zero
    ctx->pc = 0x1cfed10u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfed14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cfed14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cfed18: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1cfed18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1cfed1c: 0xf100a  movz        $v0, $zero, $t7
    ctx->pc = 0x1cfed1cu;
    if (GPR_U64(ctx, 15) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1cfed20: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFED20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFED24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFED20u;
        // 0x1cfed24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFED20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CFED28u;
}
