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

// Function: sub_01C8DBF8
// Address: 0x1c8dbf8 - 0x1c8dc10
void sub_01C8DBF8_0x1c8dbf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C8DBF8_0x1c8dbf8");
#endif

    ctx->pc = 0x1c8dbf8u;

    // 0x1c8dbf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c8dbf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c8dbfc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c8dbfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c8dc00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c8dc00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8dc04: 0x87233e0  j           func_1C8CF80
    ctx->pc = 0x1C8DC04u;
    ctx->pc = 0x1C8DC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8DC04u;
    // 0x1c8dc08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF80u;
    sub_01C8CF80_0x1c8cf80(rdram, ctx, runtime); return;
    ctx->pc = 0x1C8DC0Cu;
    // 0x1c8dc0c: 0x0  nop
    ctx->pc = 0x1c8dc0cu;
    // NOP
    ctx->pc = 0x1c8dc10u;
}
