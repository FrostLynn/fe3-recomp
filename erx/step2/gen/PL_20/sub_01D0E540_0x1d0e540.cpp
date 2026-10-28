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

// Function: sub_01D0E540
// Address: 0x1d0e540 - 0x1d0e578
void sub_01D0E540_0x1d0e540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0E540_0x1d0e540");
#endif

    switch (ctx->pc) {
        case 0x1d0e554u: goto label_1d0e554;
        default: break;
    }

    ctx->pc = 0x1d0e540u;

    // 0x1d0e540: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d0e540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d0e544: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d0e544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d0e548: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d0e548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d0e54c: 0xc742f56  jal         func_1D0BD58
    ctx->pc = 0x1D0E54Cu;
    SET_GPR_U32(ctx, 31, 0x1D0E554u);
    ctx->pc = 0x1D0E550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0E54Cu;
    // 0x1d0e550: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD58u, 0x1D0E54Cu, 0x1D0E554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0E554u;
label_1d0e554:
    // 0x1d0e554: 0x8c4f0380  lw          $t7, 0x380($v0)
    ctx->pc = 0x1d0e554u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x1d0e558: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D0E558u;
    {
        const bool branch_taken_0x1d0e558 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0E55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0E558u;
        // 0x1d0e55c: 0x1e0202d  daddu       $a0, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0e558) {
            ctx->pc = 0x1D0E56Cu;
            goto label_1d0e56c;
        }
    }
    ctx->pc = 0x1D0E560u;
    // 0x1d0e560: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d0e560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0e564: 0x8742f6e  j           func_1D0BDB8
    ctx->pc = 0x1D0E564u;
    ctx->pc = 0x1D0E568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0E564u;
    // 0x1d0e568: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BDB8u;
    sub_01D0BDB8_0x1d0bdb8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D0E56Cu;
label_1d0e56c:
    // 0x1d0e56c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d0e56cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0e570: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0E570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0E574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0E570u;
        // 0x1d0e574: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0E570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0E578u;
}
