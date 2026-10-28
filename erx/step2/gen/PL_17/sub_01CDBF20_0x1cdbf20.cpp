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

// Function: sub_01CDBF20
// Address: 0x1cdbf20 - 0x1cdbf58
void sub_01CDBF20_0x1cdbf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDBF20_0x1cdbf20");
#endif

    switch (ctx->pc) {
        case 0x1cdbf30u: goto label_1cdbf30;
        default: break;
    }

    ctx->pc = 0x1cdbf20u;

    // 0x1cdbf20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cdbf20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdbf24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cdbf24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdbf28: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x1CDBF28u;
    {
        const bool branch_taken_0x1cdbf28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDBF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDBF28u;
        // 0x1cdbf2c: 0x2406016d  addiu       $a2, $zero, 0x16D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 365));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdbf28) {
            ctx->pc = 0x1CDBEECu;
            return;
        }
    }
    ctx->pc = 0x1CDBF30u;
label_1cdbf30:
    // 0x1cdbf30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cdbf30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdbf34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cdbf34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdbf38: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x1CDBF38u;
    {
        const bool branch_taken_0x1cdbf38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDBF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDBF38u;
        // 0x1cdbf3c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdbf38) {
            ctx->pc = 0x1CDBEECu;
            return;
        }
    }
    ctx->pc = 0x1CDBF40u;
    // 0x1cdbf40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cdbf40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cdbf44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cdbf44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cdbf48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cdbf48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdbf4c: 0x8736b9a  j           func_1CDAE68
    ctx->pc = 0x1CDBF4Cu;
    ctx->pc = 0x1CDBF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDBF4Cu;
    // 0x1cdbf50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDAE68u;
    sub_01CDAE68_0x1cdae68(rdram, ctx, runtime); return;
    ctx->pc = 0x1CDBF54u;
    // 0x1cdbf54: 0x0  nop
    ctx->pc = 0x1cdbf54u;
    // NOP
    ctx->pc = 0x1cdbf58u;
}
