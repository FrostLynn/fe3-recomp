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

// Function: sub_01C61E38
// Address: 0x1c61e38 - 0x1c61e64
void sub_01C61E38_0x1c61e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C61E38_0x1c61e38");
#endif

    ctx->pc = 0x1c61e38u;

    // 0x1c61e38: 0x3c0f01c7  lui         $t7, 0x1C7
    ctx->pc = 0x1c61e38u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)455 << 16));
    // 0x1c61e3c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1c61e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c61e40: 0x25ef9790  addiu       $t7, $t7, -0x6870
    ctx->pc = 0x1c61e40u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294940560));
    // 0x1c61e44: 0x8f2021  addu        $a0, $a0, $t7
    ctx->pc = 0x1c61e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x1c61e48: 0x3e00008  jr          $ra
    ctx->pc = 0x1C61E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C61E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C61E48u;
        // 0x1c61e4c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C61E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C61E50u;
    // 0x1c61e50: 0x0  nop
    ctx->pc = 0x1c61e50u;
    // NOP
    // 0x1c61e54: 0x0  nop
    ctx->pc = 0x1c61e54u;
    // NOP
    // 0x1c61e58: 0x0  nop
    ctx->pc = 0x1c61e58u;
    // NOP
    // 0x1c61e5c: 0x0  nop
    ctx->pc = 0x1c61e5cu;
    // NOP
    // 0x1c61e60: 0x0  nop
    ctx->pc = 0x1c61e60u;
    // NOP
    ctx->pc = 0x1c61e64u;
}
