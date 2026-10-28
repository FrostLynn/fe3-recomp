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

// Function: sub_01DC4D88
// Address: 0x1dc4d88 - 0x1dc4ef0
void sub_01DC4D88_0x1dc4d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DC4D88_0x1dc4d88");
#endif

    switch (ctx->pc) {
        case 0x1dc4da4u: goto label_1dc4da4;
        case 0x1dc4dacu: goto label_1dc4dac;
        case 0x1dc4dc0u: goto label_1dc4dc0;
        case 0x1dc4dc8u: goto label_1dc4dc8;
        case 0x1dc4dccu: goto label_1dc4dcc;
        case 0x1dc4e04u: goto label_1dc4e04;
        case 0x1dc4e10u: goto label_1dc4e10;
        case 0x1dc4e1cu: goto label_1dc4e1c;
        case 0x1dc4e24u: goto label_1dc4e24;
        case 0x1dc4e34u: goto label_1dc4e34;
        case 0x1dc4e54u: goto label_1dc4e54;
        case 0x1dc4eb4u: goto label_1dc4eb4;
        case 0x1dc4ed4u: goto label_1dc4ed4;
        default: break;
    }

    ctx->pc = 0x1dc4d88u;

    // 0x1dc4d88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dc4d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dc4d8c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1dc4d8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dc4d90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dc4d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dc4d94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dc4d94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc4d98: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1dc4d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1dc4d9c: 0xc771086  jal         func_1DC4218
    ctx->pc = 0x1DC4D9Cu;
    SET_GPR_U32(ctx, 31, 0x1DC4DA4u);
    ctx->pc = 0x1DC4DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC4D9Cu;
    // 0x1dc4da0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC4218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC4218u, 0x1DC4D9Cu, 0x1DC4DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC4DA4u;
label_1dc4da4:
    // 0x1dc4da4: 0xc771088  jal         func_1DC4220
    ctx->pc = 0x1DC4DA4u;
    SET_GPR_U32(ctx, 31, 0x1DC4DACu);
    ctx->pc = 0x1DC4DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC4DA4u;
    // 0x1dc4da8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC4220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC4220u, 0x1DC4DA4u, 0x1DC4DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC4DACu;
label_1dc4dac:
    // 0x1dc4dac: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1dc4dacu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dc4db0: 0x144f000a  bne         $v0, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1DC4DB0u;
    {
        const bool branch_taken_0x1dc4db0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1DC4DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC4DB0u;
        // 0x1dc4db4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc4db0) {
            ctx->pc = 0x1DC4DDCu;
            goto label_1dc4ddc;
        }
    }
    ctx->pc = 0x1DC4DB8u;
    // 0x1dc4db8: 0xc77109c  jal         func_1DC4270
    ctx->pc = 0x1DC4DB8u;
    SET_GPR_U32(ctx, 31, 0x1DC4DC0u);
    ctx->pc = 0x1DC4270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC4270u, 0x1DC4DB8u, 0x1DC4DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC4DC0u;
label_1dc4dc0:
    // 0x1dc4dc0: 0xc77108a  jal         func_1DC4228
    ctx->pc = 0x1DC4DC0u;
    SET_GPR_U32(ctx, 31, 0x1DC4DC8u);
    ctx->pc = 0x1DC4DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC4DC0u;
    // 0x1dc4dc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC4228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC4228u, 0x1DC4DC0u, 0x1DC4DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC4DC8u;
label_1dc4dc8:
    // 0x1dc4dc8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1dc4dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1dc4dcc:
    // 0x1dc4dcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dc4dccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc4dd0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dc4dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dc4dd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC4DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC4DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC4DD4u;
        // 0x1dc4dd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC4DD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC4DDCu;
label_1dc4ddc:
    // 0x1dc4ddc: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1DC4DDCu;
    {
        const bool branch_taken_0x1dc4ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC4DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC4DDCu;
        // 0x1dc4de0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc4ddc) {
            ctx->pc = 0x1DC4DCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dc4dcc;
        }
    }
    ctx->pc = 0x1DC4DE4u;
    // 0x1dc4de4: 0x0  nop
    ctx->pc = 0x1dc4de4u;
    // NOP
    // 0x1dc4de8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dc4de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dc4dec: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1dc4decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1dc4df0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1dc4df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1dc4df4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1dc4df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1dc4df8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dc4df8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc4dfc: 0xc771096  jal         func_1DC4258
    ctx->pc = 0x1DC4DFCu;
    SET_GPR_U32(ctx, 31, 0x1DC4E04u);
    ctx->pc = 0x1DC4E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC4DFCu;
    // 0x1dc4e00: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC4258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC4258u, 0x1DC4DFCu, 0x1DC4E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC4E04u;
label_1dc4e04:
    // 0x1dc4e04: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1dc4e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1dc4e08: 0xc77108c  jal         func_1DC4230
    ctx->pc = 0x1DC4E08u;
    SET_GPR_U32(ctx, 31, 0x1DC4E10u);
    ctx->pc = 0x1DC4E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC4E08u;
    // 0x1dc4e0c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC4230u, 0x1DC4E08u, 0x1DC4E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC4E10u;
label_1dc4e10:
    // 0x1dc4e10: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1dc4e10u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dc4e14: 0xa04f0950  sb          $t7, 0x950($v0)
    ctx->pc = 0x1dc4e14u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2384), (uint8_t)GPR_U32(ctx, 15));
    // 0x1dc4e18: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1dc4e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1dc4e1c:
    // 0x1dc4e1c: 0xc77108c  jal         func_1DC4230
    ctx->pc = 0x1DC4E1Cu;
    SET_GPR_U32(ctx, 31, 0x1DC4E24u);
    ctx->pc = 0x1DC4E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC4E1Cu;
    // 0x1dc4e20: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC4230u, 0x1DC4E1Cu, 0x1DC4E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC4E24u;
label_1dc4e24:
    // 0x1dc4e24: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DC4E24u;
    {
        const bool branch_taken_0x1dc4e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC4E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC4E24u;
        // 0x1dc4e28: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc4e24) {
            ctx->pc = 0x1DC4E38u;
            goto label_1dc4e38;
        }
    }
    ctx->pc = 0x1DC4E2Cu;
    // 0x1dc4e2c: 0xc77108c  jal         func_1DC4230
    ctx->pc = 0x1DC4E2Cu;
    SET_GPR_U32(ctx, 31, 0x1DC4E34u);
    ctx->pc = 0x1DC4E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC4E2Cu;
    // 0x1dc4e30: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC4230u, 0x1DC4E2Cu, 0x1DC4E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC4E34u;
label_1dc4e34:
    // 0x1dc4e34: 0xa0400952  sb          $zero, 0x952($v0)
    ctx->pc = 0x1dc4e34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2386), (uint8_t)GPR_U32(ctx, 0));
label_1dc4e38:
    // 0x1dc4e38: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1dc4e38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1dc4e3c: 0x2a2f0003  slti        $t7, $s1, 0x3
    ctx->pc = 0x1dc4e3cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1dc4e40: 0x55e0fff6  bnel        $t7, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1DC4E40u;
    {
        const bool branch_taken_0x1dc4e40 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dc4e40) {
            ctx->pc = 0x1DC4E44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DC4E40u;
            // 0x1dc4e44: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DC4E1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dc4e1c;
        }
    }
    ctx->pc = 0x1DC4E48u;
    // 0x1dc4e48: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1dc4e48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1dc4e4c: 0xc77108e  jal         func_1DC4238
    ctx->pc = 0x1DC4E4Cu;
    SET_GPR_U32(ctx, 31, 0x1DC4E54u);
    ctx->pc = 0x1DC4E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC4E4Cu;
    // 0x1dc4e50: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC4238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC4238u, 0x1DC4E4Cu, 0x1DC4E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC4E54u;
label_1dc4e54:
    // 0x1dc4e54: 0x70007ca9  por         $t7, $zero, $zero
    ctx->pc = 0x1dc4e54u;
    SET_GPR_VEC(ctx, 15, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1dc4e58: 0x7faf0000  sq          $t7, 0x0($sp)
    ctx->pc = 0x1dc4e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 15));
    // 0x1dc4e5c: 0x244e00e0  addiu       $t6, $v0, 0xE0
    ctx->pc = 0x1dc4e5cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x1dc4e60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dc4e60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc4e64: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x1dc4e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1dc4e68: 0x3c0f01dd  lui         $t7, 0x1DD
    ctx->pc = 0x1dc4e68u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)477 << 16));
    // 0x1dc4e6c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1dc4e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc4e70: 0x25efa268  addiu       $t7, $t7, -0x5D98
    ctx->pc = 0x1dc4e70u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294943336));
    // 0x1dc4e74: 0x26100580  addiu       $s0, $s0, 0x580
    ctx->pc = 0x1dc4e74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1408));
    // 0x1dc4e78: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1dc4e78u;
    { uint32_t bits = FAST_READ32(0x1DCA268u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc4e7c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1dc4e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1dc4e80: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1dc4e80u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dc4e84: 0xa04f0d4c  sb          $t7, 0xD4C($v0)
    ctx->pc = 0x1dc4e84u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3404), (uint8_t)GPR_U32(ctx, 15));
    // 0x1dc4e88: 0xc44100e0  lwc1        $f1, 0xE0($v0)
    ctx->pc = 0x1dc4e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dc4e8c: 0x3c0f01dd  lui         $t7, 0x1DD
    ctx->pc = 0x1dc4e8cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)477 << 16));
    // 0x1dc4e90: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1dc4e90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1dc4e94: 0x25efa26c  addiu       $t7, $t7, -0x5D94
    ctx->pc = 0x1dc4e94u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294943340));
    // 0x1dc4e98: 0xc5c00004  lwc1        $f0, 0x4($t6)
    ctx->pc = 0x1dc4e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc4e9c: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x1dc4e9cu;
    { uint32_t bits = FAST_READ32(0x1DCA26Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dc4ea0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1dc4ea0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1dc4ea4: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1dc4ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1dc4ea8: 0xc5c10008  lwc1        $f1, 0x8($t6)
    ctx->pc = 0x1dc4ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dc4eac: 0xc771158  jal         func_1DC4560
    ctx->pc = 0x1DC4EACu;
    SET_GPR_U32(ctx, 31, 0x1DC4EB4u);
    ctx->pc = 0x1DC4EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC4EACu;
    // 0x1dc4eb0: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC4560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC4560u, 0x1DC4EACu, 0x1DC4EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC4EB4u;
label_1dc4eb4:
    // 0x1dc4eb4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1dc4eb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dc4eb8: 0x3c0f01dd  lui         $t7, 0x1DD
    ctx->pc = 0x1dc4eb8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)477 << 16));
    // 0x1dc4ebc: 0x25efa270  addiu       $t7, $t7, -0x5D90
    ctx->pc = 0x1dc4ebcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294943344));
    // 0x1dc4ec0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dc4ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc4ec4: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1dc4ec4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x1dc4ec8: 0x460063c6  mov.s       $f15, $f12
    ctx->pc = 0x1dc4ec8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    // 0x1dc4ecc: 0xc771148  jal         func_1DC4520
    ctx->pc = 0x1DC4ECCu;
    SET_GPR_U32(ctx, 31, 0x1DC4ED4u);
    ctx->pc = 0x1DC4ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC4ECCu;
    // 0x1dc4ed0: 0xc5ed0000  lwc1        $f13, 0x0($t7) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC4520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC4520u, 0x1DC4ECCu, 0x1DC4ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC4ED4u;
label_1dc4ed4:
    // 0x1dc4ed4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1dc4ed4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dc4ed8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1dc4ed8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dc4edc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1dc4edcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dc4ee0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC4EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC4EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC4EE0u;
        // 0x1dc4ee4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC4EE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC4EE8u;
    // 0x1dc4ee8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC4EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC4EE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC4EF0u;
}
