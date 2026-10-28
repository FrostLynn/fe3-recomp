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

// Function: sub_01D0C978
// Address: 0x1d0c978 - 0x1d0ca08
void sub_01D0C978_0x1d0c978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0C978_0x1d0c978");
#endif

    switch (ctx->pc) {
        case 0x1d0c98cu: goto label_1d0c98c;
        case 0x1d0c9a0u: goto label_1d0c9a0;
        case 0x1d0c9a4u: goto label_1d0c9a4;
        case 0x1d0c9ecu: goto label_1d0c9ec;
        default: break;
    }

    ctx->pc = 0x1d0c978u;

    // 0x1d0c978: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d0c978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d0c97c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d0c97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d0c980: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d0c980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d0c984: 0xc742f52  jal         func_1D0BD48
    ctx->pc = 0x1D0C984u;
    SET_GPR_U32(ctx, 31, 0x1D0C98Cu);
    ctx->pc = 0x1D0C988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0C984u;
    // 0x1d0c988: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD48u, 0x1D0C984u, 0x1D0C98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0C98Cu;
label_1d0c98c:
    // 0x1d0c98c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d0c98cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0c990: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D0C990u;
    {
        const bool branch_taken_0x1d0c990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D0C994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0C990u;
        // 0x1d0c994: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0c990) {
            ctx->pc = 0x1D0C9B4u;
            goto label_1d0c9b4;
        }
    }
    ctx->pc = 0x1D0C998u;
    // 0x1d0c998: 0xc742f54  jal         func_1D0BD50
    ctx->pc = 0x1D0C998u;
    SET_GPR_U32(ctx, 31, 0x1D0C9A0u);
    ctx->pc = 0x1D0BD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD50u, 0x1D0C998u, 0x1D0C9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0C9A0u;
label_1d0c9a0:
    // 0x1d0c9a0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d0c9a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d0c9a4:
    // 0x1d0c9a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d0c9a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0c9a8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d0c9a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d0c9ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0C9ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0C9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0C9ACu;
        // 0x1d0c9b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0C9ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0C9B4u;
label_1d0c9b4:
    // 0x1d0c9b4: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D0C9B4u;
    {
        const bool branch_taken_0x1d0c9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0C9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0C9B4u;
        // 0x1d0c9b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0c9b4) {
            ctx->pc = 0x1D0C9A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0c9a4;
        }
    }
    ctx->pc = 0x1D0C9BCu;
    // 0x1d0c9bc: 0x0  nop
    ctx->pc = 0x1d0c9bcu;
    // NOP
    // 0x1d0c9c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d0c9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d0c9c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d0c9c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0c9c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d0c9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d0c9cc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d0c9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d0c9d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d0c9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d0c9d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d0c9d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0c9d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d0c9d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0c9dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d0c9dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0c9e0: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d0c9e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d0c9e4: 0xc742f62  jal         func_1D0BD88
    ctx->pc = 0x1D0C9E4u;
    SET_GPR_U32(ctx, 31, 0x1D0C9ECu);
    ctx->pc = 0x1D0C9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0C9E4u;
    // 0x1d0c9e8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD88u, 0x1D0C9E4u, 0x1D0C9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0C9ECu;
label_1d0c9ec:
    // 0x1d0c9ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0c9ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0c9f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d0c9f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d0c9f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d0c9f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0c9f8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d0c9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d0c9fc: 0x8742f5a  j           func_1D0BD68
    ctx->pc = 0x1D0C9FCu;
    ctx->pc = 0x1D0CA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0C9FCu;
    // 0x1d0ca00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD68u;
    sub_01D0BD68_0x1d0bd68(rdram, ctx, runtime); return;
    ctx->pc = 0x1D0CA04u;
    // 0x1d0ca04: 0x0  nop
    ctx->pc = 0x1d0ca04u;
    // NOP
    ctx->pc = 0x1d0ca08u;
}
