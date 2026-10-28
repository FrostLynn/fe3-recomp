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

// Function: sub_01DB2D18
// Address: 0x1db2d18 - 0x1db2d30
void sub_01DB2D18_0x1db2d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB2D18_0x1db2d18");
#endif

    ctx->pc = 0x1db2d18u;

    // 0x1db2d18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1db2d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1db2d1c: 0x24050085  addiu       $a1, $zero, 0x85
    ctx->pc = 0x1db2d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
    // 0x1db2d20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1db2d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1db2d24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1db2d24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db2d28: 0x876c666  j           func_1DB1998
    ctx->pc = 0x1DB2D28u;
    ctx->pc = 0x1DB2D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB2D28u;
    // 0x1db2d2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB1998u;
    sub_01DB1998_0x1db1998(rdram, ctx, runtime); return;
    ctx->pc = 0x1DB2D30u;
}
