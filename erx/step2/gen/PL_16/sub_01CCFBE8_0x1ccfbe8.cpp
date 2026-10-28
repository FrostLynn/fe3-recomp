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

// Function: sub_01CCFBE8
// Address: 0x1ccfbe8 - 0x1ccfc08
void sub_01CCFBE8_0x1ccfbe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCFBE8_0x1ccfbe8");
#endif

    ctx->pc = 0x1ccfbe8u;

    // 0x1ccfbe8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ccfbe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ccfbec: 0x3c0501cd  lui         $a1, 0x1CD
    ctx->pc = 0x1ccfbecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)461 << 16));
    // 0x1ccfbf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ccfbf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ccfbf4: 0x24a50bc0  addiu       $a1, $a1, 0xBC0
    ctx->pc = 0x1ccfbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3008));
    // 0x1ccfbf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ccfbf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ccfbfc: 0x87338fc  j           func_1CCE3F0
    ctx->pc = 0x1CCFBFCu;
    ctx->pc = 0x1CCFC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCFBFCu;
    // 0x1ccfc00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCE3F0u;
    sub_01CCE3F0_0x1cce3f0(rdram, ctx, runtime); return;
    ctx->pc = 0x1CCFC04u;
    // 0x1ccfc04: 0x0  nop
    ctx->pc = 0x1ccfc04u;
    // NOP
    ctx->pc = 0x1ccfc08u;
}
