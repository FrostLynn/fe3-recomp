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

// Function: sub_01D29A10
// Address: 0x1d29a10 - 0x1d29a50
void sub_01D29A10_0x1d29a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D29A10_0x1d29a10");
#endif

    switch (ctx->pc) {
        case 0x1d29a3cu: goto label_1d29a3c;
        default: break;
    }

    ctx->pc = 0x1d29a10u;

    // 0x1d29a10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d29a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d29a14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d29a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d29a18: 0x8c8f0010  lw          $t7, 0x10($a0)
    ctx->pc = 0x1d29a18u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d29a1c: 0x11e00008  beqz        $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D29A1Cu;
    {
        const bool branch_taken_0x1d29a1c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D29A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D29A1Cu;
        // 0x1d29a20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d29a1c) {
            ctx->pc = 0x1D29A40u;
            goto label_1d29a40;
        }
    }
    ctx->pc = 0x1D29A24u;
    // 0x1d29a24: 0x3c0401d2  lui         $a0, 0x1D2
    ctx->pc = 0x1d29a24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)466 << 16));
    // 0x1d29a28: 0x3c0501d3  lui         $a1, 0x1D3
    ctx->pc = 0x1d29a28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)467 << 16));
    // 0x1d29a2c: 0x24846cd0  addiu       $a0, $a0, 0x6CD0
    ctx->pc = 0x1d29a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27856));
    // 0x1d29a30: 0x24a5a898  addiu       $a1, $a1, -0x5768
    ctx->pc = 0x1d29a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944920));
    // 0x1d29a34: 0xc749b36  jal         func_1D26CD8
    ctx->pc = 0x1D29A34u;
    SET_GPR_U32(ctx, 31, 0x1D29A3Cu);
    ctx->pc = 0x1D29A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D29A34u;
    // 0x1d29a38: 0x240603c4  addiu       $a2, $zero, 0x3C4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 964));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26CD8u, 0x1D29A34u, 0x1D29A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D29A3Cu;
label_1d29a3c:
    // 0x1d29a3c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d29a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d29a40:
    // 0x1d29a40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d29a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d29a44: 0x3e00008  jr          $ra
    ctx->pc = 0x1D29A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D29A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D29A44u;
        // 0x1d29a48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D29A44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D29A4Cu;
    // 0x1d29a4c: 0x0  nop
    ctx->pc = 0x1d29a4cu;
    // NOP
    ctx->pc = 0x1d29a50u;
}
