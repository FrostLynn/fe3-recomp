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

// Function: sub_01D8A9F8
// Address: 0x1d8a9f8 - 0x1d8ab30
void sub_01D8A9F8_0x1d8a9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D8A9F8_0x1d8a9f8");
#endif

    switch (ctx->pc) {
        case 0x1d8aa18u: goto label_1d8aa18;
        case 0x1d8aa2cu: goto label_1d8aa2c;
        case 0x1d8aa30u: goto label_1d8aa30;
        case 0x1d8aa4cu: goto label_1d8aa4c;
        case 0x1d8aa5cu: goto label_1d8aa5c;
        case 0x1d8aaa8u: goto label_1d8aaa8;
        case 0x1d8aae4u: goto label_1d8aae4;
        case 0x1d8aaf0u: goto label_1d8aaf0;
        case 0x1d8ab00u: goto label_1d8ab00;
        case 0x1d8ab18u: goto label_1d8ab18;
        default: break;
    }

    ctx->pc = 0x1d8a9f8u;

    // 0x1d8a9f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d8a9f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d8a9fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d8a9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d8aa00: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d8aa00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d8aa04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d8aa04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d8aa08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d8aa08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8aa0c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d8aa0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d8aa10: 0xc762256  jal         func_1D88958
    ctx->pc = 0x1D8AA10u;
    SET_GPR_U32(ctx, 31, 0x1D8AA18u);
    ctx->pc = 0x1D8AA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8AA10u;
    // 0x1d8aa14: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88958u, 0x1D8AA10u, 0x1D8AA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8AA18u;
label_1d8aa18:
    // 0x1d8aa18: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1d8aa18u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d8aa1c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D8AA1Cu;
    {
        const bool branch_taken_0x1d8aa1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8AA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8AA1Cu;
        // 0x1d8aa20: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8aa1c) {
            ctx->pc = 0x1D8AA68u;
            goto label_1d8aa68;
        }
    }
    ctx->pc = 0x1D8AA24u;
    // 0x1d8aa24: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D8AA24u;
    {
        const bool branch_taken_0x1d8aa24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1d8aa24) {
            ctx->pc = 0x1D8AA44u;
            goto label_1d8aa44;
        }
    }
    ctx->pc = 0x1D8AA2Cu;
label_1d8aa2c:
    // 0x1d8aa2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d8aa2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8aa30:
    // 0x1d8aa30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d8aa30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8aa34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d8aa34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d8aa38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d8aa38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8aa3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8AA3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8AA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8AA3Cu;
        // 0x1d8aa40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8AA3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8AA44u;
label_1d8aa44:
    // 0x1d8aa44: 0xc762252  jal         func_1D88948
    ctx->pc = 0x1D8AA44u;
    SET_GPR_U32(ctx, 31, 0x1D8AA4Cu);
    ctx->pc = 0x1D8AA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8AA44u;
    // 0x1d8aa48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88948u, 0x1D8AA44u, 0x1D8AA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8AA4Cu;
label_1d8aa4c:
    // 0x1d8aa4c: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D8AA4Cu;
    {
        const bool branch_taken_0x1d8aa4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1D8AA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8AA4Cu;
        // 0x1d8aa50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8aa4c) {
            ctx->pc = 0x1D8AA2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8aa2c;
        }
    }
    ctx->pc = 0x1D8AA54u;
    // 0x1d8aa54: 0xc762254  jal         func_1D88950
    ctx->pc = 0x1D8AA54u;
    SET_GPR_U32(ctx, 31, 0x1D8AA5Cu);
    ctx->pc = 0x1D88950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88950u, 0x1D8AA54u, 0x1D8AA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8AA5Cu;
label_1d8aa5c:
    // 0x1d8aa5c: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1D8AA5Cu;
    {
        const bool branch_taken_0x1d8aa5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8AA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8AA5Cu;
        // 0x1d8aa60: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8aa5c) {
            ctx->pc = 0x1D8AA30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8aa30;
        }
    }
    ctx->pc = 0x1D8AA64u;
    // 0x1d8aa64: 0x0  nop
    ctx->pc = 0x1d8aa64u;
    // NOP
label_1d8aa68:
    // 0x1d8aa68: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1d8aa68u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1d8aa6c: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D8AA6Cu;
    {
        const bool branch_taken_0x1d8aa6c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8AA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8AA6Cu;
        // 0x1d8aa70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8aa6c) {
            ctx->pc = 0x1D8AA30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8aa30;
        }
    }
    ctx->pc = 0x1D8AA74u;
    // 0x1d8aa74: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1d8aa74u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1d8aa78: 0x3c0e01d9  lui         $t6, 0x1D9
    ctx->pc = 0x1d8aa78u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)473 << 16));
    // 0x1d8aa7c: 0x25cec8a0  addiu       $t6, $t6, -0x3760
    ctx->pc = 0x1d8aa7cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294953120));
    // 0x1d8aa80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d8aa80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8aa84: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d8aa84u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d8aa88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d8aa88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8aa8c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d8aa8cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d8aa90: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d8aa90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8aa94: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d8aa94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d8aa98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d8aa98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8aa9c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d8aa9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8aaa0: 0xc762262  jal         func_1D88988
    ctx->pc = 0x1D8AAA0u;
    SET_GPR_U32(ctx, 31, 0x1D8AAA8u);
    ctx->pc = 0x1D8AAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8AAA0u;
    // 0x1d8aaa4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88988u, 0x1D8AAA0u, 0x1D8AAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8AAA8u;
label_1d8aaa8:
    // 0x1d8aaa8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d8aaa8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8aaac: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1D8AAACu;
    {
        const bool branch_taken_0x1d8aaac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8AAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8AAACu;
        // 0x1d8aab0: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8aaac) {
            ctx->pc = 0x1D8AA2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8aa2c;
        }
    }
    ctx->pc = 0x1D8AAB4u;
    // 0x1d8aab4: 0x0  nop
    ctx->pc = 0x1d8aab4u;
    // NOP
    // 0x1d8aab8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d8aab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d8aabc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d8aabcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d8aac0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d8aac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d8aac4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d8aac4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8aac8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d8aac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d8aacc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d8aaccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8aad0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d8aad0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8aad4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d8aad4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8aad8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d8aad8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8aadc: 0xc762262  jal         func_1D88988
    ctx->pc = 0x1D8AADCu;
    SET_GPR_U32(ctx, 31, 0x1D8AAE4u);
    ctx->pc = 0x1D8AAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8AADCu;
    // 0x1d8aae0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88988u, 0x1D8AADCu, 0x1D8AAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8AAE4u;
label_1d8aae4:
    // 0x1d8aae4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d8aae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8aae8: 0xc76225a  jal         func_1D88968
    ctx->pc = 0x1D8AAE8u;
    SET_GPR_U32(ctx, 31, 0x1D8AAF0u);
    ctx->pc = 0x1D8AAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8AAE8u;
    // 0x1d8aaec: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88968u, 0x1D8AAE8u, 0x1D8AAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8AAF0u;
label_1d8aaf0:
    // 0x1d8aaf0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d8aaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d8aaf4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d8aaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d8aaf8: 0xc762256  jal         func_1D88958
    ctx->pc = 0x1D8AAF8u;
    SET_GPR_U32(ctx, 31, 0x1D8AB00u);
    ctx->pc = 0x1D8AAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8AAF8u;
    // 0x1d8aafc: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88958u, 0x1D8AAF8u, 0x1D8AB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8AB00u;
label_1d8ab00:
    // 0x1d8ab00: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d8ab00u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8ab04: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d8ab04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d8ab08: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1d8ab08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1d8ab0c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d8ab0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d8ab10: 0xc762256  jal         func_1D88958
    ctx->pc = 0x1D8AB10u;
    SET_GPR_U32(ctx, 31, 0x1D8AB18u);
    ctx->pc = 0x1D8AB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8AB10u;
    // 0x1d8ab14: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88958u, 0x1D8AB10u, 0x1D8AB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8AB18u;
label_1d8ab18:
    // 0x1d8ab18: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d8ab18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d8ab1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d8ab1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8ab20: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d8ab20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d8ab24: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8AB24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8AB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8AB24u;
        // 0x1d8ab28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8AB24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8AB2Cu;
    // 0x1d8ab2c: 0x0  nop
    ctx->pc = 0x1d8ab2cu;
    // NOP
    ctx->pc = 0x1d8ab30u;
}
