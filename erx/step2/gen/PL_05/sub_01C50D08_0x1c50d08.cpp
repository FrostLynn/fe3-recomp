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

// Function: sub_01C50D08
// Address: 0x1c50d08 - 0x1c50e18
void sub_01C50D08_0x1c50d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C50D08_0x1c50d08");
#endif

    switch (ctx->pc) {
        case 0x1c50d30u: goto label_1c50d30;
        case 0x1c50d70u: goto label_1c50d70;
        case 0x1c50dc4u: goto label_1c50dc4;
        default: break;
    }

    ctx->pc = 0x1c50d08u;

    // 0x1c50d08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c50d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c50d0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c50d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c50d10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c50d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c50d14: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c50d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c50d18: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c50d18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c50d1c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c50d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c50d20: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1c50d20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c50d24: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c50d24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c50d28: 0xc713e62  jal         func_1C4F988
    ctx->pc = 0x1C50D28u;
    SET_GPR_U32(ctx, 31, 0x1C50D30u);
    ctx->pc = 0x1C50D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C50D28u;
    // 0x1c50d2c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F988u, 0x1C50D28u, 0x1C50D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C50D30u;
label_1c50d30:
    // 0x1c50d30: 0x24500200  addiu       $s0, $v0, 0x200
    ctx->pc = 0x1c50d30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1c50d34: 0x8e4f0004  lw          $t7, 0x4($s2)
    ctx->pc = 0x1c50d34u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c50d38: 0x8e0e004c  lw          $t6, 0x4C($s0)
    ctx->pc = 0x1c50d38u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1c50d3c: 0x26240160  addiu       $a0, $s1, 0x160
    ctx->pc = 0x1c50d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
    // 0x1c50d40: 0xae2f0184  sw          $t7, 0x184($s1)
    ctx->pc = 0x1c50d40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 15));
    // 0x1c50d44: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x1c50d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x1c50d48: 0x8dcd0084  lw          $t5, 0x84($t6)
    ctx->pc = 0x1c50d48u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1c50d4c: 0x240f0390  addiu       $t7, $zero, 0x390
    ctx->pc = 0x1c50d4cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1c50d50: 0x8e4e0008  lw          $t6, 0x8($s2)
    ctx->pc = 0x1c50d50u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1c50d54: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x1c50d54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1c50d58: 0x1ae6821  addu        $t5, $t5, $t6
    ctx->pc = 0x1c50d58u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x1c50d5c: 0x25af00f0  addiu       $t7, $t5, 0xF0
    ctx->pc = 0x1c50d5cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 240));
    // 0x1c50d60: 0x25ad0110  addiu       $t5, $t5, 0x110
    ctx->pc = 0x1c50d60u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 272));
    // 0x1c50d64: 0xae2f0174  sw          $t7, 0x174($s1)
    ctx->pc = 0x1c50d64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 372), GPR_U32(ctx, 15));
    // 0x1c50d68: 0xc713e46  jal         func_1C4F918
    ctx->pc = 0x1C50D68u;
    SET_GPR_U32(ctx, 31, 0x1C50D70u);
    ctx->pc = 0x1C50D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C50D68u;
    // 0x1c50d6c: 0xae2d0170  sw          $t5, 0x170($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 368), GPR_U32(ctx, 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F918u, 0x1C50D68u, 0x1C50D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C50D70u;
label_1c50d70:
    // 0x1c50d70: 0x8e4d0000  lw          $t5, 0x0($s2)
    ctx->pc = 0x1c50d70u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c50d74: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1c50d74u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c50d78: 0x8e4e000c  lw          $t6, 0xC($s2)
    ctx->pc = 0x1c50d78u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1c50d7c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c50d7cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c50d80: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1c50d80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1c50d84: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x1c50d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c50d88: 0xae2e0188  sw          $t6, 0x188($s1)
    ctx->pc = 0x1c50d88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 392), GPR_U32(ctx, 14));
    // 0x1c50d8c: 0xe6200178  swc1        $f0, 0x178($s1)
    ctx->pc = 0x1c50d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 376), bits); }
    // 0x1c50d90: 0x8e4f0010  lw          $t7, 0x10($s2)
    ctx->pc = 0x1c50d90u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1c50d94: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x1c50d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c50d98: 0xae2f018c  sw          $t7, 0x18C($s1)
    ctx->pc = 0x1c50d98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 396), GPR_U32(ctx, 15));
    // 0x1c50d9c: 0xe6200180  swc1        $f0, 0x180($s1)
    ctx->pc = 0x1c50d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 384), bits); }
    // 0x1c50da0: 0x8e4e0014  lw          $t6, 0x14($s2)
    ctx->pc = 0x1c50da0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1c50da4: 0x8e0f00b4  lw          $t7, 0xB4($s0)
    ctx->pc = 0x1c50da4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x1c50da8: 0xae2e0190  sw          $t6, 0x190($s1)
    ctx->pc = 0x1c50da8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 400), GPR_U32(ctx, 14));
    // 0x1c50dac: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x1c50dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c50db0: 0x1ed7821  addu        $t7, $t7, $t5
    ctx->pc = 0x1c50db0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
    // 0x1c50db4: 0x8e4e0038  lw          $t6, 0x38($s2)
    ctx->pc = 0x1c50db4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x1c50db8: 0xae2f017c  sw          $t7, 0x17C($s1)
    ctx->pc = 0x1c50db8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 380), GPR_U32(ctx, 15));
    // 0x1c50dbc: 0xe6200194  swc1        $f0, 0x194($s1)
    ctx->pc = 0x1c50dbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 404), bits); }
    // 0x1c50dc0: 0xae2e0198  sw          $t6, 0x198($s1)
    ctx->pc = 0x1c50dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 408), GPR_U32(ctx, 14));
label_1c50dc4:
    // 0x1c50dc4: 0xa7900  sll         $t7, $t2, 4
    ctx->pc = 0x1c50dc4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x1c50dc8: 0x1f26021  addu        $t4, $t7, $s2
    ctx->pc = 0x1c50dc8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 18)));
    // 0x1c50dcc: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1c50dccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1c50dd0: 0x8d8d0040  lw          $t5, 0x40($t4)
    ctx->pc = 0x1c50dd0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 64)));
    // 0x1c50dd4: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x1c50dd4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x1c50dd8: 0x294b0004  slti        $t3, $t2, 0x4
    ctx->pc = 0x1c50dd8u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1c50ddc: 0xaded01a0  sw          $t5, 0x1A0($t7)
    ctx->pc = 0x1c50ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 416), GPR_U32(ctx, 13));
    // 0x1c50de0: 0x8d8e0044  lw          $t6, 0x44($t4)
    ctx->pc = 0x1c50de0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 68)));
    // 0x1c50de4: 0xadee01a4  sw          $t6, 0x1A4($t7)
    ctx->pc = 0x1c50de4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 420), GPR_U32(ctx, 14));
    // 0x1c50de8: 0x8d8d0048  lw          $t5, 0x48($t4)
    ctx->pc = 0x1c50de8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 72)));
    // 0x1c50dec: 0xaded01a8  sw          $t5, 0x1A8($t7)
    ctx->pc = 0x1c50decu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 424), GPR_U32(ctx, 13));
    // 0x1c50df0: 0x8d8e004c  lw          $t6, 0x4C($t4)
    ctx->pc = 0x1c50df0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 76)));
    // 0x1c50df4: 0x1560fff3  bnez        $t3, . + 4 + (-0xD << 2)
    ctx->pc = 0x1C50DF4u;
    {
        const bool branch_taken_0x1c50df4 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C50DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C50DF4u;
        // 0x1c50df8: 0xadee01ac  sw          $t6, 0x1AC($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 428), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c50df4) {
            ctx->pc = 0x1C50DC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c50dc4;
        }
    }
    ctx->pc = 0x1C50DFCu;
    // 0x1c50dfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c50dfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c50e00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c50e00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c50e04: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c50e04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c50e08: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c50e08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c50e0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C50E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C50E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C50E0Cu;
        // 0x1c50e10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C50E0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C50E14u;
    // 0x1c50e14: 0x0  nop
    ctx->pc = 0x1c50e14u;
    // NOP
    ctx->pc = 0x1c50e18u;
}
