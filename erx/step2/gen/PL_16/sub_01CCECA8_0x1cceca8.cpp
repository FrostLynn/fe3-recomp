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

// Function: sub_01CCECA8
// Address: 0x1cceca8 - 0x1cced78
void sub_01CCECA8_0x1cceca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCECA8_0x1cceca8");
#endif

    switch (ctx->pc) {
        case 0x1ccecccu: goto label_1cceccc;
        case 0x1cced1cu: goto label_1cced1c;
        default: break;
    }

    ctx->pc = 0x1cceca8u;

    // 0x1cceca8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cceca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ccecac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ccecacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ccecb0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ccecb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ccecb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ccecb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ccecb8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1ccecb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccecbc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1ccecbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccecc0: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1ccecc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1ccecc4: 0xc733516  jal         func_1CCD458
    ctx->pc = 0x1CCECC4u;
    SET_GPR_U32(ctx, 31, 0x1CCECCCu);
    ctx->pc = 0x1CCECC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCECC4u;
    // 0x1ccecc8: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD458u, 0x1CCECC4u, 0x1CCECCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCECCCu;
label_1cceccc:
    // 0x1cceccc: 0x8e2e0000  lw          $t6, 0x0($s1)
    ctx->pc = 0x1ccecccu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ccecd0: 0x240f0390  addiu       $t7, $zero, 0x390
    ctx->pc = 0x1ccecd0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1ccecd4: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x1ccecd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1ccecd8: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1ccecd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ccecdc: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x1ccecdcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1ccece0: 0x8c4d004c  lw          $t5, 0x4C($v0)
    ctx->pc = 0x1ccece0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1ccece4: 0xe600025c  swc1        $f0, 0x25C($s0)
    ctx->pc = 0x1ccece4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 604), bits); }
    // 0x1ccece8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ccece8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccecec: 0x862c0004  lh          $t4, 0x4($s1)
    ctx->pc = 0x1ccececu;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1ccecf0: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1ccecf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ccecf4: 0x8daf0084  lw          $t7, 0x84($t5)
    ctx->pc = 0x1ccecf4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 132)));
    // 0x1ccecf8: 0xe6000260  swc1        $f0, 0x260($s0)
    ctx->pc = 0x1ccecf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
    // 0x1ccecfc: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1ccecfcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1cced00: 0x962d000c  lhu         $t5, 0xC($s1)
    ctx->pc = 0x1cced00u;
    SET_GPR_ZE32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1cced04: 0x25ef0110  addiu       $t7, $t7, 0x110
    ctx->pc = 0x1cced04u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 272));
    // 0x1cced08: 0xa60c0258  sh          $t4, 0x258($s0)
    ctx->pc = 0x1cced08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 600), (uint16_t)GPR_U32(ctx, 12));
    // 0x1cced0c: 0xae0f0250  sw          $t7, 0x250($s0)
    ctx->pc = 0x1cced0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 15));
    // 0x1cced10: 0x19800011  blez        $t4, . + 4 + (0x11 << 2)
    ctx->pc = 0x1CCED10u;
    {
        const bool branch_taken_0x1cced10 = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x1CCED14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCED10u;
        // 0x1cced14: 0xa60d025a  sh          $t5, 0x25A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 602), (uint16_t)GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cced10) {
            ctx->pc = 0x1CCED58u;
            goto label_1cced58;
        }
    }
    ctx->pc = 0x1CCED18u;
    // 0x1cced18: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1cced18u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cced1c:
    // 0x1cced1c: 0x1716821  addu        $t5, $t3, $s1
    ctx->pc = 0x1cced1cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 17)));
    // 0x1cced20: 0x1707021  addu        $t6, $t3, $s0
    ctx->pc = 0x1cced20u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 16)));
    // 0x1cced24: 0x79af0020  lq          $t7, 0x20($t5)
    ctx->pc = 0x1cced24u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 13), 32)));
    // 0x1cced28: 0x25cc0270  addiu       $t4, $t6, 0x270
    ctx->pc = 0x1cced28u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 14), 624));
    // 0x1cced2c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1cced2cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1cced30: 0x7dcf0270  sq          $t7, 0x270($t6)
    ctx->pc = 0x1cced30u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 624), GPR_VEC(ctx, 15));
    // 0x1cced34: 0x25ad0020  addiu       $t5, $t5, 0x20
    ctx->pc = 0x1cced34u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 32));
    // 0x1cced38: 0x79af0010  lq          $t7, 0x10($t5)
    ctx->pc = 0x1cced38u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 13), 16)));
    // 0x1cced3c: 0x7d8f0010  sq          $t7, 0x10($t4)
    ctx->pc = 0x1cced3cu;
    WRITE128(ADD32(GPR_U32(ctx, 12), 16), GPR_VEC(ctx, 15));
    // 0x1cced40: 0x79ae0020  lq          $t6, 0x20($t5)
    ctx->pc = 0x1cced40u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 13), 32)));
    // 0x1cced44: 0x7d8e0020  sq          $t6, 0x20($t4)
    ctx->pc = 0x1cced44u;
    WRITE128(ADD32(GPR_U32(ctx, 12), 32), GPR_VEC(ctx, 14));
    // 0x1cced48: 0x860f0258  lh          $t7, 0x258($s0)
    ctx->pc = 0x1cced48u;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 600)));
    // 0x1cced4c: 0x14f782a  slt         $t7, $t2, $t7
    ctx->pc = 0x1cced4cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x1cced50: 0x15e0fff2  bnez        $t7, . + 4 + (-0xE << 2)
    ctx->pc = 0x1CCED50u;
    {
        const bool branch_taken_0x1cced50 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CCED54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCED50u;
        // 0x1cced54: 0x256b0030  addiu       $t3, $t3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cced50) {
            ctx->pc = 0x1CCED1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cced1c;
        }
    }
    ctx->pc = 0x1CCED58u;
label_1cced58:
    // 0x1cced58: 0x8c4f00b4  lw          $t7, 0xB4($v0)
    ctx->pc = 0x1cced58u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x1cced5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cced5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cced60: 0xae0f0254  sw          $t7, 0x254($s0)
    ctx->pc = 0x1cced60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 15));
    // 0x1cced64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cced64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cced68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cced68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cced6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCED6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCED70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCED6Cu;
        // 0x1cced70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCED6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCED74u;
    // 0x1cced74: 0x0  nop
    ctx->pc = 0x1cced74u;
    // NOP
    ctx->pc = 0x1cced78u;
}
