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

// Function: sub_01DEA470
// Address: 0x1dea470 - 0x1dea4ec
void sub_01DEA470_0x1dea470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DEA470_0x1dea470");
#endif

    switch (ctx->pc) {
        case 0x1dea490u: goto label_1dea490;
        default: break;
    }

    ctx->pc = 0x1dea470u;

    // 0x1dea470: 0x28840080  slti        $a0, $a0, 0x80
    ctx->pc = 0x1dea470u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1dea474: 0x14800015  bnez        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1DEA474u;
    {
        const bool branch_taken_0x1dea474 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DEA478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA474u;
        // 0x1dea478: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dea474) {
            ctx->pc = 0x1DEA4CCu;
            goto label_1dea4cc;
        }
    }
    ctx->pc = 0x1DEA47Cu;
    // 0x1dea47c: 0x8f8e8018  lw          $t6, -0x7FE8($gp)
    ctx->pc = 0x1dea47cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dea480: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dea480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dea484: 0x95cf056e  lhu         $t7, 0x56E($t6)
    ctx->pc = 0x1dea484u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
    // 0x1dea488: 0x35ef0001  ori         $t7, $t7, 0x1
    ctx->pc = 0x1dea488u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)1);
    // 0x1dea48c: 0xa5cf056e  sh          $t7, 0x56E($t6)
    ctx->pc = 0x1dea48cu;
    WRITE16(ADD32(GPR_U32(ctx, 14), 1390), (uint16_t)GPR_U32(ctx, 15));
label_1dea490:
    // 0x1dea490: 0x28af0050  slti        $t7, $a1, 0x50
    ctx->pc = 0x1dea490u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)80) ? 1 : 0);
    // 0x1dea494: 0x55e00006  bnel        $t7, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DEA494u;
    {
        const bool branch_taken_0x1dea494 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dea494) {
            ctx->pc = 0x1DEA498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DEA494u;
            // 0x1dea498: 0x95ce056e  lhu         $t6, 0x56E($t6) (Delay Slot)
            SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DEA4B0u;
            goto label_1dea4b0;
        }
    }
    ctx->pc = 0x1DEA49Cu;
    // 0x1dea49c: 0x95cf056e  lhu         $t7, 0x56E($t6)
    ctx->pc = 0x1dea49cu;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
    // 0x1dea4a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dea4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1dea4a4: 0x35ef0002  ori         $t7, $t7, 0x2
    ctx->pc = 0x1dea4a4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)2);
    // 0x1dea4a8: 0xa5cf056e  sh          $t7, 0x56E($t6)
    ctx->pc = 0x1dea4a8u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 1390), (uint16_t)GPR_U32(ctx, 15));
    // 0x1dea4ac: 0x95ce056e  lhu         $t6, 0x56E($t6)
    ctx->pc = 0x1dea4acu;
    SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
label_1dea4b0:
    // 0x1dea4b0: 0x244c0001  addiu       $t4, $v0, 0x1
    ctx->pc = 0x1dea4b0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1dea4b4: 0x31cd0004  andi        $t5, $t6, 0x4
    ctx->pc = 0x1dea4b4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)4);
    // 0x1dea4b8: 0x18d100b  movn        $v0, $t4, $t5
    ctx->pc = 0x1dea4b8u;
    if (GPR_U64(ctx, 13) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 12));
    // 0x1dea4bc: 0x31ce0008  andi        $t6, $t6, 0x8
    ctx->pc = 0x1dea4bcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)8);
    // 0x1dea4c0: 0x244f0001  addiu       $t7, $v0, 0x1
    ctx->pc = 0x1dea4c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1dea4c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEA4C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEA4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA4C4u;
        // 0x1dea4c8: 0x1ee100b  movn        $v0, $t7, $t6 (Delay Slot)
        if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEA4C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEA4CCu;
label_1dea4cc:
    // 0x1dea4cc: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x1DEA4CCu;
    {
        const bool branch_taken_0x1dea4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEA4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA4CCu;
        // 0x1dea4d0: 0x8f8e8018  lw          $t6, -0x7FE8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dea4cc) {
            ctx->pc = 0x1DEA490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dea490;
        }
    }
    ctx->pc = 0x1DEA4D4u;
    // 0x1dea4d4: 0x0  nop
    ctx->pc = 0x1dea4d4u;
    // NOP
    // 0x1dea4d8: 0x0  nop
    ctx->pc = 0x1dea4d8u;
    // NOP
    // 0x1dea4dc: 0x0  nop
    ctx->pc = 0x1dea4dcu;
    // NOP
    // 0x1dea4e0: 0x0  nop
    ctx->pc = 0x1dea4e0u;
    // NOP
    // 0x1dea4e4: 0x0  nop
    ctx->pc = 0x1dea4e4u;
    // NOP
    // 0x1dea4e8: 0x0  nop
    ctx->pc = 0x1dea4e8u;
    // NOP
    ctx->pc = 0x1dea4ecu;
}
