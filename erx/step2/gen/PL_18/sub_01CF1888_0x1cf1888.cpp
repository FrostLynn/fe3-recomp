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

// Function: sub_01CF1888
// Address: 0x1cf1888 - 0x1cf18c0
void sub_01CF1888_0x1cf1888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CF1888_0x1cf1888");
#endif

    switch (ctx->pc) {
        case 0x1cf189cu: goto label_1cf189c;
        default: break;
    }

    ctx->pc = 0x1cf1888u;

    // 0x1cf1888: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cf1888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cf188c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cf188cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cf1890: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cf1890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cf1894: 0xc73bd58  jal         func_1CEF560
    ctx->pc = 0x1CF1894u;
    SET_GPR_U32(ctx, 31, 0x1CF189Cu);
    ctx->pc = 0x1CF1898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1894u;
    // 0x1cf1898: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF560u, 0x1CF1894u, 0x1CF189Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF189Cu;
label_1cf189c:
    // 0x1cf189c: 0x8c4f0380  lw          $t7, 0x380($v0)
    ctx->pc = 0x1cf189cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x1cf18a0: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CF18A0u;
    {
        const bool branch_taken_0x1cf18a0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF18A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF18A0u;
        // 0x1cf18a4: 0x1e0202d  daddu       $a0, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf18a0) {
            ctx->pc = 0x1CF18B4u;
            goto label_1cf18b4;
        }
    }
    ctx->pc = 0x1CF18A8u;
    // 0x1cf18a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cf18a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf18ac: 0x873bd72  j           func_1CEF5C8
    ctx->pc = 0x1CF18ACu;
    ctx->pc = 0x1CF18B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF18ACu;
    // 0x1cf18b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF5C8u;
    sub_01CEF5C8_0x1cef5c8(rdram, ctx, runtime); return;
    ctx->pc = 0x1CF18B4u;
label_1cf18b4:
    // 0x1cf18b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cf18b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf18b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF18B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF18BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF18B8u;
        // 0x1cf18bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF18B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF18C0u;
}
