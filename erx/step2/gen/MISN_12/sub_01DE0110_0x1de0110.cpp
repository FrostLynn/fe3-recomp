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

// Function: sub_01DE0110
// Address: 0x1de0110 - 0x1de018c
void sub_01DE0110_0x1de0110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE0110_0x1de0110");
#endif

    switch (ctx->pc) {
        case 0x1de0130u: goto label_1de0130;
        default: break;
    }

    ctx->pc = 0x1de0110u;

    // 0x1de0110: 0x28840080  slti        $a0, $a0, 0x80
    ctx->pc = 0x1de0110u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1de0114: 0x14800015  bnez        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1DE0114u;
    {
        const bool branch_taken_0x1de0114 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE0118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE0114u;
        // 0x1de0118: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de0114) {
            ctx->pc = 0x1DE016Cu;
            goto label_1de016c;
        }
    }
    ctx->pc = 0x1DE011Cu;
    // 0x1de011c: 0x8f8e8014  lw          $t6, -0x7FEC($gp)
    ctx->pc = 0x1de011cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de0120: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1de0120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de0124: 0x95cf056e  lhu         $t7, 0x56E($t6)
    ctx->pc = 0x1de0124u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
    // 0x1de0128: 0x35ef0001  ori         $t7, $t7, 0x1
    ctx->pc = 0x1de0128u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)1);
    // 0x1de012c: 0xa5cf056e  sh          $t7, 0x56E($t6)
    ctx->pc = 0x1de012cu;
    WRITE16(ADD32(GPR_U32(ctx, 14), 1390), (uint16_t)GPR_U32(ctx, 15));
label_1de0130:
    // 0x1de0130: 0x28af005a  slti        $t7, $a1, 0x5A
    ctx->pc = 0x1de0130u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)90) ? 1 : 0);
    // 0x1de0134: 0x55e00006  bnel        $t7, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DE0134u;
    {
        const bool branch_taken_0x1de0134 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de0134) {
            ctx->pc = 0x1DE0138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE0134u;
            // 0x1de0138: 0x95ce056e  lhu         $t6, 0x56E($t6) (Delay Slot)
            SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE0150u;
            goto label_1de0150;
        }
    }
    ctx->pc = 0x1DE013Cu;
    // 0x1de013c: 0x95cf056e  lhu         $t7, 0x56E($t6)
    ctx->pc = 0x1de013cu;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
    // 0x1de0140: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1de0140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1de0144: 0x35ef0002  ori         $t7, $t7, 0x2
    ctx->pc = 0x1de0144u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)2);
    // 0x1de0148: 0xa5cf056e  sh          $t7, 0x56E($t6)
    ctx->pc = 0x1de0148u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 1390), (uint16_t)GPR_U32(ctx, 15));
    // 0x1de014c: 0x95ce056e  lhu         $t6, 0x56E($t6)
    ctx->pc = 0x1de014cu;
    SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
label_1de0150:
    // 0x1de0150: 0x244c0001  addiu       $t4, $v0, 0x1
    ctx->pc = 0x1de0150u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1de0154: 0x31cd0008  andi        $t5, $t6, 0x8
    ctx->pc = 0x1de0154u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)8);
    // 0x1de0158: 0x18d100b  movn        $v0, $t4, $t5
    ctx->pc = 0x1de0158u;
    if (GPR_U64(ctx, 13) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 12));
    // 0x1de015c: 0x31ce0010  andi        $t6, $t6, 0x10
    ctx->pc = 0x1de015cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)16);
    // 0x1de0160: 0x244f0001  addiu       $t7, $v0, 0x1
    ctx->pc = 0x1de0160u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1de0164: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE0164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE0168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE0164u;
        // 0x1de0168: 0x1ee100b  movn        $v0, $t7, $t6 (Delay Slot)
        if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE0164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE016Cu;
label_1de016c:
    // 0x1de016c: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x1DE016Cu;
    {
        const bool branch_taken_0x1de016c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE0170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE016Cu;
        // 0x1de0170: 0x8f8e8014  lw          $t6, -0x7FEC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de016c) {
            ctx->pc = 0x1DE0130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1de0130;
        }
    }
    ctx->pc = 0x1DE0174u;
    // 0x1de0174: 0x0  nop
    ctx->pc = 0x1de0174u;
    // NOP
    // 0x1de0178: 0x0  nop
    ctx->pc = 0x1de0178u;
    // NOP
    // 0x1de017c: 0x0  nop
    ctx->pc = 0x1de017cu;
    // NOP
    // 0x1de0180: 0x0  nop
    ctx->pc = 0x1de0180u;
    // NOP
    // 0x1de0184: 0x0  nop
    ctx->pc = 0x1de0184u;
    // NOP
    // 0x1de0188: 0x0  nop
    ctx->pc = 0x1de0188u;
    // NOP
    ctx->pc = 0x1de018cu;
}
