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

// Function: sub_01DCF838
// Address: 0x1dcf838 - 0x1dcf8bc
void sub_01DCF838_0x1dcf838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DCF838_0x1dcf838");
#endif

    switch (ctx->pc) {
        case 0x1dcf858u: goto label_1dcf858;
        default: break;
    }

    ctx->pc = 0x1dcf838u;

    // 0x1dcf838: 0x28840080  slti        $a0, $a0, 0x80
    ctx->pc = 0x1dcf838u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1dcf83c: 0x14800018  bnez        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1DCF83Cu;
    {
        const bool branch_taken_0x1dcf83c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCF840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF83Cu;
        // 0x1dcf840: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcf83c) {
            ctx->pc = 0x1DCF8A0u;
            goto label_1dcf8a0;
        }
    }
    ctx->pc = 0x1DCF844u;
    // 0x1dcf844: 0x8f8e8014  lw          $t6, -0x7FEC($gp)
    ctx->pc = 0x1dcf844u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dcf848: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dcf848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dcf84c: 0x95cf056e  lhu         $t7, 0x56E($t6)
    ctx->pc = 0x1dcf84cu;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
    // 0x1dcf850: 0x35ef0001  ori         $t7, $t7, 0x1
    ctx->pc = 0x1dcf850u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)1);
    // 0x1dcf854: 0xa5cf056e  sh          $t7, 0x56E($t6)
    ctx->pc = 0x1dcf854u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 1390), (uint16_t)GPR_U32(ctx, 15));
label_1dcf858:
    // 0x1dcf858: 0x28af005a  slti        $t7, $a1, 0x5A
    ctx->pc = 0x1dcf858u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)90) ? 1 : 0);
    // 0x1dcf85c: 0x55e00006  bnel        $t7, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DCF85Cu;
    {
        const bool branch_taken_0x1dcf85c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dcf85c) {
            ctx->pc = 0x1DCF860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DCF85Cu;
            // 0x1dcf860: 0x95cd056e  lhu         $t5, 0x56E($t6) (Delay Slot)
            SET_GPR_ZE32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DCF878u;
            goto label_1dcf878;
        }
    }
    ctx->pc = 0x1DCF864u;
    // 0x1dcf864: 0x95cf056e  lhu         $t7, 0x56E($t6)
    ctx->pc = 0x1dcf864u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
    // 0x1dcf868: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dcf868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1dcf86c: 0x35ef0002  ori         $t7, $t7, 0x2
    ctx->pc = 0x1dcf86cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)2);
    // 0x1dcf870: 0xa5cf056e  sh          $t7, 0x56E($t6)
    ctx->pc = 0x1dcf870u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 1390), (uint16_t)GPR_U32(ctx, 15));
    // 0x1dcf874: 0x95cd056e  lhu         $t5, 0x56E($t6)
    ctx->pc = 0x1dcf874u;
    SET_GPR_ZE32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
label_1dcf878:
    // 0x1dcf878: 0x244e0001  addiu       $t6, $v0, 0x1
    ctx->pc = 0x1dcf878u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1dcf87c: 0x31af0008  andi        $t7, $t5, 0x8
    ctx->pc = 0x1dcf87cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)8);
    // 0x1dcf880: 0x1cf100b  movn        $v0, $t6, $t7
    ctx->pc = 0x1dcf880u;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 14));
    // 0x1dcf884: 0x31ac0010  andi        $t4, $t5, 0x10
    ctx->pc = 0x1dcf884u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)16);
    // 0x1dcf888: 0x244f0001  addiu       $t7, $v0, 0x1
    ctx->pc = 0x1dcf888u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1dcf88c: 0x31ad0020  andi        $t5, $t5, 0x20
    ctx->pc = 0x1dcf88cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)32);
    // 0x1dcf890: 0x1ec100b  movn        $v0, $t7, $t4
    ctx->pc = 0x1dcf890u;
    if (GPR_U64(ctx, 12) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 15));
    // 0x1dcf894: 0x244e0004  addiu       $t6, $v0, 0x4
    ctx->pc = 0x1dcf894u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1dcf898: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCF898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCF89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF898u;
        // 0x1dcf89c: 0x1cd100b  movn        $v0, $t6, $t5 (Delay Slot)
        if (GPR_U64(ctx, 13) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCF898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCF8A0u;
label_1dcf8a0:
    // 0x1dcf8a0: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x1DCF8A0u;
    {
        const bool branch_taken_0x1dcf8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCF8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF8A0u;
        // 0x1dcf8a4: 0x8f8e8014  lw          $t6, -0x7FEC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcf8a0) {
            ctx->pc = 0x1DCF858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dcf858;
        }
    }
    ctx->pc = 0x1DCF8A8u;
    // 0x1dcf8a8: 0x0  nop
    ctx->pc = 0x1dcf8a8u;
    // NOP
    // 0x1dcf8ac: 0x0  nop
    ctx->pc = 0x1dcf8acu;
    // NOP
    // 0x1dcf8b0: 0x0  nop
    ctx->pc = 0x1dcf8b0u;
    // NOP
    // 0x1dcf8b4: 0x0  nop
    ctx->pc = 0x1dcf8b4u;
    // NOP
    // 0x1dcf8b8: 0x0  nop
    ctx->pc = 0x1dcf8b8u;
    // NOP
    ctx->pc = 0x1dcf8bcu;
}
