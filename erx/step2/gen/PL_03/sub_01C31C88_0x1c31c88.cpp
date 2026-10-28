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

// Function: sub_01C31C88
// Address: 0x1c31c88 - 0x1c31cd8
void sub_01C31C88_0x1c31c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C31C88_0x1c31c88");
#endif

    switch (ctx->pc) {
        case 0x1c31cb4u: goto label_1c31cb4;
        case 0x1c31cc0u: goto label_1c31cc0;
        default: break;
    }

    ctx->pc = 0x1c31c88u;

    // 0x1c31c88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c31c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c31c8c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c31c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c31c90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c31c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c31c94: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c31c94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c31c98: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c31c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c31c9c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c31c9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31ca0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c31ca0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31ca4: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c31ca4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c31ca8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c31ca8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31cac: 0xc70bde2  jal         func_1C2F788
    ctx->pc = 0x1C31CACu;
    SET_GPR_U32(ctx, 31, 0x1C31CB4u);
    ctx->pc = 0x1C31CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31CACu;
    // 0x1c31cb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F788u, 0x1C31CACu, 0x1C31CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31CB4u;
label_1c31cb4:
    // 0x1c31cb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c31cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31cb8: 0xc70bdda  jal         func_1C2F768
    ctx->pc = 0x1C31CB8u;
    SET_GPR_U32(ctx, 31, 0x1C31CC0u);
    ctx->pc = 0x1C31CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31CB8u;
    // 0x1c31cbc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F768u, 0x1C31CB8u, 0x1C31CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31CC0u;
label_1c31cc0:
    // 0x1c31cc0: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1c31cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1c31cc4: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c31cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c31cc8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c31cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c31ccc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c31cccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c31cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C31CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C31CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31CD0u;
        // 0x1c31cd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C31CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C31CD8u;
}
