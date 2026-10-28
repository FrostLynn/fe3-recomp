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

// Function: sub_01C61B48
// Address: 0x1c61b48 - 0x1c61ba0
void sub_01C61B48_0x1c61b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C61B48_0x1c61b48");
#endif

    switch (ctx->pc) {
        case 0x1c61b5cu: goto label_1c61b5c;
        case 0x1c61b88u: goto label_1c61b88;
        default: break;
    }

    ctx->pc = 0x1c61b48u;

    // 0x1c61b48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c61b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c61b4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c61b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c61b50: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c61b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c61b54: 0xc717d52  jal         func_1C5F548
    ctx->pc = 0x1C61B54u;
    SET_GPR_U32(ctx, 31, 0x1C61B5Cu);
    ctx->pc = 0x1C61B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C61B54u;
    // 0x1c61b58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F548u, 0x1C61B54u, 0x1C61B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C61B5Cu;
label_1c61b5c:
    // 0x1c61b5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c61b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61b60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c61b60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61b64: 0x240601c5  addiu       $a2, $zero, 0x1C5
    ctx->pc = 0x1c61b64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 453));
    // 0x1c61b68: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c61b68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c61b6c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c61b6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61b70: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c61b70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c61b74: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c61b74u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c61b78: 0x144f0003  bne         $v0, $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C61B78u;
    {
        const bool branch_taken_0x1c61b78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C61B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C61B78u;
        // 0x1c61b7c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c61b78) {
            ctx->pc = 0x1C61B88u;
            goto label_1c61b88;
        }
    }
    ctx->pc = 0x1C61B80u;
    // 0x1c61b80: 0xc717d62  jal         func_1C5F588
    ctx->pc = 0x1C61B80u;
    SET_GPR_U32(ctx, 31, 0x1C61B88u);
    ctx->pc = 0x1C5F588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F588u, 0x1C61B80u, 0x1C61B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C61B88u;
label_1c61b88:
    // 0x1c61b88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c61b88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c61b8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c61b8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61b90: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c61b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c61b94: 0x3e00008  jr          $ra
    ctx->pc = 0x1C61B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C61B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C61B94u;
        // 0x1c61b98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C61B94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C61B9Cu;
    // 0x1c61b9c: 0x0  nop
    ctx->pc = 0x1c61b9cu;
    // NOP
    ctx->pc = 0x1c61ba0u;
}
