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

// Function: sub_01CB8F80
// Address: 0x1cb8f80 - 0x1cb8fd0
void sub_01CB8F80_0x1cb8f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB8F80_0x1cb8f80");
#endif

    switch (ctx->pc) {
        case 0x1cb8facu: goto label_1cb8fac;
        case 0x1cb8fb8u: goto label_1cb8fb8;
        default: break;
    }

    ctx->pc = 0x1cb8f80u;

    // 0x1cb8f80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cb8f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cb8f84: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1cb8f84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cb8f88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cb8f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cb8f8c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cb8f8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb8f90: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cb8f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cb8f94: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb8f94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8f98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cb8f98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8f9c: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1cb8f9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cb8fa0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cb8fa0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8fa4: 0xc72d9e2  jal         func_1CB6788
    ctx->pc = 0x1CB8FA4u;
    SET_GPR_U32(ctx, 31, 0x1CB8FACu);
    ctx->pc = 0x1CB8FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB8FA4u;
    // 0x1cb8fa8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6788u, 0x1CB8FA4u, 0x1CB8FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8FACu;
label_1cb8fac:
    // 0x1cb8fac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb8facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8fb0: 0xc72d9da  jal         func_1CB6768
    ctx->pc = 0x1CB8FB0u;
    SET_GPR_U32(ctx, 31, 0x1CB8FB8u);
    ctx->pc = 0x1CB8FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB8FB0u;
    // 0x1cb8fb4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6768u, 0x1CB8FB0u, 0x1CB8FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8FB8u;
label_1cb8fb8:
    // 0x1cb8fb8: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1cb8fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1cb8fbc: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1cb8fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1cb8fc0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cb8fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cb8fc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cb8fc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb8fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB8FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB8FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8FC8u;
        // 0x1cb8fcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB8FC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB8FD0u;
}
