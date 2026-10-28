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

// Function: sub_01D5EC00
// Address: 0x1d5ec00 - 0x1d5ec28
void sub_01D5EC00_0x1d5ec00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D5EC00_0x1d5ec00");
#endif

    switch (ctx->pc) {
        case 0x1d5ec14u: goto label_1d5ec14;
        default: break;
    }

    ctx->pc = 0x1d5ec00u;

    // 0x1d5ec00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d5ec00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d5ec04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d5ec04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d5ec08: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d5ec08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d5ec0c: 0xc75736c  jal         func_1D5CDB0
    ctx->pc = 0x1D5EC0Cu;
    SET_GPR_U32(ctx, 31, 0x1D5EC14u);
    ctx->pc = 0x1D5EC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5EC0Cu;
    // 0x1d5ec10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CDB0u, 0x1D5EC0Cu, 0x1D5EC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5EC14u;
label_1d5ec14:
    // 0x1d5ec14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5ec14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ec18: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d5ec18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d5ec1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d5ec1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5ec20: 0x8757360  j           func_1D5CD80
    ctx->pc = 0x1D5EC20u;
    ctx->pc = 0x1D5EC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5EC20u;
    // 0x1d5ec24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD80u;
    sub_01D5CD80_0x1d5cd80(rdram, ctx, runtime); return;
    ctx->pc = 0x1D5EC28u;
}
