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

// Function: sub_01C01ED8
// Address: 0x1c01ed8 - 0x1c01ef0
void sub_01C01ED8_0x1c01ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C01ED8_0x1c01ed8");
#endif

    ctx->pc = 0x1c01ed8u;

    // 0x1c01ed8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c01ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c01edc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c01edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c01ee0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c01ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c01ee4: 0x8700342  j           func_1C00D08
    ctx->pc = 0x1C01EE4u;
    ctx->pc = 0x1C01EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C01EE4u;
    // 0x1c01ee8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00D08u;
    sub_01C00D08_0x1c00d08(rdram, ctx, runtime); return;
    ctx->pc = 0x1C01EECu;
    // 0x1c01eec: 0x0  nop
    ctx->pc = 0x1c01eecu;
    // NOP
    ctx->pc = 0x1c01ef0u;
}
