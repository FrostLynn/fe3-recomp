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

// Function: sub_01DBBE50
// Address: 0x1dbbe50 - 0x1dbbee0
void sub_01DBBE50_0x1dbbe50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBBE50_0x1dbbe50");
#endif

    switch (ctx->pc) {
        case 0x1dbbe64u: goto label_1dbbe64;
        case 0x1dbbe78u: goto label_1dbbe78;
        case 0x1dbbe7cu: goto label_1dbbe7c;
        case 0x1dbbec4u: goto label_1dbbec4;
        default: break;
    }

    ctx->pc = 0x1dbbe50u;

    // 0x1dbbe50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dbbe50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dbbe54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dbbe54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dbbe58: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1dbbe58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1dbbe5c: 0xc76ee54  jal         func_1DBB950
    ctx->pc = 0x1DBBE5Cu;
    SET_GPR_U32(ctx, 31, 0x1DBBE64u);
    ctx->pc = 0x1DBBE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBBE5Cu;
    // 0x1dbbe60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB950u, 0x1DBBE5Cu, 0x1DBBE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBBE64u;
label_1dbbe64:
    // 0x1dbbe64: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1dbbe64u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dbbe68: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DBBE68u;
    {
        const bool branch_taken_0x1dbbe68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1DBBE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBBE68u;
        // 0x1dbbe6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbbe68) {
            ctx->pc = 0x1DBBE8Cu;
            goto label_1dbbe8c;
        }
    }
    ctx->pc = 0x1DBBE70u;
    // 0x1dbbe70: 0xc76ee56  jal         func_1DBB958
    ctx->pc = 0x1DBBE70u;
    SET_GPR_U32(ctx, 31, 0x1DBBE78u);
    ctx->pc = 0x1DBB958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB958u, 0x1DBBE70u, 0x1DBBE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBBE78u;
label_1dbbe78:
    // 0x1dbbe78: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1dbbe78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1dbbe7c:
    // 0x1dbbe7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dbbe7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbbe80: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dbbe80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dbbe84: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBBE84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBBE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBBE84u;
        // 0x1dbbe88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBBE84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBBE8Cu;
label_1dbbe8c:
    // 0x1dbbe8c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1DBBE8Cu;
    {
        const bool branch_taken_0x1dbbe8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBBE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBBE8Cu;
        // 0x1dbbe90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbbe8c) {
            ctx->pc = 0x1DBBE7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dbbe7c;
        }
    }
    ctx->pc = 0x1DBBE94u;
    // 0x1dbbe94: 0x0  nop
    ctx->pc = 0x1dbbe94u;
    // NOP
    // 0x1dbbe98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dbbe98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dbbe9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dbbe9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbbea0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dbbea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dbbea4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1dbbea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dbbea8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1dbbea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1dbbeac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dbbeacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbbeb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dbbeb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbbeb4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dbbeb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbbeb8: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1dbbeb8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dbbebc: 0xc76ee64  jal         func_1DBB990
    ctx->pc = 0x1DBBEBCu;
    SET_GPR_U32(ctx, 31, 0x1DBBEC4u);
    ctx->pc = 0x1DBBEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBBEBCu;
    // 0x1dbbec0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB990u, 0x1DBBEBCu, 0x1DBBEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBBEC4u;
label_1dbbec4:
    // 0x1dbbec4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dbbec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbbec8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dbbec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dbbecc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dbbeccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbbed0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1dbbed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dbbed4: 0x876ee5c  j           func_1DBB970
    ctx->pc = 0x1DBBED4u;
    ctx->pc = 0x1DBBED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBBED4u;
    // 0x1dbbed8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB970u;
    sub_01DBB970_0x1dbb970(rdram, ctx, runtime); return;
    ctx->pc = 0x1DBBEDCu;
    // 0x1dbbedc: 0x0  nop
    ctx->pc = 0x1dbbedcu;
    // NOP
    ctx->pc = 0x1dbbee0u;
}
