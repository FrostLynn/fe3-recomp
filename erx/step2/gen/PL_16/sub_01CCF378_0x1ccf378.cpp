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

// Function: sub_01CCF378
// Address: 0x1ccf378 - 0x1ccf390
void sub_01CCF378_0x1ccf378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCF378_0x1ccf378");
#endif

    ctx->pc = 0x1ccf378u;

    // 0x1ccf378: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ccf378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ccf37c: 0x2405008a  addiu       $a1, $zero, 0x8A
    ctx->pc = 0x1ccf37cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 138));
    // 0x1ccf380: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ccf380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ccf384: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ccf384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ccf388: 0x87337aa  j           func_1CCDEA8
    ctx->pc = 0x1CCF388u;
    ctx->pc = 0x1CCF38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF388u;
    // 0x1ccf38c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCDEA8u;
    sub_01CCDEA8_0x1ccdea8(rdram, ctx, runtime); return;
    ctx->pc = 0x1CCF390u;
}
