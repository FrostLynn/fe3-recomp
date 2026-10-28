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

// Function: sub_01C00D20
// Address: 0x1c00d20 - 0x1c00d80
void sub_01C00D20_0x1c00d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C00D20_0x1c00d20");
#endif

    switch (ctx->pc) {
        case 0x1c00d34u: goto label_1c00d34;
        case 0x1c00d48u: goto label_1c00d48;
        case 0x1c00d4cu: goto label_1c00d4c;
        case 0x1c00d68u: goto label_1c00d68;
        case 0x1c00d74u: goto label_1c00d74;
        default: break;
    }

    ctx->pc = 0x1c00d20u;

    // 0x1c00d20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c00d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c00d24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c00d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c00d28: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c00d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c00d2c: 0xc700014  jal         func_1C00050
    ctx->pc = 0x1C00D2Cu;
    SET_GPR_U32(ctx, 31, 0x1C00D34u);
    ctx->pc = 0x1C00D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C00D2Cu;
    // 0x1c00d30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00050u, 0x1C00D2Cu, 0x1C00D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C00D34u;
label_1c00d34:
    // 0x1c00d34: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c00d34u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c00d38: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C00D38u;
    {
        const bool branch_taken_0x1c00d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C00D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C00D38u;
        // 0x1c00d3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c00d38) {
            ctx->pc = 0x1C00D5Cu;
            goto label_1c00d5c;
        }
    }
    ctx->pc = 0x1C00D40u;
    // 0x1c00d40: 0xc700016  jal         func_1C00058
    ctx->pc = 0x1C00D40u;
    SET_GPR_U32(ctx, 31, 0x1C00D48u);
    ctx->pc = 0x1C00058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00058u, 0x1C00D40u, 0x1C00D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C00D48u;
label_1c00d48:
    // 0x1c00d48: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c00d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c00d4c:
    // 0x1c00d4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c00d4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c00d50: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c00d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c00d54: 0x3e00008  jr          $ra
    ctx->pc = 0x1C00D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C00D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C00D54u;
        // 0x1c00d58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C00D54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C00D5Cu;
label_1c00d5c:
    // 0x1c00d5c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c00d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c00d60: 0xc700018  jal         func_1C00060
    ctx->pc = 0x1C00D60u;
    SET_GPR_U32(ctx, 31, 0x1C00D68u);
    ctx->pc = 0x1C00D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C00D60u;
    // 0x1c00d64: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00060u, 0x1C00D60u, 0x1C00D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C00D68u;
label_1c00d68:
    // 0x1c00d68: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1c00d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1c00d6c: 0xc700026  jal         func_1C00098
    ctx->pc = 0x1C00D6Cu;
    SET_GPR_U32(ctx, 31, 0x1C00D74u);
    ctx->pc = 0x1C00D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C00D6Cu;
    // 0x1c00d70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00098u, 0x1C00D6Cu, 0x1C00D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C00D74u;
label_1c00d74:
    // 0x1c00d74: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1C00D74u;
    {
        const bool branch_taken_0x1c00d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C00D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C00D74u;
        // 0x1c00d78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c00d74) {
            ctx->pc = 0x1C00D4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c00d4c;
        }
    }
    ctx->pc = 0x1C00D7Cu;
    // 0x1c00d7c: 0x0  nop
    ctx->pc = 0x1c00d7cu;
    // NOP
    ctx->pc = 0x1c00d80u;
}
