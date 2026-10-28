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

// Function: sub_01C1145C
// Address: 0x1c1145c - 0x1c11488
void sub_01C1145C_0x1c1145c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C1145C_0x1c1145c");
#endif

    ctx->pc = 0x1c1145cu;

    // 0x1c1145c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1145cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11460: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c11460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11464: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
    ctx->pc = 0x1C11464u;
    {
        const bool branch_taken_0x1c11464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C11468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C11464u;
        // 0x1c11468: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c11464) {
            ctx->pc = 0x1C113F0u;
            return;
        }
    }
    ctx->pc = 0x1C1146Cu;
    // 0x1c1146c: 0x0  nop
    ctx->pc = 0x1c1146cu;
    // NOP
    // 0x1c11470: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c11470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c11474: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c11474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c11478: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c11478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1147c: 0x8703de0  j           func_1C0F780
    ctx->pc = 0x1C1147Cu;
    ctx->pc = 0x1C11480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1147Cu;
    // 0x1c11480: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F780u;
    sub_01C0F780_0x1c0f780(rdram, ctx, runtime); return;
    ctx->pc = 0x1C11484u;
    // 0x1c11484: 0x0  nop
    ctx->pc = 0x1c11484u;
    // NOP
    ctx->pc = 0x1c11488u;
}
