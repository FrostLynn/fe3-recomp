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

// Function: sub_01DD9D08
// Address: 0x1dd9d08 - 0x1dd9d94
void sub_01DD9D08_0x1dd9d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD9D08_0x1dd9d08");
#endif

    switch (ctx->pc) {
        case 0x1dd9d2cu: goto label_1dd9d2c;
        default: break;
    }

    ctx->pc = 0x1dd9d08u;

    // 0x1dd9d08: 0x8f8f8020  lw          $t7, -0x7FE0($gp)
    ctx->pc = 0x1dd9d08u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934560)));
    // 0x1dd9d0c: 0x29ef0080  slti        $t7, $t7, 0x80
    ctx->pc = 0x1dd9d0cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1dd9d10: 0x15e00019  bnez        $t7, . + 4 + (0x19 << 2)
    ctx->pc = 0x1DD9D10u;
    {
        const bool branch_taken_0x1dd9d10 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD9D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD9D10u;
        // 0x1dd9d14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd9d10) {
            ctx->pc = 0x1DD9D78u;
            goto label_1dd9d78;
        }
    }
    ctx->pc = 0x1DD9D18u;
    // 0x1dd9d18: 0x8f8e8018  lw          $t6, -0x7FE8($gp)
    ctx->pc = 0x1dd9d18u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dd9d1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dd9d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd9d20: 0x95cf056e  lhu         $t7, 0x56E($t6)
    ctx->pc = 0x1dd9d20u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
    // 0x1dd9d24: 0x35ef0001  ori         $t7, $t7, 0x1
    ctx->pc = 0x1dd9d24u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)1);
    // 0x1dd9d28: 0xa5cf056e  sh          $t7, 0x56E($t6)
    ctx->pc = 0x1dd9d28u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 1390), (uint16_t)GPR_U32(ctx, 15));
label_1dd9d2c:
    // 0x1dd9d2c: 0x8f8f8024  lw          $t7, -0x7FDC($gp)
    ctx->pc = 0x1dd9d2cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934564)));
    // 0x1dd9d30: 0x29ef005a  slti        $t7, $t7, 0x5A
    ctx->pc = 0x1dd9d30u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)90) ? 1 : 0);
    // 0x1dd9d34: 0x55e00006  bnel        $t7, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DD9D34u;
    {
        const bool branch_taken_0x1dd9d34 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd9d34) {
            ctx->pc = 0x1DD9D38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DD9D34u;
            // 0x1dd9d38: 0x95cd056e  lhu         $t5, 0x56E($t6) (Delay Slot)
            SET_GPR_ZE32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DD9D50u;
            goto label_1dd9d50;
        }
    }
    ctx->pc = 0x1DD9D3Cu;
    // 0x1dd9d3c: 0x95cf056e  lhu         $t7, 0x56E($t6)
    ctx->pc = 0x1dd9d3cu;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
    // 0x1dd9d40: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dd9d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1dd9d44: 0x35ef0002  ori         $t7, $t7, 0x2
    ctx->pc = 0x1dd9d44u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)2);
    // 0x1dd9d48: 0xa5cf056e  sh          $t7, 0x56E($t6)
    ctx->pc = 0x1dd9d48u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 1390), (uint16_t)GPR_U32(ctx, 15));
    // 0x1dd9d4c: 0x95cd056e  lhu         $t5, 0x56E($t6)
    ctx->pc = 0x1dd9d4cu;
    SET_GPR_ZE32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
label_1dd9d50:
    // 0x1dd9d50: 0x244e0001  addiu       $t6, $v0, 0x1
    ctx->pc = 0x1dd9d50u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1dd9d54: 0x31af0004  andi        $t7, $t5, 0x4
    ctx->pc = 0x1dd9d54u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)4);
    // 0x1dd9d58: 0x1cf100b  movn        $v0, $t6, $t7
    ctx->pc = 0x1dd9d58u;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 14));
    // 0x1dd9d5c: 0x31ac0010  andi        $t4, $t5, 0x10
    ctx->pc = 0x1dd9d5cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)16);
    // 0x1dd9d60: 0x244f0001  addiu       $t7, $v0, 0x1
    ctx->pc = 0x1dd9d60u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1dd9d64: 0x31ad0020  andi        $t5, $t5, 0x20
    ctx->pc = 0x1dd9d64u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)32);
    // 0x1dd9d68: 0x1ec100b  movn        $v0, $t7, $t4
    ctx->pc = 0x1dd9d68u;
    if (GPR_U64(ctx, 12) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 15));
    // 0x1dd9d6c: 0x244e0004  addiu       $t6, $v0, 0x4
    ctx->pc = 0x1dd9d6cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1dd9d70: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD9D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD9D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD9D70u;
        // 0x1dd9d74: 0x1cd100b  movn        $v0, $t6, $t5 (Delay Slot)
        if (GPR_U64(ctx, 13) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD9D70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD9D78u;
label_1dd9d78:
    // 0x1dd9d78: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x1DD9D78u;
    {
        const bool branch_taken_0x1dd9d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD9D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD9D78u;
        // 0x1dd9d7c: 0x8f8e8018  lw          $t6, -0x7FE8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd9d78) {
            ctx->pc = 0x1DD9D2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dd9d2c;
        }
    }
    ctx->pc = 0x1DD9D80u;
    // 0x1dd9d80: 0x0  nop
    ctx->pc = 0x1dd9d80u;
    // NOP
    // 0x1dd9d84: 0x0  nop
    ctx->pc = 0x1dd9d84u;
    // NOP
    // 0x1dd9d88: 0x0  nop
    ctx->pc = 0x1dd9d88u;
    // NOP
    // 0x1dd9d8c: 0x0  nop
    ctx->pc = 0x1dd9d8cu;
    // NOP
    // 0x1dd9d90: 0x0  nop
    ctx->pc = 0x1dd9d90u;
    // NOP
    ctx->pc = 0x1dd9d94u;
}
