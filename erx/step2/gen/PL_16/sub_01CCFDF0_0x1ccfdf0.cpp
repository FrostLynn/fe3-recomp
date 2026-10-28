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

// Function: sub_01CCFDF0
// Address: 0x1ccfdf0 - 0x1ccfe20
void sub_01CCFDF0_0x1ccfdf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCFDF0_0x1ccfdf0");
#endif

    ctx->pc = 0x1ccfdf0u;

    // 0x1ccfdf0: 0x2c8f0007  sltiu       $t7, $a0, 0x7
    ctx->pc = 0x1ccfdf0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1ccfdf4: 0x11e0001c  beqz        $t7, . + 4 + (0x1C << 2)
    ctx->pc = 0x1CCFDF4u;
    {
        const bool branch_taken_0x1ccfdf4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCFDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCFDF4u;
        // 0x1ccfdf8: 0x3c0e01cd  lui         $t6, 0x1CD (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)461 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccfdf4) {
            ctx->pc = 0x1CCFE68u;
            return;
        }
    }
    ctx->pc = 0x1CCFDFCu;
    // 0x1ccfdfc: 0x47880  sll         $t7, $a0, 2
    ctx->pc = 0x1ccfdfcu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1ccfe00: 0x25ce0b7c  addiu       $t6, $t6, 0xB7C
    ctx->pc = 0x1ccfe00u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 2940));
    // 0x1ccfe04: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1ccfe04u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1ccfe08: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1ccfe08u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1ccfe0c: 0x1a00008  jr          $t5
    ctx->pc = 0x1CCFE0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CCFE14u: goto label_1ccfe14;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCFE0Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1CCFE14u;
label_1ccfe14:
    // 0x1ccfe14: 0x3c0f01cd  lui         $t7, 0x1CD
    ctx->pc = 0x1ccfe14u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)461 << 16));
    // 0x1ccfe18: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCFE18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCFE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCFE18u;
        // 0x1ccfe1c: 0x25e267a0  addiu       $v0, $t7, 0x67A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 26528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCFE18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCFE20u;
}
