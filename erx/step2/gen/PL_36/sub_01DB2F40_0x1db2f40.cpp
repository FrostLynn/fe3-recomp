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

// Function: sub_01DB2F40
// Address: 0x1db2f40 - 0x1db3050
void sub_01DB2F40_0x1db2f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB2F40_0x1db2f40");
#endif

    switch (ctx->pc) {
        case 0x1db2f60u: goto label_1db2f60;
        case 0x1db2f74u: goto label_1db2f74;
        case 0x1db2f78u: goto label_1db2f78;
        case 0x1db2f94u: goto label_1db2f94;
        case 0x1db2fa4u: goto label_1db2fa4;
        case 0x1db2ff0u: goto label_1db2ff0;
        case 0x1db302cu: goto label_1db302c;
        case 0x1db3038u: goto label_1db3038;
        default: break;
    }

    ctx->pc = 0x1db2f40u;

    // 0x1db2f40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1db2f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1db2f44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1db2f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1db2f48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1db2f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1db2f4c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1db2f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1db2f50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1db2f50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2f54: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1db2f54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1db2f58: 0xc76c3d6  jal         func_1DB0F58
    ctx->pc = 0x1DB2F58u;
    SET_GPR_U32(ctx, 31, 0x1DB2F60u);
    ctx->pc = 0x1DB2F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB2F58u;
    // 0x1db2f5c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F58u, 0x1DB2F58u, 0x1DB2F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB2F60u;
label_1db2f60:
    // 0x1db2f60: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1db2f60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1db2f64: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1DB2F64u;
    {
        const bool branch_taken_0x1db2f64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB2F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB2F64u;
        // 0x1db2f68: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db2f64) {
            ctx->pc = 0x1DB2FB0u;
            goto label_1db2fb0;
        }
    }
    ctx->pc = 0x1DB2F6Cu;
    // 0x1db2f6c: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DB2F6Cu;
    {
        const bool branch_taken_0x1db2f6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1db2f6c) {
            ctx->pc = 0x1DB2F8Cu;
            goto label_1db2f8c;
        }
    }
    ctx->pc = 0x1DB2F74u;
label_1db2f74:
    // 0x1db2f74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1db2f74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1db2f78:
    // 0x1db2f78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1db2f78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db2f7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1db2f7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1db2f80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1db2f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db2f84: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB2F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB2F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB2F84u;
        // 0x1db2f88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB2F84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB2F8Cu;
label_1db2f8c:
    // 0x1db2f8c: 0xc76c3d2  jal         func_1DB0F48
    ctx->pc = 0x1DB2F8Cu;
    SET_GPR_U32(ctx, 31, 0x1DB2F94u);
    ctx->pc = 0x1DB2F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB2F8Cu;
    // 0x1db2f90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F48u, 0x1DB2F8Cu, 0x1DB2F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB2F94u;
label_1db2f94:
    // 0x1db2f94: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1DB2F94u;
    {
        const bool branch_taken_0x1db2f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1DB2F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB2F94u;
        // 0x1db2f98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db2f94) {
            ctx->pc = 0x1DB2F74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1db2f74;
        }
    }
    ctx->pc = 0x1DB2F9Cu;
    // 0x1db2f9c: 0xc76c3d4  jal         func_1DB0F50
    ctx->pc = 0x1DB2F9Cu;
    SET_GPR_U32(ctx, 31, 0x1DB2FA4u);
    ctx->pc = 0x1DB0F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F50u, 0x1DB2F9Cu, 0x1DB2FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB2FA4u;
label_1db2fa4:
    // 0x1db2fa4: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1DB2FA4u;
    {
        const bool branch_taken_0x1db2fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB2FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB2FA4u;
        // 0x1db2fa8: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db2fa4) {
            ctx->pc = 0x1DB2F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1db2f78;
        }
    }
    ctx->pc = 0x1DB2FACu;
    // 0x1db2fac: 0x0  nop
    ctx->pc = 0x1db2facu;
    // NOP
label_1db2fb0:
    // 0x1db2fb0: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1db2fb0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1db2fb4: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1DB2FB4u;
    {
        const bool branch_taken_0x1db2fb4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB2FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB2FB4u;
        // 0x1db2fb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db2fb4) {
            ctx->pc = 0x1DB2F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1db2f78;
        }
    }
    ctx->pc = 0x1DB2FBCu;
    // 0x1db2fbc: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1db2fbcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1db2fc0: 0x3c0e01db  lui         $t6, 0x1DB
    ctx->pc = 0x1db2fc0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)475 << 16));
    // 0x1db2fc4: 0x25ce7db8  addiu       $t6, $t6, 0x7DB8
    ctx->pc = 0x1db2fc4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 32184));
    // 0x1db2fc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1db2fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2fcc: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1db2fccu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1db2fd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1db2fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2fd4: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1db2fd4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1db2fd8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1db2fd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2fdc: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1db2fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1db2fe0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1db2fe0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db2fe4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1db2fe4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db2fe8: 0xc76c3e2  jal         func_1DB0F88
    ctx->pc = 0x1DB2FE8u;
    SET_GPR_U32(ctx, 31, 0x1DB2FF0u);
    ctx->pc = 0x1DB2FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB2FE8u;
    // 0x1db2fec: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F88u, 0x1DB2FE8u, 0x1DB2FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB2FF0u;
label_1db2ff0:
    // 0x1db2ff0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1db2ff0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db2ff4: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1DB2FF4u;
    {
        const bool branch_taken_0x1db2ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB2FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB2FF4u;
        // 0x1db2ff8: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db2ff4) {
            ctx->pc = 0x1DB2F74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1db2f74;
        }
    }
    ctx->pc = 0x1DB2FFCu;
    // 0x1db2ffc: 0x0  nop
    ctx->pc = 0x1db2ffcu;
    // NOP
    // 0x1db3000: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1db3000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1db3004: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1db3004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1db3008: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1db3008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1db300c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1db300cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db3010: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1db3010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1db3014: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1db3014u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db3018: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1db3018u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db301c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1db301cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db3020: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1db3020u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db3024: 0xc76c3e2  jal         func_1DB0F88
    ctx->pc = 0x1DB3024u;
    SET_GPR_U32(ctx, 31, 0x1DB302Cu);
    ctx->pc = 0x1DB3028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB3024u;
    // 0x1db3028: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F88u, 0x1DB3024u, 0x1DB302Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB302Cu;
label_1db302c:
    // 0x1db302c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db302cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db3030: 0xc76c3da  jal         func_1DB0F68
    ctx->pc = 0x1DB3030u;
    SET_GPR_U32(ctx, 31, 0x1DB3038u);
    ctx->pc = 0x1DB3034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB3030u;
    // 0x1db3034: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F68u, 0x1DB3030u, 0x1DB3038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB3038u;
label_1db3038:
    // 0x1db3038: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1db3038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1db303c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1db303cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1db3040: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1db3040u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db3044: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB3044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB3048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB3044u;
        // 0x1db3048: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB3044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB304Cu;
    // 0x1db304c: 0x0  nop
    ctx->pc = 0x1db304cu;
    // NOP
    ctx->pc = 0x1db3050u;
}
