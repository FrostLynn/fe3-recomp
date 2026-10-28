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

// Function: sub_01D48578
// Address: 0x1d48578 - 0x1d485a8
void sub_01D48578_0x1d48578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D48578_0x1d48578");
#endif

    ctx->pc = 0x1d48578u;

    // 0x1d48578: 0x2c8f0007  sltiu       $t7, $a0, 0x7
    ctx->pc = 0x1d48578u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1d4857c: 0x11e0001c  beqz        $t7, . + 4 + (0x1C << 2)
    ctx->pc = 0x1D4857Cu;
    {
        const bool branch_taken_0x1d4857c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D48580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4857Cu;
        // 0x1d48580: 0x3c0e01d5  lui         $t6, 0x1D5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)469 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4857c) {
            ctx->pc = 0x1D485F0u;
            return;
        }
    }
    ctx->pc = 0x1D48584u;
    // 0x1d48584: 0x47880  sll         $t7, $a0, 2
    ctx->pc = 0x1d48584u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d48588: 0x25ce91a4  addiu       $t6, $t6, -0x6E5C
    ctx->pc = 0x1d48588u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294939044));
    // 0x1d4858c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d4858cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d48590: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1d48590u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d48594: 0x1a00008  jr          $t5
    ctx->pc = 0x1D48594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D4859Cu: goto label_1d4859c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D48594u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D4859Cu;
label_1d4859c:
    // 0x1d4859c: 0x3c0f01d5  lui         $t7, 0x1D5
    ctx->pc = 0x1d4859cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)469 << 16));
    // 0x1d485a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D485A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D485A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D485A0u;
        // 0x1d485a4: 0x25e2cea8  addiu       $v0, $t7, -0x3158 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 4294954664));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D485A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D485A8u;
}
