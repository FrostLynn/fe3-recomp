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

// Function: sub_01DCF6D8
// Address: 0x1dcf6d8 - 0x1dcf6f0
void sub_01DCF6D8_0x1dcf6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DCF6D8_0x1dcf6d8");
#endif

    ctx->pc = 0x1dcf6d8u;

    // 0x1dcf6d8: 0x8f8e8014  lw          $t6, -0x7FEC($gp)
    ctx->pc = 0x1dcf6d8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dcf6dc: 0x95cf056e  lhu         $t7, 0x56E($t6)
    ctx->pc = 0x1dcf6dcu;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
    // 0x1dcf6e0: 0x35ef0020  ori         $t7, $t7, 0x20
    ctx->pc = 0x1dcf6e0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)32);
    // 0x1dcf6e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCF6E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCF6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF6E4u;
        // 0x1dcf6e8: 0xa5cf056e  sh          $t7, 0x56E($t6) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 14), 1390), (uint16_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCF6E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCF6ECu;
    // 0x1dcf6ec: 0x0  nop
    ctx->pc = 0x1dcf6ecu;
    // NOP
    ctx->pc = 0x1dcf6f0u;
}
