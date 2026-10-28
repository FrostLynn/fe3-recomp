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

// Function: sub_01DC4FE8
// Address: 0x1dc4fe8 - 0x1dc5014
void sub_01DC4FE8_0x1dc4fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DC4FE8_0x1dc4fe8");
#endif

    ctx->pc = 0x1dc4fe8u;

    // 0x1dc4fe8: 0x3c0f01dd  lui         $t7, 0x1DD
    ctx->pc = 0x1dc4fe8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)477 << 16));
    // 0x1dc4fec: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1dc4fecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1dc4ff0: 0x25ef9d68  addiu       $t7, $t7, -0x6298
    ctx->pc = 0x1dc4ff0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294942056));
    // 0x1dc4ff4: 0x8f2021  addu        $a0, $a0, $t7
    ctx->pc = 0x1dc4ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x1dc4ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC4FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC4FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC4FF8u;
        // 0x1dc4ffc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC4FF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC5000u;
    // 0x1dc5000: 0x0  nop
    ctx->pc = 0x1dc5000u;
    // NOP
    // 0x1dc5004: 0x0  nop
    ctx->pc = 0x1dc5004u;
    // NOP
    // 0x1dc5008: 0x0  nop
    ctx->pc = 0x1dc5008u;
    // NOP
    // 0x1dc500c: 0x0  nop
    ctx->pc = 0x1dc500cu;
    // NOP
    // 0x1dc5010: 0x0  nop
    ctx->pc = 0x1dc5010u;
    // NOP
    ctx->pc = 0x1dc5014u;
}
