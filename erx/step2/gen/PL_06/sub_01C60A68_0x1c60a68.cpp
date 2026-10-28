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

// Function: sub_01C60A68
// Address: 0x1c60a68 - 0x1c60b68
void sub_01C60A68_0x1c60a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C60A68_0x1c60a68");
#endif

    switch (ctx->pc) {
        case 0x1c60a8cu: goto label_1c60a8c;
        case 0x1c60b1cu: goto label_1c60b1c;
        default: break;
    }

    ctx->pc = 0x1c60a68u;

    // 0x1c60a68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c60a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c60a6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c60a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c60a70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c60a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c60a74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c60a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c60a78: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c60a78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c60a7c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1c60a7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c60a80: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c60a80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c60a84: 0xc717d56  jal         func_1C5F558
    ctx->pc = 0x1C60A84u;
    SET_GPR_U32(ctx, 31, 0x1C60A8Cu);
    ctx->pc = 0x1C60A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C60A84u;
    // 0x1c60a88: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F558u, 0x1C60A84u, 0x1C60A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C60A8Cu;
label_1c60a8c:
    // 0x1c60a8c: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x1c60a8cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c60a90: 0x240f0060  addiu       $t7, $zero, 0x60
    ctx->pc = 0x1c60a90u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1c60a94: 0x8e0b0004  lw          $t3, 0x4($s0)
    ctx->pc = 0x1c60a94u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c60a98: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x1c60a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1c60a9c: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1c60a9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1c60aa0: 0x860e000e  lh          $t6, 0xE($s0)
    ctx->pc = 0x1c60aa0u;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x1c60aa4: 0x8609000c  lh          $t1, 0xC($s0)
    ctx->pc = 0x1c60aa4u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c60aa8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c60aa8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c60aac: 0xae2e0434  sw          $t6, 0x434($s1)
    ctx->pc = 0x1c60aacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1076), GPR_U32(ctx, 14));
    // 0x1c60ab0: 0xae290430  sw          $t1, 0x430($s1)
    ctx->pc = 0x1c60ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1072), GPR_U32(ctx, 9));
    // 0x1c60ab4: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1c60ab4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c60ab8: 0x8c4c00b0  lw          $t4, 0xB0($v0)
    ctx->pc = 0x1c60ab8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x1c60abc: 0x16f5818  mult        $t3, $t3, $t7
    ctx->pc = 0x1c60abcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x1c60ac0: 0x8c4e004c  lw          $t6, 0x4C($v0)
    ctx->pc = 0x1c60ac0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1c60ac4: 0x18d6021  addu        $t4, $t4, $t5
    ctx->pc = 0x1c60ac4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x1c60ac8: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1c60ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c60acc: 0x8d8d0010  lw          $t5, 0x10($t4)
    ctx->pc = 0x1c60accu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x1c60ad0: 0x25ce4610  addiu       $t6, $t6, 0x4610
    ctx->pc = 0x1c60ad0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 17936));
    // 0x1c60ad4: 0xae2e0420  sw          $t6, 0x420($s1)
    ctx->pc = 0x1c60ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1056), GPR_U32(ctx, 14));
    // 0x1c60ad8: 0x8e0f0014  lw          $t7, 0x14($s0)
    ctx->pc = 0x1c60ad8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1c60adc: 0x1ab6821  addu        $t5, $t5, $t3
    ctx->pc = 0x1c60adcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x1c60ae0: 0x8e0b0010  lw          $t3, 0x10($s0)
    ctx->pc = 0x1c60ae0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c60ae4: 0xae2f0444  sw          $t7, 0x444($s1)
    ctx->pc = 0x1c60ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1092), GPR_U32(ctx, 15));
    // 0x1c60ae8: 0xae2d0428  sw          $t5, 0x428($s1)
    ctx->pc = 0x1c60ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1064), GPR_U32(ctx, 13));
    // 0x1c60aec: 0x8e0f0020  lw          $t7, 0x20($s0)
    ctx->pc = 0x1c60aecu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1c60af0: 0xe620042c  swc1        $f0, 0x42C($s1)
    ctx->pc = 0x1c60af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1068), bits); }
    // 0x1c60af4: 0xae2f0450  sw          $t7, 0x450($s1)
    ctx->pc = 0x1c60af4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1104), GPR_U32(ctx, 15));
    // 0x1c60af8: 0xae2b0440  sw          $t3, 0x440($s1)
    ctx->pc = 0x1c60af8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1088), GPR_U32(ctx, 11));
    // 0x1c60afc: 0x8e0f0024  lw          $t7, 0x24($s0)
    ctx->pc = 0x1c60afcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c60b00: 0xae2c0424  sw          $t4, 0x424($s1)
    ctx->pc = 0x1c60b00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1060), GPR_U32(ctx, 12));
    // 0x1c60b04: 0xae2f0454  sw          $t7, 0x454($s1)
    ctx->pc = 0x1c60b04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1108), GPR_U32(ctx, 15));
    // 0x1c60b08: 0x8e0f0028  lw          $t7, 0x28($s0)
    ctx->pc = 0x1c60b08u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1c60b0c: 0xae2f0458  sw          $t7, 0x458($s1)
    ctx->pc = 0x1c60b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1112), GPR_U32(ctx, 15));
    // 0x1c60b10: 0x8e0f002c  lw          $t7, 0x2C($s0)
    ctx->pc = 0x1c60b10u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1c60b14: 0x1920000f  blez        $t1, . + 4 + (0xF << 2)
    ctx->pc = 0x1C60B14u;
    {
        const bool branch_taken_0x1c60b14 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x1C60B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C60B14u;
        // 0x1c60b18: 0xae2f045c  sw          $t7, 0x45C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1116), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c60b14) {
            ctx->pc = 0x1C60B54u;
            goto label_1c60b54;
        }
    }
    ctx->pc = 0x1C60B1Cu;
label_1c60b1c:
    // 0x1c60b1c: 0xa7900  sll         $t7, $t2, 4
    ctx->pc = 0x1c60b1cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x1c60b20: 0x1f06021  addu        $t4, $t7, $s0
    ctx->pc = 0x1c60b20u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
    // 0x1c60b24: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1c60b24u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1c60b28: 0x8d8d0030  lw          $t5, 0x30($t4)
    ctx->pc = 0x1c60b28u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 48)));
    // 0x1c60b2c: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x1c60b2cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x1c60b30: 0x149582a  slt         $t3, $t2, $t1
    ctx->pc = 0x1c60b30u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x1c60b34: 0xaded0460  sw          $t5, 0x460($t7)
    ctx->pc = 0x1c60b34u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 1120), GPR_U32(ctx, 13));
    // 0x1c60b38: 0x8d8e0034  lw          $t6, 0x34($t4)
    ctx->pc = 0x1c60b38u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 52)));
    // 0x1c60b3c: 0xadee0464  sw          $t6, 0x464($t7)
    ctx->pc = 0x1c60b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 1124), GPR_U32(ctx, 14));
    // 0x1c60b40: 0x8d8d0038  lw          $t5, 0x38($t4)
    ctx->pc = 0x1c60b40u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 56)));
    // 0x1c60b44: 0xaded0468  sw          $t5, 0x468($t7)
    ctx->pc = 0x1c60b44u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 1128), GPR_U32(ctx, 13));
    // 0x1c60b48: 0x8d8e003c  lw          $t6, 0x3C($t4)
    ctx->pc = 0x1c60b48u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 60)));
    // 0x1c60b4c: 0x1560fff3  bnez        $t3, . + 4 + (-0xD << 2)
    ctx->pc = 0x1C60B4Cu;
    {
        const bool branch_taken_0x1c60b4c = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C60B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C60B4Cu;
        // 0x1c60b50: 0xadee046c  sw          $t6, 0x46C($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 1132), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c60b4c) {
            ctx->pc = 0x1C60B1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c60b1c;
        }
    }
    ctx->pc = 0x1C60B54u;
label_1c60b54:
    // 0x1c60b54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c60b54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c60b58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c60b58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c60b5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c60b5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c60b60: 0x3e00008  jr          $ra
    ctx->pc = 0x1C60B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C60B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C60B60u;
        // 0x1c60b64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C60B60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C60B68u;
}
