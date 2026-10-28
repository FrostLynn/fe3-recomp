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

// Function: sub_01D7EE48
// Address: 0x1d7ee48 - 0x1d7ef48
void sub_01D7EE48_0x1d7ee48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D7EE48_0x1d7ee48");
#endif

    switch (ctx->pc) {
        case 0x1d7ee6cu: goto label_1d7ee6c;
        case 0x1d7eefcu: goto label_1d7eefc;
        default: break;
    }

    ctx->pc = 0x1d7ee48u;

    // 0x1d7ee48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d7ee48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d7ee4c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d7ee4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d7ee50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d7ee50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d7ee54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d7ee54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d7ee58: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d7ee58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7ee5c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1d7ee5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7ee60: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d7ee60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d7ee64: 0xc75f5d6  jal         func_1D7D758
    ctx->pc = 0x1D7EE64u;
    SET_GPR_U32(ctx, 31, 0x1D7EE6Cu);
    ctx->pc = 0x1D7EE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7EE64u;
    // 0x1d7ee68: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D758u, 0x1D7EE64u, 0x1D7EE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7EE6Cu;
label_1d7ee6c:
    // 0x1d7ee6c: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x1d7ee6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7ee70: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x1d7ee70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1d7ee74: 0x8e0f0004  lw          $t7, 0x4($s0)
    ctx->pc = 0x1d7ee74u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d7ee78: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d7ee78u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7ee7c: 0xe62001f0  swc1        $f0, 0x1F0($s1)
    ctx->pc = 0x1d7ee7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 496), bits); }
    // 0x1d7ee80: 0xae2f01ec  sw          $t7, 0x1EC($s1)
    ctx->pc = 0x1d7ee80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 492), GPR_U32(ctx, 15));
    // 0x1d7ee84: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x1d7ee84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7ee88: 0x8e0d0008  lw          $t5, 0x8($s0)
    ctx->pc = 0x1d7ee88u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d7ee8c: 0x240f0390  addiu       $t7, $zero, 0x390
    ctx->pc = 0x1d7ee8cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1d7ee90: 0xe62001fc  swc1        $f0, 0x1FC($s1)
    ctx->pc = 0x1d7ee90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 508), bits); }
    // 0x1d7ee94: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1d7ee94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1d7ee98: 0x8e0c0000  lw          $t4, 0x0($s0)
    ctx->pc = 0x1d7ee98u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d7ee9c: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x1d7ee9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7eea0: 0x8c4e004c  lw          $t6, 0x4C($v0)
    ctx->pc = 0x1d7eea0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1d7eea4: 0xe62001f8  swc1        $f0, 0x1F8($s1)
    ctx->pc = 0x1d7eea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 504), bits); }
    // 0x1d7eea8: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1d7eea8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1d7eeac: 0x8e0b000c  lw          $t3, 0xC($s0)
    ctx->pc = 0x1d7eeacu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d7eeb0: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1d7eeb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7eeb4: 0x18f6018  mult        $t4, $t4, $t7
    ctx->pc = 0x1d7eeb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x1d7eeb8: 0xae2b01e8  sw          $t3, 0x1E8($s1)
    ctx->pc = 0x1d7eeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 488), GPR_U32(ctx, 11));
    // 0x1d7eebc: 0xe6200200  swc1        $f0, 0x200($s1)
    ctx->pc = 0x1d7eebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 512), bits); }
    // 0x1d7eec0: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x1d7eec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7eec4: 0x8dcf0084  lw          $t7, 0x84($t6)
    ctx->pc = 0x1d7eec4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1d7eec8: 0xe6200204  swc1        $f0, 0x204($s1)
    ctx->pc = 0x1d7eec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 516), bits); }
    // 0x1d7eecc: 0x8c4e00b4  lw          $t6, 0xB4($v0)
    ctx->pc = 0x1d7eeccu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x1d7eed0: 0x1ed7821  addu        $t7, $t7, $t5
    ctx->pc = 0x1d7eed0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
    // 0x1d7eed4: 0x8e0d0018  lw          $t5, 0x18($s0)
    ctx->pc = 0x1d7eed4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1d7eed8: 0x25ef0110  addiu       $t7, $t7, 0x110
    ctx->pc = 0x1d7eed8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 272));
    // 0x1d7eedc: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x1d7eedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7eee0: 0x1cc7021  addu        $t6, $t6, $t4
    ctx->pc = 0x1d7eee0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
    // 0x1d7eee4: 0xae2f01e0  sw          $t7, 0x1E0($s1)
    ctx->pc = 0x1d7eee4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 480), GPR_U32(ctx, 15));
    // 0x1d7eee8: 0xae2e01e4  sw          $t6, 0x1E4($s1)
    ctx->pc = 0x1d7eee8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 484), GPR_U32(ctx, 14));
    // 0x1d7eeec: 0xae2d01f4  sw          $t5, 0x1F4($s1)
    ctx->pc = 0x1d7eeecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 500), GPR_U32(ctx, 13));
    // 0x1d7eef0: 0x19600010  blez        $t3, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D7EEF0u;
    {
        const bool branch_taken_0x1d7eef0 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x1D7EEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7EEF0u;
        // 0x1d7eef4: 0xe6200208  swc1        $f0, 0x208($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 520), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7eef0) {
            ctx->pc = 0x1D7EF34u;
            goto label_1d7ef34;
        }
    }
    ctx->pc = 0x1D7EEF8u;
    // 0x1d7eef8: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x1d7eef8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_1d7eefc:
    // 0x1d7eefc: 0xa7900  sll         $t7, $t2, 4
    ctx->pc = 0x1d7eefcu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x1d7ef00: 0x1f06021  addu        $t4, $t7, $s0
    ctx->pc = 0x1d7ef00u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
    // 0x1d7ef04: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1d7ef04u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1d7ef08: 0x8d8d0030  lw          $t5, 0x30($t4)
    ctx->pc = 0x1d7ef08u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 48)));
    // 0x1d7ef0c: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x1d7ef0cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x1d7ef10: 0x149582a  slt         $t3, $t2, $t1
    ctx->pc = 0x1d7ef10u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x1d7ef14: 0xaded0210  sw          $t5, 0x210($t7)
    ctx->pc = 0x1d7ef14u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 528), GPR_U32(ctx, 13));
    // 0x1d7ef18: 0x8d8e0034  lw          $t6, 0x34($t4)
    ctx->pc = 0x1d7ef18u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 52)));
    // 0x1d7ef1c: 0xadee0214  sw          $t6, 0x214($t7)
    ctx->pc = 0x1d7ef1cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 532), GPR_U32(ctx, 14));
    // 0x1d7ef20: 0x8d8d0038  lw          $t5, 0x38($t4)
    ctx->pc = 0x1d7ef20u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 56)));
    // 0x1d7ef24: 0xaded0218  sw          $t5, 0x218($t7)
    ctx->pc = 0x1d7ef24u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 536), GPR_U32(ctx, 13));
    // 0x1d7ef28: 0x8d8e003c  lw          $t6, 0x3C($t4)
    ctx->pc = 0x1d7ef28u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 60)));
    // 0x1d7ef2c: 0x1560fff3  bnez        $t3, . + 4 + (-0xD << 2)
    ctx->pc = 0x1D7EF2Cu;
    {
        const bool branch_taken_0x1d7ef2c = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7EF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7EF2Cu;
        // 0x1d7ef30: 0xadee021c  sw          $t6, 0x21C($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 540), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7ef2c) {
            ctx->pc = 0x1D7EEFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7eefc;
        }
    }
    ctx->pc = 0x1D7EF34u;
label_1d7ef34:
    // 0x1d7ef34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d7ef34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7ef38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d7ef38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d7ef3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d7ef3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7ef40: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7EF40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7EF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7EF40u;
        // 0x1d7ef44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7EF40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7EF48u;
}
