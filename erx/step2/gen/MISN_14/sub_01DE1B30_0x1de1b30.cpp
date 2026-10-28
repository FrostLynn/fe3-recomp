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

// Function: sub_01DE1B30
// Address: 0x1de1b30 - 0x1de1bc8
void sub_01DE1B30_0x1de1b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE1B30_0x1de1b30");
#endif

    switch (ctx->pc) {
        case 0x1de1b50u: goto label_1de1b50;
        case 0x1de1b6cu: goto label_1de1b6c;
        case 0x1de1b84u: goto label_1de1b84;
        case 0x1de1b98u: goto label_1de1b98;
        case 0x1de1bacu: goto label_1de1bac;
        default: break;
    }

    ctx->pc = 0x1de1b30u;

    // 0x1de1b30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1de1b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1de1b34: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x1de1b34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x1de1b38: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1de1b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1de1b3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1de1b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1de1b40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1de1b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1de1b44: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1de1b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1de1b48: 0xc778668  jal         func_1DE19A0
    ctx->pc = 0x1DE1B48u;
    SET_GPR_U32(ctx, 31, 0x1DE1B50u);
    ctx->pc = 0x1DE1B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE1B48u;
    // 0x1de1b4c: 0x24842340  addiu       $a0, $a0, 0x2340 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE19A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE19A0u, 0x1DE1B48u, 0x1DE1B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE1B50u;
label_1de1b50:
    // 0x1de1b50: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1DE1B50u;
    {
        const bool branch_taken_0x1de1b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE1B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE1B50u;
        // 0x1de1b54: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de1b50) {
            ctx->pc = 0x1DE1BACu;
            goto label_1de1bac;
        }
    }
    ctx->pc = 0x1DE1B58u;
    // 0x1de1b58: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de1b58u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de1b5c: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1de1b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1de1b60: 0x8c91000c  lw          $s1, 0xC($a0)
    ctx->pc = 0x1de1b60u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1de1b64: 0xc77864a  jal         func_1DE1928
    ctx->pc = 0x1DE1B64u;
    SET_GPR_U32(ctx, 31, 0x1DE1B6Cu);
    ctx->pc = 0x1DE1B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE1B64u;
    // 0x1de1b68: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE1928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE1928u, 0x1DE1B64u, 0x1DE1B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE1B6Cu;
label_1de1b6c:
    // 0x1de1b6c: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de1b6cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de1b70: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1de1b70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de1b74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1de1b74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de1b78: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1de1b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1de1b7c: 0xc778646  jal         func_1DE1918
    ctx->pc = 0x1DE1B7Cu;
    SET_GPR_U32(ctx, 31, 0x1DE1B84u);
    ctx->pc = 0x1DE1B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE1B7Cu;
    // 0x1de1b80: 0x26100390  addiu       $s0, $s0, 0x390 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE1918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE1918u, 0x1DE1B7Cu, 0x1DE1B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE1B84u;
label_1de1b84:
    // 0x1de1b84: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1de1b84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de1b88: 0x2405015f  addiu       $a1, $zero, 0x15F
    ctx->pc = 0x1de1b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x1de1b8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1de1b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de1b90: 0xc778648  jal         func_1DE1920
    ctx->pc = 0x1DE1B90u;
    SET_GPR_U32(ctx, 31, 0x1DE1B98u);
    ctx->pc = 0x1DE1B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE1B90u;
    // 0x1de1b94: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE1920u, 0x1DE1B90u, 0x1DE1B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE1B98u;
label_1de1b98:
    // 0x1de1b98: 0x26310390  addiu       $s1, $s1, 0x390
    ctx->pc = 0x1de1b98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1de1b9c: 0x24050142  addiu       $a1, $zero, 0x142
    ctx->pc = 0x1de1b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 322));
    // 0x1de1ba0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1de1ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de1ba4: 0xc778648  jal         func_1DE1920
    ctx->pc = 0x1DE1BA4u;
    SET_GPR_U32(ctx, 31, 0x1DE1BACu);
    ctx->pc = 0x1DE1BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE1BA4u;
    // 0x1de1ba8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE1920u, 0x1DE1BA4u, 0x1DE1BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE1BACu;
label_1de1bac:
    // 0x1de1bac: 0x12102b  sltu        $v0, $zero, $s2
    ctx->pc = 0x1de1bacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1de1bb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1de1bb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de1bb4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1de1bb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1de1bb8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1de1bb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de1bbc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1de1bbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1de1bc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE1BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE1BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE1BC0u;
        // 0x1de1bc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE1BC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE1BC8u;
}
