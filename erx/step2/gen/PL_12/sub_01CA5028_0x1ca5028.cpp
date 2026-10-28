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

// Function: sub_01CA5028
// Address: 0x1ca5028 - 0x1ca5054
void sub_01CA5028_0x1ca5028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CA5028_0x1ca5028");
#endif

    ctx->pc = 0x1ca5028u;

    // 0x1ca5028: 0x3c0f01cb  lui         $t7, 0x1CB
    ctx->pc = 0x1ca5028u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)459 << 16));
    // 0x1ca502c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1ca502cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1ca5030: 0x25efca70  addiu       $t7, $t7, -0x3590
    ctx->pc = 0x1ca5030u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294953584));
    // 0x1ca5034: 0x8f2021  addu        $a0, $a0, $t7
    ctx->pc = 0x1ca5034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x1ca5038: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA5038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA503Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA5038u;
        // 0x1ca503c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA5038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA5040u;
    // 0x1ca5040: 0x0  nop
    ctx->pc = 0x1ca5040u;
    // NOP
    // 0x1ca5044: 0x0  nop
    ctx->pc = 0x1ca5044u;
    // NOP
    // 0x1ca5048: 0x0  nop
    ctx->pc = 0x1ca5048u;
    // NOP
    // 0x1ca504c: 0x0  nop
    ctx->pc = 0x1ca504cu;
    // NOP
    // 0x1ca5050: 0x0  nop
    ctx->pc = 0x1ca5050u;
    // NOP
    ctx->pc = 0x1ca5054u;
}
