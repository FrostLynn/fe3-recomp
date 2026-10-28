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

// Function: sub_01DE3D10
// Address: 0x1de3d10 - 0x1de3d8c
void sub_01DE3D10_0x1de3d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE3D10_0x1de3d10");
#endif

    switch (ctx->pc) {
        case 0x1de3d30u: goto label_1de3d30;
        default: break;
    }

    ctx->pc = 0x1de3d10u;

    // 0x1de3d10: 0x28840034  slti        $a0, $a0, 0x34
    ctx->pc = 0x1de3d10u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)52) ? 1 : 0);
    // 0x1de3d14: 0x14800015  bnez        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1DE3D14u;
    {
        const bool branch_taken_0x1de3d14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE3D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE3D14u;
        // 0x1de3d18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de3d14) {
            ctx->pc = 0x1DE3D6Cu;
            goto label_1de3d6c;
        }
    }
    ctx->pc = 0x1DE3D1Cu;
    // 0x1de3d1c: 0x8f8e8014  lw          $t6, -0x7FEC($gp)
    ctx->pc = 0x1de3d1cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de3d20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1de3d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de3d24: 0x95cf056e  lhu         $t7, 0x56E($t6)
    ctx->pc = 0x1de3d24u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
    // 0x1de3d28: 0x35ef0001  ori         $t7, $t7, 0x1
    ctx->pc = 0x1de3d28u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)1);
    // 0x1de3d2c: 0xa5cf056e  sh          $t7, 0x56E($t6)
    ctx->pc = 0x1de3d2cu;
    WRITE16(ADD32(GPR_U32(ctx, 14), 1390), (uint16_t)GPR_U32(ctx, 15));
label_1de3d30:
    // 0x1de3d30: 0x28af003c  slti        $t7, $a1, 0x3C
    ctx->pc = 0x1de3d30u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x1de3d34: 0x55e00006  bnel        $t7, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DE3D34u;
    {
        const bool branch_taken_0x1de3d34 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de3d34) {
            ctx->pc = 0x1DE3D38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE3D34u;
            // 0x1de3d38: 0x95ce056e  lhu         $t6, 0x56E($t6) (Delay Slot)
            SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE3D50u;
            goto label_1de3d50;
        }
    }
    ctx->pc = 0x1DE3D3Cu;
    // 0x1de3d3c: 0x95cf056e  lhu         $t7, 0x56E($t6)
    ctx->pc = 0x1de3d3cu;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
    // 0x1de3d40: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1de3d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1de3d44: 0x35ef0002  ori         $t7, $t7, 0x2
    ctx->pc = 0x1de3d44u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)2);
    // 0x1de3d48: 0xa5cf056e  sh          $t7, 0x56E($t6)
    ctx->pc = 0x1de3d48u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 1390), (uint16_t)GPR_U32(ctx, 15));
    // 0x1de3d4c: 0x95ce056e  lhu         $t6, 0x56E($t6)
    ctx->pc = 0x1de3d4cu;
    SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
label_1de3d50:
    // 0x1de3d50: 0x244c0001  addiu       $t4, $v0, 0x1
    ctx->pc = 0x1de3d50u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1de3d54: 0x31cd0004  andi        $t5, $t6, 0x4
    ctx->pc = 0x1de3d54u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)4);
    // 0x1de3d58: 0x18d100b  movn        $v0, $t4, $t5
    ctx->pc = 0x1de3d58u;
    if (GPR_U64(ctx, 13) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 12));
    // 0x1de3d5c: 0x31ce0008  andi        $t6, $t6, 0x8
    ctx->pc = 0x1de3d5cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)8);
    // 0x1de3d60: 0x244f0001  addiu       $t7, $v0, 0x1
    ctx->pc = 0x1de3d60u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1de3d64: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE3D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE3D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE3D64u;
        // 0x1de3d68: 0x1ee100b  movn        $v0, $t7, $t6 (Delay Slot)
        if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE3D64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE3D6Cu;
label_1de3d6c:
    // 0x1de3d6c: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x1DE3D6Cu;
    {
        const bool branch_taken_0x1de3d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE3D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE3D6Cu;
        // 0x1de3d70: 0x8f8e8014  lw          $t6, -0x7FEC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de3d6c) {
            ctx->pc = 0x1DE3D30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1de3d30;
        }
    }
    ctx->pc = 0x1DE3D74u;
    // 0x1de3d74: 0x0  nop
    ctx->pc = 0x1de3d74u;
    // NOP
    // 0x1de3d78: 0x0  nop
    ctx->pc = 0x1de3d78u;
    // NOP
    // 0x1de3d7c: 0x0  nop
    ctx->pc = 0x1de3d7cu;
    // NOP
    // 0x1de3d80: 0x0  nop
    ctx->pc = 0x1de3d80u;
    // NOP
    // 0x1de3d84: 0x0  nop
    ctx->pc = 0x1de3d84u;
    // NOP
    // 0x1de3d88: 0x0  nop
    ctx->pc = 0x1de3d88u;
    // NOP
    ctx->pc = 0x1de3d8cu;
}
