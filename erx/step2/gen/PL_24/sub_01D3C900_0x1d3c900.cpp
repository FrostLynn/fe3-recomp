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

// Function: sub_01D3C900
// Address: 0x1d3c900 - 0x1d3c9e0
void sub_01D3C900_0x1d3c900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D3C900_0x1d3c900");
#endif

    switch (ctx->pc) {
        case 0x1d3c914u: goto label_1d3c914;
        case 0x1d3c928u: goto label_1d3c928;
        case 0x1d3c92cu: goto label_1d3c92c;
        case 0x1d3c948u: goto label_1d3c948;
        case 0x1d3c954u: goto label_1d3c954;
        case 0x1d3c984u: goto label_1d3c984;
        case 0x1d3c9b0u: goto label_1d3c9b0;
        case 0x1d3c9bcu: goto label_1d3c9bc;
        default: break;
    }

    ctx->pc = 0x1d3c900u;

    // 0x1d3c900: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d3c900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d3c904: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d3c904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d3c908: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d3c908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d3c90c: 0xc74ef12  jal         func_1D3BC48
    ctx->pc = 0x1D3C90Cu;
    SET_GPR_U32(ctx, 31, 0x1D3C914u);
    ctx->pc = 0x1D3C910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3C90Cu;
    // 0x1d3c910: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC48u, 0x1D3C90Cu, 0x1D3C914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3C914u;
label_1d3c914:
    // 0x1d3c914: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d3c914u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3c918: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D3C918u;
    {
        const bool branch_taken_0x1d3c918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D3C91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3C918u;
        // 0x1d3c91c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3c918) {
            ctx->pc = 0x1D3C93Cu;
            goto label_1d3c93c;
        }
    }
    ctx->pc = 0x1D3C920u;
    // 0x1d3c920: 0xc74ef14  jal         func_1D3BC50
    ctx->pc = 0x1D3C920u;
    SET_GPR_U32(ctx, 31, 0x1D3C928u);
    ctx->pc = 0x1D3BC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC50u, 0x1D3C920u, 0x1D3C928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3C928u;
label_1d3c928:
    // 0x1d3c928: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d3c928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d3c92c:
    // 0x1d3c92c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d3c92cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3c930: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d3c930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d3c934: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3C934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3C938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3C934u;
        // 0x1d3c938: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3C934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3C93Cu;
label_1d3c93c:
    // 0x1d3c93c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d3c93cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d3c940: 0xc74ef16  jal         func_1D3BC58
    ctx->pc = 0x1D3C940u;
    SET_GPR_U32(ctx, 31, 0x1D3C948u);
    ctx->pc = 0x1D3C944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3C940u;
    // 0x1d3c944: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC58u, 0x1D3C940u, 0x1D3C948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3C948u;
label_1d3c948:
    // 0x1d3c948: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1d3c948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1d3c94c: 0xc74ef24  jal         func_1D3BC90
    ctx->pc = 0x1D3C94Cu;
    SET_GPR_U32(ctx, 31, 0x1D3C954u);
    ctx->pc = 0x1D3C950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3C94Cu;
    // 0x1d3c950: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC90u, 0x1D3C94Cu, 0x1D3C954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3C954u;
label_1d3c954:
    // 0x1d3c954: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1D3C954u;
    {
        const bool branch_taken_0x1d3c954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3C958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3C954u;
        // 0x1d3c958: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3c954) {
            ctx->pc = 0x1D3C92Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3c92c;
        }
    }
    ctx->pc = 0x1D3C95Cu;
    // 0x1d3c95c: 0x0  nop
    ctx->pc = 0x1d3c95cu;
    // NOP
    // 0x1d3c960: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d3c960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d3c964: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d3c964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d3c968: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d3c968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d3c96c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d3c96cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d3c970: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d3c970u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c974: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d3c974u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c978: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d3c978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d3c97c: 0xc74ef16  jal         func_1D3BC58
    ctx->pc = 0x1D3C97Cu;
    SET_GPR_U32(ctx, 31, 0x1D3C984u);
    ctx->pc = 0x1D3C980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3C97Cu;
    // 0x1d3c980: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC58u, 0x1D3C97Cu, 0x1D3C984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3C984u;
label_1d3c984:
    // 0x1d3c984: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1d3c984u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1d3c988: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3c988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c98c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d3c98cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3c990: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d3c990u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c994: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d3c994u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d3c998: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d3c998u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3c99c: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x1d3c99cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x1d3c9a0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d3c9a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c9a4: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d3c9a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d3c9a8: 0xc74ef22  jal         func_1D3BC88
    ctx->pc = 0x1D3C9A8u;
    SET_GPR_U32(ctx, 31, 0x1D3C9B0u);
    ctx->pc = 0x1D3C9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3C9A8u;
    // 0x1d3c9ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC88u, 0x1D3C9A8u, 0x1D3C9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3C9B0u;
label_1d3c9b0:
    // 0x1d3c9b0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d3c9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d3c9b4: 0xc74ef16  jal         func_1D3BC58
    ctx->pc = 0x1D3C9B4u;
    SET_GPR_U32(ctx, 31, 0x1D3C9BCu);
    ctx->pc = 0x1D3C9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3C9B4u;
    // 0x1d3c9b8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC58u, 0x1D3C9B4u, 0x1D3C9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3C9BCu;
label_1d3c9bc:
    // 0x1d3c9bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d3c9bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c9c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d3c9c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d3c9c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d3c9c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3c9c8: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1d3c9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1d3c9cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d3c9ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d3c9d0: 0x874ef26  j           func_1D3BC98
    ctx->pc = 0x1D3C9D0u;
    ctx->pc = 0x1D3C9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3C9D0u;
    // 0x1d3c9d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC98u;
    sub_01D3BC98_0x1d3bc98(rdram, ctx, runtime); return;
    ctx->pc = 0x1D3C9D8u;
    // 0x1d3c9d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3C9D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3C9D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3C9E0u;
}
