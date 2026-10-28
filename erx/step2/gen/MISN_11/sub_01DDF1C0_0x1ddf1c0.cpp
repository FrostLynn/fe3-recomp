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

// Function: sub_01DDF1C0
// Address: 0x1ddf1c0 - 0x1ddf1f8
void sub_01DDF1C0_0x1ddf1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DDF1C0_0x1ddf1c0");
#endif

    switch (ctx->pc) {
        case 0x1ddf1e4u: goto label_1ddf1e4;
        default: break;
    }

    ctx->pc = 0x1ddf1c0u;

    // 0x1ddf1c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ddf1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ddf1c4: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1ddf1c4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1ddf1c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ddf1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ddf1cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ddf1ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddf1d0: 0xaf808018  sw          $zero, -0x7FE8($gp)
    ctx->pc = 0x1ddf1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934552), GPR_U32(ctx, 0));
    // 0x1ddf1d4: 0x8dee00dc  lw          $t6, 0xDC($t7)
    ctx->pc = 0x1ddf1d4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1ddf1d8: 0x8dcd0460  lw          $t5, 0x460($t6)
    ctx->pc = 0x1ddf1d8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 1120)));
    // 0x1ddf1dc: 0xc777bd4  jal         func_1DDEF50
    ctx->pc = 0x1DDF1DCu;
    SET_GPR_U32(ctx, 31, 0x1DDF1E4u);
    ctx->pc = 0x1DDF1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDF1DCu;
    // 0x1ddf1e0: 0x8da4002c  lw          $a0, 0x2C($t5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDEF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDEF50u, 0x1DDF1DCu, 0x1DDF1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDF1E4u;
label_1ddf1e4:
    // 0x1ddf1e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ddf1e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ddf1e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ddf1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddf1ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ddf1ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddf1f0: 0x8777bd8  j           func_1DDEF60
    ctx->pc = 0x1DDF1F0u;
    ctx->pc = 0x1DDF1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDF1F0u;
    // 0x1ddf1f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDEF60u;
    sub_01DDEF60_0x1ddef60(rdram, ctx, runtime); return;
    ctx->pc = 0x1DDF1F8u;
}
