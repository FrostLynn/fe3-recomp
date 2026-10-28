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

// Function: sub_01CFFB78
// Address: 0x1cffb78 - 0x1cffb98
void sub_01CFFB78_0x1cffb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFFB78_0x1cffb78");
#endif

    ctx->pc = 0x1cffb78u;

    // 0x1cffb78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cffb78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cffb7c: 0x3c0501d0  lui         $a1, 0x1D0
    ctx->pc = 0x1cffb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)464 << 16));
    // 0x1cffb80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cffb80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cffb84: 0x24a54bb0  addiu       $a1, $a1, 0x4BB0
    ctx->pc = 0x1cffb84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19376));
    // 0x1cffb88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cffb88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cffb8c: 0x873f892  j           func_1CFE248
    ctx->pc = 0x1CFFB8Cu;
    ctx->pc = 0x1CFFB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFFB8Cu;
    // 0x1cffb90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFE248u;
    sub_01CFE248_0x1cfe248(rdram, ctx, runtime); return;
    ctx->pc = 0x1CFFB94u;
    // 0x1cffb94: 0x0  nop
    ctx->pc = 0x1cffb94u;
    // NOP
    ctx->pc = 0x1cffb98u;
}
