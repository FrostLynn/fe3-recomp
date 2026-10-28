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

// Function: sub_01CC3EC0
// Address: 0x1cc3ec0 - 0x1cc3fc8
void sub_01CC3EC0_0x1cc3ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC3EC0_0x1cc3ec0");
#endif

    switch (ctx->pc) {
        case 0x1cc3edcu: goto label_1cc3edc;
        case 0x1cc3ee4u: goto label_1cc3ee4;
        case 0x1cc3ef8u: goto label_1cc3ef8;
        case 0x1cc3f00u: goto label_1cc3f00;
        case 0x1cc3f04u: goto label_1cc3f04;
        case 0x1cc3f40u: goto label_1cc3f40;
        case 0x1cc3f6cu: goto label_1cc3f6c;
        case 0x1cc3f78u: goto label_1cc3f78;
        case 0x1cc3f84u: goto label_1cc3f84;
        case 0x1cc3f98u: goto label_1cc3f98;
        case 0x1cc3fa8u: goto label_1cc3fa8;
        default: break;
    }

    ctx->pc = 0x1cc3ec0u;

    // 0x1cc3ec0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cc3ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cc3ec4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cc3ec4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cc3ec8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cc3ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cc3ecc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cc3eccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc3ed0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cc3ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cc3ed4: 0xc730912  jal         func_1CC2448
    ctx->pc = 0x1CC3ED4u;
    SET_GPR_U32(ctx, 31, 0x1CC3EDCu);
    ctx->pc = 0x1CC3ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC3ED4u;
    // 0x1cc3ed8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2448u, 0x1CC3ED4u, 0x1CC3EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC3EDCu;
label_1cc3edc:
    // 0x1cc3edc: 0xc730914  jal         func_1CC2450
    ctx->pc = 0x1CC3EDCu;
    SET_GPR_U32(ctx, 31, 0x1CC3EE4u);
    ctx->pc = 0x1CC3EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC3EDCu;
    // 0x1cc3ee0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2450u, 0x1CC3EDCu, 0x1CC3EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC3EE4u;
label_1cc3ee4:
    // 0x1cc3ee4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cc3ee4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc3ee8: 0x144f000a  bne         $v0, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1CC3EE8u;
    {
        const bool branch_taken_0x1cc3ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CC3EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC3EE8u;
        // 0x1cc3eec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc3ee8) {
            ctx->pc = 0x1CC3F14u;
            goto label_1cc3f14;
        }
    }
    ctx->pc = 0x1CC3EF0u;
    // 0x1cc3ef0: 0xc73092e  jal         func_1CC24B8
    ctx->pc = 0x1CC3EF0u;
    SET_GPR_U32(ctx, 31, 0x1CC3EF8u);
    ctx->pc = 0x1CC24B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC24B8u, 0x1CC3EF0u, 0x1CC3EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC3EF8u;
label_1cc3ef8:
    // 0x1cc3ef8: 0xc730916  jal         func_1CC2458
    ctx->pc = 0x1CC3EF8u;
    SET_GPR_U32(ctx, 31, 0x1CC3F00u);
    ctx->pc = 0x1CC3EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC3EF8u;
    // 0x1cc3efc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2458u, 0x1CC3EF8u, 0x1CC3F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC3F00u;
label_1cc3f00:
    // 0x1cc3f00: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1cc3f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1cc3f04:
    // 0x1cc3f04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cc3f04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc3f08: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cc3f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cc3f0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC3F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC3F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC3F0Cu;
        // 0x1cc3f10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC3F0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC3F14u;
label_1cc3f14:
    // 0x1cc3f14: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1CC3F14u;
    {
        const bool branch_taken_0x1cc3f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC3F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC3F14u;
        // 0x1cc3f18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc3f14) {
            ctx->pc = 0x1CC3F04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc3f04;
        }
    }
    ctx->pc = 0x1CC3F1Cu;
    // 0x1cc3f1c: 0x0  nop
    ctx->pc = 0x1cc3f1cu;
    // NOP
    // 0x1cc3f20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cc3f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cc3f24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cc3f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cc3f28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cc3f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cc3f2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cc3f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cc3f30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cc3f30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc3f34: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1cc3f34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cc3f38: 0xc73091a  jal         func_1CC2468
    ctx->pc = 0x1CC3F38u;
    SET_GPR_U32(ctx, 31, 0x1CC3F40u);
    ctx->pc = 0x1CC3F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC3F38u;
    // 0x1cc3f3c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2468u, 0x1CC3F38u, 0x1CC3F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC3F40u;
label_1cc3f40:
    // 0x1cc3f40: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1cc3f40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1cc3f44: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cc3f44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc3f48: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cc3f48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc3f4c: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1cc3f4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cc3f50: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cc3f50u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc3f54: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1cc3f54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc3f58: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1cc3f58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cc3f5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cc3f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc3f60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cc3f60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc3f64: 0xc730924  jal         func_1CC2490
    ctx->pc = 0x1CC3F64u;
    SET_GPR_U32(ctx, 31, 0x1CC3F6Cu);
    ctx->pc = 0x1CC3F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC3F64u;
    // 0x1cc3f68: 0x26310390  addiu       $s1, $s1, 0x390 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2490u, 0x1CC3F64u, 0x1CC3F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC3F6Cu;
label_1cc3f6c:
    // 0x1cc3f6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cc3f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc3f70: 0xc73091c  jal         func_1CC2470
    ctx->pc = 0x1CC3F70u;
    SET_GPR_U32(ctx, 31, 0x1CC3F78u);
    ctx->pc = 0x1CC3F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC3F70u;
    // 0x1cc3f74: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2470u, 0x1CC3F70u, 0x1CC3F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC3F78u;
label_1cc3f78:
    // 0x1cc3f78: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cc3f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cc3f7c: 0xc730918  jal         func_1CC2460
    ctx->pc = 0x1CC3F7Cu;
    SET_GPR_U32(ctx, 31, 0x1CC3F84u);
    ctx->pc = 0x1CC3F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC3F7Cu;
    // 0x1cc3f80: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2460u, 0x1CC3F7Cu, 0x1CC3F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC3F84u;
label_1cc3f84:
    // 0x1cc3f84: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1cc3f84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1cc3f88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cc3f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc3f8c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1cc3f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cc3f90: 0xc73091e  jal         func_1CC2478
    ctx->pc = 0x1CC3F90u;
    SET_GPR_U32(ctx, 31, 0x1CC3F98u);
    ctx->pc = 0x1CC3F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC3F90u;
    // 0x1cc3f94: 0x240500ce  addiu       $a1, $zero, 0xCE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 206));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2478u, 0x1CC3F90u, 0x1CC3F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC3F98u;
label_1cc3f98:
    // 0x1cc3f98: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cc3f98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cc3f9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cc3f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc3fa0: 0xc730912  jal         func_1CC2448
    ctx->pc = 0x1CC3FA0u;
    SET_GPR_U32(ctx, 31, 0x1CC3FA8u);
    ctx->pc = 0x1CC3FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC3FA0u;
    // 0x1cc3fa4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2448u, 0x1CC3FA0u, 0x1CC3FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC3FA8u;
label_1cc3fa8:
    // 0x1cc3fa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cc3fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc3fac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cc3facu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cc3fb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cc3fb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc3fb4: 0x2405006c  addiu       $a1, $zero, 0x6C
    ctx->pc = 0x1cc3fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x1cc3fb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cc3fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc3fbc: 0x8730920  j           func_1CC2480
    ctx->pc = 0x1CC3FBCu;
    ctx->pc = 0x1CC3FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC3FBCu;
    // 0x1cc3fc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2480u;
    sub_01CC2480_0x1cc2480(rdram, ctx, runtime); return;
    ctx->pc = 0x1CC3FC4u;
    // 0x1cc3fc4: 0x0  nop
    ctx->pc = 0x1cc3fc4u;
    // NOP
    ctx->pc = 0x1cc3fc8u;
}
