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

// Function: sub_01C21A00
// Address: 0x1c21a00 - 0x1c21a18
void sub_01C21A00_0x1c21a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C21A00_0x1c21a00");
#endif

    ctx->pc = 0x1c21a00u;

    // 0x1c21a00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c21a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c21a04: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c21a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c21a08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c21a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c21a0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c21a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c21a10: 0x8707efa  j           func_1C1FBE8
    ctx->pc = 0x1C21A10u;
    ctx->pc = 0x1C21A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21A10u;
    // 0x1c21a14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FBE8u;
    sub_01C1FBE8_0x1c1fbe8(rdram, ctx, runtime); return;
    ctx->pc = 0x1C21A18u;
}
