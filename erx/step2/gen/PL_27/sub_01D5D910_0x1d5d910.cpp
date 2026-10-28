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

// Function: sub_01D5D910
// Address: 0x1d5d910 - 0x1d5d9a0
void sub_01D5D910_0x1d5d910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D5D910_0x1d5d910");
#endif

    switch (ctx->pc) {
        case 0x1d5d924u: goto label_1d5d924;
        case 0x1d5d938u: goto label_1d5d938;
        case 0x1d5d93cu: goto label_1d5d93c;
        case 0x1d5d984u: goto label_1d5d984;
        default: break;
    }

    ctx->pc = 0x1d5d910u;

    // 0x1d5d910: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d5d910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d5d914: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d5d914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d5d918: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d5d918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d5d91c: 0xc757352  jal         func_1D5CD48
    ctx->pc = 0x1D5D91Cu;
    SET_GPR_U32(ctx, 31, 0x1D5D924u);
    ctx->pc = 0x1D5D920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5D91Cu;
    // 0x1d5d920: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD48u, 0x1D5D91Cu, 0x1D5D924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5D924u;
label_1d5d924:
    // 0x1d5d924: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d5d924u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5d928: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D5D928u;
    {
        const bool branch_taken_0x1d5d928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D5D92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5D928u;
        // 0x1d5d92c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5d928) {
            ctx->pc = 0x1D5D94Cu;
            goto label_1d5d94c;
        }
    }
    ctx->pc = 0x1D5D930u;
    // 0x1d5d930: 0xc757354  jal         func_1D5CD50
    ctx->pc = 0x1D5D930u;
    SET_GPR_U32(ctx, 31, 0x1D5D938u);
    ctx->pc = 0x1D5CD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD50u, 0x1D5D930u, 0x1D5D938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5D938u;
label_1d5d938:
    // 0x1d5d938: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d5d938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d5d93c:
    // 0x1d5d93c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d5d93cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5d940: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d5d940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d5d944: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5D944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5D948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5D944u;
        // 0x1d5d948: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5D944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5D94Cu;
label_1d5d94c:
    // 0x1d5d94c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D5D94Cu;
    {
        const bool branch_taken_0x1d5d94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5D950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5D94Cu;
        // 0x1d5d950: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5d94c) {
            ctx->pc = 0x1D5D93Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5d93c;
        }
    }
    ctx->pc = 0x1D5D954u;
    // 0x1d5d954: 0x0  nop
    ctx->pc = 0x1d5d954u;
    // NOP
    // 0x1d5d958: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d5d958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d5d95c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d5d95cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5d960: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d5d960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d5d964: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d5d964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d5d968: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d5d968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d5d96c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d5d96cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5d970: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d5d970u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5d974: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d5d974u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5d978: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d5d978u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d5d97c: 0xc757362  jal         func_1D5CD88
    ctx->pc = 0x1D5D97Cu;
    SET_GPR_U32(ctx, 31, 0x1D5D984u);
    ctx->pc = 0x1D5D980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5D97Cu;
    // 0x1d5d980: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD88u, 0x1D5D97Cu, 0x1D5D984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5D984u;
label_1d5d984:
    // 0x1d5d984: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5d984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5d988: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d5d988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d5d98c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d5d98cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5d990: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d5d990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d5d994: 0x875735a  j           func_1D5CD68
    ctx->pc = 0x1D5D994u;
    ctx->pc = 0x1D5D998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5D994u;
    // 0x1d5d998: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD68u;
    sub_01D5CD68_0x1d5cd68(rdram, ctx, runtime); return;
    ctx->pc = 0x1D5D99Cu;
    // 0x1d5d99c: 0x0  nop
    ctx->pc = 0x1d5d99cu;
    // NOP
    ctx->pc = 0x1d5d9a0u;
}
