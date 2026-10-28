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

// Function: sub_01CFEDB0
// Address: 0x1cfedb0 - 0x1cfedf8
void sub_01CFEDB0_0x1cfedb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFEDB0_0x1cfedb0");
#endif

    switch (ctx->pc) {
        case 0x1cfedc0u: goto label_1cfedc0;
        case 0x1cfede4u: goto label_1cfede4;
        default: break;
    }

    ctx->pc = 0x1cfedb0u;

    // 0x1cfedb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cfedb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfedb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cfedb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfedb8: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x1CFEDB8u;
    {
        const bool branch_taken_0x1cfedb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFEDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFEDB8u;
        // 0x1cfedbc: 0x2406004d  addiu       $a2, $zero, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfedb8) {
            ctx->pc = 0x1CFED7Cu;
            return;
        }
    }
    ctx->pc = 0x1CFEDC0u;
label_1cfedc0:
    // 0x1cfedc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cfedc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfedc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cfedc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfedc8: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x1CFEDC8u;
    {
        const bool branch_taken_0x1cfedc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFEDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFEDC8u;
        // 0x1cfedcc: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfedc8) {
            ctx->pc = 0x1CFED7Cu;
            return;
        }
    }
    ctx->pc = 0x1CFEDD0u;
    // 0x1cfedd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cfedd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cfedd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cfedd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cfedd8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cfedd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cfeddc: 0xc73f4b0  jal         func_1CFD2C0
    ctx->pc = 0x1CFEDDCu;
    SET_GPR_U32(ctx, 31, 0x1CFEDE4u);
    ctx->pc = 0x1CFEDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFEDDCu;
    // 0x1cfede0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD2C0u, 0x1CFEDDCu, 0x1CFEDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFEDE4u;
label_1cfede4:
    // 0x1cfede4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cfede4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfede8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cfede8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cfedec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cfedecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cfedf0: 0x873f7a4  j           func_1CFDE90
    ctx->pc = 0x1CFEDF0u;
    ctx->pc = 0x1CFEDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFEDF0u;
    // 0x1cfedf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFDE90u;
    sub_01CFDE90_0x1cfde90(rdram, ctx, runtime); return;
    ctx->pc = 0x1CFEDF8u;
}
