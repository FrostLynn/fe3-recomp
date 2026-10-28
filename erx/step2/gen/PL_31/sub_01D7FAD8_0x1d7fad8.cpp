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

// Function: sub_01D7FAD8
// Address: 0x1d7fad8 - 0x1d7fbe8
void sub_01D7FAD8_0x1d7fad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D7FAD8_0x1d7fad8");
#endif

    switch (ctx->pc) {
        case 0x1d7faf8u: goto label_1d7faf8;
        case 0x1d7fb0cu: goto label_1d7fb0c;
        case 0x1d7fb10u: goto label_1d7fb10;
        case 0x1d7fb2cu: goto label_1d7fb2c;
        case 0x1d7fb3cu: goto label_1d7fb3c;
        case 0x1d7fb88u: goto label_1d7fb88;
        case 0x1d7fbc4u: goto label_1d7fbc4;
        case 0x1d7fbd0u: goto label_1d7fbd0;
        default: break;
    }

    ctx->pc = 0x1d7fad8u;

    // 0x1d7fad8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d7fad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d7fadc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d7fadcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d7fae0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d7fae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d7fae4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d7fae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d7fae8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d7fae8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7faec: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d7faecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d7faf0: 0xc75f5d6  jal         func_1D7D758
    ctx->pc = 0x1D7FAF0u;
    SET_GPR_U32(ctx, 31, 0x1D7FAF8u);
    ctx->pc = 0x1D7FAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7FAF0u;
    // 0x1d7faf4: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D758u, 0x1D7FAF0u, 0x1D7FAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7FAF8u;
label_1d7faf8:
    // 0x1d7faf8: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1d7faf8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d7fafc: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D7FAFCu;
    {
        const bool branch_taken_0x1d7fafc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7FB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7FAFCu;
        // 0x1d7fb00: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7fafc) {
            ctx->pc = 0x1D7FB48u;
            goto label_1d7fb48;
        }
    }
    ctx->pc = 0x1D7FB04u;
    // 0x1d7fb04: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D7FB04u;
    {
        const bool branch_taken_0x1d7fb04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1d7fb04) {
            ctx->pc = 0x1D7FB24u;
            goto label_1d7fb24;
        }
    }
    ctx->pc = 0x1D7FB0Cu;
label_1d7fb0c:
    // 0x1d7fb0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d7fb0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7fb10:
    // 0x1d7fb10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d7fb10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7fb14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d7fb14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d7fb18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d7fb18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7fb1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7FB1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7FB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7FB1Cu;
        // 0x1d7fb20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7FB1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7FB24u;
label_1d7fb24:
    // 0x1d7fb24: 0xc75f5d2  jal         func_1D7D748
    ctx->pc = 0x1D7FB24u;
    SET_GPR_U32(ctx, 31, 0x1D7FB2Cu);
    ctx->pc = 0x1D7FB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7FB24u;
    // 0x1d7fb28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D748u, 0x1D7FB24u, 0x1D7FB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7FB2Cu;
label_1d7fb2c:
    // 0x1d7fb2c: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D7FB2Cu;
    {
        const bool branch_taken_0x1d7fb2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1D7FB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7FB2Cu;
        // 0x1d7fb30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7fb2c) {
            ctx->pc = 0x1D7FB0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7fb0c;
        }
    }
    ctx->pc = 0x1D7FB34u;
    // 0x1d7fb34: 0xc75f5d4  jal         func_1D7D750
    ctx->pc = 0x1D7FB34u;
    SET_GPR_U32(ctx, 31, 0x1D7FB3Cu);
    ctx->pc = 0x1D7D750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D750u, 0x1D7FB34u, 0x1D7FB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7FB3Cu;
label_1d7fb3c:
    // 0x1d7fb3c: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1D7FB3Cu;
    {
        const bool branch_taken_0x1d7fb3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7FB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7FB3Cu;
        // 0x1d7fb40: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7fb3c) {
            ctx->pc = 0x1D7FB10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7fb10;
        }
    }
    ctx->pc = 0x1D7FB44u;
    // 0x1d7fb44: 0x0  nop
    ctx->pc = 0x1d7fb44u;
    // NOP
label_1d7fb48:
    // 0x1d7fb48: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1d7fb48u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1d7fb4c: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D7FB4Cu;
    {
        const bool branch_taken_0x1d7fb4c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7FB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7FB4Cu;
        // 0x1d7fb50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7fb4c) {
            ctx->pc = 0x1D7FB10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7fb10;
        }
    }
    ctx->pc = 0x1D7FB54u;
    // 0x1d7fb54: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1d7fb54u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1d7fb58: 0x3c0e01d8  lui         $t6, 0x1D8
    ctx->pc = 0x1d7fb58u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)472 << 16));
    // 0x1d7fb5c: 0x25ce4330  addiu       $t6, $t6, 0x4330
    ctx->pc = 0x1d7fb5cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 17200));
    // 0x1d7fb60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d7fb60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7fb64: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d7fb64u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d7fb68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d7fb68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7fb6c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d7fb6cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d7fb70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d7fb70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7fb74: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d7fb74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d7fb78: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d7fb78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7fb7c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d7fb7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7fb80: 0xc75f5e2  jal         func_1D7D788
    ctx->pc = 0x1D7FB80u;
    SET_GPR_U32(ctx, 31, 0x1D7FB88u);
    ctx->pc = 0x1D7FB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7FB80u;
    // 0x1d7fb84: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D788u, 0x1D7FB80u, 0x1D7FB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7FB88u;
label_1d7fb88:
    // 0x1d7fb88: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d7fb88u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7fb8c: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1D7FB8Cu;
    {
        const bool branch_taken_0x1d7fb8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7FB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7FB8Cu;
        // 0x1d7fb90: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7fb8c) {
            ctx->pc = 0x1D7FB0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7fb0c;
        }
    }
    ctx->pc = 0x1D7FB94u;
    // 0x1d7fb94: 0x0  nop
    ctx->pc = 0x1d7fb94u;
    // NOP
    // 0x1d7fb98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d7fb98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d7fb9c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d7fb9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d7fba0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d7fba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d7fba4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d7fba4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7fba8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d7fba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d7fbac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d7fbacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7fbb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d7fbb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7fbb4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d7fbb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7fbb8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d7fbb8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7fbbc: 0xc75f5e2  jal         func_1D7D788
    ctx->pc = 0x1D7FBBCu;
    SET_GPR_U32(ctx, 31, 0x1D7FBC4u);
    ctx->pc = 0x1D7FBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7FBBCu;
    // 0x1d7fbc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D788u, 0x1D7FBBCu, 0x1D7FBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7FBC4u;
label_1d7fbc4:
    // 0x1d7fbc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d7fbc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7fbc8: 0xc75f5da  jal         func_1D7D768
    ctx->pc = 0x1D7FBC8u;
    SET_GPR_U32(ctx, 31, 0x1D7FBD0u);
    ctx->pc = 0x1D7FBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7FBC8u;
    // 0x1d7fbcc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D768u, 0x1D7FBC8u, 0x1D7FBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7FBD0u;
label_1d7fbd0:
    // 0x1d7fbd0: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d7fbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d7fbd4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d7fbd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d7fbd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d7fbd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7fbdc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7FBDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7FBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7FBDCu;
        // 0x1d7fbe0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7FBDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7FBE4u;
    // 0x1d7fbe4: 0x0  nop
    ctx->pc = 0x1d7fbe4u;
    // NOP
    ctx->pc = 0x1d7fbe8u;
}
