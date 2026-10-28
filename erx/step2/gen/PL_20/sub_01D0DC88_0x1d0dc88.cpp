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

// Function: sub_01D0DC88
// Address: 0x1d0dc88 - 0x1d0dd00
void sub_01D0DC88_0x1d0dc88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0DC88_0x1d0dc88");
#endif

    switch (ctx->pc) {
        case 0x1d0dc9cu: goto label_1d0dc9c;
        case 0x1d0dcb0u: goto label_1d0dcb0;
        case 0x1d0dcb4u: goto label_1d0dcb4;
        default: break;
    }

    ctx->pc = 0x1d0dc88u;

    // 0x1d0dc88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d0dc88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d0dc8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d0dc8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d0dc90: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d0dc90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d0dc94: 0xc742f52  jal         func_1D0BD48
    ctx->pc = 0x1D0DC94u;
    SET_GPR_U32(ctx, 31, 0x1D0DC9Cu);
    ctx->pc = 0x1D0DC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0DC94u;
    // 0x1d0dc98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD48u, 0x1D0DC94u, 0x1D0DC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0DC9Cu;
label_1d0dc9c:
    // 0x1d0dc9c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d0dc9cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0dca0: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D0DCA0u;
    {
        const bool branch_taken_0x1d0dca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D0DCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0DCA0u;
        // 0x1d0dca4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0dca0) {
            ctx->pc = 0x1D0DCC4u;
            goto label_1d0dcc4;
        }
    }
    ctx->pc = 0x1D0DCA8u;
    // 0x1d0dca8: 0xc742f54  jal         func_1D0BD50
    ctx->pc = 0x1D0DCA8u;
    SET_GPR_U32(ctx, 31, 0x1D0DCB0u);
    ctx->pc = 0x1D0BD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD50u, 0x1D0DCA8u, 0x1D0DCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0DCB0u;
label_1d0dcb0:
    // 0x1d0dcb0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d0dcb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d0dcb4:
    // 0x1d0dcb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d0dcb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0dcb8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d0dcb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d0dcbc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0DCBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0DCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0DCBCu;
        // 0x1d0dcc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0DCBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0DCC4u;
label_1d0dcc4:
    // 0x1d0dcc4: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D0DCC4u;
    {
        const bool branch_taken_0x1d0dcc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0DCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0DCC4u;
        // 0x1d0dcc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0dcc4) {
            ctx->pc = 0x1D0DCB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0dcb4;
        }
    }
    ctx->pc = 0x1D0DCCCu;
    // 0x1d0dccc: 0x0  nop
    ctx->pc = 0x1d0dcccu;
    // NOP
    // 0x1d0dcd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d0dcd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d0dcd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d0dcd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0dcd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d0dcd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d0dcdc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d0dcdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d0dce0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d0dce0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0dce4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d0dce4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0dce8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d0dce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0dcec: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d0dcecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d0dcf0: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1d0dcf0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0dcf4: 0x8742f62  j           func_1D0BD88
    ctx->pc = 0x1D0DCF4u;
    ctx->pc = 0x1D0DCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0DCF4u;
    // 0x1d0dcf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD88u;
    sub_01D0BD88_0x1d0bd88(rdram, ctx, runtime); return;
    ctx->pc = 0x1D0DCFCu;
    // 0x1d0dcfc: 0x0  nop
    ctx->pc = 0x1d0dcfcu;
    // NOP
    ctx->pc = 0x1d0dd00u;
}
