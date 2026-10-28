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

// Function: sub_01DE1C40
// Address: 0x1de1c40 - 0x1de1c58
void sub_01DE1C40_0x1de1c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE1C40_0x1de1c40");
#endif

    ctx->pc = 0x1de1c40u;

    // 0x1de1c40: 0x8f8e8014  lw          $t6, -0x7FEC($gp)
    ctx->pc = 0x1de1c40u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de1c44: 0x95cf056e  lhu         $t7, 0x56E($t6)
    ctx->pc = 0x1de1c44u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
    // 0x1de1c48: 0x35ef0020  ori         $t7, $t7, 0x20
    ctx->pc = 0x1de1c48u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)32);
    // 0x1de1c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE1C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE1C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE1C4Cu;
        // 0x1de1c50: 0xa5cf056e  sh          $t7, 0x56E($t6) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 14), 1390), (uint16_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE1C4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE1C54u;
    // 0x1de1c54: 0x0  nop
    ctx->pc = 0x1de1c54u;
    // NOP
    ctx->pc = 0x1de1c58u;
}
