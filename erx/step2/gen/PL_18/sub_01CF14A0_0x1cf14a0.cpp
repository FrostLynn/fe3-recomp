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

// Function: sub_01CF14A0
// Address: 0x1cf14a0 - 0x1cf14d8
void sub_01CF14A0_0x1cf14a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CF14A0_0x1cf14a0");
#endif

    switch (ctx->pc) {
        case 0x1cf14c4u: goto label_1cf14c4;
        default: break;
    }

    ctx->pc = 0x1cf14a0u;

    // 0x1cf14a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cf14a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf14a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cf14a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf14a8: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x1CF14A8u;
    {
        const bool branch_taken_0x1cf14a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF14ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF14A8u;
        // 0x1cf14ac: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf14a8) {
            ctx->pc = 0x1CF146Cu;
            return;
        }
    }
    ctx->pc = 0x1CF14B0u;
    // 0x1cf14b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cf14b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cf14b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cf14b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cf14b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cf14b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cf14bc: 0xc73bd6e  jal         func_1CEF5B8
    ctx->pc = 0x1CF14BCu;
    SET_GPR_U32(ctx, 31, 0x1CF14C4u);
    ctx->pc = 0x1CF14C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF14BCu;
    // 0x1cf14c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF5B8u, 0x1CF14BCu, 0x1CF14C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF14C4u;
label_1cf14c4:
    // 0x1cf14c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cf14c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf14c8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cf14c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cf14cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cf14ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf14d0: 0x873c05a  j           func_1CF0168
    ctx->pc = 0x1CF14D0u;
    ctx->pc = 0x1CF14D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF14D0u;
    // 0x1cf14d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF0168u;
    sub_01CF0168_0x1cf0168(rdram, ctx, runtime); return;
    ctx->pc = 0x1CF14D8u;
}
