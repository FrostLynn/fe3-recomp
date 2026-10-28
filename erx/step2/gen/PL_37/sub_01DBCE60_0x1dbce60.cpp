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

// Function: sub_01DBCE60
// Address: 0x1dbce60 - 0x1dbceb8
void sub_01DBCE60_0x1dbce60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBCE60_0x1dbce60");
#endif

    switch (ctx->pc) {
        case 0x1dbce80u: goto label_1dbce80;
        case 0x1dbce88u: goto label_1dbce88;
        case 0x1dbce98u: goto label_1dbce98;
        default: break;
    }

    ctx->pc = 0x1dbce60u;

    // 0x1dbce60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dbce60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dbce64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dbce64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dbce68: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dbce68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dbce6c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dbce6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1dbce70: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1dbce70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbce74: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1dbce74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1dbce78: 0xc76ee58  jal         func_1DBB960
    ctx->pc = 0x1DBCE78u;
    SET_GPR_U32(ctx, 31, 0x1DBCE80u);
    ctx->pc = 0x1DBCE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBCE78u;
    // 0x1dbce7c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB960u, 0x1DBCE78u, 0x1DBCE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBCE80u;
label_1dbce80:
    // 0x1dbce80: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1dbce80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbce84: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1dbce84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dbce88:
    // 0x1dbce88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dbce88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbce8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1dbce8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbce90: 0xc76f334  jal         func_1DBCCD0
    ctx->pc = 0x1DBCE90u;
    SET_GPR_U32(ctx, 31, 0x1DBCE98u);
    ctx->pc = 0x1DBCE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBCE90u;
    // 0x1dbce94: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBCCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBCCD0u, 0x1DBCE90u, 0x1DBCE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBCE98u;
label_1dbce98:
    // 0x1dbce98: 0x2a0f0004  slti        $t7, $s0, 0x4
    ctx->pc = 0x1dbce98u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1dbce9c: 0x15e0fffa  bnez        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1DBCE9Cu;
    {
        const bool branch_taken_0x1dbce9c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DBCEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBCE9Cu;
        // 0x1dbcea0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbce9c) {
            ctx->pc = 0x1DBCE88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dbce88;
        }
    }
    ctx->pc = 0x1DBCEA4u;
    // 0x1dbcea4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dbcea4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbcea8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dbcea8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dbceac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dbceacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dbceb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBCEB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBCEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBCEB0u;
        // 0x1dbceb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBCEB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBCEB8u;
}
