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

// Function: sub_01C44D28
// Address: 0x1c44d28 - 0x1c44d48
void sub_01C44D28_0x1c44d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C44D28_0x1c44d28");
#endif

    ctx->pc = 0x1c44d28u;

    // 0x1c44d28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c44d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c44d2c: 0x3c0501c5  lui         $a1, 0x1C5
    ctx->pc = 0x1c44d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)453 << 16));
    // 0x1c44d30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c44d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c44d34: 0x24a58bd0  addiu       $a1, $a1, -0x7430
    ctx->pc = 0x1c44d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937552));
    // 0x1c44d38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c44d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c44d3c: 0x8710d0a  j           func_1C43428
    ctx->pc = 0x1C44D3Cu;
    ctx->pc = 0x1C44D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C44D3Cu;
    // 0x1c44d40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C43428u;
    sub_01C43428_0x1c43428(rdram, ctx, runtime); return;
    ctx->pc = 0x1C44D44u;
    // 0x1c44d44: 0x0  nop
    ctx->pc = 0x1c44d44u;
    // NOP
    ctx->pc = 0x1c44d48u;
}
