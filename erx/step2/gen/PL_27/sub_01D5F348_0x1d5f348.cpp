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

// Function: sub_01D5F348
// Address: 0x1d5f348 - 0x1d5f374
void sub_01D5F348_0x1d5f348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D5F348_0x1d5f348");
#endif

    ctx->pc = 0x1d5f348u;

    // 0x1d5f348: 0x3c0f01d6  lui         $t7, 0x1D6
    ctx->pc = 0x1d5f348u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)470 << 16));
    // 0x1d5f34c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1d5f34cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d5f350: 0x25ef6158  addiu       $t7, $t7, 0x6158
    ctx->pc = 0x1d5f350u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 24920));
    // 0x1d5f354: 0x8f2021  addu        $a0, $a0, $t7
    ctx->pc = 0x1d5f354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x1d5f358: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5F358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5F35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F358u;
        // 0x1d5f35c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5F358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5F360u;
    // 0x1d5f360: 0x0  nop
    ctx->pc = 0x1d5f360u;
    // NOP
    // 0x1d5f364: 0x0  nop
    ctx->pc = 0x1d5f364u;
    // NOP
    // 0x1d5f368: 0x0  nop
    ctx->pc = 0x1d5f368u;
    // NOP
    // 0x1d5f36c: 0x0  nop
    ctx->pc = 0x1d5f36cu;
    // NOP
    // 0x1d5f370: 0x0  nop
    ctx->pc = 0x1d5f370u;
    // NOP
    ctx->pc = 0x1d5f374u;
}
