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

// Function: sub_01CAECF0
// Address: 0x1caecf0 - 0x1caee28
void sub_01CAECF0_0x1caecf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CAECF0_0x1caecf0");
#endif

    switch (ctx->pc) {
        case 0x1caed24u: goto label_1caed24;
        case 0x1caedd8u: goto label_1caedd8;
        default: break;
    }

    ctx->pc = 0x1caecf0u;

    // 0x1caecf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1caecf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1caecf4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1caecf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1caecf8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1caecf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1caecfc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1caecfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1caed00: 0x24910200  addiu       $s1, $a0, 0x200
    ctx->pc = 0x1caed00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 512));
    // 0x1caed04: 0x8e2f0048  lw          $t7, 0x48($s1)
    ctx->pc = 0x1caed04u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x1caed08: 0x8dee0044  lw          $t6, 0x44($t7)
    ctx->pc = 0x1caed08u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 68)));
    // 0x1caed0c: 0x8dcd043c  lw          $t5, 0x43C($t6)
    ctx->pc = 0x1caed0cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 1084)));
    // 0x1caed10: 0x240f000a  addiu       $t7, $zero, 0xA
    ctx->pc = 0x1caed10u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1caed14: 0x15af0006  bne         $t5, $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CAED14u;
    {
        const bool branch_taken_0x1caed14 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CAED18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAED14u;
        // 0x1caed18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caed14) {
            ctx->pc = 0x1CAED30u;
            goto label_1caed30;
        }
    }
    ctx->pc = 0x1CAED1Cu;
    // 0x1caed1c: 0xc72b6f2  jal         func_1CADBC8
    ctx->pc = 0x1CAED1Cu;
    SET_GPR_U32(ctx, 31, 0x1CAED24u);
    ctx->pc = 0x1CADBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CADBC8u, 0x1CAED1Cu, 0x1CAED24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAED24u;
label_1caed24:
    // 0x1caed24: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1caed24u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1caed28: 0x104f0024  beq         $v0, $t7, . + 4 + (0x24 << 2)
    ctx->pc = 0x1CAED28u;
    {
        const bool branch_taken_0x1caed28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 15));
        ctx->pc = 0x1CAED2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAED28u;
        // 0x1caed2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caed28) {
            ctx->pc = 0x1CAEDBCu;
            goto label_1caedbc;
        }
    }
    ctx->pc = 0x1CAED30u;
label_1caed30:
    // 0x1caed30: 0x8e2d004c  lw          $t5, 0x4C($s1)
    ctx->pc = 0x1caed30u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x1caed34: 0x340c8000  ori         $t4, $zero, 0x8000
    ctx->pc = 0x1caed34u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1caed38: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1caed38u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1caed3c: 0x25ad0070  addiu       $t5, $t5, 0x70
    ctx->pc = 0x1caed3cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 112));
    // 0x1caed40: 0x8daf0014  lw          $t7, 0x14($t5)
    ctx->pc = 0x1caed40u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 20)));
    // 0x1caed44: 0x1ec7821  addu        $t7, $t7, $t4
    ctx->pc = 0x1caed44u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 12)));
    // 0x1caed48: 0xa1eb0b56  sb          $t3, 0xB56($t7)
    ctx->pc = 0x1caed48u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 2902), (uint8_t)GPR_U32(ctx, 11));
    // 0x1caed4c: 0x8dae0014  lw          $t6, 0x14($t5)
    ctx->pc = 0x1caed4cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 20)));
    // 0x1caed50: 0x1cc7021  addu        $t6, $t6, $t4
    ctx->pc = 0x1caed50u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
    // 0x1caed54: 0xa1cb0ee6  sb          $t3, 0xEE6($t6)
    ctx->pc = 0x1caed54u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 3814), (uint8_t)GPR_U32(ctx, 11));
    // 0x1caed58: 0x8daf0014  lw          $t7, 0x14($t5)
    ctx->pc = 0x1caed58u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 20)));
    // 0x1caed5c: 0x1ec7821  addu        $t7, $t7, $t4
    ctx->pc = 0x1caed5cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 12)));
    // 0x1caed60: 0xa1eb1276  sb          $t3, 0x1276($t7)
    ctx->pc = 0x1caed60u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 4726), (uint8_t)GPR_U32(ctx, 11));
    // 0x1caed64: 0x8dae0014  lw          $t6, 0x14($t5)
    ctx->pc = 0x1caed64u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 20)));
    // 0x1caed68: 0x1cc7021  addu        $t6, $t6, $t4
    ctx->pc = 0x1caed68u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
    // 0x1caed6c: 0xa1cb1606  sb          $t3, 0x1606($t6)
    ctx->pc = 0x1caed6cu;
    WRITE8(ADD32(GPR_U32(ctx, 14), 5638), (uint8_t)GPR_U32(ctx, 11));
    // 0x1caed70: 0x8daf0014  lw          $t7, 0x14($t5)
    ctx->pc = 0x1caed70u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 20)));
    // 0x1caed74: 0x1ec7821  addu        $t7, $t7, $t4
    ctx->pc = 0x1caed74u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 12)));
    // 0x1caed78: 0xa1eb1996  sb          $t3, 0x1996($t7)
    ctx->pc = 0x1caed78u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 6550), (uint8_t)GPR_U32(ctx, 11));
    // 0x1caed7c: 0x8dae0014  lw          $t6, 0x14($t5)
    ctx->pc = 0x1caed7cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 20)));
    // 0x1caed80: 0x1cc7021  addu        $t6, $t6, $t4
    ctx->pc = 0x1caed80u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
    // 0x1caed84: 0xa1cb00a6  sb          $t3, 0xA6($t6)
    ctx->pc = 0x1caed84u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 166), (uint8_t)GPR_U32(ctx, 11));
    // 0x1caed88: 0x8daf0014  lw          $t7, 0x14($t5)
    ctx->pc = 0x1caed88u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 20)));
    // 0x1caed8c: 0x1ec7821  addu        $t7, $t7, $t4
    ctx->pc = 0x1caed8cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 12)));
    // 0x1caed90: 0xa1eb6f16  sb          $t3, 0x6F16($t7)
    ctx->pc = 0x1caed90u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 28438), (uint8_t)GPR_U32(ctx, 11));
    // 0x1caed94: 0x8dae0014  lw          $t6, 0x14($t5)
    ctx->pc = 0x1caed94u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 20)));
    // 0x1caed98: 0x1cc7021  addu        $t6, $t6, $t4
    ctx->pc = 0x1caed98u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
    // 0x1caed9c: 0xa1cb72a6  sb          $t3, 0x72A6($t6)
    ctx->pc = 0x1caed9cu;
    WRITE8(ADD32(GPR_U32(ctx, 14), 29350), (uint8_t)GPR_U32(ctx, 11));
    // 0x1caeda0: 0x8daf0014  lw          $t7, 0x14($t5)
    ctx->pc = 0x1caeda0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 20)));
    // 0x1caeda4: 0x1ec7821  addu        $t7, $t7, $t4
    ctx->pc = 0x1caeda4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 12)));
    // 0x1caeda8: 0xa1eb7636  sb          $t3, 0x7636($t7)
    ctx->pc = 0x1caeda8u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 30262), (uint8_t)GPR_U32(ctx, 11));
    // 0x1caedac: 0x8dae0014  lw          $t6, 0x14($t5)
    ctx->pc = 0x1caedacu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 20)));
    // 0x1caedb0: 0x1cc7021  addu        $t6, $t6, $t4
    ctx->pc = 0x1caedb0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
    // 0x1caedb4: 0xa1cb79c6  sb          $t3, 0x79C6($t6)
    ctx->pc = 0x1caedb4u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 31174), (uint8_t)GPR_U32(ctx, 11));
    // 0x1caedb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1caedb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1caedbc:
    // 0x1caedbc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1caedbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1caedc0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1caedc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1caedc4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1caedc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caedc8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1caedc8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caedcc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1caedccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1caedd0: 0xc72b6e4  jal         func_1CADB90
    ctx->pc = 0x1CAEDD0u;
    SET_GPR_U32(ctx, 31, 0x1CAEDD8u);
    ctx->pc = 0x1CAEDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAEDD0u;
    // 0x1caedd4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CADB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CADB90u, 0x1CAEDD0u, 0x1CAEDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAEDD8u;
label_1caedd8:
    // 0x1caedd8: 0x3c0f01cb  lui         $t7, 0x1CB
    ctx->pc = 0x1caedd8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)459 << 16));
    // 0x1caeddc: 0x8e2e004c  lw          $t6, 0x4C($s1)
    ctx->pc = 0x1caeddcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x1caede0: 0x25ef6684  addiu       $t7, $t7, 0x6684
    ctx->pc = 0x1caede0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 26244));
    // 0x1caede4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1caede4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1caede8: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1caede8u;
    { uint32_t bits = FAST_READ32(0x1CB6684u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1caedec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1caedecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1caedf0: 0x240f0148  addiu       $t7, $zero, 0x148
    ctx->pc = 0x1caedf0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 328));
    // 0x1caedf4: 0xe5c04604  swc1        $f0, 0x4604($t6)
    ctx->pc = 0x1caedf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 17924), bits); }
    // 0x1caedf8: 0xae0f0d20  sw          $t7, 0xD20($s0)
    ctx->pc = 0x1caedf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3360), GPR_U32(ctx, 15));
    // 0x1caedfc: 0x240e0080  addiu       $t6, $zero, 0x80
    ctx->pc = 0x1caedfcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1caee00: 0x240f007e  addiu       $t7, $zero, 0x7E
    ctx->pc = 0x1caee00u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x1caee04: 0xae0e0d00  sw          $t6, 0xD00($s0)
    ctx->pc = 0x1caee04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3328), GPR_U32(ctx, 14));
    // 0x1caee08: 0xae0f0d04  sw          $t7, 0xD04($s0)
    ctx->pc = 0x1caee08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3332), GPR_U32(ctx, 15));
    // 0x1caee0c: 0x240e0147  addiu       $t6, $zero, 0x147
    ctx->pc = 0x1caee0cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 327));
    // 0x1caee10: 0x240f0149  addiu       $t7, $zero, 0x149
    ctx->pc = 0x1caee10u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 329));
    // 0x1caee14: 0xae0e0d18  sw          $t6, 0xD18($s0)
    ctx->pc = 0x1caee14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3352), GPR_U32(ctx, 14));
    // 0x1caee18: 0xae0f0d1c  sw          $t7, 0xD1C($s0)
    ctx->pc = 0x1caee18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3356), GPR_U32(ctx, 15));
    // 0x1caee1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1caee1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1caee20: 0x3e00008  jr          $ra
    ctx->pc = 0x1CAEE20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CAEE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAEE20u;
        // 0x1caee24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CAEE20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CAEE28u;
}
