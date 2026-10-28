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

// Function: sub_01C11C60
// Address: 0x1c11c60 - 0x1c11cb8
void sub_01C11C60_0x1c11c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C11C60_0x1c11c60");
#endif

    switch (ctx->pc) {
        case 0x1c11c8cu: goto label_1c11c8c;
        case 0x1c11c98u: goto label_1c11c98;
        default: break;
    }

    ctx->pc = 0x1c11c60u;

    // 0x1c11c60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c11c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c11c64: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c11c64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c11c68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c11c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c11c6c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c11c6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c11c70: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c11c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c11c74: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c11c74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11c78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c11c78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11c7c: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c11c7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c11c80: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c11c80u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11c84: 0xc703de2  jal         func_1C0F788
    ctx->pc = 0x1C11C84u;
    SET_GPR_U32(ctx, 31, 0x1C11C8Cu);
    ctx->pc = 0x1C11C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C11C84u;
    // 0x1c11c88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F788u, 0x1C11C84u, 0x1C11C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C11C8Cu;
label_1c11c8c:
    // 0x1c11c8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c11c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11c90: 0xc703dda  jal         func_1C0F768
    ctx->pc = 0x1C11C90u;
    SET_GPR_U32(ctx, 31, 0x1C11C98u);
    ctx->pc = 0x1C11C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C11C90u;
    // 0x1c11c94: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F768u, 0x1C11C90u, 0x1C11C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C11C98u;
label_1c11c98:
    // 0x1c11c98: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1c11c98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1c11c9c: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c11c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c11ca0: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1c11ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1c11ca4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c11ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c11ca8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c11ca8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c11cac: 0x3e00008  jr          $ra
    ctx->pc = 0x1C11CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C11CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C11CACu;
        // 0x1c11cb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C11CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C11CB4u;
    // 0x1c11cb4: 0x0  nop
    ctx->pc = 0x1c11cb4u;
    // NOP
    ctx->pc = 0x1c11cb8u;
}
