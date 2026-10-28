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

// Function: sub_01D35408
// Address: 0x1d35408 - 0x1d35460
void sub_01D35408_0x1d35408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D35408_0x1d35408");
#endif

    switch (ctx->pc) {
        case 0x1d3541cu: goto label_1d3541c;
        case 0x1d3542cu: goto label_1d3542c;
        case 0x1d35430u: goto label_1d35430;
        default: break;
    }

    ctx->pc = 0x1d35408u;

    // 0x1d35408: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d35408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d3540c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d3540cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d35410: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d35410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d35414: 0xc74d056  jal         func_1D34158
    ctx->pc = 0x1D35414u;
    SET_GPR_U32(ctx, 31, 0x1D3541Cu);
    ctx->pc = 0x1D35418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D35414u;
    // 0x1d35418: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D34158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D34158u, 0x1D35414u, 0x1D3541Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3541Cu;
label_1d3541c:
    // 0x1d3541c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D3541Cu;
    {
        const bool branch_taken_0x1d3541c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D35420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3541Cu;
        // 0x1d35420: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3541c) {
            ctx->pc = 0x1D35440u;
            goto label_1d35440;
        }
    }
    ctx->pc = 0x1D35424u;
    // 0x1d35424: 0xc74cd6c  jal         func_1D335B0
    ctx->pc = 0x1D35424u;
    SET_GPR_U32(ctx, 31, 0x1D3542Cu);
    ctx->pc = 0x1D335B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D335B0u, 0x1D35424u, 0x1D3542Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3542Cu;
label_1d3542c:
    // 0x1d3542c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d3542cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d35430:
    // 0x1d35430: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d35430u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d35434: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d35434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d35438: 0x3e00008  jr          $ra
    ctx->pc = 0x1D35438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3543Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D35438u;
        // 0x1d3543c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D35438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D35440u;
label_1d35440:
    // 0x1d35440: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D35440u;
    {
        const bool branch_taken_0x1d35440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D35444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D35440u;
        // 0x1d35444: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d35440) {
            ctx->pc = 0x1D35430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d35430;
        }
    }
    ctx->pc = 0x1D35448u;
    // 0x1d35448: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d35448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d3544c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d3544cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d35450: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d35450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d35454: 0x874d068  j           func_1D341A0
    ctx->pc = 0x1D35454u;
    ctx->pc = 0x1D35458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D35454u;
    // 0x1d35458: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D341A0u;
    sub_01D341A0_0x1d341a0(rdram, ctx, runtime); return;
    ctx->pc = 0x1D3545Cu;
    // 0x1d3545c: 0x0  nop
    ctx->pc = 0x1d3545cu;
    // NOP
    ctx->pc = 0x1d35460u;
}
