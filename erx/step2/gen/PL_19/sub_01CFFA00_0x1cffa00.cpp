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

// Function: sub_01CFFA00
// Address: 0x1cffa00 - 0x1cffa38
void sub_01CFFA00_0x1cffa00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFFA00_0x1cffa00");
#endif

    switch (ctx->pc) {
        case 0x1cffa14u: goto label_1cffa14;
        default: break;
    }

    ctx->pc = 0x1cffa00u;

    // 0x1cffa00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cffa00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cffa04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cffa04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cffa08: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cffa08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cffa0c: 0xc73f49a  jal         func_1CFD268
    ctx->pc = 0x1CFFA0Cu;
    SET_GPR_U32(ctx, 31, 0x1CFFA14u);
    ctx->pc = 0x1CFFA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFFA0Cu;
    // 0x1cffa10: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD268u, 0x1CFFA0Cu, 0x1CFFA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFFA14u;
label_1cffa14:
    // 0x1cffa14: 0x8c4f0380  lw          $t7, 0x380($v0)
    ctx->pc = 0x1cffa14u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x1cffa18: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CFFA18u;
    {
        const bool branch_taken_0x1cffa18 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFFA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFFA18u;
        // 0x1cffa1c: 0x1e0202d  daddu       $a0, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cffa18) {
            ctx->pc = 0x1CFFA2Cu;
            goto label_1cffa2c;
        }
    }
    ctx->pc = 0x1CFFA20u;
    // 0x1cffa20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cffa20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cffa24: 0x873f4b2  j           func_1CFD2C8
    ctx->pc = 0x1CFFA24u;
    ctx->pc = 0x1CFFA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFFA24u;
    // 0x1cffa28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD2C8u;
    sub_01CFD2C8_0x1cfd2c8(rdram, ctx, runtime); return;
    ctx->pc = 0x1CFFA2Cu;
label_1cffa2c:
    // 0x1cffa2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cffa2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cffa30: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFFA30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFFA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFFA30u;
        // 0x1cffa34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFFA30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CFFA38u;
}
