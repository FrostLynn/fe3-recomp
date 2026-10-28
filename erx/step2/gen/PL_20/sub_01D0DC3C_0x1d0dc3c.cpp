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

// Function: sub_01D0DC3C
// Address: 0x1d0dc3c - 0x1d0dc88
void sub_01D0DC3C_0x1d0dc3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0DC3C_0x1d0dc3c");
#endif

    switch (ctx->pc) {
        case 0x1d0dc4cu: goto label_1d0dc4c;
        case 0x1d0dc74u: goto label_1d0dc74;
        default: break;
    }

    ctx->pc = 0x1d0dc3cu;

    // 0x1d0dc3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0dc3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0dc40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d0dc40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0dc44: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x1D0DC44u;
    {
        const bool branch_taken_0x1d0dc44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0DC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0DC44u;
        // 0x1d0dc48: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0dc44) {
            ctx->pc = 0x1D0DBC8u;
            return;
        }
    }
    ctx->pc = 0x1D0DC4Cu;
label_1d0dc4c:
    // 0x1d0dc4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0dc4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0dc50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d0dc50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0dc54: 0x1000ffdc  b           . + 4 + (-0x24 << 2)
    ctx->pc = 0x1D0DC54u;
    {
        const bool branch_taken_0x1d0dc54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0DC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0DC54u;
        // 0x1d0dc58: 0x24060054  addiu       $a2, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0dc54) {
            ctx->pc = 0x1D0DBC8u;
            return;
        }
    }
    ctx->pc = 0x1D0DC5Cu;
    // 0x1d0dc5c: 0x0  nop
    ctx->pc = 0x1d0dc5cu;
    // NOP
    // 0x1d0dc60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d0dc60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d0dc64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d0dc64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d0dc68: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d0dc68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d0dc6c: 0xc7431f4  jal         func_1D0C7D0
    ctx->pc = 0x1D0DC6Cu;
    SET_GPR_U32(ctx, 31, 0x1D0DC74u);
    ctx->pc = 0x1D0DC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0DC6Cu;
    // 0x1d0dc70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0C7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0C7D0u, 0x1D0DC6Cu, 0x1D0DC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0DC74u;
label_1d0dc74:
    // 0x1d0dc74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0dc74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0dc78: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d0dc78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d0dc7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d0dc7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0dc80: 0x8742f60  j           func_1D0BD80
    ctx->pc = 0x1D0DC80u;
    ctx->pc = 0x1D0DC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0DC80u;
    // 0x1d0dc84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD80u;
    sub_01D0BD80_0x1d0bd80(rdram, ctx, runtime); return;
    ctx->pc = 0x1D0DC88u;
}
