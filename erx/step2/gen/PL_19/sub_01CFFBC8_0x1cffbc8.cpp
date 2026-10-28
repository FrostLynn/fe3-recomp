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

// Function: sub_01CFFBC8
// Address: 0x1cffbc8 - 0x1cffbe8
void sub_01CFFBC8_0x1cffbc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFFBC8_0x1cffbc8");
#endif

    ctx->pc = 0x1cffbc8u;

    // 0x1cffbc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cffbc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cffbcc: 0x3c0501d0  lui         $a1, 0x1D0
    ctx->pc = 0x1cffbccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)464 << 16));
    // 0x1cffbd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cffbd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cffbd4: 0x24a55a10  addiu       $a1, $a1, 0x5A10
    ctx->pc = 0x1cffbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23056));
    // 0x1cffbd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cffbd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cffbdc: 0x873f892  j           func_1CFE248
    ctx->pc = 0x1CFFBDCu;
    ctx->pc = 0x1CFFBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFFBDCu;
    // 0x1cffbe0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFE248u;
    sub_01CFE248_0x1cfe248(rdram, ctx, runtime); return;
    ctx->pc = 0x1CFFBE4u;
    // 0x1cffbe4: 0x0  nop
    ctx->pc = 0x1cffbe4u;
    // NOP
    ctx->pc = 0x1cffbe8u;
}
