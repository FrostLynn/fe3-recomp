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

// Function: sub_01C61BF8
// Address: 0x1c61bf8 - 0x1c61c18
void sub_01C61BF8_0x1c61bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C61BF8_0x1c61bf8");
#endif

    ctx->pc = 0x1c61bf8u;

    // 0x1c61bf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c61bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c61bfc: 0x3c0501c6  lui         $a1, 0x1C6
    ctx->pc = 0x1c61bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)454 << 16));
    // 0x1c61c00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c61c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c61c04: 0x24a52990  addiu       $a1, $a1, 0x2990
    ctx->pc = 0x1c61c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10640));
    // 0x1c61c08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c61c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c61c0c: 0x871813c  j           func_1C604F0
    ctx->pc = 0x1C61C0Cu;
    ctx->pc = 0x1C61C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C61C0Cu;
    // 0x1c61c10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C604F0u;
    sub_01C604F0_0x1c604f0(rdram, ctx, runtime); return;
    ctx->pc = 0x1C61C14u;
    // 0x1c61c14: 0x0  nop
    ctx->pc = 0x1c61c14u;
    // NOP
    ctx->pc = 0x1c61c18u;
}
