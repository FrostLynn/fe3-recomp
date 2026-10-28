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

// Function: sub_01D7EAB8
// Address: 0x1d7eab8 - 0x1d7ebc8
void sub_01D7EAB8_0x1d7eab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D7EAB8_0x1d7eab8");
#endif

    switch (ctx->pc) {
        case 0x1d7eae0u: goto label_1d7eae0;
        case 0x1d7eb20u: goto label_1d7eb20;
        case 0x1d7eb74u: goto label_1d7eb74;
        default: break;
    }

    ctx->pc = 0x1d7eab8u;

    // 0x1d7eab8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d7eab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d7eabc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d7eabcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d7eac0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d7eac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d7eac4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d7eac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d7eac8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d7eac8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7eacc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d7eaccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d7ead0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1d7ead0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7ead4: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d7ead4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d7ead8: 0xc75f5d6  jal         func_1D7D758
    ctx->pc = 0x1D7EAD8u;
    SET_GPR_U32(ctx, 31, 0x1D7EAE0u);
    ctx->pc = 0x1D7EADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7EAD8u;
    // 0x1d7eadc: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D758u, 0x1D7EAD8u, 0x1D7EAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7EAE0u;
label_1d7eae0:
    // 0x1d7eae0: 0x24500200  addiu       $s0, $v0, 0x200
    ctx->pc = 0x1d7eae0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1d7eae4: 0x8e4f0004  lw          $t7, 0x4($s2)
    ctx->pc = 0x1d7eae4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1d7eae8: 0x8e0e004c  lw          $t6, 0x4C($s0)
    ctx->pc = 0x1d7eae8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1d7eaec: 0x26240160  addiu       $a0, $s1, 0x160
    ctx->pc = 0x1d7eaecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
    // 0x1d7eaf0: 0xae2f0184  sw          $t7, 0x184($s1)
    ctx->pc = 0x1d7eaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 15));
    // 0x1d7eaf4: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x1d7eaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x1d7eaf8: 0x8dcd0084  lw          $t5, 0x84($t6)
    ctx->pc = 0x1d7eaf8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1d7eafc: 0x240f0390  addiu       $t7, $zero, 0x390
    ctx->pc = 0x1d7eafcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1d7eb00: 0x8e4e0008  lw          $t6, 0x8($s2)
    ctx->pc = 0x1d7eb00u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1d7eb04: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x1d7eb04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1d7eb08: 0x1ae6821  addu        $t5, $t5, $t6
    ctx->pc = 0x1d7eb08u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x1d7eb0c: 0x25af00f0  addiu       $t7, $t5, 0xF0
    ctx->pc = 0x1d7eb0cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 240));
    // 0x1d7eb10: 0x25ad0110  addiu       $t5, $t5, 0x110
    ctx->pc = 0x1d7eb10u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 272));
    // 0x1d7eb14: 0xae2f0174  sw          $t7, 0x174($s1)
    ctx->pc = 0x1d7eb14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 372), GPR_U32(ctx, 15));
    // 0x1d7eb18: 0xc75f5c6  jal         func_1D7D718
    ctx->pc = 0x1D7EB18u;
    SET_GPR_U32(ctx, 31, 0x1D7EB20u);
    ctx->pc = 0x1D7EB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7EB18u;
    // 0x1d7eb1c: 0xae2d0170  sw          $t5, 0x170($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 368), GPR_U32(ctx, 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D718u, 0x1D7EB18u, 0x1D7EB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7EB20u;
label_1d7eb20:
    // 0x1d7eb20: 0x8e4d0000  lw          $t5, 0x0($s2)
    ctx->pc = 0x1d7eb20u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d7eb24: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1d7eb24u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1d7eb28: 0x8e4e000c  lw          $t6, 0xC($s2)
    ctx->pc = 0x1d7eb28u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1d7eb2c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d7eb2cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7eb30: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1d7eb30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1d7eb34: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x1d7eb34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7eb38: 0xae2e0188  sw          $t6, 0x188($s1)
    ctx->pc = 0x1d7eb38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 392), GPR_U32(ctx, 14));
    // 0x1d7eb3c: 0xe6200178  swc1        $f0, 0x178($s1)
    ctx->pc = 0x1d7eb3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 376), bits); }
    // 0x1d7eb40: 0x8e4f0010  lw          $t7, 0x10($s2)
    ctx->pc = 0x1d7eb40u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1d7eb44: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x1d7eb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7eb48: 0xae2f018c  sw          $t7, 0x18C($s1)
    ctx->pc = 0x1d7eb48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 396), GPR_U32(ctx, 15));
    // 0x1d7eb4c: 0xe6200180  swc1        $f0, 0x180($s1)
    ctx->pc = 0x1d7eb4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 384), bits); }
    // 0x1d7eb50: 0x8e4e0014  lw          $t6, 0x14($s2)
    ctx->pc = 0x1d7eb50u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1d7eb54: 0x8e0f00b4  lw          $t7, 0xB4($s0)
    ctx->pc = 0x1d7eb54u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x1d7eb58: 0xae2e0190  sw          $t6, 0x190($s1)
    ctx->pc = 0x1d7eb58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 400), GPR_U32(ctx, 14));
    // 0x1d7eb5c: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x1d7eb5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7eb60: 0x1ed7821  addu        $t7, $t7, $t5
    ctx->pc = 0x1d7eb60u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
    // 0x1d7eb64: 0x8e4e0038  lw          $t6, 0x38($s2)
    ctx->pc = 0x1d7eb64u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x1d7eb68: 0xae2f017c  sw          $t7, 0x17C($s1)
    ctx->pc = 0x1d7eb68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 380), GPR_U32(ctx, 15));
    // 0x1d7eb6c: 0xe6200194  swc1        $f0, 0x194($s1)
    ctx->pc = 0x1d7eb6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 404), bits); }
    // 0x1d7eb70: 0xae2e0198  sw          $t6, 0x198($s1)
    ctx->pc = 0x1d7eb70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 408), GPR_U32(ctx, 14));
label_1d7eb74:
    // 0x1d7eb74: 0xa7900  sll         $t7, $t2, 4
    ctx->pc = 0x1d7eb74u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x1d7eb78: 0x1f26021  addu        $t4, $t7, $s2
    ctx->pc = 0x1d7eb78u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 18)));
    // 0x1d7eb7c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1d7eb7cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1d7eb80: 0x8d8d0040  lw          $t5, 0x40($t4)
    ctx->pc = 0x1d7eb80u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 64)));
    // 0x1d7eb84: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x1d7eb84u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x1d7eb88: 0x294b0004  slti        $t3, $t2, 0x4
    ctx->pc = 0x1d7eb88u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1d7eb8c: 0xaded01a0  sw          $t5, 0x1A0($t7)
    ctx->pc = 0x1d7eb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 416), GPR_U32(ctx, 13));
    // 0x1d7eb90: 0x8d8e0044  lw          $t6, 0x44($t4)
    ctx->pc = 0x1d7eb90u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 68)));
    // 0x1d7eb94: 0xadee01a4  sw          $t6, 0x1A4($t7)
    ctx->pc = 0x1d7eb94u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 420), GPR_U32(ctx, 14));
    // 0x1d7eb98: 0x8d8d0048  lw          $t5, 0x48($t4)
    ctx->pc = 0x1d7eb98u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 72)));
    // 0x1d7eb9c: 0xaded01a8  sw          $t5, 0x1A8($t7)
    ctx->pc = 0x1d7eb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 424), GPR_U32(ctx, 13));
    // 0x1d7eba0: 0x8d8e004c  lw          $t6, 0x4C($t4)
    ctx->pc = 0x1d7eba0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 76)));
    // 0x1d7eba4: 0x1560fff3  bnez        $t3, . + 4 + (-0xD << 2)
    ctx->pc = 0x1D7EBA4u;
    {
        const bool branch_taken_0x1d7eba4 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7EBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7EBA4u;
        // 0x1d7eba8: 0xadee01ac  sw          $t6, 0x1AC($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 428), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7eba4) {
            ctx->pc = 0x1D7EB74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7eb74;
        }
    }
    ctx->pc = 0x1D7EBACu;
    // 0x1d7ebac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d7ebacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7ebb0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d7ebb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d7ebb4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d7ebb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7ebb8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d7ebb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d7ebbc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7EBBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7EBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7EBBCu;
        // 0x1d7ebc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7EBBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7EBC4u;
    // 0x1d7ebc4: 0x0  nop
    ctx->pc = 0x1d7ebc4u;
    // NOP
    ctx->pc = 0x1d7ebc8u;
}
