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

// Function: sub_01D787F8
// Address: 0x1d787f8 - 0x1d78848
void sub_01D787F8_0x1d787f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D787F8_0x1d787f8");
#endif

    switch (ctx->pc) {
        case 0x1d78824u: goto label_1d78824;
        case 0x1d78830u: goto label_1d78830;
        default: break;
    }

    ctx->pc = 0x1d787f8u;

    // 0x1d787f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d787f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d787fc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d787fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d78800: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d78800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d78804: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d78804u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d78808: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d78808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d7880c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d7880cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d78810: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d78810u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d78814: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d78814u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d78818: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d78818u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7881c: 0xc75dee0  jal         func_1D77B80
    ctx->pc = 0x1D7881Cu;
    SET_GPR_U32(ctx, 31, 0x1D78824u);
    ctx->pc = 0x1D78820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7881Cu;
    // 0x1d78820: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D77B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D77B80u, 0x1D7881Cu, 0x1D78824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D78824u;
label_1d78824:
    // 0x1d78824: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d78824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d78828: 0xc75ded8  jal         func_1D77B60
    ctx->pc = 0x1D78828u;
    SET_GPR_U32(ctx, 31, 0x1D78830u);
    ctx->pc = 0x1D7882Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D78828u;
    // 0x1d7882c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D77B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D77B60u, 0x1D78828u, 0x1D78830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D78830u;
label_1d78830:
    // 0x1d78830: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1d78830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1d78834: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d78834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d78838: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d78838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d7883c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d7883cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d78840: 0x3e00008  jr          $ra
    ctx->pc = 0x1D78840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D78844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D78840u;
        // 0x1d78844: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D78840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D78848u;
}
