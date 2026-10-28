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

// Function: sub_01D89430
// Address: 0x1d89430 - 0x1d89488
void sub_01D89430_0x1d89430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D89430_0x1d89430");
#endif

    switch (ctx->pc) {
        case 0x1d8944cu: goto label_1d8944c;
        case 0x1d89454u: goto label_1d89454;
        case 0x1d89468u: goto label_1d89468;
        case 0x1d8946cu: goto label_1d8946c;
        default: break;
    }

    ctx->pc = 0x1d89430u;

    // 0x1d89430: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d89430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d89434: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d89434u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d89438: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d89438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d8943c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d8943cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d89440: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d89440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d89444: 0xc762250  jal         func_1D88940
    ctx->pc = 0x1D89444u;
    SET_GPR_U32(ctx, 31, 0x1D8944Cu);
    ctx->pc = 0x1D89448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D89444u;
    // 0x1d89448: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88940u, 0x1D89444u, 0x1D8944Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8944Cu;
label_1d8944c:
    // 0x1d8944c: 0xc762252  jal         func_1D88948
    ctx->pc = 0x1D8944Cu;
    SET_GPR_U32(ctx, 31, 0x1D89454u);
    ctx->pc = 0x1D89450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8944Cu;
    // 0x1d89450: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88948u, 0x1D8944Cu, 0x1D89454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D89454u;
label_1d89454:
    // 0x1d89454: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d89454u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d89458: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D89458u;
    {
        const bool branch_taken_0x1d89458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D8945Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D89458u;
        // 0x1d8945c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d89458) {
            ctx->pc = 0x1D8947Cu;
            goto label_1d8947c;
        }
    }
    ctx->pc = 0x1D89460u;
    // 0x1d89460: 0xc762254  jal         func_1D88950
    ctx->pc = 0x1D89460u;
    SET_GPR_U32(ctx, 31, 0x1D89468u);
    ctx->pc = 0x1D88950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88950u, 0x1D89460u, 0x1D89468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D89468u;
label_1d89468:
    // 0x1d89468: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d89468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d8946c:
    // 0x1d8946c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d8946cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d89470: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d89470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d89474: 0x3e00008  jr          $ra
    ctx->pc = 0x1D89474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D89478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D89474u;
        // 0x1d89478: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D89474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8947Cu;
label_1d8947c:
    // 0x1d8947c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D8947Cu;
    {
        const bool branch_taken_0x1d8947c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D89480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8947Cu;
        // 0x1d89480: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8947c) {
            ctx->pc = 0x1D8946Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8946c;
        }
    }
    ctx->pc = 0x1D89484u;
    // 0x1d89484: 0x0  nop
    ctx->pc = 0x1d89484u;
    // NOP
    ctx->pc = 0x1d89488u;
}
