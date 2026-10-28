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

// Function: sub_01DCDF40
// Address: 0x1dcdf40 - 0x1dcdfbc
void sub_01DCDF40_0x1dcdf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DCDF40_0x1dcdf40");
#endif

    switch (ctx->pc) {
        case 0x1dcdf60u: goto label_1dcdf60;
        default: break;
    }

    ctx->pc = 0x1dcdf40u;

    // 0x1dcdf40: 0x28840080  slti        $a0, $a0, 0x80
    ctx->pc = 0x1dcdf40u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1dcdf44: 0x14800015  bnez        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1DCDF44u;
    {
        const bool branch_taken_0x1dcdf44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCDF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCDF44u;
        // 0x1dcdf48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcdf44) {
            ctx->pc = 0x1DCDF9Cu;
            goto label_1dcdf9c;
        }
    }
    ctx->pc = 0x1DCDF4Cu;
    // 0x1dcdf4c: 0x8f8e8014  lw          $t6, -0x7FEC($gp)
    ctx->pc = 0x1dcdf4cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dcdf50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dcdf50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dcdf54: 0x95cf056e  lhu         $t7, 0x56E($t6)
    ctx->pc = 0x1dcdf54u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
    // 0x1dcdf58: 0x35ef0001  ori         $t7, $t7, 0x1
    ctx->pc = 0x1dcdf58u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)1);
    // 0x1dcdf5c: 0xa5cf056e  sh          $t7, 0x56E($t6)
    ctx->pc = 0x1dcdf5cu;
    WRITE16(ADD32(GPR_U32(ctx, 14), 1390), (uint16_t)GPR_U32(ctx, 15));
label_1dcdf60:
    // 0x1dcdf60: 0x28af003c  slti        $t7, $a1, 0x3C
    ctx->pc = 0x1dcdf60u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x1dcdf64: 0x55e00006  bnel        $t7, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DCDF64u;
    {
        const bool branch_taken_0x1dcdf64 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dcdf64) {
            ctx->pc = 0x1DCDF68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DCDF64u;
            // 0x1dcdf68: 0x95ce056e  lhu         $t6, 0x56E($t6) (Delay Slot)
            SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DCDF80u;
            goto label_1dcdf80;
        }
    }
    ctx->pc = 0x1DCDF6Cu;
    // 0x1dcdf6c: 0x95cf056e  lhu         $t7, 0x56E($t6)
    ctx->pc = 0x1dcdf6cu;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
    // 0x1dcdf70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dcdf70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1dcdf74: 0x35ef0002  ori         $t7, $t7, 0x2
    ctx->pc = 0x1dcdf74u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)2);
    // 0x1dcdf78: 0xa5cf056e  sh          $t7, 0x56E($t6)
    ctx->pc = 0x1dcdf78u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 1390), (uint16_t)GPR_U32(ctx, 15));
    // 0x1dcdf7c: 0x95ce056e  lhu         $t6, 0x56E($t6)
    ctx->pc = 0x1dcdf7cu;
    SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
label_1dcdf80:
    // 0x1dcdf80: 0x244c0001  addiu       $t4, $v0, 0x1
    ctx->pc = 0x1dcdf80u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1dcdf84: 0x31cd0004  andi        $t5, $t6, 0x4
    ctx->pc = 0x1dcdf84u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)4);
    // 0x1dcdf88: 0x18d100b  movn        $v0, $t4, $t5
    ctx->pc = 0x1dcdf88u;
    if (GPR_U64(ctx, 13) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 12));
    // 0x1dcdf8c: 0x31ce0010  andi        $t6, $t6, 0x10
    ctx->pc = 0x1dcdf8cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)16);
    // 0x1dcdf90: 0x244f0001  addiu       $t7, $v0, 0x1
    ctx->pc = 0x1dcdf90u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1dcdf94: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCDF94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCDF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCDF94u;
        // 0x1dcdf98: 0x1ee100b  movn        $v0, $t7, $t6 (Delay Slot)
        if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCDF94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCDF9Cu;
label_1dcdf9c:
    // 0x1dcdf9c: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x1DCDF9Cu;
    {
        const bool branch_taken_0x1dcdf9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCDFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCDF9Cu;
        // 0x1dcdfa0: 0x8f8e8014  lw          $t6, -0x7FEC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcdf9c) {
            ctx->pc = 0x1DCDF60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dcdf60;
        }
    }
    ctx->pc = 0x1DCDFA4u;
    // 0x1dcdfa4: 0x0  nop
    ctx->pc = 0x1dcdfa4u;
    // NOP
    // 0x1dcdfa8: 0x0  nop
    ctx->pc = 0x1dcdfa8u;
    // NOP
    // 0x1dcdfac: 0x0  nop
    ctx->pc = 0x1dcdfacu;
    // NOP
    // 0x1dcdfb0: 0x0  nop
    ctx->pc = 0x1dcdfb0u;
    // NOP
    // 0x1dcdfb4: 0x0  nop
    ctx->pc = 0x1dcdfb4u;
    // NOP
    // 0x1dcdfb8: 0x0  nop
    ctx->pc = 0x1dcdfb8u;
    // NOP
    ctx->pc = 0x1dcdfbcu;
}
