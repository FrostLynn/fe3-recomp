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

// Function: sub_01DE1E70
// Address: 0x1de1e70 - 0x1de1ef4
void sub_01DE1E70_0x1de1e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE1E70_0x1de1e70");
#endif

    switch (ctx->pc) {
        case 0x1de1e90u: goto label_1de1e90;
        default: break;
    }

    ctx->pc = 0x1de1e70u;

    // 0x1de1e70: 0x28840080  slti        $a0, $a0, 0x80
    ctx->pc = 0x1de1e70u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1de1e74: 0x14800018  bnez        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1DE1E74u;
    {
        const bool branch_taken_0x1de1e74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE1E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE1E74u;
        // 0x1de1e78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de1e74) {
            ctx->pc = 0x1DE1ED8u;
            goto label_1de1ed8;
        }
    }
    ctx->pc = 0x1DE1E7Cu;
    // 0x1de1e7c: 0x8f8e8014  lw          $t6, -0x7FEC($gp)
    ctx->pc = 0x1de1e7cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de1e80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1de1e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de1e84: 0x95cf056e  lhu         $t7, 0x56E($t6)
    ctx->pc = 0x1de1e84u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
    // 0x1de1e88: 0x35ef0001  ori         $t7, $t7, 0x1
    ctx->pc = 0x1de1e88u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)1);
    // 0x1de1e8c: 0xa5cf056e  sh          $t7, 0x56E($t6)
    ctx->pc = 0x1de1e8cu;
    WRITE16(ADD32(GPR_U32(ctx, 14), 1390), (uint16_t)GPR_U32(ctx, 15));
label_1de1e90:
    // 0x1de1e90: 0x28af005a  slti        $t7, $a1, 0x5A
    ctx->pc = 0x1de1e90u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)90) ? 1 : 0);
    // 0x1de1e94: 0x55e00006  bnel        $t7, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DE1E94u;
    {
        const bool branch_taken_0x1de1e94 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de1e94) {
            ctx->pc = 0x1DE1E98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE1E94u;
            // 0x1de1e98: 0x95cd056e  lhu         $t5, 0x56E($t6) (Delay Slot)
            SET_GPR_ZE32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE1EB0u;
            goto label_1de1eb0;
        }
    }
    ctx->pc = 0x1DE1E9Cu;
    // 0x1de1e9c: 0x95cf056e  lhu         $t7, 0x56E($t6)
    ctx->pc = 0x1de1e9cu;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
    // 0x1de1ea0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1de1ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1de1ea4: 0x35ef0002  ori         $t7, $t7, 0x2
    ctx->pc = 0x1de1ea4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)2);
    // 0x1de1ea8: 0xa5cf056e  sh          $t7, 0x56E($t6)
    ctx->pc = 0x1de1ea8u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 1390), (uint16_t)GPR_U32(ctx, 15));
    // 0x1de1eac: 0x95cd056e  lhu         $t5, 0x56E($t6)
    ctx->pc = 0x1de1eacu;
    SET_GPR_ZE32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
label_1de1eb0:
    // 0x1de1eb0: 0x244e0001  addiu       $t6, $v0, 0x1
    ctx->pc = 0x1de1eb0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1de1eb4: 0x31af0004  andi        $t7, $t5, 0x4
    ctx->pc = 0x1de1eb4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)4);
    // 0x1de1eb8: 0x1cf100b  movn        $v0, $t6, $t7
    ctx->pc = 0x1de1eb8u;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 14));
    // 0x1de1ebc: 0x31ac0010  andi        $t4, $t5, 0x10
    ctx->pc = 0x1de1ebcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)16);
    // 0x1de1ec0: 0x244f0001  addiu       $t7, $v0, 0x1
    ctx->pc = 0x1de1ec0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1de1ec4: 0x31ad0020  andi        $t5, $t5, 0x20
    ctx->pc = 0x1de1ec4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)32);
    // 0x1de1ec8: 0x1ec100b  movn        $v0, $t7, $t4
    ctx->pc = 0x1de1ec8u;
    if (GPR_U64(ctx, 12) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 15));
    // 0x1de1ecc: 0x244e0004  addiu       $t6, $v0, 0x4
    ctx->pc = 0x1de1eccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1de1ed0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE1ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE1ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE1ED0u;
        // 0x1de1ed4: 0x1cd100b  movn        $v0, $t6, $t5 (Delay Slot)
        if (GPR_U64(ctx, 13) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE1ED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE1ED8u;
label_1de1ed8:
    // 0x1de1ed8: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x1DE1ED8u;
    {
        const bool branch_taken_0x1de1ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE1EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE1ED8u;
        // 0x1de1edc: 0x8f8e8014  lw          $t6, -0x7FEC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de1ed8) {
            ctx->pc = 0x1DE1E90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1de1e90;
        }
    }
    ctx->pc = 0x1DE1EE0u;
    // 0x1de1ee0: 0x0  nop
    ctx->pc = 0x1de1ee0u;
    // NOP
    // 0x1de1ee4: 0x0  nop
    ctx->pc = 0x1de1ee4u;
    // NOP
    // 0x1de1ee8: 0x0  nop
    ctx->pc = 0x1de1ee8u;
    // NOP
    // 0x1de1eec: 0x0  nop
    ctx->pc = 0x1de1eecu;
    // NOP
    // 0x1de1ef0: 0x0  nop
    ctx->pc = 0x1de1ef0u;
    // NOP
    ctx->pc = 0x1de1ef4u;
}
