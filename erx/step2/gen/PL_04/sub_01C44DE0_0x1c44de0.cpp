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

// Function: sub_01C44DE0
// Address: 0x1c44de0 - 0x1c44e34
void sub_01C44DE0_0x1c44de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C44DE0_0x1c44de0");
#endif

    switch (ctx->pc) {
        case 0x1c44e24u: goto label_1c44e24;
        case 0x1c44e28u: goto label_1c44e28;
        default: break;
    }

    ctx->pc = 0x1c44de0u;

    // 0x1c44de0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c44de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c44de4: 0x2484ff08  addiu       $a0, $a0, -0xF8
    ctx->pc = 0x1c44de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967048));
    // 0x1c44de8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c44de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c44dec: 0x2c8f0008  sltiu       $t7, $a0, 0x8
    ctx->pc = 0x1c44decu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1c44df0: 0x11e0003e  beqz        $t7, . + 4 + (0x3E << 2)
    ctx->pc = 0x1C44DF0u;
    {
        const bool branch_taken_0x1c44df0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C44DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C44DF0u;
        // 0x1c44df4: 0x3c0e01c4  lui         $t6, 0x1C4 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)452 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c44df0) {
            ctx->pc = 0x1C44EECu;
            return;
        }
    }
    ctx->pc = 0x1C44DF8u;
    // 0x1c44df8: 0x47880  sll         $t7, $a0, 2
    ctx->pc = 0x1c44df8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c44dfc: 0x25ce5cec  addiu       $t6, $t6, 0x5CEC
    ctx->pc = 0x1c44dfcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 23788));
    // 0x1c44e00: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1c44e00u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1c44e04: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1c44e04u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c44e08: 0x1a00008  jr          $t5
    ctx->pc = 0x1C44E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C44E10u: goto label_1c44e10;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C44E08u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1C44E10u;
label_1c44e10:
    // 0x1c44e10: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1c44e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44e14: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1c44e14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44e18: 0x3c0601c5  lui         $a2, 0x1C5
    ctx->pc = 0x1c44e18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)453 << 16));
    // 0x1c44e1c: 0xc710ed8  jal         func_1C43B60
    ctx->pc = 0x1C44E1Cu;
    SET_GPR_U32(ctx, 31, 0x1C44E24u);
    ctx->pc = 0x1C44E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C44E1Cu;
    // 0x1c44e20: 0x24c6bab0  addiu       $a2, $a2, -0x4550 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C43B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C43B60u, 0x1C44E1Cu, 0x1C44E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C44E24u;
label_1c44e24:
    // 0x1c44e24: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1c44e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1c44e28:
    // 0x1c44e28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c44e28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c44e2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C44E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C44E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C44E2Cu;
        // 0x1c44e30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C44E2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C44E34u;
}
