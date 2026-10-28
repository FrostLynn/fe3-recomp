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

// Function: sub_01C02638
// Address: 0x1c02638 - 0x1c02688
void sub_01C02638_0x1c02638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C02638_0x1c02638");
#endif

    ctx->pc = 0x1c02638u;

    // 0x1c02638: 0x8c8f0248  lw          $t7, 0x248($a0)
    ctx->pc = 0x1c02638u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 584)));
    // 0x1c0263c: 0x240e0147  addiu       $t6, $zero, 0x147
    ctx->pc = 0x1c0263cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 327));
    // 0x1c02640: 0xac8e0d18  sw          $t6, 0xD18($a0)
    ctx->pc = 0x1c02640u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3352), GPR_U32(ctx, 14));
    // 0x1c02644: 0x8dec0044  lw          $t4, 0x44($t7)
    ctx->pc = 0x1c02644u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 68)));
    // 0x1c02648: 0x240e007e  addiu       $t6, $zero, 0x7E
    ctx->pc = 0x1c02648u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x1c0264c: 0x240f007f  addiu       $t7, $zero, 0x7F
    ctx->pc = 0x1c0264cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1c02650: 0xac8e0d04  sw          $t6, 0xD04($a0)
    ctx->pc = 0x1c02650u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3332), GPR_U32(ctx, 14));
    // 0x1c02654: 0xac8f0d00  sw          $t7, 0xD00($a0)
    ctx->pc = 0x1c02654u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3328), GPR_U32(ctx, 15));
    // 0x1c02658: 0x240e0148  addiu       $t6, $zero, 0x148
    ctx->pc = 0x1c02658u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 328));
    // 0x1c0265c: 0x8d8d043c  lw          $t5, 0x43C($t4)
    ctx->pc = 0x1c0265cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 1084)));
    // 0x1c02660: 0x240f014a  addiu       $t7, $zero, 0x14A
    ctx->pc = 0x1c02660u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 330));
    // 0x1c02664: 0xac8e0d20  sw          $t6, 0xD20($a0)
    ctx->pc = 0x1c02664u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3360), GPR_U32(ctx, 14));
    // 0x1c02668: 0xac8f0d1c  sw          $t7, 0xD1C($a0)
    ctx->pc = 0x1c02668u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3356), GPR_U32(ctx, 15));
    // 0x1c0266c: 0x240f000a  addiu       $t7, $zero, 0xA
    ctx->pc = 0x1c0266cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c02670: 0x15af0002  bne         $t5, $t7, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C02670u;
    {
        const bool branch_taken_0x1c02670 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C02674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C02670u;
        // 0x1c02674: 0x240f015c  addiu       $t7, $zero, 0x15C (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 348));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c02670) {
            ctx->pc = 0x1C0267Cu;
            goto label_1c0267c;
        }
    }
    ctx->pc = 0x1C02678u;
    // 0x1c02678: 0xac8f0d18  sw          $t7, 0xD18($a0)
    ctx->pc = 0x1c02678u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3352), GPR_U32(ctx, 15));
label_1c0267c:
    // 0x1c0267c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0267Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0267Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C02684u;
    // 0x1c02684: 0x0  nop
    ctx->pc = 0x1c02684u;
    // NOP
    ctx->pc = 0x1c02688u;
}
