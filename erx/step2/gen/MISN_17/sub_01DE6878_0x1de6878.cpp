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

// Function: sub_01DE6878
// Address: 0x1de6878 - 0x1de68f4
void sub_01DE6878_0x1de6878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE6878_0x1de6878");
#endif

    switch (ctx->pc) {
        case 0x1de6898u: goto label_1de6898;
        default: break;
    }

    ctx->pc = 0x1de6878u;

    // 0x1de6878: 0x28840080  slti        $a0, $a0, 0x80
    ctx->pc = 0x1de6878u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1de687c: 0x14800015  bnez        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1DE687Cu;
    {
        const bool branch_taken_0x1de687c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE6880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE687Cu;
        // 0x1de6880: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de687c) {
            ctx->pc = 0x1DE68D4u;
            goto label_1de68d4;
        }
    }
    ctx->pc = 0x1DE6884u;
    // 0x1de6884: 0x8f8e8014  lw          $t6, -0x7FEC($gp)
    ctx->pc = 0x1de6884u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de6888: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1de6888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de688c: 0x95cf056e  lhu         $t7, 0x56E($t6)
    ctx->pc = 0x1de688cu;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
    // 0x1de6890: 0x35ef0001  ori         $t7, $t7, 0x1
    ctx->pc = 0x1de6890u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)1);
    // 0x1de6894: 0xa5cf056e  sh          $t7, 0x56E($t6)
    ctx->pc = 0x1de6894u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 1390), (uint16_t)GPR_U32(ctx, 15));
label_1de6898:
    // 0x1de6898: 0x28af005a  slti        $t7, $a1, 0x5A
    ctx->pc = 0x1de6898u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)90) ? 1 : 0);
    // 0x1de689c: 0x55e00006  bnel        $t7, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DE689Cu;
    {
        const bool branch_taken_0x1de689c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de689c) {
            ctx->pc = 0x1DE68A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE689Cu;
            // 0x1de68a0: 0x95ce056e  lhu         $t6, 0x56E($t6) (Delay Slot)
            SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE68B8u;
            goto label_1de68b8;
        }
    }
    ctx->pc = 0x1DE68A4u;
    // 0x1de68a4: 0x95cf056e  lhu         $t7, 0x56E($t6)
    ctx->pc = 0x1de68a4u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
    // 0x1de68a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1de68a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1de68ac: 0x35ef0002  ori         $t7, $t7, 0x2
    ctx->pc = 0x1de68acu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)2);
    // 0x1de68b0: 0xa5cf056e  sh          $t7, 0x56E($t6)
    ctx->pc = 0x1de68b0u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 1390), (uint16_t)GPR_U32(ctx, 15));
    // 0x1de68b4: 0x95ce056e  lhu         $t6, 0x56E($t6)
    ctx->pc = 0x1de68b4u;
    SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
label_1de68b8:
    // 0x1de68b8: 0x244c0001  addiu       $t4, $v0, 0x1
    ctx->pc = 0x1de68b8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1de68bc: 0x31cd0008  andi        $t5, $t6, 0x8
    ctx->pc = 0x1de68bcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)8);
    // 0x1de68c0: 0x18d100b  movn        $v0, $t4, $t5
    ctx->pc = 0x1de68c0u;
    if (GPR_U64(ctx, 13) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 12));
    // 0x1de68c4: 0x31ce0010  andi        $t6, $t6, 0x10
    ctx->pc = 0x1de68c4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)16);
    // 0x1de68c8: 0x244f0001  addiu       $t7, $v0, 0x1
    ctx->pc = 0x1de68c8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1de68cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE68CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE68D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE68CCu;
        // 0x1de68d0: 0x1ee100b  movn        $v0, $t7, $t6 (Delay Slot)
        if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE68CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE68D4u;
label_1de68d4:
    // 0x1de68d4: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x1DE68D4u;
    {
        const bool branch_taken_0x1de68d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE68D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE68D4u;
        // 0x1de68d8: 0x8f8e8014  lw          $t6, -0x7FEC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de68d4) {
            ctx->pc = 0x1DE6898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1de6898;
        }
    }
    ctx->pc = 0x1DE68DCu;
    // 0x1de68dc: 0x0  nop
    ctx->pc = 0x1de68dcu;
    // NOP
    // 0x1de68e0: 0x0  nop
    ctx->pc = 0x1de68e0u;
    // NOP
    // 0x1de68e4: 0x0  nop
    ctx->pc = 0x1de68e4u;
    // NOP
    // 0x1de68e8: 0x0  nop
    ctx->pc = 0x1de68e8u;
    // NOP
    // 0x1de68ec: 0x0  nop
    ctx->pc = 0x1de68ecu;
    // NOP
    // 0x1de68f0: 0x0  nop
    ctx->pc = 0x1de68f0u;
    // NOP
    ctx->pc = 0x1de68f4u;
}
