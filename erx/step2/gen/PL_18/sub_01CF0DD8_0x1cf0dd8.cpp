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

// Function: sub_01CF0DD8
// Address: 0x1cf0dd8 - 0x1cf0ea8
void sub_01CF0DD8_0x1cf0dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CF0DD8_0x1cf0dd8");
#endif

    switch (ctx->pc) {
        case 0x1cf0dfcu: goto label_1cf0dfc;
        case 0x1cf0e4cu: goto label_1cf0e4c;
        default: break;
    }

    ctx->pc = 0x1cf0dd8u;

    // 0x1cf0dd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cf0dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cf0ddc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cf0ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cf0de0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cf0de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cf0de4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cf0de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cf0de8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1cf0de8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf0dec: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1cf0decu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf0df0: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cf0df0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cf0df4: 0xc73bd58  jal         func_1CEF560
    ctx->pc = 0x1CF0DF4u;
    SET_GPR_U32(ctx, 31, 0x1CF0DFCu);
    ctx->pc = 0x1CF0DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF0DF4u;
    // 0x1cf0df8: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF560u, 0x1CF0DF4u, 0x1CF0DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF0DFCu;
label_1cf0dfc:
    // 0x1cf0dfc: 0x8e2e0000  lw          $t6, 0x0($s1)
    ctx->pc = 0x1cf0dfcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cf0e00: 0x240f0390  addiu       $t7, $zero, 0x390
    ctx->pc = 0x1cf0e00u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1cf0e04: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x1cf0e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1cf0e08: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1cf0e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf0e0c: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x1cf0e0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1cf0e10: 0x8c4d004c  lw          $t5, 0x4C($v0)
    ctx->pc = 0x1cf0e10u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1cf0e14: 0xe600025c  swc1        $f0, 0x25C($s0)
    ctx->pc = 0x1cf0e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 604), bits); }
    // 0x1cf0e18: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cf0e18u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf0e1c: 0x862c0004  lh          $t4, 0x4($s1)
    ctx->pc = 0x1cf0e1cu;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1cf0e20: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1cf0e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf0e24: 0x8daf0084  lw          $t7, 0x84($t5)
    ctx->pc = 0x1cf0e24u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 132)));
    // 0x1cf0e28: 0xe6000260  swc1        $f0, 0x260($s0)
    ctx->pc = 0x1cf0e28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
    // 0x1cf0e2c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1cf0e2cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1cf0e30: 0x962d000c  lhu         $t5, 0xC($s1)
    ctx->pc = 0x1cf0e30u;
    SET_GPR_ZE32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1cf0e34: 0x25ef0110  addiu       $t7, $t7, 0x110
    ctx->pc = 0x1cf0e34u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 272));
    // 0x1cf0e38: 0xa60c0258  sh          $t4, 0x258($s0)
    ctx->pc = 0x1cf0e38u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 600), (uint16_t)GPR_U32(ctx, 12));
    // 0x1cf0e3c: 0xae0f0250  sw          $t7, 0x250($s0)
    ctx->pc = 0x1cf0e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 15));
    // 0x1cf0e40: 0x19800011  blez        $t4, . + 4 + (0x11 << 2)
    ctx->pc = 0x1CF0E40u;
    {
        const bool branch_taken_0x1cf0e40 = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x1CF0E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF0E40u;
        // 0x1cf0e44: 0xa60d025a  sh          $t5, 0x25A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 602), (uint16_t)GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf0e40) {
            ctx->pc = 0x1CF0E88u;
            goto label_1cf0e88;
        }
    }
    ctx->pc = 0x1CF0E48u;
    // 0x1cf0e48: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1cf0e48u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf0e4c:
    // 0x1cf0e4c: 0x1716821  addu        $t5, $t3, $s1
    ctx->pc = 0x1cf0e4cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 17)));
    // 0x1cf0e50: 0x1707021  addu        $t6, $t3, $s0
    ctx->pc = 0x1cf0e50u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 16)));
    // 0x1cf0e54: 0x79af0020  lq          $t7, 0x20($t5)
    ctx->pc = 0x1cf0e54u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 13), 32)));
    // 0x1cf0e58: 0x25cc0270  addiu       $t4, $t6, 0x270
    ctx->pc = 0x1cf0e58u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 14), 624));
    // 0x1cf0e5c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1cf0e5cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1cf0e60: 0x7dcf0270  sq          $t7, 0x270($t6)
    ctx->pc = 0x1cf0e60u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 624), GPR_VEC(ctx, 15));
    // 0x1cf0e64: 0x25ad0020  addiu       $t5, $t5, 0x20
    ctx->pc = 0x1cf0e64u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 32));
    // 0x1cf0e68: 0x79af0010  lq          $t7, 0x10($t5)
    ctx->pc = 0x1cf0e68u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 13), 16)));
    // 0x1cf0e6c: 0x7d8f0010  sq          $t7, 0x10($t4)
    ctx->pc = 0x1cf0e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 12), 16), GPR_VEC(ctx, 15));
    // 0x1cf0e70: 0x79ae0020  lq          $t6, 0x20($t5)
    ctx->pc = 0x1cf0e70u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 13), 32)));
    // 0x1cf0e74: 0x7d8e0020  sq          $t6, 0x20($t4)
    ctx->pc = 0x1cf0e74u;
    WRITE128(ADD32(GPR_U32(ctx, 12), 32), GPR_VEC(ctx, 14));
    // 0x1cf0e78: 0x860f0258  lh          $t7, 0x258($s0)
    ctx->pc = 0x1cf0e78u;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 600)));
    // 0x1cf0e7c: 0x14f782a  slt         $t7, $t2, $t7
    ctx->pc = 0x1cf0e7cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x1cf0e80: 0x15e0fff2  bnez        $t7, . + 4 + (-0xE << 2)
    ctx->pc = 0x1CF0E80u;
    {
        const bool branch_taken_0x1cf0e80 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF0E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF0E80u;
        // 0x1cf0e84: 0x256b0030  addiu       $t3, $t3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf0e80) {
            ctx->pc = 0x1CF0E4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cf0e4c;
        }
    }
    ctx->pc = 0x1CF0E88u;
label_1cf0e88:
    // 0x1cf0e88: 0x8c4f00b4  lw          $t7, 0xB4($v0)
    ctx->pc = 0x1cf0e88u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x1cf0e8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cf0e8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cf0e90: 0xae0f0254  sw          $t7, 0x254($s0)
    ctx->pc = 0x1cf0e90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 15));
    // 0x1cf0e94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cf0e94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf0e98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cf0e98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf0e9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF0E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF0EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF0E9Cu;
        // 0x1cf0ea0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF0E9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF0EA4u;
    // 0x1cf0ea4: 0x0  nop
    ctx->pc = 0x1cf0ea4u;
    // NOP
    ctx->pc = 0x1cf0ea8u;
}
