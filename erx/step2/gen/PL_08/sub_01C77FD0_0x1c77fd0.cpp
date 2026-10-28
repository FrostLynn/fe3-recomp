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

// Function: sub_01C77FD0
// Address: 0x1c77fd0 - 0x1c78020
void sub_01C77FD0_0x1c77fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C77FD0_0x1c77fd0");
#endif

    switch (ctx->pc) {
        case 0x1c77ffcu: goto label_1c77ffc;
        case 0x1c78008u: goto label_1c78008;
        default: break;
    }

    ctx->pc = 0x1c77fd0u;

    // 0x1c77fd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c77fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c77fd4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c77fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c77fd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c77fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c77fdc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c77fdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c77fe0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c77fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c77fe4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c77fe4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77fe8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c77fe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77fec: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c77fecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c77ff0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c77ff0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77ff4: 0xc71d662  jal         func_1C75988
    ctx->pc = 0x1C77FF4u;
    SET_GPR_U32(ctx, 31, 0x1C77FFCu);
    ctx->pc = 0x1C77FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C77FF4u;
    // 0x1c77ff8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75988u, 0x1C77FF4u, 0x1C77FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77FFCu;
label_1c77ffc:
    // 0x1c77ffc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c77ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78000: 0xc71d65a  jal         func_1C75968
    ctx->pc = 0x1C78000u;
    SET_GPR_U32(ctx, 31, 0x1C78008u);
    ctx->pc = 0x1C78004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C78000u;
    // 0x1c78004: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75968u, 0x1C78000u, 0x1C78008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C78008u;
label_1c78008:
    // 0x1c78008: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1c78008u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1c7800c: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c7800cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c78010: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c78010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c78014: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c78014u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c78018: 0x3e00008  jr          $ra
    ctx->pc = 0x1C78018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7801Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C78018u;
        // 0x1c7801c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C78018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C78020u;
}
