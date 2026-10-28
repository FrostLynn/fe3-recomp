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

// Function: sub_01D9DCA0
// Address: 0x1d9dca0 - 0x1d9ddb0
void sub_01D9DCA0_0x1d9dca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D9DCA0_0x1d9dca0");
#endif

    switch (ctx->pc) {
        case 0x1d9dcc8u: goto label_1d9dcc8;
        case 0x1d9dd08u: goto label_1d9dd08;
        case 0x1d9dd5cu: goto label_1d9dd5c;
        default: break;
    }

    ctx->pc = 0x1d9dca0u;

    // 0x1d9dca0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d9dca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d9dca4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d9dca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d9dca8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d9dca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d9dcac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d9dcacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d9dcb0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d9dcb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9dcb4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d9dcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d9dcb8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1d9dcb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9dcbc: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d9dcbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d9dcc0: 0xc767256  jal         func_1D9C958
    ctx->pc = 0x1D9DCC0u;
    SET_GPR_U32(ctx, 31, 0x1D9DCC8u);
    ctx->pc = 0x1D9DCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9DCC0u;
    // 0x1d9dcc4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C958u, 0x1D9DCC0u, 0x1D9DCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9DCC8u;
label_1d9dcc8:
    // 0x1d9dcc8: 0x24500200  addiu       $s0, $v0, 0x200
    ctx->pc = 0x1d9dcc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1d9dccc: 0x8e4f0004  lw          $t7, 0x4($s2)
    ctx->pc = 0x1d9dcccu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1d9dcd0: 0x8e0e004c  lw          $t6, 0x4C($s0)
    ctx->pc = 0x1d9dcd0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1d9dcd4: 0x26240160  addiu       $a0, $s1, 0x160
    ctx->pc = 0x1d9dcd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
    // 0x1d9dcd8: 0xae2f0184  sw          $t7, 0x184($s1)
    ctx->pc = 0x1d9dcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 15));
    // 0x1d9dcdc: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x1d9dcdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x1d9dce0: 0x8dcd0084  lw          $t5, 0x84($t6)
    ctx->pc = 0x1d9dce0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1d9dce4: 0x240f0390  addiu       $t7, $zero, 0x390
    ctx->pc = 0x1d9dce4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1d9dce8: 0x8e4e0008  lw          $t6, 0x8($s2)
    ctx->pc = 0x1d9dce8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1d9dcec: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x1d9dcecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1d9dcf0: 0x1ae6821  addu        $t5, $t5, $t6
    ctx->pc = 0x1d9dcf0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x1d9dcf4: 0x25af00f0  addiu       $t7, $t5, 0xF0
    ctx->pc = 0x1d9dcf4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 240));
    // 0x1d9dcf8: 0x25ad0110  addiu       $t5, $t5, 0x110
    ctx->pc = 0x1d9dcf8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 272));
    // 0x1d9dcfc: 0xae2f0174  sw          $t7, 0x174($s1)
    ctx->pc = 0x1d9dcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 372), GPR_U32(ctx, 15));
    // 0x1d9dd00: 0xc767246  jal         func_1D9C918
    ctx->pc = 0x1D9DD00u;
    SET_GPR_U32(ctx, 31, 0x1D9DD08u);
    ctx->pc = 0x1D9DD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9DD00u;
    // 0x1d9dd04: 0xae2d0170  sw          $t5, 0x170($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 368), GPR_U32(ctx, 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C918u, 0x1D9DD00u, 0x1D9DD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9DD08u;
label_1d9dd08:
    // 0x1d9dd08: 0x8e4d0000  lw          $t5, 0x0($s2)
    ctx->pc = 0x1d9dd08u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d9dd0c: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1d9dd0cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1d9dd10: 0x8e4e000c  lw          $t6, 0xC($s2)
    ctx->pc = 0x1d9dd10u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1d9dd14: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d9dd14u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9dd18: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1d9dd18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1d9dd1c: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x1d9dd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9dd20: 0xae2e0188  sw          $t6, 0x188($s1)
    ctx->pc = 0x1d9dd20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 392), GPR_U32(ctx, 14));
    // 0x1d9dd24: 0xe6200178  swc1        $f0, 0x178($s1)
    ctx->pc = 0x1d9dd24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 376), bits); }
    // 0x1d9dd28: 0x8e4f0010  lw          $t7, 0x10($s2)
    ctx->pc = 0x1d9dd28u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1d9dd2c: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x1d9dd2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9dd30: 0xae2f018c  sw          $t7, 0x18C($s1)
    ctx->pc = 0x1d9dd30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 396), GPR_U32(ctx, 15));
    // 0x1d9dd34: 0xe6200180  swc1        $f0, 0x180($s1)
    ctx->pc = 0x1d9dd34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 384), bits); }
    // 0x1d9dd38: 0x8e4e0014  lw          $t6, 0x14($s2)
    ctx->pc = 0x1d9dd38u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1d9dd3c: 0x8e0f00b4  lw          $t7, 0xB4($s0)
    ctx->pc = 0x1d9dd3cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x1d9dd40: 0xae2e0190  sw          $t6, 0x190($s1)
    ctx->pc = 0x1d9dd40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 400), GPR_U32(ctx, 14));
    // 0x1d9dd44: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x1d9dd44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d9dd48: 0x1ed7821  addu        $t7, $t7, $t5
    ctx->pc = 0x1d9dd48u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
    // 0x1d9dd4c: 0x8e4e0038  lw          $t6, 0x38($s2)
    ctx->pc = 0x1d9dd4cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x1d9dd50: 0xae2f017c  sw          $t7, 0x17C($s1)
    ctx->pc = 0x1d9dd50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 380), GPR_U32(ctx, 15));
    // 0x1d9dd54: 0xe6200194  swc1        $f0, 0x194($s1)
    ctx->pc = 0x1d9dd54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 404), bits); }
    // 0x1d9dd58: 0xae2e0198  sw          $t6, 0x198($s1)
    ctx->pc = 0x1d9dd58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 408), GPR_U32(ctx, 14));
label_1d9dd5c:
    // 0x1d9dd5c: 0xa7900  sll         $t7, $t2, 4
    ctx->pc = 0x1d9dd5cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x1d9dd60: 0x1f26021  addu        $t4, $t7, $s2
    ctx->pc = 0x1d9dd60u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 18)));
    // 0x1d9dd64: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1d9dd64u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1d9dd68: 0x8d8d0040  lw          $t5, 0x40($t4)
    ctx->pc = 0x1d9dd68u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 64)));
    // 0x1d9dd6c: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x1d9dd6cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x1d9dd70: 0x294b0004  slti        $t3, $t2, 0x4
    ctx->pc = 0x1d9dd70u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1d9dd74: 0xaded01a0  sw          $t5, 0x1A0($t7)
    ctx->pc = 0x1d9dd74u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 416), GPR_U32(ctx, 13));
    // 0x1d9dd78: 0x8d8e0044  lw          $t6, 0x44($t4)
    ctx->pc = 0x1d9dd78u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 68)));
    // 0x1d9dd7c: 0xadee01a4  sw          $t6, 0x1A4($t7)
    ctx->pc = 0x1d9dd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 420), GPR_U32(ctx, 14));
    // 0x1d9dd80: 0x8d8d0048  lw          $t5, 0x48($t4)
    ctx->pc = 0x1d9dd80u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 72)));
    // 0x1d9dd84: 0xaded01a8  sw          $t5, 0x1A8($t7)
    ctx->pc = 0x1d9dd84u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 424), GPR_U32(ctx, 13));
    // 0x1d9dd88: 0x8d8e004c  lw          $t6, 0x4C($t4)
    ctx->pc = 0x1d9dd88u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 76)));
    // 0x1d9dd8c: 0x1560fff3  bnez        $t3, . + 4 + (-0xD << 2)
    ctx->pc = 0x1D9DD8Cu;
    {
        const bool branch_taken_0x1d9dd8c = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9DD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9DD8Cu;
        // 0x1d9dd90: 0xadee01ac  sw          $t6, 0x1AC($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 428), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9dd8c) {
            ctx->pc = 0x1D9DD5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9dd5c;
        }
    }
    ctx->pc = 0x1D9DD94u;
    // 0x1d9dd94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9dd94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9dd98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d9dd98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d9dd9c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d9dd9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9dda0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d9dda0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d9dda4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9DDA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9DDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9DDA4u;
        // 0x1d9dda8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9DDA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9DDACu;
    // 0x1d9ddac: 0x0  nop
    ctx->pc = 0x1d9ddacu;
    // NOP
    ctx->pc = 0x1d9ddb0u;
}
