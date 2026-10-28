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

// Function: sub_01DD41C0
// Address: 0x1dd41c0 - 0x1dd4244
void sub_01DD41C0_0x1dd41c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD41C0_0x1dd41c0");
#endif

    switch (ctx->pc) {
        case 0x1dd41e0u: goto label_1dd41e0;
        default: break;
    }

    ctx->pc = 0x1dd41c0u;

    // 0x1dd41c0: 0x28840080  slti        $a0, $a0, 0x80
    ctx->pc = 0x1dd41c0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1dd41c4: 0x14800018  bnez        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1DD41C4u;
    {
        const bool branch_taken_0x1dd41c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD41C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD41C4u;
        // 0x1dd41c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd41c4) {
            ctx->pc = 0x1DD4228u;
            goto label_1dd4228;
        }
    }
    ctx->pc = 0x1DD41CCu;
    // 0x1dd41cc: 0x8f8e8014  lw          $t6, -0x7FEC($gp)
    ctx->pc = 0x1dd41ccu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd41d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dd41d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd41d4: 0x95cf056e  lhu         $t7, 0x56E($t6)
    ctx->pc = 0x1dd41d4u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
    // 0x1dd41d8: 0x35ef0001  ori         $t7, $t7, 0x1
    ctx->pc = 0x1dd41d8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)1);
    // 0x1dd41dc: 0xa5cf056e  sh          $t7, 0x56E($t6)
    ctx->pc = 0x1dd41dcu;
    WRITE16(ADD32(GPR_U32(ctx, 14), 1390), (uint16_t)GPR_U32(ctx, 15));
label_1dd41e0:
    // 0x1dd41e0: 0x28af005a  slti        $t7, $a1, 0x5A
    ctx->pc = 0x1dd41e0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)90) ? 1 : 0);
    // 0x1dd41e4: 0x55e00006  bnel        $t7, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DD41E4u;
    {
        const bool branch_taken_0x1dd41e4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd41e4) {
            ctx->pc = 0x1DD41E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DD41E4u;
            // 0x1dd41e8: 0x95cd056e  lhu         $t5, 0x56E($t6) (Delay Slot)
            SET_GPR_ZE32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DD4200u;
            goto label_1dd4200;
        }
    }
    ctx->pc = 0x1DD41ECu;
    // 0x1dd41ec: 0x95cf056e  lhu         $t7, 0x56E($t6)
    ctx->pc = 0x1dd41ecu;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
    // 0x1dd41f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dd41f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1dd41f4: 0x35ef0002  ori         $t7, $t7, 0x2
    ctx->pc = 0x1dd41f4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)2);
    // 0x1dd41f8: 0xa5cf056e  sh          $t7, 0x56E($t6)
    ctx->pc = 0x1dd41f8u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 1390), (uint16_t)GPR_U32(ctx, 15));
    // 0x1dd41fc: 0x95cd056e  lhu         $t5, 0x56E($t6)
    ctx->pc = 0x1dd41fcu;
    SET_GPR_ZE32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
label_1dd4200:
    // 0x1dd4200: 0x244e0001  addiu       $t6, $v0, 0x1
    ctx->pc = 0x1dd4200u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1dd4204: 0x31af0004  andi        $t7, $t5, 0x4
    ctx->pc = 0x1dd4204u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)4);
    // 0x1dd4208: 0x1cf100b  movn        $v0, $t6, $t7
    ctx->pc = 0x1dd4208u;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 14));
    // 0x1dd420c: 0x31ac0010  andi        $t4, $t5, 0x10
    ctx->pc = 0x1dd420cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)16);
    // 0x1dd4210: 0x244f0001  addiu       $t7, $v0, 0x1
    ctx->pc = 0x1dd4210u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1dd4214: 0x31ad0020  andi        $t5, $t5, 0x20
    ctx->pc = 0x1dd4214u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)32);
    // 0x1dd4218: 0x1ec100b  movn        $v0, $t7, $t4
    ctx->pc = 0x1dd4218u;
    if (GPR_U64(ctx, 12) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 15));
    // 0x1dd421c: 0x244e0004  addiu       $t6, $v0, 0x4
    ctx->pc = 0x1dd421cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1dd4220: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD4220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD4224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD4220u;
        // 0x1dd4224: 0x1cd100b  movn        $v0, $t6, $t5 (Delay Slot)
        if (GPR_U64(ctx, 13) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD4220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD4228u;
label_1dd4228:
    // 0x1dd4228: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x1DD4228u;
    {
        const bool branch_taken_0x1dd4228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD422Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD4228u;
        // 0x1dd422c: 0x8f8e8014  lw          $t6, -0x7FEC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd4228) {
            ctx->pc = 0x1DD41E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dd41e0;
        }
    }
    ctx->pc = 0x1DD4230u;
    // 0x1dd4230: 0x0  nop
    ctx->pc = 0x1dd4230u;
    // NOP
    // 0x1dd4234: 0x0  nop
    ctx->pc = 0x1dd4234u;
    // NOP
    // 0x1dd4238: 0x0  nop
    ctx->pc = 0x1dd4238u;
    // NOP
    // 0x1dd423c: 0x0  nop
    ctx->pc = 0x1dd423cu;
    // NOP
    // 0x1dd4240: 0x0  nop
    ctx->pc = 0x1dd4240u;
    // NOP
    ctx->pc = 0x1dd4244u;
}
