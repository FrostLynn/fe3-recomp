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

// Function: sub_01CDBE28
// Address: 0x1cdbe28 - 0x1cdbe70
void sub_01CDBE28_0x1cdbe28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDBE28_0x1cdbe28");
#endif

    switch (ctx->pc) {
        case 0x1cdbe38u: goto label_1cdbe38;
        case 0x1cdbe48u: goto label_1cdbe48;
        default: break;
    }

    ctx->pc = 0x1cdbe28u;

    // 0x1cdbe28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cdbe28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdbe2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cdbe2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdbe30: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x1CDBE30u;
    {
        const bool branch_taken_0x1cdbe30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDBE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDBE30u;
        // 0x1cdbe34: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdbe30) {
            ctx->pc = 0x1CDBDF4u;
            return;
        }
    }
    ctx->pc = 0x1CDBE38u;
label_1cdbe38:
    // 0x1cdbe38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cdbe38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdbe3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cdbe3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdbe40: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x1CDBE40u;
    {
        const bool branch_taken_0x1cdbe40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDBE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDBE40u;
        // 0x1cdbe44: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdbe40) {
            ctx->pc = 0x1CDBDF4u;
            return;
        }
    }
    ctx->pc = 0x1CDBE48u;
label_1cdbe48:
    // 0x1cdbe48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cdbe48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdbe4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cdbe4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdbe50: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x1CDBE50u;
    {
        const bool branch_taken_0x1cdbe50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDBE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDBE50u;
        // 0x1cdbe54: 0x24060195  addiu       $a2, $zero, 0x195 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 405));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdbe50) {
            ctx->pc = 0x1CDBDF4u;
            return;
        }
    }
    ctx->pc = 0x1CDBE58u;
    // 0x1cdbe58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cdbe58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cdbe5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cdbe5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cdbe60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cdbe60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdbe64: 0x8736b9a  j           func_1CDAE68
    ctx->pc = 0x1CDBE64u;
    ctx->pc = 0x1CDBE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDBE64u;
    // 0x1cdbe68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDAE68u;
    sub_01CDAE68_0x1cdae68(rdram, ctx, runtime); return;
    ctx->pc = 0x1CDBE6Cu;
    // 0x1cdbe6c: 0x0  nop
    ctx->pc = 0x1cdbe6cu;
    // NOP
    ctx->pc = 0x1cdbe70u;
}
