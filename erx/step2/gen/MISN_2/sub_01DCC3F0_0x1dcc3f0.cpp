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

// Function: sub_01DCC3F0
// Address: 0x1dcc3f0 - 0x1dcc46c
void sub_01DCC3F0_0x1dcc3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DCC3F0_0x1dcc3f0");
#endif

    switch (ctx->pc) {
        case 0x1dcc410u: goto label_1dcc410;
        default: break;
    }

    ctx->pc = 0x1dcc3f0u;

    // 0x1dcc3f0: 0x288400cd  slti        $a0, $a0, 0xCD
    ctx->pc = 0x1dcc3f0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)205) ? 1 : 0);
    // 0x1dcc3f4: 0x14800015  bnez        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1DCC3F4u;
    {
        const bool branch_taken_0x1dcc3f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCC3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCC3F4u;
        // 0x1dcc3f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcc3f4) {
            ctx->pc = 0x1DCC44Cu;
            goto label_1dcc44c;
        }
    }
    ctx->pc = 0x1DCC3FCu;
    // 0x1dcc3fc: 0x8f8e8030  lw          $t6, -0x7FD0($gp)
    ctx->pc = 0x1dcc3fcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934576)));
    // 0x1dcc400: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dcc400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dcc404: 0x95cf056e  lhu         $t7, 0x56E($t6)
    ctx->pc = 0x1dcc404u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
    // 0x1dcc408: 0x35ef0001  ori         $t7, $t7, 0x1
    ctx->pc = 0x1dcc408u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)1);
    // 0x1dcc40c: 0xa5cf056e  sh          $t7, 0x56E($t6)
    ctx->pc = 0x1dcc40cu;
    WRITE16(ADD32(GPR_U32(ctx, 14), 1390), (uint16_t)GPR_U32(ctx, 15));
label_1dcc410:
    // 0x1dcc410: 0x28af005a  slti        $t7, $a1, 0x5A
    ctx->pc = 0x1dcc410u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)90) ? 1 : 0);
    // 0x1dcc414: 0x55e00006  bnel        $t7, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DCC414u;
    {
        const bool branch_taken_0x1dcc414 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dcc414) {
            ctx->pc = 0x1DCC418u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DCC414u;
            // 0x1dcc418: 0x95ce056e  lhu         $t6, 0x56E($t6) (Delay Slot)
            SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DCC430u;
            goto label_1dcc430;
        }
    }
    ctx->pc = 0x1DCC41Cu;
    // 0x1dcc41c: 0x95cf056e  lhu         $t7, 0x56E($t6)
    ctx->pc = 0x1dcc41cu;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
    // 0x1dcc420: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dcc420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1dcc424: 0x35ef0002  ori         $t7, $t7, 0x2
    ctx->pc = 0x1dcc424u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)2);
    // 0x1dcc428: 0xa5cf056e  sh          $t7, 0x56E($t6)
    ctx->pc = 0x1dcc428u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 1390), (uint16_t)GPR_U32(ctx, 15));
    // 0x1dcc42c: 0x95ce056e  lhu         $t6, 0x56E($t6)
    ctx->pc = 0x1dcc42cu;
    SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
label_1dcc430:
    // 0x1dcc430: 0x244c0001  addiu       $t4, $v0, 0x1
    ctx->pc = 0x1dcc430u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1dcc434: 0x31cd0004  andi        $t5, $t6, 0x4
    ctx->pc = 0x1dcc434u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)4);
    // 0x1dcc438: 0x18d100b  movn        $v0, $t4, $t5
    ctx->pc = 0x1dcc438u;
    if (GPR_U64(ctx, 13) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 12));
    // 0x1dcc43c: 0x31ce0010  andi        $t6, $t6, 0x10
    ctx->pc = 0x1dcc43cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)16);
    // 0x1dcc440: 0x244f0001  addiu       $t7, $v0, 0x1
    ctx->pc = 0x1dcc440u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1dcc444: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCC444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCC448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCC444u;
        // 0x1dcc448: 0x1ee100b  movn        $v0, $t7, $t6 (Delay Slot)
        if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCC444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCC44Cu;
label_1dcc44c:
    // 0x1dcc44c: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x1DCC44Cu;
    {
        const bool branch_taken_0x1dcc44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCC450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCC44Cu;
        // 0x1dcc450: 0x8f8e8030  lw          $t6, -0x7FD0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcc44c) {
            ctx->pc = 0x1DCC410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dcc410;
        }
    }
    ctx->pc = 0x1DCC454u;
    // 0x1dcc454: 0x0  nop
    ctx->pc = 0x1dcc454u;
    // NOP
    // 0x1dcc458: 0x0  nop
    ctx->pc = 0x1dcc458u;
    // NOP
    // 0x1dcc45c: 0x0  nop
    ctx->pc = 0x1dcc45cu;
    // NOP
    // 0x1dcc460: 0x0  nop
    ctx->pc = 0x1dcc460u;
    // NOP
    // 0x1dcc464: 0x0  nop
    ctx->pc = 0x1dcc464u;
    // NOP
    // 0x1dcc468: 0x0  nop
    ctx->pc = 0x1dcc468u;
    // NOP
    ctx->pc = 0x1dcc46cu;
}
