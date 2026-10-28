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

// Function: sub_01DCDA70
// Address: 0x1dcda70 - 0x1dcda90
void sub_01DCDA70_0x1dcda70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DCDA70_0x1dcda70");
#endif

    switch (ctx->pc) {
        case 0x1dcda84u: goto label_1dcda84;
        default: break;
    }

    ctx->pc = 0x1dcda70u;

    // 0x1dcda70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dcda70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dcda74: 0x3c0401dd  lui         $a0, 0x1DD
    ctx->pc = 0x1dcda74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)477 << 16));
    // 0x1dcda78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dcda78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dcda7c: 0xc773624  jal         func_1DCD890
    ctx->pc = 0x1DCDA7Cu;
    SET_GPR_U32(ctx, 31, 0x1DCDA84u);
    ctx->pc = 0x1DCDA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCDA7Cu;
    // 0x1dcda80: 0x2484e590  addiu       $a0, $a0, -0x1A70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCD890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCD890u, 0x1DCDA7Cu, 0x1DCDA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCDA84u;
label_1dcda84:
    // 0x1dcda84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dcda84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dcda88: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCDA88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCDA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCDA88u;
        // 0x1dcda8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCDA88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCDA90u;
}
