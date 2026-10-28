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

// Function: sub_01C44454
// Address: 0x1c44454 - 0x1c44490
void sub_01C44454_0x1c44454(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C44454_0x1c44454");
#endif

    switch (ctx->pc) {
        case 0x1c44464u: goto label_1c44464;
        default: break;
    }

    ctx->pc = 0x1c44454u;

    // 0x1c44454: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c44454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44458: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c44458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4445c: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
    ctx->pc = 0x1C4445Cu;
    {
        const bool branch_taken_0x1c4445c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C44460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4445Cu;
        // 0x1c44460: 0x2406004f  addiu       $a2, $zero, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4445c) {
            ctx->pc = 0x1C443E8u;
            return;
        }
    }
    ctx->pc = 0x1C44464u;
label_1c44464:
    // 0x1c44464: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c44464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44468: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c44468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4446c: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x1C4446Cu;
    {
        const bool branch_taken_0x1c4446c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C44470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4446Cu;
        // 0x1c44470: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4446c) {
            ctx->pc = 0x1C443E8u;
            return;
        }
    }
    ctx->pc = 0x1C44474u;
    // 0x1c44474: 0x0  nop
    ctx->pc = 0x1c44474u;
    // NOP
    // 0x1c44478: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c44478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c4447c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c4447cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c44480: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c44480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c44484: 0x8710920  j           func_1C42480
    ctx->pc = 0x1C44484u;
    ctx->pc = 0x1C44488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C44484u;
    // 0x1c44488: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42480u;
    sub_01C42480_0x1c42480(rdram, ctx, runtime); return;
    ctx->pc = 0x1C4448Cu;
    // 0x1c4448c: 0x0  nop
    ctx->pc = 0x1c4448cu;
    // NOP
    ctx->pc = 0x1c44490u;
}
