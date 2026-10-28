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

// Function: sub_01DD5CF0
// Address: 0x1dd5cf0 - 0x1dd5d6c
void sub_01DD5CF0_0x1dd5cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD5CF0_0x1dd5cf0");
#endif

    switch (ctx->pc) {
        case 0x1dd5d10u: goto label_1dd5d10;
        default: break;
    }

    ctx->pc = 0x1dd5cf0u;

    // 0x1dd5cf0: 0x28840080  slti        $a0, $a0, 0x80
    ctx->pc = 0x1dd5cf0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1dd5cf4: 0x14800015  bnez        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1DD5CF4u;
    {
        const bool branch_taken_0x1dd5cf4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD5CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD5CF4u;
        // 0x1dd5cf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd5cf4) {
            ctx->pc = 0x1DD5D4Cu;
            goto label_1dd5d4c;
        }
    }
    ctx->pc = 0x1DD5CFCu;
    // 0x1dd5cfc: 0x8f8e8018  lw          $t6, -0x7FE8($gp)
    ctx->pc = 0x1dd5cfcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dd5d00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dd5d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd5d04: 0x95cf056e  lhu         $t7, 0x56E($t6)
    ctx->pc = 0x1dd5d04u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
    // 0x1dd5d08: 0x35ef0001  ori         $t7, $t7, 0x1
    ctx->pc = 0x1dd5d08u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)1);
    // 0x1dd5d0c: 0xa5cf056e  sh          $t7, 0x56E($t6)
    ctx->pc = 0x1dd5d0cu;
    WRITE16(ADD32(GPR_U32(ctx, 14), 1390), (uint16_t)GPR_U32(ctx, 15));
label_1dd5d10:
    // 0x1dd5d10: 0x28af005a  slti        $t7, $a1, 0x5A
    ctx->pc = 0x1dd5d10u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)90) ? 1 : 0);
    // 0x1dd5d14: 0x55e00006  bnel        $t7, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DD5D14u;
    {
        const bool branch_taken_0x1dd5d14 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd5d14) {
            ctx->pc = 0x1DD5D18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DD5D14u;
            // 0x1dd5d18: 0x95ce056e  lhu         $t6, 0x56E($t6) (Delay Slot)
            SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DD5D30u;
            goto label_1dd5d30;
        }
    }
    ctx->pc = 0x1DD5D1Cu;
    // 0x1dd5d1c: 0x95cf056e  lhu         $t7, 0x56E($t6)
    ctx->pc = 0x1dd5d1cu;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
    // 0x1dd5d20: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dd5d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1dd5d24: 0x35ef0002  ori         $t7, $t7, 0x2
    ctx->pc = 0x1dd5d24u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)2);
    // 0x1dd5d28: 0xa5cf056e  sh          $t7, 0x56E($t6)
    ctx->pc = 0x1dd5d28u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 1390), (uint16_t)GPR_U32(ctx, 15));
    // 0x1dd5d2c: 0x95ce056e  lhu         $t6, 0x56E($t6)
    ctx->pc = 0x1dd5d2cu;
    SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
label_1dd5d30:
    // 0x1dd5d30: 0x244c0001  addiu       $t4, $v0, 0x1
    ctx->pc = 0x1dd5d30u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1dd5d34: 0x31cd0008  andi        $t5, $t6, 0x8
    ctx->pc = 0x1dd5d34u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)8);
    // 0x1dd5d38: 0x18d100b  movn        $v0, $t4, $t5
    ctx->pc = 0x1dd5d38u;
    if (GPR_U64(ctx, 13) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 12));
    // 0x1dd5d3c: 0x31ce0010  andi        $t6, $t6, 0x10
    ctx->pc = 0x1dd5d3cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)16);
    // 0x1dd5d40: 0x244f0001  addiu       $t7, $v0, 0x1
    ctx->pc = 0x1dd5d40u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1dd5d44: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD5D44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD5D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD5D44u;
        // 0x1dd5d48: 0x1ee100b  movn        $v0, $t7, $t6 (Delay Slot)
        if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD5D44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD5D4Cu;
label_1dd5d4c:
    // 0x1dd5d4c: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x1DD5D4Cu;
    {
        const bool branch_taken_0x1dd5d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD5D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD5D4Cu;
        // 0x1dd5d50: 0x8f8e8018  lw          $t6, -0x7FE8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd5d4c) {
            ctx->pc = 0x1DD5D10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dd5d10;
        }
    }
    ctx->pc = 0x1DD5D54u;
    // 0x1dd5d54: 0x0  nop
    ctx->pc = 0x1dd5d54u;
    // NOP
    // 0x1dd5d58: 0x0  nop
    ctx->pc = 0x1dd5d58u;
    // NOP
    // 0x1dd5d5c: 0x0  nop
    ctx->pc = 0x1dd5d5cu;
    // NOP
    // 0x1dd5d60: 0x0  nop
    ctx->pc = 0x1dd5d60u;
    // NOP
    // 0x1dd5d64: 0x0  nop
    ctx->pc = 0x1dd5d64u;
    // NOP
    // 0x1dd5d68: 0x0  nop
    ctx->pc = 0x1dd5d68u;
    // NOP
    ctx->pc = 0x1dd5d6cu;
}
