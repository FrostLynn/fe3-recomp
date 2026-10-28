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

// Function: sub_01DD8798
// Address: 0x1dd8798 - 0x1dd8814
void sub_01DD8798_0x1dd8798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD8798_0x1dd8798");
#endif

    switch (ctx->pc) {
        case 0x1dd87b8u: goto label_1dd87b8;
        default: break;
    }

    ctx->pc = 0x1dd8798u;

    // 0x1dd8798: 0x28840080  slti        $a0, $a0, 0x80
    ctx->pc = 0x1dd8798u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1dd879c: 0x14800015  bnez        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1DD879Cu;
    {
        const bool branch_taken_0x1dd879c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD87A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD879Cu;
        // 0x1dd87a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd879c) {
            ctx->pc = 0x1DD87F4u;
            goto label_1dd87f4;
        }
    }
    ctx->pc = 0x1DD87A4u;
    // 0x1dd87a4: 0x8f8e8014  lw          $t6, -0x7FEC($gp)
    ctx->pc = 0x1dd87a4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd87a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dd87a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd87ac: 0x95cf056e  lhu         $t7, 0x56E($t6)
    ctx->pc = 0x1dd87acu;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
    // 0x1dd87b0: 0x35ef0001  ori         $t7, $t7, 0x1
    ctx->pc = 0x1dd87b0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)1);
    // 0x1dd87b4: 0xa5cf056e  sh          $t7, 0x56E($t6)
    ctx->pc = 0x1dd87b4u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 1390), (uint16_t)GPR_U32(ctx, 15));
label_1dd87b8:
    // 0x1dd87b8: 0x28af005a  slti        $t7, $a1, 0x5A
    ctx->pc = 0x1dd87b8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)90) ? 1 : 0);
    // 0x1dd87bc: 0x55e00006  bnel        $t7, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DD87BCu;
    {
        const bool branch_taken_0x1dd87bc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd87bc) {
            ctx->pc = 0x1DD87C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DD87BCu;
            // 0x1dd87c0: 0x95ce056e  lhu         $t6, 0x56E($t6) (Delay Slot)
            SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DD87D8u;
            goto label_1dd87d8;
        }
    }
    ctx->pc = 0x1DD87C4u;
    // 0x1dd87c4: 0x95cf056e  lhu         $t7, 0x56E($t6)
    ctx->pc = 0x1dd87c4u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
    // 0x1dd87c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dd87c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1dd87cc: 0x35ef0002  ori         $t7, $t7, 0x2
    ctx->pc = 0x1dd87ccu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)2);
    // 0x1dd87d0: 0xa5cf056e  sh          $t7, 0x56E($t6)
    ctx->pc = 0x1dd87d0u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 1390), (uint16_t)GPR_U32(ctx, 15));
    // 0x1dd87d4: 0x95ce056e  lhu         $t6, 0x56E($t6)
    ctx->pc = 0x1dd87d4u;
    SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
label_1dd87d8:
    // 0x1dd87d8: 0x244c0001  addiu       $t4, $v0, 0x1
    ctx->pc = 0x1dd87d8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1dd87dc: 0x31cd0004  andi        $t5, $t6, 0x4
    ctx->pc = 0x1dd87dcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)4);
    // 0x1dd87e0: 0x18d100b  movn        $v0, $t4, $t5
    ctx->pc = 0x1dd87e0u;
    if (GPR_U64(ctx, 13) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 12));
    // 0x1dd87e4: 0x31ce0010  andi        $t6, $t6, 0x10
    ctx->pc = 0x1dd87e4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)16);
    // 0x1dd87e8: 0x244f0001  addiu       $t7, $v0, 0x1
    ctx->pc = 0x1dd87e8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1dd87ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD87ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD87F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD87ECu;
        // 0x1dd87f0: 0x1ee100b  movn        $v0, $t7, $t6 (Delay Slot)
        if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD87ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD87F4u;
label_1dd87f4:
    // 0x1dd87f4: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x1DD87F4u;
    {
        const bool branch_taken_0x1dd87f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD87F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD87F4u;
        // 0x1dd87f8: 0x8f8e8014  lw          $t6, -0x7FEC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd87f4) {
            ctx->pc = 0x1DD87B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dd87b8;
        }
    }
    ctx->pc = 0x1DD87FCu;
    // 0x1dd87fc: 0x0  nop
    ctx->pc = 0x1dd87fcu;
    // NOP
    // 0x1dd8800: 0x0  nop
    ctx->pc = 0x1dd8800u;
    // NOP
    // 0x1dd8804: 0x0  nop
    ctx->pc = 0x1dd8804u;
    // NOP
    // 0x1dd8808: 0x0  nop
    ctx->pc = 0x1dd8808u;
    // NOP
    // 0x1dd880c: 0x0  nop
    ctx->pc = 0x1dd880cu;
    // NOP
    // 0x1dd8810: 0x0  nop
    ctx->pc = 0x1dd8810u;
    // NOP
    ctx->pc = 0x1dd8814u;
}
