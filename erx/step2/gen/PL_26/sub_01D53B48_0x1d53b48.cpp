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

// Function: sub_01D53B48
// Address: 0x1d53b48 - 0x1d53c08
void sub_01D53B48_0x1d53b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D53B48_0x1d53b48");
#endif

    switch (ctx->pc) {
        case 0x1d53b6cu: goto label_1d53b6c;
        case 0x1d53bbcu: goto label_1d53bbc;
        default: break;
    }

    ctx->pc = 0x1d53b48u;

    // 0x1d53b48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d53b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d53b4c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d53b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d53b50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d53b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d53b54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d53b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d53b58: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d53b58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d53b5c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1d53b5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d53b60: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d53b60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d53b64: 0xc7543d6  jal         func_1D50F58
    ctx->pc = 0x1D53B64u;
    SET_GPR_U32(ctx, 31, 0x1D53B6Cu);
    ctx->pc = 0x1D53B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D53B64u;
    // 0x1d53b68: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F58u, 0x1D53B64u, 0x1D53B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D53B6Cu;
label_1d53b6c:
    // 0x1d53b6c: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x1d53b6cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d53b70: 0x8c4b0248  lw          $t3, 0x248($v0)
    ctx->pc = 0x1d53b70u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 584)));
    // 0x1d53b74: 0xae2f0660  sw          $t7, 0x660($s1)
    ctx->pc = 0x1d53b74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1632), GPR_U32(ctx, 15));
    // 0x1d53b78: 0x8d6d004c  lw          $t5, 0x4C($t3)
    ctx->pc = 0x1d53b78u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 76)));
    // 0x1d53b7c: 0x8e0e0010  lw          $t6, 0x10($s0)
    ctx->pc = 0x1d53b7cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d53b80: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1d53b80u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1d53b84: 0x8e0c0014  lw          $t4, 0x14($s0)
    ctx->pc = 0x1d53b84u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1d53b88: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x1d53b88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1d53b8c: 0x8d6b0050  lw          $t3, 0x50($t3)
    ctx->pc = 0x1d53b8cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 80)));
    // 0x1d53b90: 0xae2c0674  sw          $t4, 0x674($s1)
    ctx->pc = 0x1d53b90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1652), GPR_U32(ctx, 12));
    // 0x1d53b94: 0x7a0f0020  lq          $t7, 0x20($s0)
    ctx->pc = 0x1d53b94u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1d53b98: 0x1ae6821  addu        $t5, $t5, $t6
    ctx->pc = 0x1d53b98u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x1d53b9c: 0xae2d0670  sw          $t5, 0x670($s1)
    ctx->pc = 0x1d53b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 13));
    // 0x1d53ba0: 0x7e2f0680  sq          $t7, 0x680($s1)
    ctx->pc = 0x1d53ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1664), GPR_VEC(ctx, 15));
    // 0x1d53ba4: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x1d53ba4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d53ba8: 0x19e00012  blez        $t7, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D53BA8u;
    {
        const bool branch_taken_0x1d53ba8 = (GPR_S32(ctx, 15) <= 0);
        ctx->pc = 0x1D53BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53BA8u;
        // 0x1d53bac: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d53ba8) {
            ctx->pc = 0x1D53BF4u;
            goto label_1d53bf4;
        }
    }
    ctx->pc = 0x1D53BB0u;
    // 0x1d53bb0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d53bb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d53bb4: 0x24090048  addiu       $t1, $zero, 0x48
    ctx->pc = 0x1d53bb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1d53bb8: 0x200602d  daddu       $t4, $s0, $zero
    ctx->pc = 0x1d53bb8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d53bbc:
    // 0x1d53bbc: 0x8d8e0030  lw          $t6, 0x30($t4)
    ctx->pc = 0x1d53bbcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 48)));
    // 0x1d53bc0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1d53bc0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1d53bc4: 0x8d8d0034  lw          $t5, 0x34($t4)
    ctx->pc = 0x1d53bc4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 52)));
    // 0x1d53bc8: 0x1c97018  mult        $t6, $t6, $t1
    ctx->pc = 0x1d53bc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1d53bcc: 0xacad0694  sw          $t5, 0x694($a1)
    ctx->pc = 0x1d53bccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1684), GPR_U32(ctx, 13));
    // 0x1d53bd0: 0x798f0040  lq          $t7, 0x40($t4)
    ctx->pc = 0x1d53bd0u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 12), 64)));
    // 0x1d53bd4: 0x16e7021  addu        $t6, $t3, $t6
    ctx->pc = 0x1d53bd4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 14)));
    // 0x1d53bd8: 0x7caf06a0  sq          $t7, 0x6A0($a1)
    ctx->pc = 0x1d53bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 1696), GPR_VEC(ctx, 15));
    // 0x1d53bdc: 0x258c0020  addiu       $t4, $t4, 0x20
    ctx->pc = 0x1d53bdcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x1d53be0: 0xacae0690  sw          $t6, 0x690($a1)
    ctx->pc = 0x1d53be0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1680), GPR_U32(ctx, 14));
    // 0x1d53be4: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x1d53be4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d53be8: 0x14f782a  slt         $t7, $t2, $t7
    ctx->pc = 0x1d53be8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x1d53bec: 0x15e0fff3  bnez        $t7, . + 4 + (-0xD << 2)
    ctx->pc = 0x1D53BECu;
    {
        const bool branch_taken_0x1d53bec = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D53BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53BECu;
        // 0x1d53bf0: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d53bec) {
            ctx->pc = 0x1D53BBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d53bbc;
        }
    }
    ctx->pc = 0x1D53BF4u;
label_1d53bf4:
    // 0x1d53bf4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d53bf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d53bf8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d53bf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d53bfc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d53bfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d53c00: 0x3e00008  jr          $ra
    ctx->pc = 0x1D53C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D53C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53C00u;
        // 0x1d53c04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D53C00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D53C08u;
}
