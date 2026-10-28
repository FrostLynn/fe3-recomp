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

// Function: sub_01D53620
// Address: 0x1d53620 - 0x1d53670
void sub_01D53620_0x1d53620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D53620_0x1d53620");
#endif

    switch (ctx->pc) {
        case 0x1d5364cu: goto label_1d5364c;
        case 0x1d53658u: goto label_1d53658;
        default: break;
    }

    ctx->pc = 0x1d53620u;

    // 0x1d53620: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d53620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d53624: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d53624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d53628: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d53628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d5362c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d5362cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d53630: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d53630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d53634: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d53634u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d53638: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d53638u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5363c: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d5363cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d53640: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d53640u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d53644: 0xc7543e2  jal         func_1D50F88
    ctx->pc = 0x1D53644u;
    SET_GPR_U32(ctx, 31, 0x1D5364Cu);
    ctx->pc = 0x1D53648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D53644u;
    // 0x1d53648: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F88u, 0x1D53644u, 0x1D5364Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5364Cu;
label_1d5364c:
    // 0x1d5364c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5364cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d53650: 0xc7543da  jal         func_1D50F68
    ctx->pc = 0x1D53650u;
    SET_GPR_U32(ctx, 31, 0x1D53658u);
    ctx->pc = 0x1D53654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D53650u;
    // 0x1d53654: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F68u, 0x1D53650u, 0x1D53658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D53658u;
label_1d53658:
    // 0x1d53658: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1d53658u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1d5365c: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d5365cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d53660: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d53660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d53664: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d53664u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d53668: 0x3e00008  jr          $ra
    ctx->pc = 0x1D53668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5366Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53668u;
        // 0x1d5366c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D53668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D53670u;
}
