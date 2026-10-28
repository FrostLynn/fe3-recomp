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

// Function: sub_01C319F0
// Address: 0x1c319f0 - 0x1c31b10
void sub_01C319F0_0x1c319f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C319F0_0x1c319f0");
#endif

    switch (ctx->pc) {
        case 0x1c31a10u: goto label_1c31a10;
        case 0x1c31a24u: goto label_1c31a24;
        case 0x1c31a28u: goto label_1c31a28;
        case 0x1c31a44u: goto label_1c31a44;
        case 0x1c31a54u: goto label_1c31a54;
        case 0x1c31a8cu: goto label_1c31a8c;
        case 0x1c31ac4u: goto label_1c31ac4;
        case 0x1c31ad0u: goto label_1c31ad0;
        case 0x1c31ae0u: goto label_1c31ae0;
        case 0x1c31af8u: goto label_1c31af8;
        default: break;
    }

    ctx->pc = 0x1c319f0u;

    // 0x1c319f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c319f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c319f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c319f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c319f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c319f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c319fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c319fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c31a00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c31a00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31a04: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c31a04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c31a08: 0xc70bdd6  jal         func_1C2F758
    ctx->pc = 0x1C31A08u;
    SET_GPR_U32(ctx, 31, 0x1C31A10u);
    ctx->pc = 0x1C31A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31A08u;
    // 0x1c31a0c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F758u, 0x1C31A08u, 0x1C31A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31A10u;
label_1c31a10:
    // 0x1c31a10: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1c31a10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1c31a14: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C31A14u;
    {
        const bool branch_taken_0x1c31a14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C31A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31A14u;
        // 0x1c31a18: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c31a14) {
            ctx->pc = 0x1C31A60u;
            goto label_1c31a60;
        }
    }
    ctx->pc = 0x1C31A1Cu;
    // 0x1c31a1c: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C31A1Cu;
    {
        const bool branch_taken_0x1c31a1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1c31a1c) {
            ctx->pc = 0x1C31A3Cu;
            goto label_1c31a3c;
        }
    }
    ctx->pc = 0x1C31A24u;
label_1c31a24:
    // 0x1c31a24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c31a24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c31a28:
    // 0x1c31a28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c31a28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c31a2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c31a2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c31a30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c31a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c31a34: 0x3e00008  jr          $ra
    ctx->pc = 0x1C31A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C31A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31A34u;
        // 0x1c31a38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C31A34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C31A3Cu;
label_1c31a3c:
    // 0x1c31a3c: 0xc70bdd2  jal         func_1C2F748
    ctx->pc = 0x1C31A3Cu;
    SET_GPR_U32(ctx, 31, 0x1C31A44u);
    ctx->pc = 0x1C31A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31A3Cu;
    // 0x1c31a40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F748u, 0x1C31A3Cu, 0x1C31A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31A44u;
label_1c31a44:
    // 0x1c31a44: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1C31A44u;
    {
        const bool branch_taken_0x1c31a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1C31A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31A44u;
        // 0x1c31a48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c31a44) {
            ctx->pc = 0x1C31A24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c31a24;
        }
    }
    ctx->pc = 0x1C31A4Cu;
    // 0x1c31a4c: 0xc70bdd4  jal         func_1C2F750
    ctx->pc = 0x1C31A4Cu;
    SET_GPR_U32(ctx, 31, 0x1C31A54u);
    ctx->pc = 0x1C2F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F750u, 0x1C31A4Cu, 0x1C31A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31A54u;
label_1c31a54:
    // 0x1c31a54: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1C31A54u;
    {
        const bool branch_taken_0x1c31a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C31A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31A54u;
        // 0x1c31a58: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c31a54) {
            ctx->pc = 0x1C31A28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c31a28;
        }
    }
    ctx->pc = 0x1C31A5Cu;
    // 0x1c31a5c: 0x0  nop
    ctx->pc = 0x1c31a5cu;
    // NOP
label_1c31a60:
    // 0x1c31a60: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1c31a60u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1c31a64: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C31A64u;
    {
        const bool branch_taken_0x1c31a64 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C31A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31A64u;
        // 0x1c31a68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c31a64) {
            ctx->pc = 0x1C31A28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c31a28;
        }
    }
    ctx->pc = 0x1C31A6Cu;
    // 0x1c31a6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c31a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31a70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c31a70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31a74: 0x2406003f  addiu       $a2, $zero, 0x3F
    ctx->pc = 0x1c31a74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1c31a78: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c31a78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31a7c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c31a7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31a80: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c31a80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c31a84: 0xc70bde2  jal         func_1C2F788
    ctx->pc = 0x1C31A84u;
    SET_GPR_U32(ctx, 31, 0x1C31A8Cu);
    ctx->pc = 0x1C31A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31A84u;
    // 0x1c31a88: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F788u, 0x1C31A84u, 0x1C31A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31A8Cu;
label_1c31a8c:
    // 0x1c31a8c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c31a8cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c31a90: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x1C31A90u;
    {
        const bool branch_taken_0x1c31a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C31A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31A90u;
        // 0x1c31a94: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c31a90) {
            ctx->pc = 0x1C31A24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c31a24;
        }
    }
    ctx->pc = 0x1C31A98u;
    // 0x1c31a98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c31a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c31a9c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c31a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c31aa0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c31aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c31aa4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c31aa4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31aa8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c31aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c31aac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c31aacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31ab0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c31ab0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31ab4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c31ab4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c31ab8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c31ab8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31abc: 0xc70bde2  jal         func_1C2F788
    ctx->pc = 0x1C31ABCu;
    SET_GPR_U32(ctx, 31, 0x1C31AC4u);
    ctx->pc = 0x1C31AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31ABCu;
    // 0x1c31ac0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F788u, 0x1C31ABCu, 0x1C31AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31AC4u;
label_1c31ac4:
    // 0x1c31ac4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c31ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31ac8: 0xc70bdda  jal         func_1C2F768
    ctx->pc = 0x1C31AC8u;
    SET_GPR_U32(ctx, 31, 0x1C31AD0u);
    ctx->pc = 0x1C31ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31AC8u;
    // 0x1c31acc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F768u, 0x1C31AC8u, 0x1C31AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31AD0u;
label_1c31ad0:
    // 0x1c31ad0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c31ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c31ad4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c31ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c31ad8: 0xc70bdd6  jal         func_1C2F758
    ctx->pc = 0x1C31AD8u;
    SET_GPR_U32(ctx, 31, 0x1C31AE0u);
    ctx->pc = 0x1C31ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31AD8u;
    // 0x1c31adc: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F758u, 0x1C31AD8u, 0x1C31AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31AE0u;
label_1c31ae0:
    // 0x1c31ae0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c31ae0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c31ae4: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1c31ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1c31ae8: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1c31ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1c31aec: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c31aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c31af0: 0xc70bdd6  jal         func_1C2F758
    ctx->pc = 0x1C31AF0u;
    SET_GPR_U32(ctx, 31, 0x1C31AF8u);
    ctx->pc = 0x1C31AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31AF0u;
    // 0x1c31af4: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F758u, 0x1C31AF0u, 0x1C31AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31AF8u;
label_1c31af8:
    // 0x1c31af8: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1c31af8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1c31afc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c31afcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c31b00: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c31b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c31b04: 0x3e00008  jr          $ra
    ctx->pc = 0x1C31B04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C31B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31B04u;
        // 0x1c31b08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C31B04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C31B0Cu;
    // 0x1c31b0c: 0x0  nop
    ctx->pc = 0x1c31b0cu;
    // NOP
    ctx->pc = 0x1c31b10u;
}
