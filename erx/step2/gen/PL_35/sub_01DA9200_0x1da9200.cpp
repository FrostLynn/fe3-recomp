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

// Function: sub_01DA9200
// Address: 0x1da9200 - 0x1da9238
void sub_01DA9200_0x1da9200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DA9200_0x1da9200");
#endif

    switch (ctx->pc) {
        case 0x1da9214u: goto label_1da9214;
        default: break;
    }

    ctx->pc = 0x1da9200u;

    // 0x1da9200: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1da9200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1da9204: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1da9204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1da9208: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1da9208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1da920c: 0xc769b98  jal         func_1DA6E60
    ctx->pc = 0x1DA920Cu;
    SET_GPR_U32(ctx, 31, 0x1DA9214u);
    ctx->pc = 0x1DA9210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA920Cu;
    // 0x1da9210: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E60u, 0x1DA920Cu, 0x1DA9214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA9214u;
label_1da9214:
    // 0x1da9214: 0x8c4f0380  lw          $t7, 0x380($v0)
    ctx->pc = 0x1da9214u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x1da9218: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DA9218u;
    {
        const bool branch_taken_0x1da9218 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA921Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA9218u;
        // 0x1da921c: 0x1e0202d  daddu       $a0, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da9218) {
            ctx->pc = 0x1DA922Cu;
            goto label_1da922c;
        }
    }
    ctx->pc = 0x1DA9220u;
    // 0x1da9220: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1da9220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da9224: 0x8769bb2  j           func_1DA6EC8
    ctx->pc = 0x1DA9224u;
    ctx->pc = 0x1DA9228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA9224u;
    // 0x1da9228: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6EC8u;
    sub_01DA6EC8_0x1da6ec8(rdram, ctx, runtime); return;
    ctx->pc = 0x1DA922Cu;
label_1da922c:
    // 0x1da922c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1da922cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da9230: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA9230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA9234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA9230u;
        // 0x1da9234: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA9230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA9238u;
}
