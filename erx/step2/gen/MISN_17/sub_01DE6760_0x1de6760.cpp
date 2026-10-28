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

// Function: sub_01DE6760
// Address: 0x1de6760 - 0x1de67c8
void sub_01DE6760_0x1de6760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE6760_0x1de6760");
#endif

    switch (ctx->pc) {
        case 0x1de679cu: goto label_1de679c;
        case 0x1de67a4u: goto label_1de67a4;
        case 0x1de67a8u: goto label_1de67a8;
        default: break;
    }

    ctx->pc = 0x1de6760u;

    // 0x1de6760: 0x8f8c8014  lw          $t4, -0x7FEC($gp)
    ctx->pc = 0x1de6760u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de6764: 0xaf808018  sw          $zero, -0x7FE8($gp)
    ctx->pc = 0x1de6764u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934552), GPR_U32(ctx, 0));
    // 0x1de6768: 0x8d8e0118  lw          $t6, 0x118($t4)
    ctx->pc = 0x1de6768u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 280)));
    // 0x1de676c: 0x25cefff9  addiu       $t6, $t6, -0x7
    ctx->pc = 0x1de676cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967289));
    // 0x1de6770: 0x2dcf001d  sltiu       $t7, $t6, 0x1D
    ctx->pc = 0x1de6770u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)29) ? 1 : 0);
    // 0x1de6774: 0x11e0000c  beqz        $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x1DE6774u;
    {
        const bool branch_taken_0x1de6774 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE6778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE6774u;
        // 0x1de6778: 0xaf80801c  sw          $zero, -0x7FE4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934556), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de6774) {
            ctx->pc = 0x1DE67A8u;
            goto label_1de67a8;
        }
    }
    ctx->pc = 0x1DE677Cu;
    // 0x1de677c: 0xe7880  sll         $t7, $t6, 2
    ctx->pc = 0x1de677cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x1de6780: 0x3c0e01de  lui         $t6, 0x1DE
    ctx->pc = 0x1de6780u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)478 << 16));
    // 0x1de6784: 0x25ce69ec  addiu       $t6, $t6, 0x69EC
    ctx->pc = 0x1de6784u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 27116));
    // 0x1de6788: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1de6788u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1de678c: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1de678cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1de6790: 0x1a00008  jr          $t5
    ctx->pc = 0x1DE6790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DE6798u: goto label_1de6798;
            case 0x1DE67A8u: goto label_1de67a8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE6790u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1DE6798u;
label_1de6798:
    // 0x1de6798: 0x240f1800  addiu       $t7, $zero, 0x1800
    ctx->pc = 0x1de6798u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
label_1de679c:
    // 0x1de679c: 0xad8f0290  sw          $t7, 0x290($t4)
    ctx->pc = 0x1de679cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 656), GPR_U32(ctx, 15));
    // 0x1de67a0: 0x240e2800  addiu       $t6, $zero, 0x2800
    ctx->pc = 0x1de67a0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 10240));
label_1de67a4:
    // 0x1de67a4: 0xad8e029c  sw          $t6, 0x29C($t4)
    ctx->pc = 0x1de67a4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 668), GPR_U32(ctx, 14));
label_1de67a8:
    // 0x1de67a8: 0x918f042a  lbu         $t7, 0x42A($t4)
    ctx->pc = 0x1de67a8u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1066)));
    // 0x1de67ac: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DE67ACu;
    {
        const bool branch_taken_0x1de67ac = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de67ac) {
            ctx->pc = 0x1DE67C0u;
            goto label_1de67c0;
        }
    }
    ctx->pc = 0x1DE67B4u;
    // 0x1de67b4: 0x958f056e  lhu         $t7, 0x56E($t4)
    ctx->pc = 0x1de67b4u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 1390)));
    // 0x1de67b8: 0x35ef0008  ori         $t7, $t7, 0x8
    ctx->pc = 0x1de67b8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)8);
    // 0x1de67bc: 0xa58f056e  sh          $t7, 0x56E($t4)
    ctx->pc = 0x1de67bcu;
    WRITE16(ADD32(GPR_U32(ctx, 12), 1390), (uint16_t)GPR_U32(ctx, 15));
label_1de67c0:
    // 0x1de67c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE67C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE67C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE67C8u;
}
