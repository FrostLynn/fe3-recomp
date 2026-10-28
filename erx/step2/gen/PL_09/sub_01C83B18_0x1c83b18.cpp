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

// Function: sub_01C83B18
// Address: 0x1c83b18 - 0x1c83bd8
void sub_01C83B18_0x1c83b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C83B18_0x1c83b18");
#endif

    switch (ctx->pc) {
        case 0x1c83b3cu: goto label_1c83b3c;
        case 0x1c83b88u: goto label_1c83b88;
        default: break;
    }

    ctx->pc = 0x1c83b18u;

    // 0x1c83b18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c83b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c83b1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c83b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c83b20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c83b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c83b24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c83b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c83b28: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c83b28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83b2c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1c83b2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83b30: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c83b30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c83b34: 0xc7203d6  jal         func_1C80F58
    ctx->pc = 0x1C83B34u;
    SET_GPR_U32(ctx, 31, 0x1C83B3Cu);
    ctx->pc = 0x1C83B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C83B34u;
    // 0x1c83b38: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F58u, 0x1C83B34u, 0x1C83B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C83B3Cu;
label_1c83b3c:
    // 0x1c83b3c: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x1c83b3cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c83b40: 0x8c4d024c  lw          $t5, 0x24C($v0)
    ctx->pc = 0x1c83b40u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c83b44: 0xae2f0660  sw          $t7, 0x660($s1)
    ctx->pc = 0x1c83b44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1632), GPR_U32(ctx, 15));
    // 0x1c83b48: 0x8daa004c  lw          $t2, 0x4C($t5)
    ctx->pc = 0x1c83b48u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 76)));
    // 0x1c83b4c: 0x8e0e0010  lw          $t6, 0x10($s0)
    ctx->pc = 0x1c83b4cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c83b50: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1c83b50u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c83b54: 0x8e0d0014  lw          $t5, 0x14($s0)
    ctx->pc = 0x1c83b54u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1c83b58: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x1c83b58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1c83b5c: 0xae2d0674  sw          $t5, 0x674($s1)
    ctx->pc = 0x1c83b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1652), GPR_U32(ctx, 13));
    // 0x1c83b60: 0x7a0f0020  lq          $t7, 0x20($s0)
    ctx->pc = 0x1c83b60u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1c83b64: 0x14e7021  addu        $t6, $t2, $t6
    ctx->pc = 0x1c83b64u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 14)));
    // 0x1c83b68: 0xae2e0670  sw          $t6, 0x670($s1)
    ctx->pc = 0x1c83b68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 14));
    // 0x1c83b6c: 0x7e2f0680  sq          $t7, 0x680($s1)
    ctx->pc = 0x1c83b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1664), GPR_VEC(ctx, 15));
    // 0x1c83b70: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x1c83b70u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c83b74: 0x19e00012  blez        $t7, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C83B74u;
    {
        const bool branch_taken_0x1c83b74 = (GPR_S32(ctx, 15) <= 0);
        ctx->pc = 0x1C83B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83B74u;
        // 0x1c83b78: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c83b74) {
            ctx->pc = 0x1C83BC0u;
            goto label_1c83bc0;
        }
    }
    ctx->pc = 0x1C83B7Cu;
    // 0x1c83b7c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c83b7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83b80: 0x24090048  addiu       $t1, $zero, 0x48
    ctx->pc = 0x1c83b80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c83b84: 0x200602d  daddu       $t4, $s0, $zero
    ctx->pc = 0x1c83b84u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c83b88:
    // 0x1c83b88: 0x8d8e0030  lw          $t6, 0x30($t4)
    ctx->pc = 0x1c83b88u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 48)));
    // 0x1c83b8c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1c83b8cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x1c83b90: 0x8d8d0034  lw          $t5, 0x34($t4)
    ctx->pc = 0x1c83b90u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 52)));
    // 0x1c83b94: 0x1c97018  mult        $t6, $t6, $t1
    ctx->pc = 0x1c83b94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1c83b98: 0xacad0694  sw          $t5, 0x694($a1)
    ctx->pc = 0x1c83b98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1684), GPR_U32(ctx, 13));
    // 0x1c83b9c: 0x798f0040  lq          $t7, 0x40($t4)
    ctx->pc = 0x1c83b9cu;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 12), 64)));
    // 0x1c83ba0: 0x14e7021  addu        $t6, $t2, $t6
    ctx->pc = 0x1c83ba0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 14)));
    // 0x1c83ba4: 0x7caf06a0  sq          $t7, 0x6A0($a1)
    ctx->pc = 0x1c83ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 1696), GPR_VEC(ctx, 15));
    // 0x1c83ba8: 0x258c0020  addiu       $t4, $t4, 0x20
    ctx->pc = 0x1c83ba8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x1c83bac: 0xacae0690  sw          $t6, 0x690($a1)
    ctx->pc = 0x1c83bacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1680), GPR_U32(ctx, 14));
    // 0x1c83bb0: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x1c83bb0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c83bb4: 0x16f782a  slt         $t7, $t3, $t7
    ctx->pc = 0x1c83bb4u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x1c83bb8: 0x15e0fff3  bnez        $t7, . + 4 + (-0xD << 2)
    ctx->pc = 0x1C83BB8u;
    {
        const bool branch_taken_0x1c83bb8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C83BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83BB8u;
        // 0x1c83bbc: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c83bb8) {
            ctx->pc = 0x1C83B88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c83b88;
        }
    }
    ctx->pc = 0x1C83BC0u;
label_1c83bc0:
    // 0x1c83bc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c83bc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c83bc4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c83bc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c83bc8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c83bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c83bcc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C83BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C83BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83BCCu;
        // 0x1c83bd0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C83BCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C83BD4u;
    // 0x1c83bd4: 0x0  nop
    ctx->pc = 0x1c83bd4u;
    // NOP
    ctx->pc = 0x1c83bd8u;
}
