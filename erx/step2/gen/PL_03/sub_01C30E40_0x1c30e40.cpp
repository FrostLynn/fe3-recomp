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

// Function: sub_01C30E40
// Address: 0x1c30e40 - 0x1c30f40
void sub_01C30E40_0x1c30e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C30E40_0x1c30e40");
#endif

    switch (ctx->pc) {
        case 0x1c30e64u: goto label_1c30e64;
        case 0x1c30ef4u: goto label_1c30ef4;
        default: break;
    }

    ctx->pc = 0x1c30e40u;

    // 0x1c30e40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c30e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c30e44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c30e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c30e48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c30e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c30e4c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c30e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c30e50: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c30e50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c30e54: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1c30e54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c30e58: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c30e58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c30e5c: 0xc70bdd6  jal         func_1C2F758
    ctx->pc = 0x1C30E5Cu;
    SET_GPR_U32(ctx, 31, 0x1C30E64u);
    ctx->pc = 0x1C30E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C30E5Cu;
    // 0x1c30e60: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F758u, 0x1C30E5Cu, 0x1C30E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C30E64u;
label_1c30e64:
    // 0x1c30e64: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x1c30e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c30e68: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x1c30e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1c30e6c: 0x8e0f0004  lw          $t7, 0x4($s0)
    ctx->pc = 0x1c30e6cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c30e70: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c30e70u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c30e74: 0xe62001f0  swc1        $f0, 0x1F0($s1)
    ctx->pc = 0x1c30e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 496), bits); }
    // 0x1c30e78: 0xae2f01ec  sw          $t7, 0x1EC($s1)
    ctx->pc = 0x1c30e78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 492), GPR_U32(ctx, 15));
    // 0x1c30e7c: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x1c30e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c30e80: 0x8e0d0008  lw          $t5, 0x8($s0)
    ctx->pc = 0x1c30e80u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1c30e84: 0x240f0390  addiu       $t7, $zero, 0x390
    ctx->pc = 0x1c30e84u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1c30e88: 0xe62001fc  swc1        $f0, 0x1FC($s1)
    ctx->pc = 0x1c30e88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 508), bits); }
    // 0x1c30e8c: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1c30e8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1c30e90: 0x8e0c0000  lw          $t4, 0x0($s0)
    ctx->pc = 0x1c30e90u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c30e94: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x1c30e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c30e98: 0x8c4e004c  lw          $t6, 0x4C($v0)
    ctx->pc = 0x1c30e98u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1c30e9c: 0xe62001f8  swc1        $f0, 0x1F8($s1)
    ctx->pc = 0x1c30e9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 504), bits); }
    // 0x1c30ea0: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1c30ea0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c30ea4: 0x8e0b000c  lw          $t3, 0xC($s0)
    ctx->pc = 0x1c30ea4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c30ea8: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1c30ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c30eac: 0x18f6018  mult        $t4, $t4, $t7
    ctx->pc = 0x1c30eacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x1c30eb0: 0xae2b01e8  sw          $t3, 0x1E8($s1)
    ctx->pc = 0x1c30eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 488), GPR_U32(ctx, 11));
    // 0x1c30eb4: 0xe6200200  swc1        $f0, 0x200($s1)
    ctx->pc = 0x1c30eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 512), bits); }
    // 0x1c30eb8: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x1c30eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c30ebc: 0x8dcf0084  lw          $t7, 0x84($t6)
    ctx->pc = 0x1c30ebcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1c30ec0: 0xe6200204  swc1        $f0, 0x204($s1)
    ctx->pc = 0x1c30ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 516), bits); }
    // 0x1c30ec4: 0x8c4e00b4  lw          $t6, 0xB4($v0)
    ctx->pc = 0x1c30ec4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x1c30ec8: 0x1ed7821  addu        $t7, $t7, $t5
    ctx->pc = 0x1c30ec8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
    // 0x1c30ecc: 0x8e0d0018  lw          $t5, 0x18($s0)
    ctx->pc = 0x1c30eccu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1c30ed0: 0x25ef0110  addiu       $t7, $t7, 0x110
    ctx->pc = 0x1c30ed0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 272));
    // 0x1c30ed4: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x1c30ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c30ed8: 0x1cc7021  addu        $t6, $t6, $t4
    ctx->pc = 0x1c30ed8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
    // 0x1c30edc: 0xae2f01e0  sw          $t7, 0x1E0($s1)
    ctx->pc = 0x1c30edcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 480), GPR_U32(ctx, 15));
    // 0x1c30ee0: 0xae2e01e4  sw          $t6, 0x1E4($s1)
    ctx->pc = 0x1c30ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 484), GPR_U32(ctx, 14));
    // 0x1c30ee4: 0xae2d01f4  sw          $t5, 0x1F4($s1)
    ctx->pc = 0x1c30ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 500), GPR_U32(ctx, 13));
    // 0x1c30ee8: 0x19600010  blez        $t3, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C30EE8u;
    {
        const bool branch_taken_0x1c30ee8 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x1C30EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C30EE8u;
        // 0x1c30eec: 0xe6200208  swc1        $f0, 0x208($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 520), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c30ee8) {
            ctx->pc = 0x1C30F2Cu;
            goto label_1c30f2c;
        }
    }
    ctx->pc = 0x1C30EF0u;
    // 0x1c30ef0: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x1c30ef0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_1c30ef4:
    // 0x1c30ef4: 0xa7900  sll         $t7, $t2, 4
    ctx->pc = 0x1c30ef4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x1c30ef8: 0x1f06021  addu        $t4, $t7, $s0
    ctx->pc = 0x1c30ef8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
    // 0x1c30efc: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1c30efcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1c30f00: 0x8d8d0030  lw          $t5, 0x30($t4)
    ctx->pc = 0x1c30f00u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 48)));
    // 0x1c30f04: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x1c30f04u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x1c30f08: 0x149582a  slt         $t3, $t2, $t1
    ctx->pc = 0x1c30f08u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x1c30f0c: 0xaded0210  sw          $t5, 0x210($t7)
    ctx->pc = 0x1c30f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 528), GPR_U32(ctx, 13));
    // 0x1c30f10: 0x8d8e0034  lw          $t6, 0x34($t4)
    ctx->pc = 0x1c30f10u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 52)));
    // 0x1c30f14: 0xadee0214  sw          $t6, 0x214($t7)
    ctx->pc = 0x1c30f14u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 532), GPR_U32(ctx, 14));
    // 0x1c30f18: 0x8d8d0038  lw          $t5, 0x38($t4)
    ctx->pc = 0x1c30f18u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 56)));
    // 0x1c30f1c: 0xaded0218  sw          $t5, 0x218($t7)
    ctx->pc = 0x1c30f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 536), GPR_U32(ctx, 13));
    // 0x1c30f20: 0x8d8e003c  lw          $t6, 0x3C($t4)
    ctx->pc = 0x1c30f20u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 60)));
    // 0x1c30f24: 0x1560fff3  bnez        $t3, . + 4 + (-0xD << 2)
    ctx->pc = 0x1C30F24u;
    {
        const bool branch_taken_0x1c30f24 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C30F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C30F24u;
        // 0x1c30f28: 0xadee021c  sw          $t6, 0x21C($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 540), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c30f24) {
            ctx->pc = 0x1C30EF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c30ef4;
        }
    }
    ctx->pc = 0x1C30F2Cu;
label_1c30f2c:
    // 0x1c30f2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c30f2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c30f30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c30f30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c30f34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c30f34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c30f38: 0x3e00008  jr          $ra
    ctx->pc = 0x1C30F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C30F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C30F38u;
        // 0x1c30f3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C30F38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C30F40u;
}
