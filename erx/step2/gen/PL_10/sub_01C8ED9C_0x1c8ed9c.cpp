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

// Function: sub_01C8ED9C
// Address: 0x1c8ed9c - 0x1c8edf8
void sub_01C8ED9C_0x1c8ed9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C8ED9C_0x1c8ed9c");
#endif

    switch (ctx->pc) {
        case 0x1c8edacu: goto label_1c8edac;
        case 0x1c8edbcu: goto label_1c8edbc;
        case 0x1c8edccu: goto label_1c8edcc;
        default: break;
    }

    ctx->pc = 0x1c8ed9cu;

    // 0x1c8ed9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8ed9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8eda0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c8eda0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8eda4: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x1C8EDA4u;
    {
        const bool branch_taken_0x1c8eda4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8EDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8EDA4u;
        // 0x1c8eda8: 0x2406004d  addiu       $a2, $zero, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8eda4) {
            ctx->pc = 0x1C8ED28u;
            return;
        }
    }
    ctx->pc = 0x1C8EDACu;
label_1c8edac:
    // 0x1c8edac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8edacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8edb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c8edb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8edb4: 0x1000ffdc  b           . + 4 + (-0x24 << 2)
    ctx->pc = 0x1C8EDB4u;
    {
        const bool branch_taken_0x1c8edb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8EDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8EDB4u;
        // 0x1c8edb8: 0x2406004c  addiu       $a2, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8edb4) {
            ctx->pc = 0x1C8ED28u;
            return;
        }
    }
    ctx->pc = 0x1C8EDBCu;
label_1c8edbc:
    // 0x1c8edbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8edbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8edc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c8edc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8edc4: 0x1000ffd8  b           . + 4 + (-0x28 << 2)
    ctx->pc = 0x1C8EDC4u;
    {
        const bool branch_taken_0x1c8edc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8EDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8EDC4u;
        // 0x1c8edc8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8edc4) {
            ctx->pc = 0x1C8ED28u;
            return;
        }
    }
    ctx->pc = 0x1C8EDCCu;
label_1c8edcc:
    // 0x1c8edcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8edccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8edd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c8edd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8edd4: 0x1000ffd4  b           . + 4 + (-0x2C << 2)
    ctx->pc = 0x1C8EDD4u;
    {
        const bool branch_taken_0x1c8edd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8EDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8EDD4u;
        // 0x1c8edd8: 0x2406004e  addiu       $a2, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8edd4) {
            ctx->pc = 0x1C8ED28u;
            return;
        }
    }
    ctx->pc = 0x1C8EDDCu;
    // 0x1c8eddc: 0x0  nop
    ctx->pc = 0x1c8eddcu;
    // NOP
    // 0x1c8ede0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c8ede0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c8ede4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c8ede4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c8ede8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c8ede8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8edec: 0x87233e0  j           func_1C8CF80
    ctx->pc = 0x1C8EDECu;
    ctx->pc = 0x1C8EDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8EDECu;
    // 0x1c8edf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF80u;
    sub_01C8CF80_0x1c8cf80(rdram, ctx, runtime); return;
    ctx->pc = 0x1C8EDF4u;
    // 0x1c8edf4: 0x0  nop
    ctx->pc = 0x1c8edf4u;
    // NOP
    ctx->pc = 0x1c8edf8u;
}
