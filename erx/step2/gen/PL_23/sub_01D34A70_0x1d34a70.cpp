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

// Function: sub_01D34A70
// Address: 0x1d34a70 - 0x1d34b70
void sub_01D34A70_0x1d34a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D34A70_0x1d34a70");
#endif

    switch (ctx->pc) {
        case 0x1d34a94u: goto label_1d34a94;
        case 0x1d34b24u: goto label_1d34b24;
        default: break;
    }

    ctx->pc = 0x1d34a70u;

    // 0x1d34a70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d34a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d34a74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d34a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d34a78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d34a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d34a7c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d34a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d34a80: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d34a80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d34a84: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1d34a84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d34a88: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d34a88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d34a8c: 0xc74cd56  jal         func_1D33558
    ctx->pc = 0x1D34A8Cu;
    SET_GPR_U32(ctx, 31, 0x1D34A94u);
    ctx->pc = 0x1D34A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D34A8Cu;
    // 0x1d34a90: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33558u, 0x1D34A8Cu, 0x1D34A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D34A94u;
label_1d34a94:
    // 0x1d34a94: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x1d34a94u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d34a98: 0x240f0060  addiu       $t7, $zero, 0x60
    ctx->pc = 0x1d34a98u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1d34a9c: 0x8e0b0004  lw          $t3, 0x4($s0)
    ctx->pc = 0x1d34a9cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d34aa0: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x1d34aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1d34aa4: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1d34aa4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1d34aa8: 0x860e000e  lh          $t6, 0xE($s0)
    ctx->pc = 0x1d34aa8u;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x1d34aac: 0x8609000c  lh          $t1, 0xC($s0)
    ctx->pc = 0x1d34aacu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d34ab0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d34ab0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d34ab4: 0xae2e0434  sw          $t6, 0x434($s1)
    ctx->pc = 0x1d34ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1076), GPR_U32(ctx, 14));
    // 0x1d34ab8: 0xae290430  sw          $t1, 0x430($s1)
    ctx->pc = 0x1d34ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1072), GPR_U32(ctx, 9));
    // 0x1d34abc: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1d34abcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1d34ac0: 0x8c4c00b0  lw          $t4, 0xB0($v0)
    ctx->pc = 0x1d34ac0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x1d34ac4: 0x16f5818  mult        $t3, $t3, $t7
    ctx->pc = 0x1d34ac4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x1d34ac8: 0x8c4e004c  lw          $t6, 0x4C($v0)
    ctx->pc = 0x1d34ac8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1d34acc: 0x18d6021  addu        $t4, $t4, $t5
    ctx->pc = 0x1d34accu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x1d34ad0: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1d34ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d34ad4: 0x8d8d0010  lw          $t5, 0x10($t4)
    ctx->pc = 0x1d34ad4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x1d34ad8: 0x25ce4610  addiu       $t6, $t6, 0x4610
    ctx->pc = 0x1d34ad8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 17936));
    // 0x1d34adc: 0xae2e0420  sw          $t6, 0x420($s1)
    ctx->pc = 0x1d34adcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1056), GPR_U32(ctx, 14));
    // 0x1d34ae0: 0x8e0f0014  lw          $t7, 0x14($s0)
    ctx->pc = 0x1d34ae0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1d34ae4: 0x1ab6821  addu        $t5, $t5, $t3
    ctx->pc = 0x1d34ae4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x1d34ae8: 0x8e0b0010  lw          $t3, 0x10($s0)
    ctx->pc = 0x1d34ae8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d34aec: 0xae2f0444  sw          $t7, 0x444($s1)
    ctx->pc = 0x1d34aecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1092), GPR_U32(ctx, 15));
    // 0x1d34af0: 0xae2d0428  sw          $t5, 0x428($s1)
    ctx->pc = 0x1d34af0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1064), GPR_U32(ctx, 13));
    // 0x1d34af4: 0x8e0f0020  lw          $t7, 0x20($s0)
    ctx->pc = 0x1d34af4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1d34af8: 0xe620042c  swc1        $f0, 0x42C($s1)
    ctx->pc = 0x1d34af8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1068), bits); }
    // 0x1d34afc: 0xae2f0450  sw          $t7, 0x450($s1)
    ctx->pc = 0x1d34afcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1104), GPR_U32(ctx, 15));
    // 0x1d34b00: 0xae2b0440  sw          $t3, 0x440($s1)
    ctx->pc = 0x1d34b00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1088), GPR_U32(ctx, 11));
    // 0x1d34b04: 0x8e0f0024  lw          $t7, 0x24($s0)
    ctx->pc = 0x1d34b04u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1d34b08: 0xae2c0424  sw          $t4, 0x424($s1)
    ctx->pc = 0x1d34b08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1060), GPR_U32(ctx, 12));
    // 0x1d34b0c: 0xae2f0454  sw          $t7, 0x454($s1)
    ctx->pc = 0x1d34b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1108), GPR_U32(ctx, 15));
    // 0x1d34b10: 0x8e0f0028  lw          $t7, 0x28($s0)
    ctx->pc = 0x1d34b10u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1d34b14: 0xae2f0458  sw          $t7, 0x458($s1)
    ctx->pc = 0x1d34b14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1112), GPR_U32(ctx, 15));
    // 0x1d34b18: 0x8e0f002c  lw          $t7, 0x2C($s0)
    ctx->pc = 0x1d34b18u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1d34b1c: 0x1920000f  blez        $t1, . + 4 + (0xF << 2)
    ctx->pc = 0x1D34B1Cu;
    {
        const bool branch_taken_0x1d34b1c = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x1D34B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D34B1Cu;
        // 0x1d34b20: 0xae2f045c  sw          $t7, 0x45C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1116), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d34b1c) {
            ctx->pc = 0x1D34B5Cu;
            goto label_1d34b5c;
        }
    }
    ctx->pc = 0x1D34B24u;
label_1d34b24:
    // 0x1d34b24: 0xa7900  sll         $t7, $t2, 4
    ctx->pc = 0x1d34b24u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x1d34b28: 0x1f06021  addu        $t4, $t7, $s0
    ctx->pc = 0x1d34b28u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
    // 0x1d34b2c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1d34b2cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1d34b30: 0x8d8d0030  lw          $t5, 0x30($t4)
    ctx->pc = 0x1d34b30u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 48)));
    // 0x1d34b34: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x1d34b34u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x1d34b38: 0x149582a  slt         $t3, $t2, $t1
    ctx->pc = 0x1d34b38u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x1d34b3c: 0xaded0460  sw          $t5, 0x460($t7)
    ctx->pc = 0x1d34b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 1120), GPR_U32(ctx, 13));
    // 0x1d34b40: 0x8d8e0034  lw          $t6, 0x34($t4)
    ctx->pc = 0x1d34b40u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 52)));
    // 0x1d34b44: 0xadee0464  sw          $t6, 0x464($t7)
    ctx->pc = 0x1d34b44u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 1124), GPR_U32(ctx, 14));
    // 0x1d34b48: 0x8d8d0038  lw          $t5, 0x38($t4)
    ctx->pc = 0x1d34b48u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 56)));
    // 0x1d34b4c: 0xaded0468  sw          $t5, 0x468($t7)
    ctx->pc = 0x1d34b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 1128), GPR_U32(ctx, 13));
    // 0x1d34b50: 0x8d8e003c  lw          $t6, 0x3C($t4)
    ctx->pc = 0x1d34b50u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 60)));
    // 0x1d34b54: 0x1560fff3  bnez        $t3, . + 4 + (-0xD << 2)
    ctx->pc = 0x1D34B54u;
    {
        const bool branch_taken_0x1d34b54 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D34B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D34B54u;
        // 0x1d34b58: 0xadee046c  sw          $t6, 0x46C($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 1132), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d34b54) {
            ctx->pc = 0x1D34B24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d34b24;
        }
    }
    ctx->pc = 0x1D34B5Cu;
label_1d34b5c:
    // 0x1d34b5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d34b5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d34b60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d34b60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d34b64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d34b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d34b68: 0x3e00008  jr          $ra
    ctx->pc = 0x1D34B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D34B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D34B68u;
        // 0x1d34b6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D34B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D34B70u;
}
