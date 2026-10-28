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

// Function: sub_01D0EB10
// Address: 0x1d0eb10 - 0x1d0eb48
void sub_01D0EB10_0x1d0eb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0EB10_0x1d0eb10");
#endif

    switch (ctx->pc) {
        case 0x1d0eb30u: goto label_1d0eb30;
        default: break;
    }

    ctx->pc = 0x1d0eb10u;

    // 0x1d0eb10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d0eb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d0eb14: 0x8f8f807c  lw          $t7, -0x7F84($gp)
    ctx->pc = 0x1d0eb14u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934652)));
    // 0x1d0eb18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d0eb18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d0eb1c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d0eb1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d0eb20: 0x15e00003  bnez        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0EB20u;
    {
        const bool branch_taken_0x1d0eb20 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0EB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0EB20u;
        // 0x1d0eb24: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0eb20) {
            ctx->pc = 0x1D0EB30u;
            goto label_1d0eb30;
        }
    }
    ctx->pc = 0x1D0EB28u;
    // 0x1d0eb28: 0xc743a38  jal         func_1D0E8E0
    ctx->pc = 0x1D0EB28u;
    SET_GPR_U32(ctx, 31, 0x1D0EB30u);
    ctx->pc = 0x1D0E8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0E8E0u, 0x1D0EB28u, 0x1D0EB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0EB30u;
label_1d0eb30:
    // 0x1d0eb30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0eb30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0eb34: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d0eb34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d0eb38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d0eb38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0eb3c: 0x8743a20  j           func_1D0E880
    ctx->pc = 0x1D0EB3Cu;
    ctx->pc = 0x1D0EB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0EB3Cu;
    // 0x1d0eb40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0E880u;
    sub_01D0E880_0x1d0e880(rdram, ctx, runtime); return;
    ctx->pc = 0x1D0EB44u;
    // 0x1d0eb44: 0x0  nop
    ctx->pc = 0x1d0eb44u;
    // NOP
    ctx->pc = 0x1d0eb48u;
}
