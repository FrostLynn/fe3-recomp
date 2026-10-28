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

// Function: sub_01D0DD78
// Address: 0x1d0dd78 - 0x1d0dd90
void sub_01D0DD78_0x1d0dd78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0DD78_0x1d0dd78");
#endif

    ctx->pc = 0x1d0dd78u;

    // 0x1d0dd78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d0dd78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d0dd7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d0dd7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d0dd80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d0dd80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0dd84: 0x874320a  j           func_1D0C828
    ctx->pc = 0x1D0DD84u;
    ctx->pc = 0x1D0DD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0DD84u;
    // 0x1d0dd88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0C828u;
    sub_01D0C828_0x1d0c828(rdram, ctx, runtime); return;
    ctx->pc = 0x1D0DD8Cu;
    // 0x1d0dd8c: 0x0  nop
    ctx->pc = 0x1d0dd8cu;
    // NOP
    ctx->pc = 0x1d0dd90u;
}
