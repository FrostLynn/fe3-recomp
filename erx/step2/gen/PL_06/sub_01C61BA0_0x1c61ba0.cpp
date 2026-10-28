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

// Function: sub_01C61BA0
// Address: 0x1c61ba0 - 0x1c61bf0
void sub_01C61BA0_0x1c61ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C61BA0_0x1c61ba0");
#endif

    switch (ctx->pc) {
        case 0x1c61bccu: goto label_1c61bcc;
        case 0x1c61bd8u: goto label_1c61bd8;
        default: break;
    }

    ctx->pc = 0x1c61ba0u;

    // 0x1c61ba0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c61ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c61ba4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c61ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c61ba8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c61ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c61bac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c61bacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c61bb0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c61bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c61bb4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c61bb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61bb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c61bb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61bbc: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c61bbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c61bc0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c61bc0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61bc4: 0xc717d62  jal         func_1C5F588
    ctx->pc = 0x1C61BC4u;
    SET_GPR_U32(ctx, 31, 0x1C61BCCu);
    ctx->pc = 0x1C61BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C61BC4u;
    // 0x1c61bc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F588u, 0x1C61BC4u, 0x1C61BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C61BCCu;
label_1c61bcc:
    // 0x1c61bcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c61bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61bd0: 0xc717d5a  jal         func_1C5F568
    ctx->pc = 0x1C61BD0u;
    SET_GPR_U32(ctx, 31, 0x1C61BD8u);
    ctx->pc = 0x1C61BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C61BD0u;
    // 0x1c61bd4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F568u, 0x1C61BD0u, 0x1C61BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C61BD8u;
label_1c61bd8:
    // 0x1c61bd8: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1c61bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1c61bdc: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c61bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c61be0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c61be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c61be4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c61be4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c61be8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C61BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C61BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C61BE8u;
        // 0x1c61bec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C61BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C61BF0u;
}
