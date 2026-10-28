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

// Function: sub_01D34158
// Address: 0x1d34158 - 0x1d341a0
void sub_01D34158_0x1d34158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D34158_0x1d34158");
#endif

    switch (ctx->pc) {
        case 0x1d3416cu: goto label_1d3416c;
        case 0x1d34180u: goto label_1d34180;
        case 0x1d34184u: goto label_1d34184;
        default: break;
    }

    ctx->pc = 0x1d34158u;

    // 0x1d34158: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d34158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d3415c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d3415cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d34160: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d34160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d34164: 0xc74cd52  jal         func_1D33548
    ctx->pc = 0x1D34164u;
    SET_GPR_U32(ctx, 31, 0x1D3416Cu);
    ctx->pc = 0x1D34168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D34164u;
    // 0x1d34168: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33548u, 0x1D34164u, 0x1D3416Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3416Cu;
label_1d3416c:
    // 0x1d3416c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d3416cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d34170: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D34170u;
    {
        const bool branch_taken_0x1d34170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D34174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D34170u;
        // 0x1d34174: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d34170) {
            ctx->pc = 0x1D34194u;
            goto label_1d34194;
        }
    }
    ctx->pc = 0x1D34178u;
    // 0x1d34178: 0xc74cd54  jal         func_1D33550
    ctx->pc = 0x1D34178u;
    SET_GPR_U32(ctx, 31, 0x1D34180u);
    ctx->pc = 0x1D33550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33550u, 0x1D34178u, 0x1D34180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D34180u;
label_1d34180:
    // 0x1d34180: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d34180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d34184:
    // 0x1d34184: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d34184u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d34188: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d34188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d3418c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3418Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D34190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3418Cu;
        // 0x1d34190: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3418Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D34194u;
label_1d34194:
    // 0x1d34194: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D34194u;
    {
        const bool branch_taken_0x1d34194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D34198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D34194u;
        // 0x1d34198: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d34194) {
            ctx->pc = 0x1D34184u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d34184;
        }
    }
    ctx->pc = 0x1D3419Cu;
    // 0x1d3419c: 0x0  nop
    ctx->pc = 0x1d3419cu;
    // NOP
    ctx->pc = 0x1d341a0u;
}
