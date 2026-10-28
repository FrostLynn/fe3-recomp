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

// Function: sub_01D70F18
// Address: 0x1d70f18 - 0x1d70f40
void sub_01D70F18_0x1d70f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D70F18_0x1d70f18");
#endif

    switch (ctx->pc) {
        case 0x1d70f2cu: goto label_1d70f2c;
        default: break;
    }

    ctx->pc = 0x1d70f18u;

    // 0x1d70f18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d70f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d70f1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d70f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d70f20: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d70f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d70f24: 0xc75c016  jal         func_1D70058
    ctx->pc = 0x1D70F24u;
    SET_GPR_U32(ctx, 31, 0x1D70F2Cu);
    ctx->pc = 0x1D70F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D70F24u;
    // 0x1d70f28: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70058u, 0x1D70F24u, 0x1D70F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D70F2Cu;
label_1d70f2c:
    // 0x1d70f2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d70f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d70f30: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d70f30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d70f34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d70f34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d70f38: 0x875c2a4  j           func_1D70A90
    ctx->pc = 0x1D70F38u;
    ctx->pc = 0x1D70F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D70F38u;
    // 0x1d70f3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70A90u;
    sub_01D70A90_0x1d70a90(rdram, ctx, runtime); return;
    ctx->pc = 0x1D70F40u;
}
