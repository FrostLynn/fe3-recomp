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

// Function: sub_01DE0AC8
// Address: 0x1de0ac8 - 0x1de0b44
void sub_01DE0AC8_0x1de0ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE0AC8_0x1de0ac8");
#endif

    switch (ctx->pc) {
        case 0x1de0ae8u: goto label_1de0ae8;
        default: break;
    }

    ctx->pc = 0x1de0ac8u;

    // 0x1de0ac8: 0x28840067  slti        $a0, $a0, 0x67
    ctx->pc = 0x1de0ac8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)103) ? 1 : 0);
    // 0x1de0acc: 0x14800015  bnez        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1DE0ACCu;
    {
        const bool branch_taken_0x1de0acc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE0AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE0ACCu;
        // 0x1de0ad0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de0acc) {
            ctx->pc = 0x1DE0B24u;
            goto label_1de0b24;
        }
    }
    ctx->pc = 0x1DE0AD4u;
    // 0x1de0ad4: 0x8f8e8018  lw          $t6, -0x7FE8($gp)
    ctx->pc = 0x1de0ad4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1de0ad8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1de0ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de0adc: 0x95cf056e  lhu         $t7, 0x56E($t6)
    ctx->pc = 0x1de0adcu;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
    // 0x1de0ae0: 0x35ef0001  ori         $t7, $t7, 0x1
    ctx->pc = 0x1de0ae0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)1);
    // 0x1de0ae4: 0xa5cf056e  sh          $t7, 0x56E($t6)
    ctx->pc = 0x1de0ae4u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 1390), (uint16_t)GPR_U32(ctx, 15));
label_1de0ae8:
    // 0x1de0ae8: 0x28af005a  slti        $t7, $a1, 0x5A
    ctx->pc = 0x1de0ae8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)90) ? 1 : 0);
    // 0x1de0aec: 0x55e00006  bnel        $t7, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DE0AECu;
    {
        const bool branch_taken_0x1de0aec = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de0aec) {
            ctx->pc = 0x1DE0AF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE0AECu;
            // 0x1de0af0: 0x95ce056e  lhu         $t6, 0x56E($t6) (Delay Slot)
            SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE0B08u;
            goto label_1de0b08;
        }
    }
    ctx->pc = 0x1DE0AF4u;
    // 0x1de0af4: 0x95cf056e  lhu         $t7, 0x56E($t6)
    ctx->pc = 0x1de0af4u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
    // 0x1de0af8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1de0af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1de0afc: 0x35ef0002  ori         $t7, $t7, 0x2
    ctx->pc = 0x1de0afcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)2);
    // 0x1de0b00: 0xa5cf056e  sh          $t7, 0x56E($t6)
    ctx->pc = 0x1de0b00u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 1390), (uint16_t)GPR_U32(ctx, 15));
    // 0x1de0b04: 0x95ce056e  lhu         $t6, 0x56E($t6)
    ctx->pc = 0x1de0b04u;
    SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
label_1de0b08:
    // 0x1de0b08: 0x244c0001  addiu       $t4, $v0, 0x1
    ctx->pc = 0x1de0b08u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1de0b0c: 0x31cd0004  andi        $t5, $t6, 0x4
    ctx->pc = 0x1de0b0cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)4);
    // 0x1de0b10: 0x18d100b  movn        $v0, $t4, $t5
    ctx->pc = 0x1de0b10u;
    if (GPR_U64(ctx, 13) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 12));
    // 0x1de0b14: 0x31ce0008  andi        $t6, $t6, 0x8
    ctx->pc = 0x1de0b14u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)8);
    // 0x1de0b18: 0x244f0001  addiu       $t7, $v0, 0x1
    ctx->pc = 0x1de0b18u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1de0b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE0B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE0B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE0B1Cu;
        // 0x1de0b20: 0x1ee100b  movn        $v0, $t7, $t6 (Delay Slot)
        if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE0B1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE0B24u;
label_1de0b24:
    // 0x1de0b24: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x1DE0B24u;
    {
        const bool branch_taken_0x1de0b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE0B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE0B24u;
        // 0x1de0b28: 0x8f8e8018  lw          $t6, -0x7FE8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de0b24) {
            ctx->pc = 0x1DE0AE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1de0ae8;
        }
    }
    ctx->pc = 0x1DE0B2Cu;
    // 0x1de0b2c: 0x0  nop
    ctx->pc = 0x1de0b2cu;
    // NOP
    // 0x1de0b30: 0x0  nop
    ctx->pc = 0x1de0b30u;
    // NOP
    // 0x1de0b34: 0x0  nop
    ctx->pc = 0x1de0b34u;
    // NOP
    // 0x1de0b38: 0x0  nop
    ctx->pc = 0x1de0b38u;
    // NOP
    // 0x1de0b3c: 0x0  nop
    ctx->pc = 0x1de0b3cu;
    // NOP
    // 0x1de0b40: 0x0  nop
    ctx->pc = 0x1de0b40u;
    // NOP
    ctx->pc = 0x1de0b44u;
}
