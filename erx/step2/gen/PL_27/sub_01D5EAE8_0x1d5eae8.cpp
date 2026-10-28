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

// Function: sub_01D5EAE8
// Address: 0x1d5eae8 - 0x1d5eb00
void sub_01D5EAE8_0x1d5eae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D5EAE8_0x1d5eae8");
#endif

    ctx->pc = 0x1d5eae8u;

    // 0x1d5eae8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d5eae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d5eaec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d5eaecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d5eaf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5eaf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5eaf4: 0x8757360  j           func_1D5CD80
    ctx->pc = 0x1D5EAF4u;
    ctx->pc = 0x1D5EAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5EAF4u;
    // 0x1d5eaf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD80u;
    sub_01D5CD80_0x1d5cd80(rdram, ctx, runtime); return;
    ctx->pc = 0x1D5EAFCu;
    // 0x1d5eafc: 0x0  nop
    ctx->pc = 0x1d5eafcu;
    // NOP
    ctx->pc = 0x1d5eb00u;
}
