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

// Function: sub_01D0E880
// Address: 0x1d0e880 - 0x1d0e8d8
void sub_01D0E880_0x1d0e880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0E880_0x1d0e880");
#endif

    switch (ctx->pc) {
        case 0x1d0e8acu: goto label_1d0e8ac;
        case 0x1d0e8b8u: goto label_1d0e8b8;
        case 0x1d0e8c0u: goto label_1d0e8c0;
        default: break;
    }

    ctx->pc = 0x1d0e880u;

    // 0x1d0e880: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d0e880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d0e884: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d0e884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d0e888: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d0e888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d0e88c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d0e88cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0e890: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d0e890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d0e894: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d0e894u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0e898: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d0e898u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0e89c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d0e89cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0e8a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d0e8a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0e8a4: 0xc742f62  jal         func_1D0BD88
    ctx->pc = 0x1D0E8A4u;
    SET_GPR_U32(ctx, 31, 0x1D0E8ACu);
    ctx->pc = 0x1D0E8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0E8A4u;
    // 0x1d0e8a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD88u, 0x1D0E8A4u, 0x1D0E8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0E8ACu;
label_1d0e8ac:
    // 0x1d0e8ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0e8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0e8b0: 0xc742f5a  jal         func_1D0BD68
    ctx->pc = 0x1D0E8B0u;
    SET_GPR_U32(ctx, 31, 0x1D0E8B8u);
    ctx->pc = 0x1D0E8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0E8B0u;
    // 0x1d0e8b4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD68u, 0x1D0E8B0u, 0x1D0E8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0E8B8u;
label_1d0e8b8:
    // 0x1d0e8b8: 0xc743208  jal         func_1D0C820
    ctx->pc = 0x1D0E8B8u;
    SET_GPR_U32(ctx, 31, 0x1D0E8C0u);
    ctx->pc = 0x1D0C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0C820u, 0x1D0E8B8u, 0x1D0E8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0E8C0u;
label_1d0e8c0:
    // 0x1d0e8c0: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1d0e8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x1d0e8c4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d0e8c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d0e8c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d0e8c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0e8cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0E8CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0E8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0E8CCu;
        // 0x1d0e8d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0E8CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0E8D4u;
    // 0x1d0e8d4: 0x0  nop
    ctx->pc = 0x1d0e8d4u;
    // NOP
    ctx->pc = 0x1d0e8d8u;
}
