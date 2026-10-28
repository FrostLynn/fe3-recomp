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

// Function: sub_01D5F1F0
// Address: 0x1d5f1f0 - 0x1d5f240
void sub_01D5F1F0_0x1d5f1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D5F1F0_0x1d5f1f0");
#endif

    switch (ctx->pc) {
        case 0x1d5f21cu: goto label_1d5f21c;
        case 0x1d5f228u: goto label_1d5f228;
        default: break;
    }

    ctx->pc = 0x1d5f1f0u;

    // 0x1d5f1f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d5f1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d5f1f4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d5f1f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d5f1f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d5f1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d5f1fc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d5f1fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5f200: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d5f200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d5f204: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d5f204u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5f208: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d5f208u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5f20c: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d5f20cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d5f210: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d5f210u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5f214: 0xc757362  jal         func_1D5CD88
    ctx->pc = 0x1D5F214u;
    SET_GPR_U32(ctx, 31, 0x1D5F21Cu);
    ctx->pc = 0x1D5F218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5F214u;
    // 0x1d5f218: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD88u, 0x1D5F214u, 0x1D5F21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5F21Cu;
label_1d5f21c:
    // 0x1d5f21c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5f21cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5f220: 0xc75735a  jal         func_1D5CD68
    ctx->pc = 0x1D5F220u;
    SET_GPR_U32(ctx, 31, 0x1D5F228u);
    ctx->pc = 0x1D5F224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5F220u;
    // 0x1d5f224: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD68u, 0x1D5F220u, 0x1D5F228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5F228u;
label_1d5f228:
    // 0x1d5f228: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1d5f228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1d5f22c: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d5f22cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d5f230: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d5f230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d5f234: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d5f234u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5f238: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5F238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5F23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F238u;
        // 0x1d5f23c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5F238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5F240u;
}
