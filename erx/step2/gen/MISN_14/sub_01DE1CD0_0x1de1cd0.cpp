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

// Function: sub_01DE1CD0
// Address: 0x1de1cd0 - 0x1de1d00
void sub_01DE1CD0_0x1de1cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE1CD0_0x1de1cd0");
#endif

    switch (ctx->pc) {
        case 0x1de1cf0u: goto label_1de1cf0;
        default: break;
    }

    ctx->pc = 0x1de1cd0u;

    // 0x1de1cd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1de1cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1de1cd4: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de1cd4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de1cd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1de1cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1de1cdc: 0x24052a6c  addiu       $a1, $zero, 0x2A6C
    ctx->pc = 0x1de1cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10860));
    // 0x1de1ce0: 0xaf808018  sw          $zero, -0x7FE8($gp)
    ctx->pc = 0x1de1ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934552), GPR_U32(ctx, 0));
    // 0x1de1ce4: 0x8de400dc  lw          $a0, 0xDC($t7)
    ctx->pc = 0x1de1ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1de1ce8: 0xc77865e  jal         func_1DE1978
    ctx->pc = 0x1DE1CE8u;
    SET_GPR_U32(ctx, 31, 0x1DE1CF0u);
    ctx->pc = 0x1DE1CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE1CE8u;
    // 0x1de1cec: 0x248408c8  addiu       $a0, $a0, 0x8C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE1978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE1978u, 0x1DE1CE8u, 0x1DE1CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE1CF0u;
label_1de1cf0:
    // 0x1de1cf0: 0x8f848014  lw          $a0, -0x7FEC($gp)
    ctx->pc = 0x1de1cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de1cf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1de1cf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de1cf8: 0x8778660  j           func_1DE1980
    ctx->pc = 0x1DE1CF8u;
    ctx->pc = 0x1DE1CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE1CF8u;
    // 0x1de1cfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE1980u;
    sub_01DE1980_0x1de1980(rdram, ctx, runtime); return;
    ctx->pc = 0x1DE1D00u;
}
