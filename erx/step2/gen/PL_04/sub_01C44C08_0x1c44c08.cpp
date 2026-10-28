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

// Function: sub_01C44C08
// Address: 0x1c44c08 - 0x1c44c28
void sub_01C44C08_0x1c44c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C44C08_0x1c44c08");
#endif

    ctx->pc = 0x1c44c08u;

    // 0x1c44c08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c44c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c44c0c: 0x3c0501c4  lui         $a1, 0x1C4
    ctx->pc = 0x1c44c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)452 << 16));
    // 0x1c44c10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c44c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c44c14: 0x24a55d70  addiu       $a1, $a1, 0x5D70
    ctx->pc = 0x1c44c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23920));
    // 0x1c44c18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c44c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c44c1c: 0x8710d0a  j           func_1C43428
    ctx->pc = 0x1C44C1Cu;
    ctx->pc = 0x1C44C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C44C1Cu;
    // 0x1c44c20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C43428u;
    sub_01C43428_0x1c43428(rdram, ctx, runtime); return;
    ctx->pc = 0x1C44C24u;
    // 0x1c44c24: 0x0  nop
    ctx->pc = 0x1c44c24u;
    // NOP
    ctx->pc = 0x1c44c28u;
}
