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

// Function: sub_01CFF040
// Address: 0x1cff040 - 0x1cff068
void sub_01CFF040_0x1cff040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFF040_0x1cff040");
#endif

    switch (ctx->pc) {
        case 0x1cff054u: goto label_1cff054;
        default: break;
    }

    ctx->pc = 0x1cff040u;

    // 0x1cff040: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cff040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cff044: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cff044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cff048: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cff048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cff04c: 0xc73f4b0  jal         func_1CFD2C0
    ctx->pc = 0x1CFF04Cu;
    SET_GPR_U32(ctx, 31, 0x1CFF054u);
    ctx->pc = 0x1CFF050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF04Cu;
    // 0x1cff050: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD2C0u, 0x1CFF04Cu, 0x1CFF054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF054u;
label_1cff054:
    // 0x1cff054: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cff054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff058: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cff058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cff05c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cff05cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cff060: 0x873f7a4  j           func_1CFDE90
    ctx->pc = 0x1CFF060u;
    ctx->pc = 0x1CFF064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF060u;
    // 0x1cff064: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFDE90u;
    sub_01CFDE90_0x1cfde90(rdram, ctx, runtime); return;
    ctx->pc = 0x1CFF068u;
}
