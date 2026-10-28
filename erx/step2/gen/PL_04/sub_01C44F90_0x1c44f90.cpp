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

// Function: sub_01C44F90
// Address: 0x1c44f90 - 0x1c44fbc
void sub_01C44F90_0x1c44f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C44F90_0x1c44f90");
#endif

    ctx->pc = 0x1c44f90u;

    // 0x1c44f90: 0x3c0f01c5  lui         $t7, 0x1C5
    ctx->pc = 0x1c44f90u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)453 << 16));
    // 0x1c44f94: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1c44f94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c44f98: 0x25eff290  addiu       $t7, $t7, -0xD70
    ctx->pc = 0x1c44f98u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294963856));
    // 0x1c44f9c: 0x8f2021  addu        $a0, $a0, $t7
    ctx->pc = 0x1c44f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x1c44fa0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C44FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C44FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C44FA0u;
        // 0x1c44fa4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C44FA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C44FA8u;
    // 0x1c44fa8: 0x0  nop
    ctx->pc = 0x1c44fa8u;
    // NOP
    // 0x1c44fac: 0x0  nop
    ctx->pc = 0x1c44facu;
    // NOP
    // 0x1c44fb0: 0x0  nop
    ctx->pc = 0x1c44fb0u;
    // NOP
    // 0x1c44fb4: 0x0  nop
    ctx->pc = 0x1c44fb4u;
    // NOP
    // 0x1c44fb8: 0x0  nop
    ctx->pc = 0x1c44fb8u;
    // NOP
    ctx->pc = 0x1c44fbcu;
}
