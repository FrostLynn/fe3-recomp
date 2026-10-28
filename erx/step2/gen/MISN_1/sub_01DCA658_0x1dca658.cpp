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

// Function: sub_01DCA658
// Address: 0x1dca658 - 0x1dca6d4
void sub_01DCA658_0x1dca658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DCA658_0x1dca658");
#endif

    switch (ctx->pc) {
        case 0x1dca678u: goto label_1dca678;
        default: break;
    }

    ctx->pc = 0x1dca658u;

    // 0x1dca658: 0x28840080  slti        $a0, $a0, 0x80
    ctx->pc = 0x1dca658u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1dca65c: 0x14800015  bnez        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1DCA65Cu;
    {
        const bool branch_taken_0x1dca65c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCA660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCA65Cu;
        // 0x1dca660: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dca65c) {
            ctx->pc = 0x1DCA6B4u;
            goto label_1dca6b4;
        }
    }
    ctx->pc = 0x1DCA664u;
    // 0x1dca664: 0x8f8e8018  lw          $t6, -0x7FE8($gp)
    ctx->pc = 0x1dca664u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dca668: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dca668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dca66c: 0x95cf056e  lhu         $t7, 0x56E($t6)
    ctx->pc = 0x1dca66cu;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
    // 0x1dca670: 0x35ef0001  ori         $t7, $t7, 0x1
    ctx->pc = 0x1dca670u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)1);
    // 0x1dca674: 0xa5cf056e  sh          $t7, 0x56E($t6)
    ctx->pc = 0x1dca674u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 1390), (uint16_t)GPR_U32(ctx, 15));
label_1dca678:
    // 0x1dca678: 0x28af005a  slti        $t7, $a1, 0x5A
    ctx->pc = 0x1dca678u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)90) ? 1 : 0);
    // 0x1dca67c: 0x55e00006  bnel        $t7, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DCA67Cu;
    {
        const bool branch_taken_0x1dca67c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dca67c) {
            ctx->pc = 0x1DCA680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DCA67Cu;
            // 0x1dca680: 0x95ce056e  lhu         $t6, 0x56E($t6) (Delay Slot)
            SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DCA698u;
            goto label_1dca698;
        }
    }
    ctx->pc = 0x1DCA684u;
    // 0x1dca684: 0x95cf056e  lhu         $t7, 0x56E($t6)
    ctx->pc = 0x1dca684u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
    // 0x1dca688: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dca688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1dca68c: 0x35ef0002  ori         $t7, $t7, 0x2
    ctx->pc = 0x1dca68cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)2);
    // 0x1dca690: 0xa5cf056e  sh          $t7, 0x56E($t6)
    ctx->pc = 0x1dca690u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 1390), (uint16_t)GPR_U32(ctx, 15));
    // 0x1dca694: 0x95ce056e  lhu         $t6, 0x56E($t6)
    ctx->pc = 0x1dca694u;
    SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
label_1dca698:
    // 0x1dca698: 0x244c0001  addiu       $t4, $v0, 0x1
    ctx->pc = 0x1dca698u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1dca69c: 0x31cd0004  andi        $t5, $t6, 0x4
    ctx->pc = 0x1dca69cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)4);
    // 0x1dca6a0: 0x18d100b  movn        $v0, $t4, $t5
    ctx->pc = 0x1dca6a0u;
    if (GPR_U64(ctx, 13) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 12));
    // 0x1dca6a4: 0x31ce0010  andi        $t6, $t6, 0x10
    ctx->pc = 0x1dca6a4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)16);
    // 0x1dca6a8: 0x244f0001  addiu       $t7, $v0, 0x1
    ctx->pc = 0x1dca6a8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1dca6ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCA6ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCA6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCA6ACu;
        // 0x1dca6b0: 0x1ee100b  movn        $v0, $t7, $t6 (Delay Slot)
        if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCA6ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCA6B4u;
label_1dca6b4:
    // 0x1dca6b4: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x1DCA6B4u;
    {
        const bool branch_taken_0x1dca6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCA6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCA6B4u;
        // 0x1dca6b8: 0x8f8e8018  lw          $t6, -0x7FE8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dca6b4) {
            ctx->pc = 0x1DCA678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dca678;
        }
    }
    ctx->pc = 0x1DCA6BCu;
    // 0x1dca6bc: 0x0  nop
    ctx->pc = 0x1dca6bcu;
    // NOP
    // 0x1dca6c0: 0x0  nop
    ctx->pc = 0x1dca6c0u;
    // NOP
    // 0x1dca6c4: 0x0  nop
    ctx->pc = 0x1dca6c4u;
    // NOP
    // 0x1dca6c8: 0x0  nop
    ctx->pc = 0x1dca6c8u;
    // NOP
    // 0x1dca6cc: 0x0  nop
    ctx->pc = 0x1dca6ccu;
    // NOP
    // 0x1dca6d0: 0x0  nop
    ctx->pc = 0x1dca6d0u;
    // NOP
    ctx->pc = 0x1dca6d4u;
}
