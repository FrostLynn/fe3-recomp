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

// Function: sub_01CF10E8
// Address: 0x1cf10e8 - 0x1cf1100
void sub_01CF10E8_0x1cf10e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CF10E8_0x1cf10e8");
#endif

    ctx->pc = 0x1cf10e8u;

    // 0x1cf10e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cf10e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cf10ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cf10ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cf10f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cf10f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf10f4: 0x873c016  j           func_1CF0058
    ctx->pc = 0x1CF10F4u;
    ctx->pc = 0x1CF10F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF10F4u;
    // 0x1cf10f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF0058u;
    sub_01CF0058_0x1cf0058(rdram, ctx, runtime); return;
    ctx->pc = 0x1CF10FCu;
    // 0x1cf10fc: 0x0  nop
    ctx->pc = 0x1cf10fcu;
    // NOP
    ctx->pc = 0x1cf1100u;
}
