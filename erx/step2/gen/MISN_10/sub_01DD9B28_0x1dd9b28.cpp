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

// Function: sub_01DD9B28
// Address: 0x1dd9b28 - 0x1dd9bf0
void sub_01DD9B28_0x1dd9b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD9B28_0x1dd9b28");
#endif

    switch (ctx->pc) {
        case 0x1dd9b50u: goto label_1dd9b50;
        case 0x1dd9b64u: goto label_1dd9b64;
        case 0x1dd9b78u: goto label_1dd9b78;
        case 0x1dd9b90u: goto label_1dd9b90;
        case 0x1dd9ba0u: goto label_1dd9ba0;
        default: break;
    }

    ctx->pc = 0x1dd9b28u;

    // 0x1dd9b28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dd9b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dd9b2c: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1dd9b2cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dd9b30: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1dd9b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1dd9b34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dd9b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dd9b38: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1dd9b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1dd9b3c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dd9b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dd9b40: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1dd9b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1dd9b44: 0x8c91000c  lw          $s1, 0xC($a0)
    ctx->pc = 0x1dd9b44u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1dd9b48: 0xc776586  jal         func_1DD9618
    ctx->pc = 0x1DD9B48u;
    SET_GPR_U32(ctx, 31, 0x1DD9B50u);
    ctx->pc = 0x1DD9B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD9B48u;
    // 0x1dd9b4c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD9618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD9618u, 0x1DD9B48u, 0x1DD9B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD9B50u;
label_1dd9b50:
    // 0x1dd9b50: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1dd9b50u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dd9b54: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1dd9b54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd9b58: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1dd9b58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd9b5c: 0xc77658a  jal         func_1DD9628
    ctx->pc = 0x1DD9B5Cu;
    SET_GPR_U32(ctx, 31, 0x1DD9B64u);
    ctx->pc = 0x1DD9B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD9B5Cu;
    // 0x1dd9b60: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD9628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD9628u, 0x1DD9B5Cu, 0x1DD9B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD9B64u;
label_1dd9b64:
    // 0x1dd9b64: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1dd9b64u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dd9b68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dd9b68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd9b6c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1dd9b6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd9b70: 0xc77658c  jal         func_1DD9630
    ctx->pc = 0x1DD9B70u;
    SET_GPR_U32(ctx, 31, 0x1DD9B78u);
    ctx->pc = 0x1DD9B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD9B70u;
    // 0x1dd9b74: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD9630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD9630u, 0x1DD9B70u, 0x1DD9B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD9B78u;
label_1dd9b78:
    // 0x1dd9b78: 0x8e0f0008  lw          $t7, 0x8($s0)
    ctx->pc = 0x1dd9b78u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1dd9b7c: 0x8f848018  lw          $a0, -0x7FE8($gp)
    ctx->pc = 0x1dd9b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dd9b80: 0x39ef001b  xori        $t7, $t7, 0x1B
    ctx->pc = 0x1dd9b80u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ (uint64_t)(uint16_t)27);
    // 0x1dd9b84: 0x4f800b  movn        $s0, $v0, $t7
    ctx->pc = 0x1dd9b84u;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x1dd9b88: 0xc776596  jal         func_1DD9658
    ctx->pc = 0x1DD9B88u;
    SET_GPR_U32(ctx, 31, 0x1DD9B90u);
    ctx->pc = 0x1DD9B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD9B88u;
    // 0x1dd9b8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD9658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD9658u, 0x1DD9B88u, 0x1DD9B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD9B90u;
label_1dd9b90:
    // 0x1dd9b90: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1DD9B90u;
    {
        const bool branch_taken_0x1dd9b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD9B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD9B90u;
        // 0x1dd9b94: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd9b90) {
            ctx->pc = 0x1DD9BDCu;
            goto label_1dd9bdc;
        }
    }
    ctx->pc = 0x1DD9B98u;
    // 0x1dd9b98: 0x8f848018  lw          $a0, -0x7FE8($gp)
    ctx->pc = 0x1dd9b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dd9b9c: 0xa08f0428  sb          $t7, 0x428($a0)
    ctx->pc = 0x1dd9b9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1064), (uint8_t)GPR_U32(ctx, 15));
label_1dd9ba0:
    // 0x1dd9ba0: 0x8c8d00dc  lw          $t5, 0xDC($a0)
    ctx->pc = 0x1dd9ba0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x1dd9ba4: 0x2405270f  addiu       $a1, $zero, 0x270F
    ctx->pc = 0x1dd9ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x1dd9ba8: 0x8e4e081c  lw          $t6, 0x81C($s2)
    ctx->pc = 0x1dd9ba8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2076)));
    // 0x1dd9bac: 0x2406270f  addiu       $a2, $zero, 0x270F
    ctx->pc = 0x1dd9bacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x1dd9bb0: 0x8daf08dc  lw          $t7, 0x8DC($t5)
    ctx->pc = 0x1dd9bb0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 2268)));
    // 0x1dd9bb4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1dd9bb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dd9bb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dd9bb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd9bbc: 0x2408fffe  addiu       $t0, $zero, -0x2
    ctx->pc = 0x1dd9bbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1dd9bc0: 0xaf8e8020  sw          $t6, -0x7FE0($gp)
    ctx->pc = 0x1dd9bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934560), GPR_U32(ctx, 14));
    // 0x1dd9bc4: 0xaf8f8024  sw          $t7, -0x7FDC($gp)
    ctx->pc = 0x1dd9bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934564), GPR_U32(ctx, 15));
    // 0x1dd9bc8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dd9bc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dd9bcc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dd9bccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd9bd0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1dd9bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dd9bd4: 0x877659a  j           func_1DD9668
    ctx->pc = 0x1DD9BD4u;
    ctx->pc = 0x1DD9BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD9BD4u;
    // 0x1dd9bd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD9668u;
    sub_01DD9668_0x1dd9668(rdram, ctx, runtime); return;
    ctx->pc = 0x1DD9BDCu;
label_1dd9bdc:
    // 0x1dd9bdc: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x1DD9BDCu;
    {
        const bool branch_taken_0x1dd9bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD9BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD9BDCu;
        // 0x1dd9be0: 0x8f848018  lw          $a0, -0x7FE8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd9bdc) {
            ctx->pc = 0x1DD9BA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dd9ba0;
        }
    }
    ctx->pc = 0x1DD9BE4u;
    // 0x1dd9be4: 0x0  nop
    ctx->pc = 0x1dd9be4u;
    // NOP
    // 0x1dd9be8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD9BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD9BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD9BE8u;
        // 0x1dd9bec: 0xaf80801c  sw          $zero, -0x7FE4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934556), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD9BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD9BF0u;
}
