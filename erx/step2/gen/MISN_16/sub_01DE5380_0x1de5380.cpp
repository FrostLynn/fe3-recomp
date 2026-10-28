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

// Function: sub_01DE5380
// Address: 0x1de5380 - 0x1de53fc
void sub_01DE5380_0x1de5380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE5380_0x1de5380");
#endif

    switch (ctx->pc) {
        case 0x1de53a0u: goto label_1de53a0;
        default: break;
    }

    ctx->pc = 0x1de5380u;

    // 0x1de5380: 0x28840080  slti        $a0, $a0, 0x80
    ctx->pc = 0x1de5380u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1de5384: 0x14800015  bnez        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1DE5384u;
    {
        const bool branch_taken_0x1de5384 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE5388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE5384u;
        // 0x1de5388: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de5384) {
            ctx->pc = 0x1DE53DCu;
            goto label_1de53dc;
        }
    }
    ctx->pc = 0x1DE538Cu;
    // 0x1de538c: 0x8f8e8014  lw          $t6, -0x7FEC($gp)
    ctx->pc = 0x1de538cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de5390: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1de5390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de5394: 0x95cf056e  lhu         $t7, 0x56E($t6)
    ctx->pc = 0x1de5394u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
    // 0x1de5398: 0x35ef0001  ori         $t7, $t7, 0x1
    ctx->pc = 0x1de5398u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)1);
    // 0x1de539c: 0xa5cf056e  sh          $t7, 0x56E($t6)
    ctx->pc = 0x1de539cu;
    WRITE16(ADD32(GPR_U32(ctx, 14), 1390), (uint16_t)GPR_U32(ctx, 15));
label_1de53a0:
    // 0x1de53a0: 0x28af005a  slti        $t7, $a1, 0x5A
    ctx->pc = 0x1de53a0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)90) ? 1 : 0);
    // 0x1de53a4: 0x55e00006  bnel        $t7, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DE53A4u;
    {
        const bool branch_taken_0x1de53a4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de53a4) {
            ctx->pc = 0x1DE53A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE53A4u;
            // 0x1de53a8: 0x95ce056e  lhu         $t6, 0x56E($t6) (Delay Slot)
            SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE53C0u;
            goto label_1de53c0;
        }
    }
    ctx->pc = 0x1DE53ACu;
    // 0x1de53ac: 0x95cf056e  lhu         $t7, 0x56E($t6)
    ctx->pc = 0x1de53acu;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
    // 0x1de53b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1de53b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1de53b4: 0x35ef0002  ori         $t7, $t7, 0x2
    ctx->pc = 0x1de53b4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)2);
    // 0x1de53b8: 0xa5cf056e  sh          $t7, 0x56E($t6)
    ctx->pc = 0x1de53b8u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 1390), (uint16_t)GPR_U32(ctx, 15));
    // 0x1de53bc: 0x95ce056e  lhu         $t6, 0x56E($t6)
    ctx->pc = 0x1de53bcu;
    SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
label_1de53c0:
    // 0x1de53c0: 0x244c0001  addiu       $t4, $v0, 0x1
    ctx->pc = 0x1de53c0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1de53c4: 0x31cd0004  andi        $t5, $t6, 0x4
    ctx->pc = 0x1de53c4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)4);
    // 0x1de53c8: 0x18d100b  movn        $v0, $t4, $t5
    ctx->pc = 0x1de53c8u;
    if (GPR_U64(ctx, 13) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 12));
    // 0x1de53cc: 0x31ce0010  andi        $t6, $t6, 0x10
    ctx->pc = 0x1de53ccu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)16);
    // 0x1de53d0: 0x244f0001  addiu       $t7, $v0, 0x1
    ctx->pc = 0x1de53d0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1de53d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE53D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE53D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE53D4u;
        // 0x1de53d8: 0x1ee100b  movn        $v0, $t7, $t6 (Delay Slot)
        if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE53D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE53DCu;
label_1de53dc:
    // 0x1de53dc: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x1DE53DCu;
    {
        const bool branch_taken_0x1de53dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE53E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE53DCu;
        // 0x1de53e0: 0x8f8e8014  lw          $t6, -0x7FEC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de53dc) {
            ctx->pc = 0x1DE53A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1de53a0;
        }
    }
    ctx->pc = 0x1DE53E4u;
    // 0x1de53e4: 0x0  nop
    ctx->pc = 0x1de53e4u;
    // NOP
    // 0x1de53e8: 0x0  nop
    ctx->pc = 0x1de53e8u;
    // NOP
    // 0x1de53ec: 0x0  nop
    ctx->pc = 0x1de53ecu;
    // NOP
    // 0x1de53f0: 0x0  nop
    ctx->pc = 0x1de53f0u;
    // NOP
    // 0x1de53f4: 0x0  nop
    ctx->pc = 0x1de53f4u;
    // NOP
    // 0x1de53f8: 0x0  nop
    ctx->pc = 0x1de53f8u;
    // NOP
    ctx->pc = 0x1de53fcu;
}
