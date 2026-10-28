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

// Function: sub_01D3C858
// Address: 0x1d3c858 - 0x1d3c8e8
void sub_01D3C858_0x1d3c858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D3C858_0x1d3c858");
#endif

    switch (ctx->pc) {
        case 0x1d3c86cu: goto label_1d3c86c;
        case 0x1d3c880u: goto label_1d3c880;
        case 0x1d3c884u: goto label_1d3c884;
        case 0x1d3c8ccu: goto label_1d3c8cc;
        default: break;
    }

    ctx->pc = 0x1d3c858u;

    // 0x1d3c858: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d3c858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d3c85c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d3c85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d3c860: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d3c860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d3c864: 0xc74ef12  jal         func_1D3BC48
    ctx->pc = 0x1D3C864u;
    SET_GPR_U32(ctx, 31, 0x1D3C86Cu);
    ctx->pc = 0x1D3C868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3C864u;
    // 0x1d3c868: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC48u, 0x1D3C864u, 0x1D3C86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3C86Cu;
label_1d3c86c:
    // 0x1d3c86c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d3c86cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3c870: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D3C870u;
    {
        const bool branch_taken_0x1d3c870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D3C874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3C870u;
        // 0x1d3c874: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3c870) {
            ctx->pc = 0x1D3C894u;
            goto label_1d3c894;
        }
    }
    ctx->pc = 0x1D3C878u;
    // 0x1d3c878: 0xc74ef14  jal         func_1D3BC50
    ctx->pc = 0x1D3C878u;
    SET_GPR_U32(ctx, 31, 0x1D3C880u);
    ctx->pc = 0x1D3BC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC50u, 0x1D3C878u, 0x1D3C880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3C880u;
label_1d3c880:
    // 0x1d3c880: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d3c880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d3c884:
    // 0x1d3c884: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d3c884u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3c888: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d3c888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d3c88c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3C88Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3C890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3C88Cu;
        // 0x1d3c890: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3C88Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3C894u;
label_1d3c894:
    // 0x1d3c894: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D3C894u;
    {
        const bool branch_taken_0x1d3c894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3C898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3C894u;
        // 0x1d3c898: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3c894) {
            ctx->pc = 0x1D3C884u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3c884;
        }
    }
    ctx->pc = 0x1D3C89Cu;
    // 0x1d3c89c: 0x0  nop
    ctx->pc = 0x1d3c89cu;
    // NOP
    // 0x1d3c8a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d3c8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d3c8a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d3c8a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c8a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d3c8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d3c8ac: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d3c8acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d3c8b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d3c8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d3c8b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d3c8b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c8b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d3c8b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c8bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d3c8bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c8c0: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d3c8c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d3c8c4: 0xc74ef22  jal         func_1D3BC88
    ctx->pc = 0x1D3C8C4u;
    SET_GPR_U32(ctx, 31, 0x1D3C8CCu);
    ctx->pc = 0x1D3C8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3C8C4u;
    // 0x1d3c8c8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC88u, 0x1D3C8C4u, 0x1D3C8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3C8CCu;
label_1d3c8cc:
    // 0x1d3c8cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3c8ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c8d0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d3c8d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d3c8d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d3c8d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3c8d8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d3c8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d3c8dc: 0x874ef1a  j           func_1D3BC68
    ctx->pc = 0x1D3C8DCu;
    ctx->pc = 0x1D3C8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3C8DCu;
    // 0x1d3c8e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC68u;
    sub_01D3BC68_0x1d3bc68(rdram, ctx, runtime); return;
    ctx->pc = 0x1D3C8E4u;
    // 0x1d3c8e4: 0x0  nop
    ctx->pc = 0x1d3c8e4u;
    // NOP
    ctx->pc = 0x1d3c8e8u;
}
