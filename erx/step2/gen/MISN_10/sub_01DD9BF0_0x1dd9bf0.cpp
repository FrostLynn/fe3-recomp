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

// Function: sub_01DD9BF0
// Address: 0x1dd9bf0 - 0x1dd9cc8
void sub_01DD9BF0_0x1dd9bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD9BF0_0x1dd9bf0");
#endif

    switch (ctx->pc) {
        case 0x1dd9c18u: goto label_1dd9c18;
        case 0x1dd9c2cu: goto label_1dd9c2c;
        case 0x1dd9c40u: goto label_1dd9c40;
        case 0x1dd9c58u: goto label_1dd9c58;
        case 0x1dd9c68u: goto label_1dd9c68;
        default: break;
    }

    ctx->pc = 0x1dd9bf0u;

    // 0x1dd9bf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dd9bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dd9bf4: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1dd9bf4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dd9bf8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1dd9bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1dd9bfc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dd9bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dd9c00: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1dd9c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1dd9c04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dd9c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dd9c08: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1dd9c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1dd9c0c: 0x8c91000c  lw          $s1, 0xC($a0)
    ctx->pc = 0x1dd9c0cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1dd9c10: 0xc776586  jal         func_1DD9618
    ctx->pc = 0x1DD9C10u;
    SET_GPR_U32(ctx, 31, 0x1DD9C18u);
    ctx->pc = 0x1DD9C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD9C10u;
    // 0x1dd9c14: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD9618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD9618u, 0x1DD9C10u, 0x1DD9C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD9C18u;
label_1dd9c18:
    // 0x1dd9c18: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1dd9c18u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dd9c1c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1dd9c1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd9c20: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1dd9c20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd9c24: 0xc77658a  jal         func_1DD9628
    ctx->pc = 0x1DD9C24u;
    SET_GPR_U32(ctx, 31, 0x1DD9C2Cu);
    ctx->pc = 0x1DD9C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD9C24u;
    // 0x1dd9c28: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD9628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD9628u, 0x1DD9C24u, 0x1DD9C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD9C2Cu;
label_1dd9c2c:
    // 0x1dd9c2c: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1dd9c2cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dd9c30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dd9c30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd9c34: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1dd9c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd9c38: 0xc77658c  jal         func_1DD9630
    ctx->pc = 0x1DD9C38u;
    SET_GPR_U32(ctx, 31, 0x1DD9C40u);
    ctx->pc = 0x1DD9C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD9C38u;
    // 0x1dd9c3c: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD9630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD9630u, 0x1DD9C38u, 0x1DD9C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD9C40u;
label_1dd9c40:
    // 0x1dd9c40: 0x8e0f0008  lw          $t7, 0x8($s0)
    ctx->pc = 0x1dd9c40u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1dd9c44: 0x8f848018  lw          $a0, -0x7FE8($gp)
    ctx->pc = 0x1dd9c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dd9c48: 0x39ef001b  xori        $t7, $t7, 0x1B
    ctx->pc = 0x1dd9c48u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ (uint64_t)(uint16_t)27);
    // 0x1dd9c4c: 0x4f800b  movn        $s0, $v0, $t7
    ctx->pc = 0x1dd9c4cu;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x1dd9c50: 0xc776596  jal         func_1DD9658
    ctx->pc = 0x1DD9C50u;
    SET_GPR_U32(ctx, 31, 0x1DD9C58u);
    ctx->pc = 0x1DD9C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD9C50u;
    // 0x1dd9c54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD9658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD9658u, 0x1DD9C50u, 0x1DD9C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD9C58u;
label_1dd9c58:
    // 0x1dd9c58: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1DD9C58u;
    {
        const bool branch_taken_0x1dd9c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD9C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD9C58u;
        // 0x1dd9c5c: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd9c58) {
            ctx->pc = 0x1DD9CA4u;
            goto label_1dd9ca4;
        }
    }
    ctx->pc = 0x1DD9C60u;
    // 0x1dd9c60: 0x8f848018  lw          $a0, -0x7FE8($gp)
    ctx->pc = 0x1dd9c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dd9c64: 0xa08f0428  sb          $t7, 0x428($a0)
    ctx->pc = 0x1dd9c64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1064), (uint8_t)GPR_U32(ctx, 15));
label_1dd9c68:
    // 0x1dd9c68: 0x8c8d00dc  lw          $t5, 0xDC($a0)
    ctx->pc = 0x1dd9c68u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x1dd9c6c: 0x2405270f  addiu       $a1, $zero, 0x270F
    ctx->pc = 0x1dd9c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x1dd9c70: 0x8e4e081c  lw          $t6, 0x81C($s2)
    ctx->pc = 0x1dd9c70u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2076)));
    // 0x1dd9c74: 0x2406270f  addiu       $a2, $zero, 0x270F
    ctx->pc = 0x1dd9c74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x1dd9c78: 0x8daf08dc  lw          $t7, 0x8DC($t5)
    ctx->pc = 0x1dd9c78u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 2268)));
    // 0x1dd9c7c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1dd9c7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dd9c80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dd9c80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd9c84: 0x2408fffe  addiu       $t0, $zero, -0x2
    ctx->pc = 0x1dd9c84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1dd9c88: 0xaf8e8020  sw          $t6, -0x7FE0($gp)
    ctx->pc = 0x1dd9c88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934560), GPR_U32(ctx, 14));
    // 0x1dd9c8c: 0xaf8f8024  sw          $t7, -0x7FDC($gp)
    ctx->pc = 0x1dd9c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934564), GPR_U32(ctx, 15));
    // 0x1dd9c90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dd9c90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dd9c94: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dd9c94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd9c98: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1dd9c98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dd9c9c: 0x877659a  j           func_1DD9668
    ctx->pc = 0x1DD9C9Cu;
    ctx->pc = 0x1DD9CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD9C9Cu;
    // 0x1dd9ca0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD9668u;
    sub_01DD9668_0x1dd9668(rdram, ctx, runtime); return;
    ctx->pc = 0x1DD9CA4u;
label_1dd9ca4:
    // 0x1dd9ca4: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x1DD9CA4u;
    {
        const bool branch_taken_0x1dd9ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD9CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD9CA4u;
        // 0x1dd9ca8: 0x8f848018  lw          $a0, -0x7FE8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd9ca4) {
            ctx->pc = 0x1DD9C68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dd9c68;
        }
    }
    ctx->pc = 0x1DD9CACu;
    // 0x1dd9cac: 0x0  nop
    ctx->pc = 0x1dd9cacu;
    // NOP
    // 0x1dd9cb0: 0x8f8e8018  lw          $t6, -0x7FE8($gp)
    ctx->pc = 0x1dd9cb0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dd9cb4: 0x95cf056e  lhu         $t7, 0x56E($t6)
    ctx->pc = 0x1dd9cb4u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
    // 0x1dd9cb8: 0x35ef0010  ori         $t7, $t7, 0x10
    ctx->pc = 0x1dd9cb8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)16);
    // 0x1dd9cbc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD9CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD9CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD9CBCu;
        // 0x1dd9cc0: 0xa5cf056e  sh          $t7, 0x56E($t6) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 14), 1390), (uint16_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD9CBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD9CC4u;
    // 0x1dd9cc4: 0x0  nop
    ctx->pc = 0x1dd9cc4u;
    // NOP
    ctx->pc = 0x1dd9cc8u;
}
