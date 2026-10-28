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

// Function: sub_01C50ED8
// Address: 0x1c50ed8 - 0x1c50fd8
void sub_01C50ED8_0x1c50ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C50ED8_0x1c50ed8");
#endif

    switch (ctx->pc) {
        case 0x1c50efcu: goto label_1c50efc;
        case 0x1c50f8cu: goto label_1c50f8c;
        default: break;
    }

    ctx->pc = 0x1c50ed8u;

    // 0x1c50ed8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c50ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c50edc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c50edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c50ee0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c50ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c50ee4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c50ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c50ee8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c50ee8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c50eec: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1c50eecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c50ef0: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c50ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c50ef4: 0xc713e62  jal         func_1C4F988
    ctx->pc = 0x1C50EF4u;
    SET_GPR_U32(ctx, 31, 0x1C50EFCu);
    ctx->pc = 0x1C50EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C50EF4u;
    // 0x1c50ef8: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F988u, 0x1C50EF4u, 0x1C50EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C50EFCu;
label_1c50efc:
    // 0x1c50efc: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x1c50efcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c50f00: 0x240f0060  addiu       $t7, $zero, 0x60
    ctx->pc = 0x1c50f00u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1c50f04: 0x8e0b0004  lw          $t3, 0x4($s0)
    ctx->pc = 0x1c50f04u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c50f08: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x1c50f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1c50f0c: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1c50f0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1c50f10: 0x860e000e  lh          $t6, 0xE($s0)
    ctx->pc = 0x1c50f10u;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x1c50f14: 0x8609000c  lh          $t1, 0xC($s0)
    ctx->pc = 0x1c50f14u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c50f18: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c50f18u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c50f1c: 0xae2e0434  sw          $t6, 0x434($s1)
    ctx->pc = 0x1c50f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1076), GPR_U32(ctx, 14));
    // 0x1c50f20: 0xae290430  sw          $t1, 0x430($s1)
    ctx->pc = 0x1c50f20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1072), GPR_U32(ctx, 9));
    // 0x1c50f24: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1c50f24u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c50f28: 0x8c4c00b0  lw          $t4, 0xB0($v0)
    ctx->pc = 0x1c50f28u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x1c50f2c: 0x16f5818  mult        $t3, $t3, $t7
    ctx->pc = 0x1c50f2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x1c50f30: 0x8c4e004c  lw          $t6, 0x4C($v0)
    ctx->pc = 0x1c50f30u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1c50f34: 0x18d6021  addu        $t4, $t4, $t5
    ctx->pc = 0x1c50f34u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x1c50f38: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1c50f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c50f3c: 0x8d8d0010  lw          $t5, 0x10($t4)
    ctx->pc = 0x1c50f3cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x1c50f40: 0x25ce4610  addiu       $t6, $t6, 0x4610
    ctx->pc = 0x1c50f40u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 17936));
    // 0x1c50f44: 0xae2e0420  sw          $t6, 0x420($s1)
    ctx->pc = 0x1c50f44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1056), GPR_U32(ctx, 14));
    // 0x1c50f48: 0x8e0f0014  lw          $t7, 0x14($s0)
    ctx->pc = 0x1c50f48u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1c50f4c: 0x1ab6821  addu        $t5, $t5, $t3
    ctx->pc = 0x1c50f4cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x1c50f50: 0x8e0b0010  lw          $t3, 0x10($s0)
    ctx->pc = 0x1c50f50u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c50f54: 0xae2f0444  sw          $t7, 0x444($s1)
    ctx->pc = 0x1c50f54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1092), GPR_U32(ctx, 15));
    // 0x1c50f58: 0xae2d0428  sw          $t5, 0x428($s1)
    ctx->pc = 0x1c50f58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1064), GPR_U32(ctx, 13));
    // 0x1c50f5c: 0x8e0f0020  lw          $t7, 0x20($s0)
    ctx->pc = 0x1c50f5cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1c50f60: 0xe620042c  swc1        $f0, 0x42C($s1)
    ctx->pc = 0x1c50f60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1068), bits); }
    // 0x1c50f64: 0xae2f0450  sw          $t7, 0x450($s1)
    ctx->pc = 0x1c50f64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1104), GPR_U32(ctx, 15));
    // 0x1c50f68: 0xae2b0440  sw          $t3, 0x440($s1)
    ctx->pc = 0x1c50f68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1088), GPR_U32(ctx, 11));
    // 0x1c50f6c: 0x8e0f0024  lw          $t7, 0x24($s0)
    ctx->pc = 0x1c50f6cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c50f70: 0xae2c0424  sw          $t4, 0x424($s1)
    ctx->pc = 0x1c50f70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1060), GPR_U32(ctx, 12));
    // 0x1c50f74: 0xae2f0454  sw          $t7, 0x454($s1)
    ctx->pc = 0x1c50f74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1108), GPR_U32(ctx, 15));
    // 0x1c50f78: 0x8e0f0028  lw          $t7, 0x28($s0)
    ctx->pc = 0x1c50f78u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1c50f7c: 0xae2f0458  sw          $t7, 0x458($s1)
    ctx->pc = 0x1c50f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1112), GPR_U32(ctx, 15));
    // 0x1c50f80: 0x8e0f002c  lw          $t7, 0x2C($s0)
    ctx->pc = 0x1c50f80u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1c50f84: 0x1920000f  blez        $t1, . + 4 + (0xF << 2)
    ctx->pc = 0x1C50F84u;
    {
        const bool branch_taken_0x1c50f84 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x1C50F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C50F84u;
        // 0x1c50f88: 0xae2f045c  sw          $t7, 0x45C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1116), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c50f84) {
            ctx->pc = 0x1C50FC4u;
            goto label_1c50fc4;
        }
    }
    ctx->pc = 0x1C50F8Cu;
label_1c50f8c:
    // 0x1c50f8c: 0xa7900  sll         $t7, $t2, 4
    ctx->pc = 0x1c50f8cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x1c50f90: 0x1f06021  addu        $t4, $t7, $s0
    ctx->pc = 0x1c50f90u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
    // 0x1c50f94: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1c50f94u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1c50f98: 0x8d8d0030  lw          $t5, 0x30($t4)
    ctx->pc = 0x1c50f98u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 48)));
    // 0x1c50f9c: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x1c50f9cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x1c50fa0: 0x149582a  slt         $t3, $t2, $t1
    ctx->pc = 0x1c50fa0u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x1c50fa4: 0xaded0460  sw          $t5, 0x460($t7)
    ctx->pc = 0x1c50fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 1120), GPR_U32(ctx, 13));
    // 0x1c50fa8: 0x8d8e0034  lw          $t6, 0x34($t4)
    ctx->pc = 0x1c50fa8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 52)));
    // 0x1c50fac: 0xadee0464  sw          $t6, 0x464($t7)
    ctx->pc = 0x1c50facu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 1124), GPR_U32(ctx, 14));
    // 0x1c50fb0: 0x8d8d0038  lw          $t5, 0x38($t4)
    ctx->pc = 0x1c50fb0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 56)));
    // 0x1c50fb4: 0xaded0468  sw          $t5, 0x468($t7)
    ctx->pc = 0x1c50fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 1128), GPR_U32(ctx, 13));
    // 0x1c50fb8: 0x8d8e003c  lw          $t6, 0x3C($t4)
    ctx->pc = 0x1c50fb8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 60)));
    // 0x1c50fbc: 0x1560fff3  bnez        $t3, . + 4 + (-0xD << 2)
    ctx->pc = 0x1C50FBCu;
    {
        const bool branch_taken_0x1c50fbc = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C50FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C50FBCu;
        // 0x1c50fc0: 0xadee046c  sw          $t6, 0x46C($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 1132), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c50fbc) {
            ctx->pc = 0x1C50F8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c50f8c;
        }
    }
    ctx->pc = 0x1C50FC4u;
label_1c50fc4:
    // 0x1c50fc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c50fc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c50fc8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c50fc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c50fcc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c50fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c50fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C50FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C50FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C50FD0u;
        // 0x1c50fd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C50FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C50FD8u;
}
