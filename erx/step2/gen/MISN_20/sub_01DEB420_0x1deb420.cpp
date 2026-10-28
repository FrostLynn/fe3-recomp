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

// Function: sub_01DEB420
// Address: 0x1deb420 - 0x1deb4a4
void sub_01DEB420_0x1deb420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DEB420_0x1deb420");
#endif

    switch (ctx->pc) {
        case 0x1deb440u: goto label_1deb440;
        default: break;
    }

    ctx->pc = 0x1deb420u;

    // 0x1deb420: 0x28840080  slti        $a0, $a0, 0x80
    ctx->pc = 0x1deb420u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1deb424: 0x14800018  bnez        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1DEB424u;
    {
        const bool branch_taken_0x1deb424 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DEB428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB424u;
        // 0x1deb428: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deb424) {
            ctx->pc = 0x1DEB488u;
            goto label_1deb488;
        }
    }
    ctx->pc = 0x1DEB42Cu;
    // 0x1deb42c: 0x8f8e8014  lw          $t6, -0x7FEC($gp)
    ctx->pc = 0x1deb42cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1deb430: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1deb430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1deb434: 0x95cf056e  lhu         $t7, 0x56E($t6)
    ctx->pc = 0x1deb434u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
    // 0x1deb438: 0x35ef0001  ori         $t7, $t7, 0x1
    ctx->pc = 0x1deb438u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)1);
    // 0x1deb43c: 0xa5cf056e  sh          $t7, 0x56E($t6)
    ctx->pc = 0x1deb43cu;
    WRITE16(ADD32(GPR_U32(ctx, 14), 1390), (uint16_t)GPR_U32(ctx, 15));
label_1deb440:
    // 0x1deb440: 0x28af005a  slti        $t7, $a1, 0x5A
    ctx->pc = 0x1deb440u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)90) ? 1 : 0);
    // 0x1deb444: 0x55e00006  bnel        $t7, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DEB444u;
    {
        const bool branch_taken_0x1deb444 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1deb444) {
            ctx->pc = 0x1DEB448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DEB444u;
            // 0x1deb448: 0x95cd056e  lhu         $t5, 0x56E($t6) (Delay Slot)
            SET_GPR_ZE32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DEB460u;
            goto label_1deb460;
        }
    }
    ctx->pc = 0x1DEB44Cu;
    // 0x1deb44c: 0x95cf056e  lhu         $t7, 0x56E($t6)
    ctx->pc = 0x1deb44cu;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
    // 0x1deb450: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1deb450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1deb454: 0x35ef0002  ori         $t7, $t7, 0x2
    ctx->pc = 0x1deb454u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)2);
    // 0x1deb458: 0xa5cf056e  sh          $t7, 0x56E($t6)
    ctx->pc = 0x1deb458u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 1390), (uint16_t)GPR_U32(ctx, 15));
    // 0x1deb45c: 0x95cd056e  lhu         $t5, 0x56E($t6)
    ctx->pc = 0x1deb45cu;
    SET_GPR_ZE32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
label_1deb460:
    // 0x1deb460: 0x244e0001  addiu       $t6, $v0, 0x1
    ctx->pc = 0x1deb460u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1deb464: 0x31af0004  andi        $t7, $t5, 0x4
    ctx->pc = 0x1deb464u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)4);
    // 0x1deb468: 0x1cf100b  movn        $v0, $t6, $t7
    ctx->pc = 0x1deb468u;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 14));
    // 0x1deb46c: 0x31ac0008  andi        $t4, $t5, 0x8
    ctx->pc = 0x1deb46cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)8);
    // 0x1deb470: 0x244f0001  addiu       $t7, $v0, 0x1
    ctx->pc = 0x1deb470u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1deb474: 0x31ad0020  andi        $t5, $t5, 0x20
    ctx->pc = 0x1deb474u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)32);
    // 0x1deb478: 0x1ec100b  movn        $v0, $t7, $t4
    ctx->pc = 0x1deb478u;
    if (GPR_U64(ctx, 12) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 15));
    // 0x1deb47c: 0x244e0001  addiu       $t6, $v0, 0x1
    ctx->pc = 0x1deb47cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1deb480: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEB480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEB484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB480u;
        // 0x1deb484: 0x1cd100b  movn        $v0, $t6, $t5 (Delay Slot)
        if (GPR_U64(ctx, 13) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEB480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEB488u;
label_1deb488:
    // 0x1deb488: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x1DEB488u;
    {
        const bool branch_taken_0x1deb488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEB48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB488u;
        // 0x1deb48c: 0x8f8e8014  lw          $t6, -0x7FEC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deb488) {
            ctx->pc = 0x1DEB440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1deb440;
        }
    }
    ctx->pc = 0x1DEB490u;
    // 0x1deb490: 0x0  nop
    ctx->pc = 0x1deb490u;
    // NOP
    // 0x1deb494: 0x0  nop
    ctx->pc = 0x1deb494u;
    // NOP
    // 0x1deb498: 0x0  nop
    ctx->pc = 0x1deb498u;
    // NOP
    // 0x1deb49c: 0x0  nop
    ctx->pc = 0x1deb49cu;
    // NOP
    // 0x1deb4a0: 0x0  nop
    ctx->pc = 0x1deb4a0u;
    // NOP
    ctx->pc = 0x1deb4a4u;
}
