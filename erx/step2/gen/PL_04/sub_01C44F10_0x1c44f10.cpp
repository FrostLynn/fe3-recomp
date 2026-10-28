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

// Function: sub_01C44F10
// Address: 0x1c44f10 - 0x1c44f40
void sub_01C44F10_0x1c44f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C44F10_0x1c44f10");
#endif

    ctx->pc = 0x1c44f10u;

    // 0x1c44f10: 0x2c8f0007  sltiu       $t7, $a0, 0x7
    ctx->pc = 0x1c44f10u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1c44f14: 0x11e0001c  beqz        $t7, . + 4 + (0x1C << 2)
    ctx->pc = 0x1C44F14u;
    {
        const bool branch_taken_0x1c44f14 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C44F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C44F14u;
        // 0x1c44f18: 0x3c0e01c4  lui         $t6, 0x1C4 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)452 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c44f14) {
            ctx->pc = 0x1C44F88u;
            return;
        }
    }
    ctx->pc = 0x1C44F1Cu;
    // 0x1c44f1c: 0x47880  sll         $t7, $a0, 2
    ctx->pc = 0x1c44f1cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c44f20: 0x25ce5d0c  addiu       $t6, $t6, 0x5D0C
    ctx->pc = 0x1c44f20u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 23820));
    // 0x1c44f24: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1c44f24u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1c44f28: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1c44f28u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c44f2c: 0x1a00008  jr          $t5
    ctx->pc = 0x1C44F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C44F34u: goto label_1c44f34;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C44F2Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1C44F34u;
label_1c44f34:
    // 0x1c44f34: 0x3c0f01c5  lui         $t7, 0x1C5
    ctx->pc = 0x1c44f34u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)453 << 16));
    // 0x1c44f38: 0x3e00008  jr          $ra
    ctx->pc = 0x1C44F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C44F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C44F38u;
        // 0x1c44f3c: 0x25e2be90  addiu       $v0, $t7, -0x4170 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 4294950544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C44F38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C44F40u;
}
