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

// Function: sub_01C018D0
// Address: 0x1c018d0 - 0x1c019a0
void sub_01C018D0_0x1c018d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C018D0_0x1c018d0");
#endif

    switch (ctx->pc) {
        case 0x1c018f4u: goto label_1c018f4;
        case 0x1c01944u: goto label_1c01944;
        default: break;
    }

    ctx->pc = 0x1c018d0u;

    // 0x1c018d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c018d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c018d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c018d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c018d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c018d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c018dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c018dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c018e0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c018e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c018e4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1c018e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c018e8: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c018e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c018ec: 0xc700018  jal         func_1C00060
    ctx->pc = 0x1C018ECu;
    SET_GPR_U32(ctx, 31, 0x1C018F4u);
    ctx->pc = 0x1C018F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C018ECu;
    // 0x1c018f0: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00060u, 0x1C018ECu, 0x1C018F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C018F4u;
label_1c018f4:
    // 0x1c018f4: 0x8e2e0000  lw          $t6, 0x0($s1)
    ctx->pc = 0x1c018f4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c018f8: 0x240f0390  addiu       $t7, $zero, 0x390
    ctx->pc = 0x1c018f8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1c018fc: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x1c018fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1c01900: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1c01900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c01904: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x1c01904u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1c01908: 0x8c4d004c  lw          $t5, 0x4C($v0)
    ctx->pc = 0x1c01908u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1c0190c: 0xe600025c  swc1        $f0, 0x25C($s0)
    ctx->pc = 0x1c0190cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 604), bits); }
    // 0x1c01910: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c01910u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c01914: 0x862c0004  lh          $t4, 0x4($s1)
    ctx->pc = 0x1c01914u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c01918: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1c01918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0191c: 0x8daf0084  lw          $t7, 0x84($t5)
    ctx->pc = 0x1c0191cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 132)));
    // 0x1c01920: 0xe6000260  swc1        $f0, 0x260($s0)
    ctx->pc = 0x1c01920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
    // 0x1c01924: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1c01924u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1c01928: 0x962d000c  lhu         $t5, 0xC($s1)
    ctx->pc = 0x1c01928u;
    SET_GPR_ZE32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1c0192c: 0x25ef0110  addiu       $t7, $t7, 0x110
    ctx->pc = 0x1c0192cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 272));
    // 0x1c01930: 0xa60c0258  sh          $t4, 0x258($s0)
    ctx->pc = 0x1c01930u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 600), (uint16_t)GPR_U32(ctx, 12));
    // 0x1c01934: 0xae0f0250  sw          $t7, 0x250($s0)
    ctx->pc = 0x1c01934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 15));
    // 0x1c01938: 0x19800011  blez        $t4, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C01938u;
    {
        const bool branch_taken_0x1c01938 = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x1C0193Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01938u;
        // 0x1c0193c: 0xa60d025a  sh          $t5, 0x25A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 602), (uint16_t)GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c01938) {
            ctx->pc = 0x1C01980u;
            goto label_1c01980;
        }
    }
    ctx->pc = 0x1C01940u;
    // 0x1c01940: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1c01940u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c01944:
    // 0x1c01944: 0x1716821  addu        $t5, $t3, $s1
    ctx->pc = 0x1c01944u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 17)));
    // 0x1c01948: 0x1707021  addu        $t6, $t3, $s0
    ctx->pc = 0x1c01948u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 16)));
    // 0x1c0194c: 0x79af0020  lq          $t7, 0x20($t5)
    ctx->pc = 0x1c0194cu;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 13), 32)));
    // 0x1c01950: 0x25cc0270  addiu       $t4, $t6, 0x270
    ctx->pc = 0x1c01950u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 14), 624));
    // 0x1c01954: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1c01954u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1c01958: 0x7dcf0270  sq          $t7, 0x270($t6)
    ctx->pc = 0x1c01958u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 624), GPR_VEC(ctx, 15));
    // 0x1c0195c: 0x25ad0020  addiu       $t5, $t5, 0x20
    ctx->pc = 0x1c0195cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 32));
    // 0x1c01960: 0x79af0010  lq          $t7, 0x10($t5)
    ctx->pc = 0x1c01960u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 13), 16)));
    // 0x1c01964: 0x7d8f0010  sq          $t7, 0x10($t4)
    ctx->pc = 0x1c01964u;
    WRITE128(ADD32(GPR_U32(ctx, 12), 16), GPR_VEC(ctx, 15));
    // 0x1c01968: 0x79ae0020  lq          $t6, 0x20($t5)
    ctx->pc = 0x1c01968u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 13), 32)));
    // 0x1c0196c: 0x7d8e0020  sq          $t6, 0x20($t4)
    ctx->pc = 0x1c0196cu;
    WRITE128(ADD32(GPR_U32(ctx, 12), 32), GPR_VEC(ctx, 14));
    // 0x1c01970: 0x860f0258  lh          $t7, 0x258($s0)
    ctx->pc = 0x1c01970u;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 600)));
    // 0x1c01974: 0x14f782a  slt         $t7, $t2, $t7
    ctx->pc = 0x1c01974u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x1c01978: 0x15e0fff2  bnez        $t7, . + 4 + (-0xE << 2)
    ctx->pc = 0x1C01978u;
    {
        const bool branch_taken_0x1c01978 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0197Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01978u;
        // 0x1c0197c: 0x256b0030  addiu       $t3, $t3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c01978) {
            ctx->pc = 0x1C01944u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c01944;
        }
    }
    ctx->pc = 0x1C01980u;
label_1c01980:
    // 0x1c01980: 0x8c4f00b4  lw          $t7, 0xB4($v0)
    ctx->pc = 0x1c01980u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x1c01984: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c01984u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c01988: 0xae0f0254  sw          $t7, 0x254($s0)
    ctx->pc = 0x1c01988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 15));
    // 0x1c0198c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c0198cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c01990: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c01990u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c01994: 0x3e00008  jr          $ra
    ctx->pc = 0x1C01994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C01998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01994u;
        // 0x1c01998: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C01994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0199Cu;
    // 0x1c0199c: 0x0  nop
    ctx->pc = 0x1c0199cu;
    // NOP
    ctx->pc = 0x1c019a0u;
}
