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

// Function: sub_01DD0E50
// Address: 0x1dd0e50 - 0x1dd0e68
void sub_01DD0E50_0x1dd0e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD0E50_0x1dd0e50");
#endif

    ctx->pc = 0x1dd0e50u;

    // 0x1dd0e50: 0x8f8e8014  lw          $t6, -0x7FEC($gp)
    ctx->pc = 0x1dd0e50u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd0e54: 0x95cf056e  lhu         $t7, 0x56E($t6)
    ctx->pc = 0x1dd0e54u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
    // 0x1dd0e58: 0x35ef0100  ori         $t7, $t7, 0x100
    ctx->pc = 0x1dd0e58u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)256);
    // 0x1dd0e5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD0E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD0E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD0E5Cu;
        // 0x1dd0e60: 0xa5cf056e  sh          $t7, 0x56E($t6) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 14), 1390), (uint16_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD0E5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD0E64u;
    // 0x1dd0e64: 0x0  nop
    ctx->pc = 0x1dd0e64u;
    // NOP
    ctx->pc = 0x1dd0e68u;
}
