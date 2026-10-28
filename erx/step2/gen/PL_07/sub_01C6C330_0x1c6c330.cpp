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

// Function: sub_01C6C330
// Address: 0x1c6c330 - 0x1c6c380
void sub_01C6C330_0x1c6c330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C6C330_0x1c6c330");
#endif

    switch (ctx->pc) {
        case 0x1c6c35cu: goto label_1c6c35c;
        case 0x1c6c368u: goto label_1c6c368;
        default: break;
    }

    ctx->pc = 0x1c6c330u;

    // 0x1c6c330: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c6c330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c6c334: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c6c334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c6c338: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c6c338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c6c33c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c6c33cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6c340: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c6c340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c6c344: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c6c344u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c348: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c6c348u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c34c: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c6c34cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c6c350: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c6c350u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c354: 0xc71a7a4  jal         func_1C69E90
    ctx->pc = 0x1C6C354u;
    SET_GPR_U32(ctx, 31, 0x1C6C35Cu);
    ctx->pc = 0x1C6C358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C354u;
    // 0x1c6c358: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E90u, 0x1C6C354u, 0x1C6C35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C35Cu;
label_1c6c35c:
    // 0x1c6c35c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6c35cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c360: 0xc71a79c  jal         func_1C69E70
    ctx->pc = 0x1C6C360u;
    SET_GPR_U32(ctx, 31, 0x1C6C368u);
    ctx->pc = 0x1C6C364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C360u;
    // 0x1c6c364: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E70u, 0x1C6C360u, 0x1C6C368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C368u;
label_1c6c368:
    // 0x1c6c368: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1c6c368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1c6c36c: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c6c36cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c6c370: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c6c370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c6c374: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c6c374u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6c378: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6C378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6C37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6C378u;
        // 0x1c6c37c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6C378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6C380u;
}
