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

// Function: sub_01DE7250
// Address: 0x1de7250 - 0x1de72d4
void sub_01DE7250_0x1de7250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE7250_0x1de7250");
#endif

    switch (ctx->pc) {
        case 0x1de7270u: goto label_1de7270;
        default: break;
    }

    ctx->pc = 0x1de7250u;

    // 0x1de7250: 0x28840080  slti        $a0, $a0, 0x80
    ctx->pc = 0x1de7250u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1de7254: 0x14800018  bnez        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1DE7254u;
    {
        const bool branch_taken_0x1de7254 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE7258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE7254u;
        // 0x1de7258: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de7254) {
            ctx->pc = 0x1DE72B8u;
            goto label_1de72b8;
        }
    }
    ctx->pc = 0x1DE725Cu;
    // 0x1de725c: 0x8f8e8014  lw          $t6, -0x7FEC($gp)
    ctx->pc = 0x1de725cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de7260: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1de7260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de7264: 0x95cf056e  lhu         $t7, 0x56E($t6)
    ctx->pc = 0x1de7264u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
    // 0x1de7268: 0x35ef0001  ori         $t7, $t7, 0x1
    ctx->pc = 0x1de7268u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)1);
    // 0x1de726c: 0xa5cf056e  sh          $t7, 0x56E($t6)
    ctx->pc = 0x1de726cu;
    WRITE16(ADD32(GPR_U32(ctx, 14), 1390), (uint16_t)GPR_U32(ctx, 15));
label_1de7270:
    // 0x1de7270: 0x28af005a  slti        $t7, $a1, 0x5A
    ctx->pc = 0x1de7270u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)90) ? 1 : 0);
    // 0x1de7274: 0x55e00006  bnel        $t7, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DE7274u;
    {
        const bool branch_taken_0x1de7274 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de7274) {
            ctx->pc = 0x1DE7278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE7274u;
            // 0x1de7278: 0x95cd056e  lhu         $t5, 0x56E($t6) (Delay Slot)
            SET_GPR_ZE32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE7290u;
            goto label_1de7290;
        }
    }
    ctx->pc = 0x1DE727Cu;
    // 0x1de727c: 0x95cf056e  lhu         $t7, 0x56E($t6)
    ctx->pc = 0x1de727cu;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
    // 0x1de7280: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1de7280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1de7284: 0x35ef0002  ori         $t7, $t7, 0x2
    ctx->pc = 0x1de7284u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)2);
    // 0x1de7288: 0xa5cf056e  sh          $t7, 0x56E($t6)
    ctx->pc = 0x1de7288u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 1390), (uint16_t)GPR_U32(ctx, 15));
    // 0x1de728c: 0x95cd056e  lhu         $t5, 0x56E($t6)
    ctx->pc = 0x1de728cu;
    SET_GPR_ZE32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
label_1de7290:
    // 0x1de7290: 0x244e0001  addiu       $t6, $v0, 0x1
    ctx->pc = 0x1de7290u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1de7294: 0x31af0004  andi        $t7, $t5, 0x4
    ctx->pc = 0x1de7294u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)4);
    // 0x1de7298: 0x1cf100b  movn        $v0, $t6, $t7
    ctx->pc = 0x1de7298u;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 14));
    // 0x1de729c: 0x31ac0008  andi        $t4, $t5, 0x8
    ctx->pc = 0x1de729cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)8);
    // 0x1de72a0: 0x244f0001  addiu       $t7, $v0, 0x1
    ctx->pc = 0x1de72a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1de72a4: 0x31ad0020  andi        $t5, $t5, 0x20
    ctx->pc = 0x1de72a4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)32);
    // 0x1de72a8: 0x1ec100b  movn        $v0, $t7, $t4
    ctx->pc = 0x1de72a8u;
    if (GPR_U64(ctx, 12) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 15));
    // 0x1de72ac: 0x244e0004  addiu       $t6, $v0, 0x4
    ctx->pc = 0x1de72acu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1de72b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE72B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE72B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE72B0u;
        // 0x1de72b4: 0x1cd100b  movn        $v0, $t6, $t5 (Delay Slot)
        if (GPR_U64(ctx, 13) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE72B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE72B8u;
label_1de72b8:
    // 0x1de72b8: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x1DE72B8u;
    {
        const bool branch_taken_0x1de72b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE72BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE72B8u;
        // 0x1de72bc: 0x8f8e8014  lw          $t6, -0x7FEC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de72b8) {
            ctx->pc = 0x1DE7270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1de7270;
        }
    }
    ctx->pc = 0x1DE72C0u;
    // 0x1de72c0: 0x0  nop
    ctx->pc = 0x1de72c0u;
    // NOP
    // 0x1de72c4: 0x0  nop
    ctx->pc = 0x1de72c4u;
    // NOP
    // 0x1de72c8: 0x0  nop
    ctx->pc = 0x1de72c8u;
    // NOP
    // 0x1de72cc: 0x0  nop
    ctx->pc = 0x1de72ccu;
    // NOP
    // 0x1de72d0: 0x0  nop
    ctx->pc = 0x1de72d0u;
    // NOP
    ctx->pc = 0x1de72d4u;
}
