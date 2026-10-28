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

// Function: sub_01C9A3C0
// Address: 0x1c9a3c0 - 0x1c9a490
void sub_01C9A3C0_0x1c9a3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C9A3C0_0x1c9a3c0");
#endif

    switch (ctx->pc) {
        case 0x1c9a3e4u: goto label_1c9a3e4;
        case 0x1c9a434u: goto label_1c9a434;
        default: break;
    }

    ctx->pc = 0x1c9a3c0u;

    // 0x1c9a3c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c9a3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c9a3c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c9a3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c9a3c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c9a3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c9a3cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c9a3ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c9a3d0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c9a3d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9a3d4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1c9a3d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9a3d8: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c9a3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c9a3dc: 0xc7262d6  jal         func_1C98B58
    ctx->pc = 0x1C9A3DCu;
    SET_GPR_U32(ctx, 31, 0x1C9A3E4u);
    ctx->pc = 0x1C9A3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9A3DCu;
    // 0x1c9a3e0: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B58u, 0x1C9A3DCu, 0x1C9A3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9A3E4u;
label_1c9a3e4:
    // 0x1c9a3e4: 0x8e2e0000  lw          $t6, 0x0($s1)
    ctx->pc = 0x1c9a3e4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c9a3e8: 0x240f0390  addiu       $t7, $zero, 0x390
    ctx->pc = 0x1c9a3e8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1c9a3ec: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x1c9a3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1c9a3f0: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1c9a3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9a3f4: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x1c9a3f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1c9a3f8: 0x8c4d004c  lw          $t5, 0x4C($v0)
    ctx->pc = 0x1c9a3f8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1c9a3fc: 0xe600025c  swc1        $f0, 0x25C($s0)
    ctx->pc = 0x1c9a3fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 604), bits); }
    // 0x1c9a400: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c9a400u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9a404: 0x862c0004  lh          $t4, 0x4($s1)
    ctx->pc = 0x1c9a404u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c9a408: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1c9a408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9a40c: 0x8daf0084  lw          $t7, 0x84($t5)
    ctx->pc = 0x1c9a40cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 132)));
    // 0x1c9a410: 0xe6000260  swc1        $f0, 0x260($s0)
    ctx->pc = 0x1c9a410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
    // 0x1c9a414: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1c9a414u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1c9a418: 0x962d000c  lhu         $t5, 0xC($s1)
    ctx->pc = 0x1c9a418u;
    SET_GPR_ZE32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1c9a41c: 0x25ef0110  addiu       $t7, $t7, 0x110
    ctx->pc = 0x1c9a41cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 272));
    // 0x1c9a420: 0xa60c0258  sh          $t4, 0x258($s0)
    ctx->pc = 0x1c9a420u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 600), (uint16_t)GPR_U32(ctx, 12));
    // 0x1c9a424: 0xae0f0250  sw          $t7, 0x250($s0)
    ctx->pc = 0x1c9a424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 15));
    // 0x1c9a428: 0x19800011  blez        $t4, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C9A428u;
    {
        const bool branch_taken_0x1c9a428 = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x1C9A42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9A428u;
        // 0x1c9a42c: 0xa60d025a  sh          $t5, 0x25A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 602), (uint16_t)GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9a428) {
            ctx->pc = 0x1C9A470u;
            goto label_1c9a470;
        }
    }
    ctx->pc = 0x1C9A430u;
    // 0x1c9a430: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1c9a430u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c9a434:
    // 0x1c9a434: 0x1716821  addu        $t5, $t3, $s1
    ctx->pc = 0x1c9a434u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 17)));
    // 0x1c9a438: 0x1707021  addu        $t6, $t3, $s0
    ctx->pc = 0x1c9a438u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 16)));
    // 0x1c9a43c: 0x79af0020  lq          $t7, 0x20($t5)
    ctx->pc = 0x1c9a43cu;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 13), 32)));
    // 0x1c9a440: 0x25cc0270  addiu       $t4, $t6, 0x270
    ctx->pc = 0x1c9a440u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 14), 624));
    // 0x1c9a444: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1c9a444u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1c9a448: 0x7dcf0270  sq          $t7, 0x270($t6)
    ctx->pc = 0x1c9a448u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 624), GPR_VEC(ctx, 15));
    // 0x1c9a44c: 0x25ad0020  addiu       $t5, $t5, 0x20
    ctx->pc = 0x1c9a44cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 32));
    // 0x1c9a450: 0x79af0010  lq          $t7, 0x10($t5)
    ctx->pc = 0x1c9a450u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 13), 16)));
    // 0x1c9a454: 0x7d8f0010  sq          $t7, 0x10($t4)
    ctx->pc = 0x1c9a454u;
    WRITE128(ADD32(GPR_U32(ctx, 12), 16), GPR_VEC(ctx, 15));
    // 0x1c9a458: 0x79ae0020  lq          $t6, 0x20($t5)
    ctx->pc = 0x1c9a458u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 13), 32)));
    // 0x1c9a45c: 0x7d8e0020  sq          $t6, 0x20($t4)
    ctx->pc = 0x1c9a45cu;
    WRITE128(ADD32(GPR_U32(ctx, 12), 32), GPR_VEC(ctx, 14));
    // 0x1c9a460: 0x860f0258  lh          $t7, 0x258($s0)
    ctx->pc = 0x1c9a460u;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 600)));
    // 0x1c9a464: 0x14f782a  slt         $t7, $t2, $t7
    ctx->pc = 0x1c9a464u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x1c9a468: 0x15e0fff2  bnez        $t7, . + 4 + (-0xE << 2)
    ctx->pc = 0x1C9A468u;
    {
        const bool branch_taken_0x1c9a468 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9A46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9A468u;
        // 0x1c9a46c: 0x256b0030  addiu       $t3, $t3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9a468) {
            ctx->pc = 0x1C9A434u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c9a434;
        }
    }
    ctx->pc = 0x1C9A470u;
label_1c9a470:
    // 0x1c9a470: 0x8c4f00b4  lw          $t7, 0xB4($v0)
    ctx->pc = 0x1c9a470u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x1c9a474: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c9a474u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c9a478: 0xae0f0254  sw          $t7, 0x254($s0)
    ctx->pc = 0x1c9a478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 15));
    // 0x1c9a47c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c9a47cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c9a480: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c9a480u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9a484: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9A484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9A488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9A484u;
        // 0x1c9a488: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9A484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9A48Cu;
    // 0x1c9a48c: 0x0  nop
    ctx->pc = 0x1c9a48cu;
    // NOP
    ctx->pc = 0x1c9a490u;
}
