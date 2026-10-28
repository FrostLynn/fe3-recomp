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

// Function: sub_01CDD580
// Address: 0x1cdd580 - 0x1cdd5b0
void sub_01CDD580_0x1cdd580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDD580_0x1cdd580");
#endif

    switch (ctx->pc) {
        case 0x1cdd594u: goto label_1cdd594;
        default: break;
    }

    ctx->pc = 0x1cdd580u;

    // 0x1cdd580: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cdd580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cdd584: 0x3c0501ce  lui         $a1, 0x1CE
    ctx->pc = 0x1cdd584u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)462 << 16));
    // 0x1cdd588: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cdd588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cdd58c: 0xc7374d4  jal         func_1CDD350
    ctx->pc = 0x1CDD58Cu;
    SET_GPR_U32(ctx, 31, 0x1CDD594u);
    ctx->pc = 0x1CDD590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDD58Cu;
    // 0x1cdd590: 0x24a54b40  addiu       $a1, $a1, 0x4B40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDD350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDD350u, 0x1CDD58Cu, 0x1CDD594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDD594u;
label_1cdd594:
    // 0x1cdd594: 0x8f8f8084  lw          $t7, -0x7F7C($gp)
    ctx->pc = 0x1cdd594u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934660)));
    // 0x1cdd598: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cdd598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdd59c: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x1cdd59cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x1cdd5a0: 0xaf8f8084  sw          $t7, -0x7F7C($gp)
    ctx->pc = 0x1cdd5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934660), GPR_U32(ctx, 15));
    // 0x1cdd5a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDD5A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDD5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD5A4u;
        // 0x1cdd5a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDD5A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDD5ACu;
    // 0x1cdd5ac: 0x0  nop
    ctx->pc = 0x1cdd5acu;
    // NOP
    ctx->pc = 0x1cdd5b0u;
}
