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

// Function: sub_01C52CD8
// Address: 0x1c52cd8 - 0x1c52d60
void sub_01C52CD8_0x1c52cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C52CD8_0x1c52cd8");
#endif

    switch (ctx->pc) {
        case 0x1c52d10u: goto label_1c52d10;
        default: break;
    }

    ctx->pc = 0x1c52cd8u;

    // 0x1c52cd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c52cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c52cdc: 0x8c8e0024  lw          $t6, 0x24($a0)
    ctx->pc = 0x1c52cdcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1c52ce0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c52ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c52ce4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c52ce4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c52ce8: 0x51cf001a  beql        $t6, $t7, . + 4 + (0x1A << 2)
    ctx->pc = 0x1C52CE8u;
    {
        const bool branch_taken_0x1c52ce8 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        if (branch_taken_0x1c52ce8) {
            ctx->pc = 0x1C52CECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C52CE8u;
            // 0x1c52cec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C52D54u;
            goto label_1c52d54;
        }
    }
    ctx->pc = 0x1C52CF0u;
    // 0x1c52cf0: 0x8c8f0004  lw          $t7, 0x4($a0)
    ctx->pc = 0x1c52cf0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c52cf4: 0x8deb002c  lw          $t3, 0x2C($t7)
    ctx->pc = 0x1c52cf4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 44)));
    // 0x1c52cf8: 0x8d6c0004  lw          $t4, 0x4($t3)
    ctx->pc = 0x1c52cf8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x1c52cfc: 0x8d8f0000  lw          $t7, 0x0($t4)
    ctx->pc = 0x1c52cfcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1c52d00: 0x19e00011  blez        $t7, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C52D00u;
    {
        const bool branch_taken_0x1c52d00 = (GPR_S32(ctx, 15) <= 0);
        ctx->pc = 0x1C52D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C52D00u;
        // 0x1c52d04: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c52d00) {
            ctx->pc = 0x1C52D48u;
            goto label_1c52d48;
        }
    }
    ctx->pc = 0x1C52D08u;
    // 0x1c52d08: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1c52d08u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c52d0c: 0x8d6e001c  lw          $t6, 0x1C($t3)
    ctx->pc = 0x1c52d0cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 28)));
label_1c52d10:
    // 0x1c52d10: 0xd7a00  sll         $t7, $t5, 8
    ctx->pc = 0x1c52d10u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 13), 8));
    // 0x1c52d14: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x1c52d14u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x1c52d18: 0x11c00007  beqz        $t6, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C52D18u;
    {
        const bool branch_taken_0x1c52d18 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C52D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C52D18u;
        // 0x1c52d1c: 0x25ad0001  addiu       $t5, $t5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c52d18) {
            ctx->pc = 0x1C52D38u;
            goto label_1c52d38;
        }
    }
    ctx->pc = 0x1C52D20u;
    // 0x1c52d20: 0x8dcf0000  lw          $t7, 0x0($t6)
    ctx->pc = 0x1c52d20u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1c52d24: 0x55ea0005  bnel        $t7, $t2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C52D24u;
    {
        const bool branch_taken_0x1c52d24 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 10));
        if (branch_taken_0x1c52d24) {
            ctx->pc = 0x1C52D28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C52D24u;
            // 0x1c52d28: 0x8d8f0000  lw          $t7, 0x0($t4) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C52D3Cu;
            goto label_1c52d3c;
        }
    }
    ctx->pc = 0x1C52D2Cu;
    // 0x1c52d2c: 0x8dcf0048  lw          $t7, 0x48($t6)
    ctx->pc = 0x1c52d2cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 72)));
    // 0x1c52d30: 0xa1e00069  sb          $zero, 0x69($t7)
    ctx->pc = 0x1c52d30u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 105), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c52d34: 0x8d6c0004  lw          $t4, 0x4($t3)
    ctx->pc = 0x1c52d34u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
label_1c52d38:
    // 0x1c52d38: 0x8d8f0000  lw          $t7, 0x0($t4)
    ctx->pc = 0x1c52d38u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1c52d3c:
    // 0x1c52d3c: 0x1af782a  slt         $t7, $t5, $t7
    ctx->pc = 0x1c52d3cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x1c52d40: 0x55e0fff3  bnel        $t7, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x1C52D40u;
    {
        const bool branch_taken_0x1c52d40 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c52d40) {
            ctx->pc = 0x1C52D44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C52D40u;
            // 0x1c52d44: 0x8d6e001c  lw          $t6, 0x1C($t3) (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C52D10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c52d10;
        }
    }
    ctx->pc = 0x1C52D48u;
label_1c52d48:
    // 0x1c52d48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c52d48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c52d4c: 0x8714274  j           func_1C509D0
    ctx->pc = 0x1C52D4Cu;
    ctx->pc = 0x1C52D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C52D4Cu;
    // 0x1c52d50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C509D0u;
    sub_01C509D0_0x1c509d0(rdram, ctx, runtime); return;
    ctx->pc = 0x1C52D54u;
label_1c52d54:
    // 0x1c52d54: 0x3e00008  jr          $ra
    ctx->pc = 0x1C52D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C52D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C52D54u;
        // 0x1c52d58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C52D54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C52D5Cu;
    // 0x1c52d5c: 0x0  nop
    ctx->pc = 0x1c52d5cu;
    // NOP
    ctx->pc = 0x1c52d60u;
}
