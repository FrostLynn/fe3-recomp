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

// Function: sub_01CCEFD4
// Address: 0x1ccefd4 - 0x1ccf000
void sub_01CCEFD4_0x1ccefd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCEFD4_0x1ccefd4");
#endif

    ctx->pc = 0x1ccefd4u;

    // 0x1ccefd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ccefd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccefd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ccefd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccefdc: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
    ctx->pc = 0x1CCEFDCu;
    {
        const bool branch_taken_0x1ccefdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCEFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCEFDCu;
        // 0x1ccefe0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccefdc) {
            ctx->pc = 0x1CCEF68u;
            return;
        }
    }
    ctx->pc = 0x1CCEFE4u;
    // 0x1ccefe4: 0x0  nop
    ctx->pc = 0x1ccefe4u;
    // NOP
    // 0x1ccefe8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ccefe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ccefec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ccefecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cceff0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cceff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cceff4: 0x8733520  j           func_1CCD480
    ctx->pc = 0x1CCEFF4u;
    ctx->pc = 0x1CCEFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCEFF4u;
    // 0x1cceff8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD480u;
    sub_01CCD480_0x1ccd480(rdram, ctx, runtime); return;
    ctx->pc = 0x1CCEFFCu;
    // 0x1cceffc: 0x0  nop
    ctx->pc = 0x1cceffcu;
    // NOP
    ctx->pc = 0x1ccf000u;
}
