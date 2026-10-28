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

// Function: sub_01DBDF50
// Address: 0x1dbdf50 - 0x1dbdfa0
void sub_01DBDF50_0x1dbdf50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBDF50_0x1dbdf50");
#endif

    switch (ctx->pc) {
        case 0x1dbdf64u: goto label_1dbdf64;
        case 0x1dbdf70u: goto label_1dbdf70;
        default: break;
    }

    ctx->pc = 0x1dbdf50u;

    // 0x1dbdf50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dbdf50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dbdf54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dbdf54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dbdf58: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1dbdf58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1dbdf5c: 0xc76ee90  jal         func_1DBBA40
    ctx->pc = 0x1DBDF5Cu;
    SET_GPR_U32(ctx, 31, 0x1DBDF64u);
    ctx->pc = 0x1DBDF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBDF5Cu;
    // 0x1dbdf60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBBA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBBA40u, 0x1DBDF5Cu, 0x1DBDF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBDF64u;
label_1dbdf64:
    // 0x1dbdf64: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1dbdf64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1dbdf68: 0xc76ee58  jal         func_1DBB960
    ctx->pc = 0x1DBDF68u;
    SET_GPR_U32(ctx, 31, 0x1DBDF70u);
    ctx->pc = 0x1DBDF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBDF68u;
    // 0x1dbdf6c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB960u, 0x1DBDF68u, 0x1DBDF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBDF70u;
label_1dbdf70:
    // 0x1dbdf70: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1dbdf70u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1dbdf74: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x1dbdf74u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dbdf78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dbdf78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbdf7c: 0x25ef47e0  addiu       $t7, $t7, 0x47E0
    ctx->pc = 0x1dbdf7cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 18400));
    // 0x1dbdf80: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dbdf80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dbdf84: 0xa1ee0009  sb          $t6, 0x9($t7)
    ctx->pc = 0x1dbdf84u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 9), (uint8_t)GPR_U32(ctx, 14));
    // 0x1dbdf88: 0xade00048  sw          $zero, 0x48($t7)
    ctx->pc = 0x1dbdf88u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 72), GPR_U32(ctx, 0));
    // 0x1dbdf8c: 0xade0003c  sw          $zero, 0x3C($t7)
    ctx->pc = 0x1dbdf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 60), GPR_U32(ctx, 0));
    // 0x1dbdf90: 0xade00044  sw          $zero, 0x44($t7)
    ctx->pc = 0x1dbdf90u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 68), GPR_U32(ctx, 0));
    // 0x1dbdf94: 0xade00040  sw          $zero, 0x40($t7)
    ctx->pc = 0x1dbdf94u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 64), GPR_U32(ctx, 0));
    // 0x1dbdf98: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBDF98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBDF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBDF98u;
        // 0x1dbdf9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBDF98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBDFA0u;
}
