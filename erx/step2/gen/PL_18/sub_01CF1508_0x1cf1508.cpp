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

// Function: sub_01CF1508
// Address: 0x1cf1508 - 0x1cf1520
void sub_01CF1508_0x1cf1508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CF1508_0x1cf1508");
#endif

    ctx->pc = 0x1cf1508u;

    // 0x1cf1508: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cf1508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cf150c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cf150cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cf1510: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cf1510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf1514: 0x873c00a  j           func_1CF0028
    ctx->pc = 0x1CF1514u;
    ctx->pc = 0x1CF1518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1514u;
    // 0x1cf1518: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF0028u;
    sub_01CF0028_0x1cf0028(rdram, ctx, runtime); return;
    ctx->pc = 0x1CF151Cu;
    // 0x1cf151c: 0x0  nop
    ctx->pc = 0x1cf151cu;
    // NOP
    ctx->pc = 0x1cf1520u;
}
