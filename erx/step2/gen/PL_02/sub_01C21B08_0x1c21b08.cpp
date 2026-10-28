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

// Function: sub_01C21B08
// Address: 0x1c21b08 - 0x1c21b28
void sub_01C21B08_0x1c21b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C21B08_0x1c21b08");
#endif

    ctx->pc = 0x1c21b08u;

    // 0x1c21b08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c21b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c21b0c: 0x3c0501c2  lui         $a1, 0x1C2
    ctx->pc = 0x1c21b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)450 << 16));
    // 0x1c21b10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c21b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c21b14: 0x24a560d0  addiu       $a1, $a1, 0x60D0
    ctx->pc = 0x1c21b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24784));
    // 0x1c21b18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c21b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c21b1c: 0x8708050  j           func_1C20140
    ctx->pc = 0x1C21B1Cu;
    ctx->pc = 0x1C21B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21B1Cu;
    // 0x1c21b20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20140u;
    sub_01C20140_0x1c20140(rdram, ctx, runtime); return;
    ctx->pc = 0x1C21B24u;
    // 0x1c21b24: 0x0  nop
    ctx->pc = 0x1c21b24u;
    // NOP
    ctx->pc = 0x1c21b28u;
}
