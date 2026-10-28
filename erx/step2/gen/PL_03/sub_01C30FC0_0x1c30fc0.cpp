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

// Function: sub_01C30FC0
// Address: 0x1c30fc0 - 0x1c31090
void sub_01C30FC0_0x1c30fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C30FC0_0x1c30fc0");
#endif

    switch (ctx->pc) {
        case 0x1c30fe4u: goto label_1c30fe4;
        case 0x1c31034u: goto label_1c31034;
        default: break;
    }

    ctx->pc = 0x1c30fc0u;

    // 0x1c30fc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c30fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c30fc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c30fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c30fc8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c30fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c30fcc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c30fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c30fd0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c30fd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c30fd4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1c30fd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c30fd8: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c30fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c30fdc: 0xc70bdd6  jal         func_1C2F758
    ctx->pc = 0x1C30FDCu;
    SET_GPR_U32(ctx, 31, 0x1C30FE4u);
    ctx->pc = 0x1C30FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C30FDCu;
    // 0x1c30fe0: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F758u, 0x1C30FDCu, 0x1C30FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C30FE4u;
label_1c30fe4:
    // 0x1c30fe4: 0x8e2e0000  lw          $t6, 0x0($s1)
    ctx->pc = 0x1c30fe4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c30fe8: 0x240f0390  addiu       $t7, $zero, 0x390
    ctx->pc = 0x1c30fe8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1c30fec: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x1c30fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1c30ff0: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1c30ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c30ff4: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x1c30ff4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1c30ff8: 0x8c4d004c  lw          $t5, 0x4C($v0)
    ctx->pc = 0x1c30ff8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1c30ffc: 0xe600025c  swc1        $f0, 0x25C($s0)
    ctx->pc = 0x1c30ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 604), bits); }
    // 0x1c31000: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c31000u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31004: 0x862c0004  lh          $t4, 0x4($s1)
    ctx->pc = 0x1c31004u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c31008: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1c31008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c3100c: 0x8daf0084  lw          $t7, 0x84($t5)
    ctx->pc = 0x1c3100cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 132)));
    // 0x1c31010: 0xe6000260  swc1        $f0, 0x260($s0)
    ctx->pc = 0x1c31010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
    // 0x1c31014: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1c31014u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1c31018: 0x962d000c  lhu         $t5, 0xC($s1)
    ctx->pc = 0x1c31018u;
    SET_GPR_ZE32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1c3101c: 0x25ef0110  addiu       $t7, $t7, 0x110
    ctx->pc = 0x1c3101cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 272));
    // 0x1c31020: 0xa60c0258  sh          $t4, 0x258($s0)
    ctx->pc = 0x1c31020u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 600), (uint16_t)GPR_U32(ctx, 12));
    // 0x1c31024: 0xae0f0250  sw          $t7, 0x250($s0)
    ctx->pc = 0x1c31024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 15));
    // 0x1c31028: 0x19800011  blez        $t4, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C31028u;
    {
        const bool branch_taken_0x1c31028 = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x1C3102Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31028u;
        // 0x1c3102c: 0xa60d025a  sh          $t5, 0x25A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 602), (uint16_t)GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c31028) {
            ctx->pc = 0x1C31070u;
            goto label_1c31070;
        }
    }
    ctx->pc = 0x1C31030u;
    // 0x1c31030: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1c31030u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c31034:
    // 0x1c31034: 0x1716821  addu        $t5, $t3, $s1
    ctx->pc = 0x1c31034u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 17)));
    // 0x1c31038: 0x1707021  addu        $t6, $t3, $s0
    ctx->pc = 0x1c31038u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 16)));
    // 0x1c3103c: 0x79af0020  lq          $t7, 0x20($t5)
    ctx->pc = 0x1c3103cu;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 13), 32)));
    // 0x1c31040: 0x25cc0270  addiu       $t4, $t6, 0x270
    ctx->pc = 0x1c31040u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 14), 624));
    // 0x1c31044: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1c31044u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1c31048: 0x7dcf0270  sq          $t7, 0x270($t6)
    ctx->pc = 0x1c31048u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 624), GPR_VEC(ctx, 15));
    // 0x1c3104c: 0x25ad0020  addiu       $t5, $t5, 0x20
    ctx->pc = 0x1c3104cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 32));
    // 0x1c31050: 0x79af0010  lq          $t7, 0x10($t5)
    ctx->pc = 0x1c31050u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 13), 16)));
    // 0x1c31054: 0x7d8f0010  sq          $t7, 0x10($t4)
    ctx->pc = 0x1c31054u;
    WRITE128(ADD32(GPR_U32(ctx, 12), 16), GPR_VEC(ctx, 15));
    // 0x1c31058: 0x79ae0020  lq          $t6, 0x20($t5)
    ctx->pc = 0x1c31058u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 13), 32)));
    // 0x1c3105c: 0x7d8e0020  sq          $t6, 0x20($t4)
    ctx->pc = 0x1c3105cu;
    WRITE128(ADD32(GPR_U32(ctx, 12), 32), GPR_VEC(ctx, 14));
    // 0x1c31060: 0x860f0258  lh          $t7, 0x258($s0)
    ctx->pc = 0x1c31060u;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 600)));
    // 0x1c31064: 0x14f782a  slt         $t7, $t2, $t7
    ctx->pc = 0x1c31064u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x1c31068: 0x15e0fff2  bnez        $t7, . + 4 + (-0xE << 2)
    ctx->pc = 0x1C31068u;
    {
        const bool branch_taken_0x1c31068 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3106Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31068u;
        // 0x1c3106c: 0x256b0030  addiu       $t3, $t3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c31068) {
            ctx->pc = 0x1C31034u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c31034;
        }
    }
    ctx->pc = 0x1C31070u;
label_1c31070:
    // 0x1c31070: 0x8c4f00b4  lw          $t7, 0xB4($v0)
    ctx->pc = 0x1c31070u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x1c31074: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c31074u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c31078: 0xae0f0254  sw          $t7, 0x254($s0)
    ctx->pc = 0x1c31078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 15));
    // 0x1c3107c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c3107cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c31080: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c31080u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c31084: 0x3e00008  jr          $ra
    ctx->pc = 0x1C31084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C31088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31084u;
        // 0x1c31088: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C31084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3108Cu;
    // 0x1c3108c: 0x0  nop
    ctx->pc = 0x1c3108cu;
    // NOP
    ctx->pc = 0x1c31090u;
}
