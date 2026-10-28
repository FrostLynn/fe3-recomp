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

// Function: sub_01C6BD20
// Address: 0x1c6bd20 - 0x1c6bd70
void sub_01C6BD20_0x1c6bd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C6BD20_0x1c6bd20");
#endif

    switch (ctx->pc) {
        case 0x1c6bd40u: goto label_1c6bd40;
        case 0x1c6bd4cu: goto label_1c6bd4c;
        default: break;
    }

    ctx->pc = 0x1c6bd20u;

    // 0x1c6bd20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c6bd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c6bd24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c6bd24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c6bd28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c6bd28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c6bd2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c6bd2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c6bd30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c6bd30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6bd34: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c6bd34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c6bd38: 0xc71a798  jal         func_1C69E60
    ctx->pc = 0x1C6BD38u;
    SET_GPR_U32(ctx, 31, 0x1C6BD40u);
    ctx->pc = 0x1C6BD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BD38u;
    // 0x1c6bd3c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E60u, 0x1C6BD38u, 0x1C6BD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BD40u;
label_1c6bd40:
    // 0x1c6bd40: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c6bd40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6bd44: 0xc71a7a2  jal         func_1C69E88
    ctx->pc = 0x1C6BD44u;
    SET_GPR_U32(ctx, 31, 0x1C6BD4Cu);
    ctx->pc = 0x1C6BD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BD44u;
    // 0x1c6bd48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E88u, 0x1C6BD44u, 0x1C6BD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BD4Cu;
label_1c6bd4c:
    // 0x1c6bd4c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c6bd4cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6bd50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c6bd50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6bd54: 0xa22f0020  sb          $t7, 0x20($s1)
    ctx->pc = 0x1c6bd54u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 32), (uint8_t)GPR_U32(ctx, 15));
    // 0x1c6bd58: 0xa22f0021  sb          $t7, 0x21($s1)
    ctx->pc = 0x1c6bd58u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 33), (uint8_t)GPR_U32(ctx, 15));
    // 0x1c6bd5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c6bd5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6bd60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c6bd60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c6bd64: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6BD64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6BD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6BD64u;
        // 0x1c6bd68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6BD64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6BD6Cu;
    // 0x1c6bd6c: 0x0  nop
    ctx->pc = 0x1c6bd6cu;
    // NOP
    ctx->pc = 0x1c6bd70u;
}
