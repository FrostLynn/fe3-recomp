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

// Function: sub_01C52490
// Address: 0x1c52490 - 0x1c524b0
void sub_01C52490_0x1c52490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C52490_0x1c52490");
#endif

    ctx->pc = 0x1c52490u;

    // 0x1c52490: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c52490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c52494: 0x3c0501c5  lui         $a1, 0x1C5
    ctx->pc = 0x1c52494u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)453 << 16));
    // 0x1c52498: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c52498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c5249c: 0x24a55e50  addiu       $a1, $a1, 0x5E50
    ctx->pc = 0x1c5249cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24144));
    // 0x1c524a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c524a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c524a4: 0x8714258  j           func_1C50960
    ctx->pc = 0x1C524A4u;
    ctx->pc = 0x1C524A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C524A4u;
    // 0x1c524a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C50960u;
    sub_01C50960_0x1c50960(rdram, ctx, runtime); return;
    ctx->pc = 0x1C524ACu;
    // 0x1c524ac: 0x0  nop
    ctx->pc = 0x1c524acu;
    // NOP
    ctx->pc = 0x1c524b0u;
}
