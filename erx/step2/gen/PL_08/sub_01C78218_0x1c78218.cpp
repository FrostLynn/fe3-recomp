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

// Function: sub_01C78218
// Address: 0x1c78218 - 0x1c78268
void sub_01C78218_0x1c78218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C78218_0x1c78218");
#endif

    switch (ctx->pc) {
        case 0x1c78244u: goto label_1c78244;
        case 0x1c78250u: goto label_1c78250;
        default: break;
    }

    ctx->pc = 0x1c78218u;

    // 0x1c78218: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c78218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c7821c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c7821cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c78220: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c78220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c78224: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c78224u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c78228: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c78228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c7822c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c7822cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78230: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c78230u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78234: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c78234u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c78238: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c78238u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7823c: 0xc71d662  jal         func_1C75988
    ctx->pc = 0x1C7823Cu;
    SET_GPR_U32(ctx, 31, 0x1C78244u);
    ctx->pc = 0x1C78240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7823Cu;
    // 0x1c78240: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75988u, 0x1C7823Cu, 0x1C78244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C78244u;
label_1c78244:
    // 0x1c78244: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c78244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78248: 0xc71d65a  jal         func_1C75968
    ctx->pc = 0x1C78248u;
    SET_GPR_U32(ctx, 31, 0x1C78250u);
    ctx->pc = 0x1C7824Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C78248u;
    // 0x1c7824c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75968u, 0x1C78248u, 0x1C78250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C78250u;
label_1c78250:
    // 0x1c78250: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1c78250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1c78254: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c78254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c78258: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c78258u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7825c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7825Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C78260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7825Cu;
        // 0x1c78260: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7825Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C78264u;
    // 0x1c78264: 0x0  nop
    ctx->pc = 0x1c78264u;
    // NOP
    ctx->pc = 0x1c78268u;
}
