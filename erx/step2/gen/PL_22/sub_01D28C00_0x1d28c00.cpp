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

// Function: sub_01D28C00
// Address: 0x1d28c00 - 0x1d28c18
void sub_01D28C00_0x1d28c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D28C00_0x1d28c00");
#endif

    ctx->pc = 0x1d28c00u;

    // 0x1d28c00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d28c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d28c04: 0x2405008c  addiu       $a1, $zero, 0x8C
    ctx->pc = 0x1d28c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x1d28c08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d28c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d28c0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d28c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d28c10: 0x8749db2  j           func_1D276C8
    ctx->pc = 0x1D28C10u;
    ctx->pc = 0x1D28C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D28C10u;
    // 0x1d28c14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D276C8u;
    sub_01D276C8_0x1d276c8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D28C18u;
}
