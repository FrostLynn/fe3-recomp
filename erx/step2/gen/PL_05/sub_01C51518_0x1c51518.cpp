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

// Function: sub_01C51518
// Address: 0x1c51518 - 0x1c51540
void sub_01C51518_0x1c51518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C51518_0x1c51518");
#endif

    switch (ctx->pc) {
        case 0x1c5152cu: goto label_1c5152c;
        default: break;
    }

    ctx->pc = 0x1c51518u;

    // 0x1c51518: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c51518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c5151c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c5151cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c51520: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c51520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c51524: 0xc713e78  jal         func_1C4F9E0
    ctx->pc = 0x1C51524u;
    SET_GPR_U32(ctx, 31, 0x1C5152Cu);
    ctx->pc = 0x1C51528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51524u;
    // 0x1c51528: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F9E0u, 0x1C51524u, 0x1C5152Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5152Cu;
label_1c5152c:
    // 0x1c5152c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c5152cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51530: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c51530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c51534: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c51534u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c51538: 0x8713e6c  j           func_1C4F9B0
    ctx->pc = 0x1C51538u;
    ctx->pc = 0x1C5153Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51538u;
    // 0x1c5153c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F9B0u;
    sub_01C4F9B0_0x1c4f9b0(rdram, ctx, runtime); return;
    ctx->pc = 0x1C51540u;
}
