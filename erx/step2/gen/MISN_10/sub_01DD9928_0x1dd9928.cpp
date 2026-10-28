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

// Function: sub_01DD9928
// Address: 0x1dd9928 - 0x1dd9948
void sub_01DD9928_0x1dd9928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD9928_0x1dd9928");
#endif

    ctx->pc = 0x1dd9928u;

    // 0x1dd9928: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dd9928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dd992c: 0xaf80801c  sw          $zero, -0x7FE4($gp)
    ctx->pc = 0x1dd992cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934556), GPR_U32(ctx, 0));
    // 0x1dd9930: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd9930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dd9934: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1dd9934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd9938: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd9938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd993c: 0x877663e  j           func_1DD98F8
    ctx->pc = 0x1DD993Cu;
    ctx->pc = 0x1DD9940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD993Cu;
    // 0x1dd9940: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD98F8u;
    sub_01DD98F8_0x1dd98f8(rdram, ctx, runtime); return;
    ctx->pc = 0x1DD9944u;
    // 0x1dd9944: 0x0  nop
    ctx->pc = 0x1dd9944u;
    // NOP
    ctx->pc = 0x1dd9948u;
}
