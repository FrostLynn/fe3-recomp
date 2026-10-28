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

// Function: sub_01CADE2C
// Address: 0x1cade2c - 0x1cade98
void sub_01CADE2C_0x1cade2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CADE2C_0x1cade2c");
#endif

    switch (ctx->pc) {
        case 0x1cade3cu: goto label_1cade3c;
        case 0x1cade4cu: goto label_1cade4c;
        case 0x1cade5cu: goto label_1cade5c;
        case 0x1cade6cu: goto label_1cade6c;
        default: break;
    }

    ctx->pc = 0x1cade2cu;

    // 0x1cade2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cade2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cade30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cade30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cade34: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
    ctx->pc = 0x1CADE34u;
    {
        const bool branch_taken_0x1cade34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CADE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CADE34u;
        // 0x1cade38: 0x24060044  addiu       $a2, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cade34) {
            ctx->pc = 0x1CADDC0u;
            return;
        }
    }
    ctx->pc = 0x1CADE3Cu;
label_1cade3c:
    // 0x1cade3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cade3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cade40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cade40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cade44: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x1CADE44u;
    {
        const bool branch_taken_0x1cade44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CADE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CADE44u;
        // 0x1cade48: 0x24060043  addiu       $a2, $zero, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cade44) {
            ctx->pc = 0x1CADDC0u;
            return;
        }
    }
    ctx->pc = 0x1CADE4Cu;
label_1cade4c:
    // 0x1cade4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cade4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cade50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cade50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cade54: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x1CADE54u;
    {
        const bool branch_taken_0x1cade54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CADE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CADE54u;
        // 0x1cade58: 0x24060042  addiu       $a2, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cade54) {
            ctx->pc = 0x1CADDC0u;
            return;
        }
    }
    ctx->pc = 0x1CADE5Cu;
label_1cade5c:
    // 0x1cade5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cade5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cade60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cade60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cade64: 0x1000ffd6  b           . + 4 + (-0x2A << 2)
    ctx->pc = 0x1CADE64u;
    {
        const bool branch_taken_0x1cade64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CADE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CADE64u;
        // 0x1cade68: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cade64) {
            ctx->pc = 0x1CADDC0u;
            return;
        }
    }
    ctx->pc = 0x1CADE6Cu;
label_1cade6c:
    // 0x1cade6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cade6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cade70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cade70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cade74: 0x1000ffd2  b           . + 4 + (-0x2E << 2)
    ctx->pc = 0x1CADE74u;
    {
        const bool branch_taken_0x1cade74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CADE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CADE74u;
        // 0x1cade78: 0x24060045  addiu       $a2, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cade74) {
            ctx->pc = 0x1CADDC0u;
            return;
        }
    }
    ctx->pc = 0x1CADE7Cu;
    // 0x1cade7c: 0x0  nop
    ctx->pc = 0x1cade7cu;
    // NOP
    // 0x1cade80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cade80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cade84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cade84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cade88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cade88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cade8c: 0x872b456  j           func_1CAD158
    ctx->pc = 0x1CADE8Cu;
    ctx->pc = 0x1CADE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CADE8Cu;
    // 0x1cade90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD158u;
    sub_01CAD158_0x1cad158(rdram, ctx, runtime); return;
    ctx->pc = 0x1CADE94u;
    // 0x1cade94: 0x0  nop
    ctx->pc = 0x1cade94u;
    // NOP
    ctx->pc = 0x1cade98u;
}
