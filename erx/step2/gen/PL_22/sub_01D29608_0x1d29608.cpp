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

// Function: sub_01D29608
// Address: 0x1d29608 - 0x1d29640
void sub_01D29608_0x1d29608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D29608_0x1d29608");
#endif

    switch (ctx->pc) {
        case 0x1d2961cu: goto label_1d2961c;
        default: break;
    }

    ctx->pc = 0x1d29608u;

    // 0x1d29608: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d29608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d2960c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d2960cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d29610: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d29610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d29614: 0xc749b1a  jal         func_1D26C68
    ctx->pc = 0x1D29614u;
    SET_GPR_U32(ctx, 31, 0x1D2961Cu);
    ctx->pc = 0x1D29618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D29614u;
    // 0x1d29618: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C68u, 0x1D29614u, 0x1D2961Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2961Cu;
label_1d2961c:
    // 0x1d2961c: 0x8c4f0380  lw          $t7, 0x380($v0)
    ctx->pc = 0x1d2961cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x1d29620: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D29620u;
    {
        const bool branch_taken_0x1d29620 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D29624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D29620u;
        // 0x1d29624: 0x1e0202d  daddu       $a0, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d29620) {
            ctx->pc = 0x1D29634u;
            goto label_1d29634;
        }
    }
    ctx->pc = 0x1D29628u;
    // 0x1d29628: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d29628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d2962c: 0x8749b32  j           func_1D26CC8
    ctx->pc = 0x1D2962Cu;
    ctx->pc = 0x1D29630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2962Cu;
    // 0x1d29630: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26CC8u;
    sub_01D26CC8_0x1d26cc8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D29634u;
label_1d29634:
    // 0x1d29634: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d29634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d29638: 0x3e00008  jr          $ra
    ctx->pc = 0x1D29638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2963Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D29638u;
        // 0x1d2963c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D29638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D29640u;
}
