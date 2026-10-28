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

// Function: sub_01D284D0
// Address: 0x1d284d0 - 0x1d285a0
void sub_01D284D0_0x1d284d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D284D0_0x1d284d0");
#endif

    switch (ctx->pc) {
        case 0x1d284f4u: goto label_1d284f4;
        case 0x1d28544u: goto label_1d28544;
        default: break;
    }

    ctx->pc = 0x1d284d0u;

    // 0x1d284d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d284d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d284d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d284d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d284d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d284d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d284dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d284dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d284e0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d284e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d284e4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1d284e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d284e8: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d284e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d284ec: 0xc749b1a  jal         func_1D26C68
    ctx->pc = 0x1D284ECu;
    SET_GPR_U32(ctx, 31, 0x1D284F4u);
    ctx->pc = 0x1D284F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D284ECu;
    // 0x1d284f0: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C68u, 0x1D284ECu, 0x1D284F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D284F4u;
label_1d284f4:
    // 0x1d284f4: 0x8e2e0000  lw          $t6, 0x0($s1)
    ctx->pc = 0x1d284f4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d284f8: 0x240f0390  addiu       $t7, $zero, 0x390
    ctx->pc = 0x1d284f8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1d284fc: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x1d284fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1d28500: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1d28500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d28504: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x1d28504u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1d28508: 0x8c4d004c  lw          $t5, 0x4C($v0)
    ctx->pc = 0x1d28508u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1d2850c: 0xe600025c  swc1        $f0, 0x25C($s0)
    ctx->pc = 0x1d2850cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 604), bits); }
    // 0x1d28510: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d28510u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28514: 0x862c0004  lh          $t4, 0x4($s1)
    ctx->pc = 0x1d28514u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1d28518: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1d28518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2851c: 0x8daf0084  lw          $t7, 0x84($t5)
    ctx->pc = 0x1d2851cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 132)));
    // 0x1d28520: 0xe6000260  swc1        $f0, 0x260($s0)
    ctx->pc = 0x1d28520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
    // 0x1d28524: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d28524u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d28528: 0x962d000c  lhu         $t5, 0xC($s1)
    ctx->pc = 0x1d28528u;
    SET_GPR_ZE32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1d2852c: 0x25ef0110  addiu       $t7, $t7, 0x110
    ctx->pc = 0x1d2852cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 272));
    // 0x1d28530: 0xa60c0258  sh          $t4, 0x258($s0)
    ctx->pc = 0x1d28530u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 600), (uint16_t)GPR_U32(ctx, 12));
    // 0x1d28534: 0xae0f0250  sw          $t7, 0x250($s0)
    ctx->pc = 0x1d28534u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 15));
    // 0x1d28538: 0x19800011  blez        $t4, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D28538u;
    {
        const bool branch_taken_0x1d28538 = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x1D2853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D28538u;
        // 0x1d2853c: 0xa60d025a  sh          $t5, 0x25A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 602), (uint16_t)GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d28538) {
            ctx->pc = 0x1D28580u;
            goto label_1d28580;
        }
    }
    ctx->pc = 0x1D28540u;
    // 0x1d28540: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d28540u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d28544:
    // 0x1d28544: 0x1716821  addu        $t5, $t3, $s1
    ctx->pc = 0x1d28544u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 17)));
    // 0x1d28548: 0x1707021  addu        $t6, $t3, $s0
    ctx->pc = 0x1d28548u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 16)));
    // 0x1d2854c: 0x79af0020  lq          $t7, 0x20($t5)
    ctx->pc = 0x1d2854cu;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 13), 32)));
    // 0x1d28550: 0x25cc0270  addiu       $t4, $t6, 0x270
    ctx->pc = 0x1d28550u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 14), 624));
    // 0x1d28554: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1d28554u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1d28558: 0x7dcf0270  sq          $t7, 0x270($t6)
    ctx->pc = 0x1d28558u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 624), GPR_VEC(ctx, 15));
    // 0x1d2855c: 0x25ad0020  addiu       $t5, $t5, 0x20
    ctx->pc = 0x1d2855cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 32));
    // 0x1d28560: 0x79af0010  lq          $t7, 0x10($t5)
    ctx->pc = 0x1d28560u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 13), 16)));
    // 0x1d28564: 0x7d8f0010  sq          $t7, 0x10($t4)
    ctx->pc = 0x1d28564u;
    WRITE128(ADD32(GPR_U32(ctx, 12), 16), GPR_VEC(ctx, 15));
    // 0x1d28568: 0x79ae0020  lq          $t6, 0x20($t5)
    ctx->pc = 0x1d28568u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 13), 32)));
    // 0x1d2856c: 0x7d8e0020  sq          $t6, 0x20($t4)
    ctx->pc = 0x1d2856cu;
    WRITE128(ADD32(GPR_U32(ctx, 12), 32), GPR_VEC(ctx, 14));
    // 0x1d28570: 0x860f0258  lh          $t7, 0x258($s0)
    ctx->pc = 0x1d28570u;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 600)));
    // 0x1d28574: 0x14f782a  slt         $t7, $t2, $t7
    ctx->pc = 0x1d28574u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x1d28578: 0x15e0fff2  bnez        $t7, . + 4 + (-0xE << 2)
    ctx->pc = 0x1D28578u;
    {
        const bool branch_taken_0x1d28578 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2857Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D28578u;
        // 0x1d2857c: 0x256b0030  addiu       $t3, $t3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d28578) {
            ctx->pc = 0x1D28544u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d28544;
        }
    }
    ctx->pc = 0x1D28580u;
label_1d28580:
    // 0x1d28580: 0x8c4f00b4  lw          $t7, 0xB4($v0)
    ctx->pc = 0x1d28580u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x1d28584: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d28584u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d28588: 0xae0f0254  sw          $t7, 0x254($s0)
    ctx->pc = 0x1d28588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 15));
    // 0x1d2858c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d2858cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d28590: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d28590u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d28594: 0x3e00008  jr          $ra
    ctx->pc = 0x1D28594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D28598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D28594u;
        // 0x1d28598: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D28594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2859Cu;
    // 0x1d2859c: 0x0  nop
    ctx->pc = 0x1d2859cu;
    // NOP
    ctx->pc = 0x1d285a0u;
}
