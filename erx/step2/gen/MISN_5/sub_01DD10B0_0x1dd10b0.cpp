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

// Function: sub_01DD10B0
// Address: 0x1dd10b0 - 0x1dd10e0
void sub_01DD10B0_0x1dd10b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD10B0_0x1dd10b0");
#endif

    switch (ctx->pc) {
        case 0x1dd10c0u: goto label_1dd10c0;
        default: break;
    }

    ctx->pc = 0x1dd10b0u;

    // 0x1dd10b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dd10b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dd10b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd10b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dd10b8: 0xc77432c  jal         func_1DD0CB0
    ctx->pc = 0x1DD10B8u;
    SET_GPR_U32(ctx, 31, 0x1DD10C0u);
    ctx->pc = 0x1DD0CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD0CB0u, 0x1DD10B8u, 0x1DD10C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD10C0u;
label_1dd10c0:
    // 0x1dd10c0: 0x8f848014  lw          $a0, -0x7FEC($gp)
    ctx->pc = 0x1dd10c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd10c4: 0x2405fac0  addiu       $a1, $zero, -0x540
    ctx->pc = 0x1dd10c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965952));
    // 0x1dd10c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd10c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd10cc: 0x2406270f  addiu       $a2, $zero, 0x270F
    ctx->pc = 0x1dd10ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x1dd10d0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1dd10d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dd10d4: 0x2408fffe  addiu       $t0, $zero, -0x2
    ctx->pc = 0x1dd10d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1dd10d8: 0x8774294  j           func_1DD0A50
    ctx->pc = 0x1DD10D8u;
    ctx->pc = 0x1DD10DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD10D8u;
    // 0x1dd10dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD0A50u;
    sub_01DD0A50_0x1dd0a50(rdram, ctx, runtime); return;
    ctx->pc = 0x1DD10E0u;
}
