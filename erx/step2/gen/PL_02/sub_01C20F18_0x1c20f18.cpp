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

// Function: sub_01C20F18
// Address: 0x1c20f18 - 0x1c21140
void sub_01C20F18_0x1c20f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C20F18_0x1c20f18");
#endif

    switch (ctx->pc) {
        case 0x1c20f34u: goto label_1c20f34;
        case 0x1c20f4cu: goto label_1c20f4c;
        case 0x1c20f60u: goto label_1c20f60;
        case 0x1c20f68u: goto label_1c20f68;
        case 0x1c20f6cu: goto label_1c20f6c;
        case 0x1c20facu: goto label_1c20fac;
        case 0x1c20fe4u: goto label_1c20fe4;
        case 0x1c20ff8u: goto label_1c20ff8;
        case 0x1c21010u: goto label_1c21010;
        case 0x1c2101cu: goto label_1c2101c;
        case 0x1c21028u: goto label_1c21028;
        case 0x1c2103cu: goto label_1c2103c;
        case 0x1c21054u: goto label_1c21054;
        case 0x1c21060u: goto label_1c21060;
        case 0x1c21084u: goto label_1c21084;
        case 0x1c210f4u: goto label_1c210f4;
        case 0x1c21110u: goto label_1c21110;
        default: break;
    }

    ctx->pc = 0x1c20f18u;

    // 0x1c20f18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c20f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c20f1c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c20f1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c20f20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c20f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c20f24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c20f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20f28: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c20f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c20f2c: 0xc707c54  jal         func_1C1F150
    ctx->pc = 0x1C20F2Cu;
    SET_GPR_U32(ctx, 31, 0x1C20F34u);
    ctx->pc = 0x1C20F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C20F2Cu;
    // 0x1c20f30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F150u, 0x1C20F2Cu, 0x1C20F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20F34u;
label_1c20f34:
    // 0x1c20f34: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x1c20f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c20f38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c20f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20f3c: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x1c20f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c20f40: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c20f40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c20f44: 0xc707c56  jal         func_1C1F158
    ctx->pc = 0x1C20F44u;
    SET_GPR_U32(ctx, 31, 0x1C20F4Cu);
    ctx->pc = 0x1C20F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C20F44u;
    // 0x1c20f48: 0xe600001c  swc1        $f0, 0x1C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F158u, 0x1C20F44u, 0x1C20F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20F4Cu;
label_1c20f4c:
    // 0x1c20f4c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c20f4cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c20f50: 0x144f000a  bne         $v0, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1C20F50u;
    {
        const bool branch_taken_0x1c20f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C20F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C20F50u;
        // 0x1c20f54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c20f50) {
            ctx->pc = 0x1C20F7Cu;
            goto label_1c20f7c;
        }
    }
    ctx->pc = 0x1C20F58u;
    // 0x1c20f58: 0xc707c70  jal         func_1C1F1C0
    ctx->pc = 0x1C20F58u;
    SET_GPR_U32(ctx, 31, 0x1C20F60u);
    ctx->pc = 0x1C1F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F1C0u, 0x1C20F58u, 0x1C20F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20F60u;
label_1c20f60:
    // 0x1c20f60: 0xc707c58  jal         func_1C1F160
    ctx->pc = 0x1C20F60u;
    SET_GPR_U32(ctx, 31, 0x1C20F68u);
    ctx->pc = 0x1C20F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C20F60u;
    // 0x1c20f64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F160u, 0x1C20F60u, 0x1C20F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20F68u;
label_1c20f68:
    // 0x1c20f68: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c20f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c20f6c:
    // 0x1c20f6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c20f6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c20f70: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c20f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c20f74: 0x3e00008  jr          $ra
    ctx->pc = 0x1C20F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C20F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C20F74u;
        // 0x1c20f78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C20F74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C20F7Cu;
label_1c20f7c:
    // 0x1c20f7c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C20F7Cu;
    {
        const bool branch_taken_0x1c20f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C20F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C20F7Cu;
        // 0x1c20f80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c20f7c) {
            ctx->pc = 0x1C20F6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c20f6c;
        }
    }
    ctx->pc = 0x1C20F84u;
    // 0x1c20f84: 0x0  nop
    ctx->pc = 0x1c20f84u;
    // NOP
    // 0x1c20f88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c20f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c20f8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c20f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c20f90: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c20f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c20f94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c20f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c20f98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c20f98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20f9c: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x1c20f9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1c20fa0: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1c20fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c20fa4: 0xc707c5c  jal         func_1C1F170
    ctx->pc = 0x1C20FA4u;
    SET_GPR_U32(ctx, 31, 0x1C20FACu);
    ctx->pc = 0x1C20FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C20FA4u;
    // 0x1c20fa8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F170u, 0x1C20FA4u, 0x1C20FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20FACu;
label_1c20fac:
    // 0x1c20fac: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c20facu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c20fb0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c20fb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20fb4: 0x8c4e0008  lw          $t6, 0x8($v0)
    ctx->pc = 0x1c20fb4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c20fb8: 0x240f0019  addiu       $t7, $zero, 0x19
    ctx->pc = 0x1c20fb8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1c20fbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c20fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20fc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c20fc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20fc4: 0x11cf000c  beq         $t6, $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x1C20FC4u;
    {
        const bool branch_taken_0x1c20fc4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1C20FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C20FC4u;
        // 0x1c20fc8: 0x24060053  addiu       $a2, $zero, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c20fc4) {
            ctx->pc = 0x1C20FF8u;
            goto label_1c20ff8;
        }
    }
    ctx->pc = 0x1C20FCCu;
    // 0x1c20fcc: 0x29cf001a  slti        $t7, $t6, 0x1A
    ctx->pc = 0x1c20fccu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x1c20fd0: 0x11e00039  beqz        $t7, . + 4 + (0x39 << 2)
    ctx->pc = 0x1C20FD0u;
    {
        const bool branch_taken_0x1c20fd0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C20FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C20FD0u;
        // 0x1c20fd4: 0x240f0009  addiu       $t7, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c20fd0) {
            ctx->pc = 0x1C210B8u;
            goto label_1c210b8;
        }
    }
    ctx->pc = 0x1C20FD8u;
    // 0x1c20fd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c20fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20fdc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c20fdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20fe0: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x1c20fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1c20fe4:
    // 0x1c20fe4: 0x11cf0005  beq         $t6, $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C20FE4u;
    {
        const bool branch_taken_0x1c20fe4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1C20FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C20FE4u;
        // 0x1c20fe8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c20fe4) {
            ctx->pc = 0x1C20FFCu;
            goto label_1c20ffc;
        }
    }
    ctx->pc = 0x1C20FECu;
    // 0x1c20fec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c20fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20ff0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c20ff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c20ff4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c20ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1c20ff8:
    // 0x1c20ff8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c20ff8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c20ffc:
    // 0x1c20ffc: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1c20ffcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1c21000: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c21000u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21004: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c21004u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c21008: 0xc707c66  jal         func_1C1F198
    ctx->pc = 0x1C21008u;
    SET_GPR_U32(ctx, 31, 0x1C21010u);
    ctx->pc = 0x1C2100Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21008u;
    // 0x1c2100c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F198u, 0x1C21008u, 0x1C21010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21010u;
label_1c21010:
    // 0x1c21010: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c21010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21014: 0xc707c5e  jal         func_1C1F178
    ctx->pc = 0x1C21014u;
    SET_GPR_U32(ctx, 31, 0x1C2101Cu);
    ctx->pc = 0x1C21018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21014u;
    // 0x1c21018: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F178u, 0x1C21014u, 0x1C2101Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2101Cu;
label_1c2101c:
    // 0x1c2101c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c2101cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c21020: 0xc707c5a  jal         func_1C1F168
    ctx->pc = 0x1C21020u;
    SET_GPR_U32(ctx, 31, 0x1C21028u);
    ctx->pc = 0x1C21024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21020u;
    // 0x1c21024: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F168u, 0x1C21020u, 0x1C21028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21028u;
label_1c21028:
    // 0x1c21028: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1c21028u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1c2102c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1c2102cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c21030: 0x26240390  addiu       $a0, $s1, 0x390
    ctx->pc = 0x1c21030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1c21034: 0xc707c60  jal         func_1C1F180
    ctx->pc = 0x1C21034u;
    SET_GPR_U32(ctx, 31, 0x1C2103Cu);
    ctx->pc = 0x1C21038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21034u;
    // 0x1c21038: 0x240500a9  addiu       $a1, $zero, 0xA9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F180u, 0x1C21034u, 0x1C2103Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2103Cu;
label_1c2103c:
    // 0x1c2103c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1c2103cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1c21040: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c21040u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c21044: 0xa22f09b0  sb          $t7, 0x9B0($s1)
    ctx->pc = 0x1c21044u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2480), (uint8_t)GPR_U32(ctx, 15));
    // 0x1c21048: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c21048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2104c: 0xc707c54  jal         func_1C1F150
    ctx->pc = 0x1C2104Cu;
    SET_GPR_U32(ctx, 31, 0x1C21054u);
    ctx->pc = 0x1C21050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2104Cu;
    // 0x1c21050: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F150u, 0x1C2104Cu, 0x1C21054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21054u;
label_1c21054:
    // 0x1c21054: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c21054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21058: 0xc707c62  jal         func_1C1F188
    ctx->pc = 0x1C21058u;
    SET_GPR_U32(ctx, 31, 0x1C21060u);
    ctx->pc = 0x1C2105Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21058u;
    // 0x1c2105c: 0x24050043  addiu       $a1, $zero, 0x43 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F188u, 0x1C21058u, 0x1C21060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21060u;
label_1c21060:
    // 0x1c21060: 0x8e0f0004  lw          $t7, 0x4($s0)
    ctx->pc = 0x1c21060u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c21064: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1c21064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1c21068: 0x8dee002c  lw          $t6, 0x2C($t7)
    ctx->pc = 0x1c21068u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 44)));
    // 0x1c2106c: 0xe614001c  swc1        $f20, 0x1C($s0)
    ctx->pc = 0x1c2106cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x1c21070: 0x8dcf0004  lw          $t7, 0x4($t6)
    ctx->pc = 0x1c21070u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x1c21074: 0x8def0000  lw          $t7, 0x0($t7)
    ctx->pc = 0x1c21074u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c21078: 0x19e0000a  blez        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1C21078u;
    {
        const bool branch_taken_0x1c21078 = (GPR_S32(ctx, 15) <= 0);
        ctx->pc = 0x1C2107Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C21078u;
        // 0x1c2107c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c21078) {
            ctx->pc = 0x1C210A4u;
            goto label_1c210a4;
        }
    }
    ctx->pc = 0x1C21080u;
    // 0x1c21080: 0x25efffff  addiu       $t7, $t7, -0x1
    ctx->pc = 0x1c21080u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
label_1c21084:
    // 0x1c21084: 0x0  nop
    ctx->pc = 0x1c21084u;
    // NOP
    // 0x1c21088: 0x0  nop
    ctx->pc = 0x1c21088u;
    // NOP
    // 0x1c2108c: 0x0  nop
    ctx->pc = 0x1c2108cu;
    // NOP
    // 0x1c21090: 0x0  nop
    ctx->pc = 0x1c21090u;
    // NOP
    // 0x1c21094: 0x0  nop
    ctx->pc = 0x1c21094u;
    // NOP
    // 0x1c21098: 0x55e0fffa  bnel        $t7, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C21098u;
    {
        const bool branch_taken_0x1c21098 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c21098) {
            ctx->pc = 0x1C2109Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C21098u;
            // 0x1c2109c: 0x25efffff  addiu       $t7, $t7, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C21084u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c21084;
        }
    }
    ctx->pc = 0x1C210A0u;
    // 0x1c210a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c210a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c210a4:
    // 0x1c210a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c210a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c210a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c210a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c210ac: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x1c210acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c210b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C210B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C210B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C210B0u;
        // 0x1c210b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C210B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C210B8u;
label_1c210b8:
    // 0x1c210b8: 0x240f001a  addiu       $t7, $zero, 0x1A
    ctx->pc = 0x1c210b8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1c210bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c210bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c210c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c210c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c210c4: 0x11cfffcc  beq         $t6, $t7, . + 4 + (-0x34 << 2)
    ctx->pc = 0x1C210C4u;
    {
        const bool branch_taken_0x1c210c4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1C210C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C210C4u;
        // 0x1c210c8: 0x24060052  addiu       $a2, $zero, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c210c4) {
            ctx->pc = 0x1C20FF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c20ff8;
        }
    }
    ctx->pc = 0x1C210CCu;
    // 0x1c210cc: 0x240f001f  addiu       $t7, $zero, 0x1F
    ctx->pc = 0x1c210ccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1c210d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c210d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c210d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c210d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c210d8: 0x1000ffc2  b           . + 4 + (-0x3E << 2)
    ctx->pc = 0x1C210D8u;
    {
        const bool branch_taken_0x1c210d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C210DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C210D8u;
        // 0x1c210dc: 0x24060051  addiu       $a2, $zero, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c210d8) {
            ctx->pc = 0x1C20FE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c20fe4;
        }
    }
    ctx->pc = 0x1C210E0u;
    // 0x1c210e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c210e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c210e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c210e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c210e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c210e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c210ec: 0xc707c64  jal         func_1C1F190
    ctx->pc = 0x1C210ECu;
    SET_GPR_U32(ctx, 31, 0x1C210F4u);
    ctx->pc = 0x1C210F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C210ECu;
    // 0x1c210f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F190u, 0x1C210ECu, 0x1C210F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C210F4u;
label_1c210f4:
    // 0x1c210f4: 0x8e0f0004  lw          $t7, 0x4($s0)
    ctx->pc = 0x1c210f4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c210f8: 0x8dee002c  lw          $t6, 0x2C($t7)
    ctx->pc = 0x1c210f8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 44)));
    // 0x1c210fc: 0x8dcd0004  lw          $t5, 0x4($t6)
    ctx->pc = 0x1c210fcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x1c21100: 0x8dad0000  lw          $t5, 0x0($t5)
    ctx->pc = 0x1c21100u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x1c21104: 0x19a0000a  blez        $t5, . + 4 + (0xA << 2)
    ctx->pc = 0x1C21104u;
    {
        const bool branch_taken_0x1c21104 = (GPR_S32(ctx, 13) <= 0);
        ctx->pc = 0x1C21108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C21104u;
        // 0x1c21108: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c21104) {
            ctx->pc = 0x1C21130u;
            goto label_1c21130;
        }
    }
    ctx->pc = 0x1C2110Cu;
    // 0x1c2110c: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x1c2110cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
label_1c21110:
    // 0x1c21110: 0x0  nop
    ctx->pc = 0x1c21110u;
    // NOP
    // 0x1c21114: 0x0  nop
    ctx->pc = 0x1c21114u;
    // NOP
    // 0x1c21118: 0x0  nop
    ctx->pc = 0x1c21118u;
    // NOP
    // 0x1c2111c: 0x0  nop
    ctx->pc = 0x1c2111cu;
    // NOP
    // 0x1c21120: 0x0  nop
    ctx->pc = 0x1c21120u;
    // NOP
    // 0x1c21124: 0x55a0fffa  bnel        $t5, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C21124u;
    {
        const bool branch_taken_0x1c21124 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c21124) {
            ctx->pc = 0x1C21128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C21124u;
            // 0x1c21128: 0x25adffff  addiu       $t5, $t5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C21110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c21110;
        }
    }
    ctx->pc = 0x1C2112Cu;
    // 0x1c2112c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c2112cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c21130:
    // 0x1c21130: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c21130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c21134: 0x3e00008  jr          $ra
    ctx->pc = 0x1C21134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C21138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C21134u;
        // 0x1c21138: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C21134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2113Cu;
    // 0x1c2113c: 0x0  nop
    ctx->pc = 0x1c2113cu;
    // NOP
    ctx->pc = 0x1c21140u;
}
