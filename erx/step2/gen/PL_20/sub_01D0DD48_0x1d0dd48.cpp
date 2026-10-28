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

// Function: sub_01D0DD48
// Address: 0x1d0dd48 - 0x1d0dd60
void sub_01D0DD48_0x1d0dd48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0DD48_0x1d0dd48");
#endif

    ctx->pc = 0x1d0dd48u;

    // 0x1d0dd48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d0dd48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d0dd4c: 0x24050094  addiu       $a1, $zero, 0x94
    ctx->pc = 0x1d0dd4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    // 0x1d0dd50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d0dd50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d0dd54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d0dd54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0dd58: 0x87431ee  j           func_1D0C7B8
    ctx->pc = 0x1D0DD58u;
    ctx->pc = 0x1D0DD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0DD58u;
    // 0x1d0dd5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0C7B8u;
    sub_01D0C7B8_0x1d0c7b8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D0DD60u;
}
