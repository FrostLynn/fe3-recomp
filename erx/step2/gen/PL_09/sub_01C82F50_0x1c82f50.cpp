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

// Function: sub_01C82F50
// Address: 0x1c82f50 - 0x1c83038
void sub_01C82F50_0x1c82f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C82F50_0x1c82f50");
#endif

    switch (ctx->pc) {
        case 0x1c82f64u: goto label_1c82f64;
        case 0x1c82f78u: goto label_1c82f78;
        case 0x1c82f7cu: goto label_1c82f7c;
        case 0x1c82f98u: goto label_1c82f98;
        case 0x1c82fa4u: goto label_1c82fa4;
        case 0x1c82fe4u: goto label_1c82fe4;
        case 0x1c83010u: goto label_1c83010;
        case 0x1c8301cu: goto label_1c8301c;
        case 0x1c83028u: goto label_1c83028;
        default: break;
    }

    ctx->pc = 0x1c82f50u;

    // 0x1c82f50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c82f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c82f54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c82f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c82f58: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c82f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c82f5c: 0xc7203d2  jal         func_1C80F48
    ctx->pc = 0x1C82F5Cu;
    SET_GPR_U32(ctx, 31, 0x1C82F64u);
    ctx->pc = 0x1C82F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C82F5Cu;
    // 0x1c82f60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F48u, 0x1C82F5Cu, 0x1C82F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C82F64u;
label_1c82f64:
    // 0x1c82f64: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c82f64u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c82f68: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C82F68u;
    {
        const bool branch_taken_0x1c82f68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C82F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C82F68u;
        // 0x1c82f6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c82f68) {
            ctx->pc = 0x1C82F8Cu;
            goto label_1c82f8c;
        }
    }
    ctx->pc = 0x1C82F70u;
    // 0x1c82f70: 0xc7203d4  jal         func_1C80F50
    ctx->pc = 0x1C82F70u;
    SET_GPR_U32(ctx, 31, 0x1C82F78u);
    ctx->pc = 0x1C80F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F50u, 0x1C82F70u, 0x1C82F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C82F78u;
label_1c82f78:
    // 0x1c82f78: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c82f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c82f7c:
    // 0x1c82f7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c82f7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c82f80: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c82f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c82f84: 0x3e00008  jr          $ra
    ctx->pc = 0x1C82F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C82F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C82F84u;
        // 0x1c82f88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C82F84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C82F8Cu;
label_1c82f8c:
    // 0x1c82f8c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c82f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c82f90: 0xc7203d6  jal         func_1C80F58
    ctx->pc = 0x1C82F90u;
    SET_GPR_U32(ctx, 31, 0x1C82F98u);
    ctx->pc = 0x1C82F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C82F90u;
    // 0x1c82f94: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F58u, 0x1C82F90u, 0x1C82F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C82F98u;
label_1c82f98:
    // 0x1c82f98: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1c82f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1c82f9c: 0xc7203e4  jal         func_1C80F90
    ctx->pc = 0x1C82F9Cu;
    SET_GPR_U32(ctx, 31, 0x1C82FA4u);
    ctx->pc = 0x1C82FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C82F9Cu;
    // 0x1c82fa0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F90u, 0x1C82F9Cu, 0x1C82FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C82FA4u;
label_1c82fa4:
    // 0x1c82fa4: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1C82FA4u;
    {
        const bool branch_taken_0x1c82fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C82FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C82FA4u;
        // 0x1c82fa8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c82fa4) {
            ctx->pc = 0x1C82F7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c82f7c;
        }
    }
    ctx->pc = 0x1C82FACu;
    // 0x1c82fac: 0x0  nop
    ctx->pc = 0x1c82facu;
    // NOP
    // 0x1c82fb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c82fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c82fb4: 0x3c0f01c9  lui         $t7, 0x1C9
    ctx->pc = 0x1c82fb4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)457 << 16));
    // 0x1c82fb8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c82fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c82fbc: 0x25eece50  addiu       $t6, $t7, -0x31B0
    ctx->pc = 0x1c82fbcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 4294954576));
    // 0x1c82fc0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c82fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c82fc4: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1c82fc4u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1C8CE54u));
    // 0x1c82fc8: 0x8dedce50  lw          $t5, -0x31B0($t7)
    ctx->pc = 0x1c82fc8u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1C8CE50u));
    // 0x1c82fcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c82fccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c82fd0: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1c82fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1c82fd4: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1c82fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1c82fd8: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1c82fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c82fdc: 0xc7203d6  jal         func_1C80F58
    ctx->pc = 0x1C82FDCu;
    SET_GPR_U32(ctx, 31, 0x1C82FE4u);
    ctx->pc = 0x1C82FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C82FDCu;
    // 0x1c82fe0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F58u, 0x1C82FDCu, 0x1C82FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C82FE4u;
label_1c82fe4:
    // 0x1c82fe4: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1c82fe4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1c82fe8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c82fe8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c82fec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c82fecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c82ff0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c82ff0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c82ff4: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1c82ff4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1c82ff8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c82ff8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c82ffc: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1c82ffcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1c83000: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c83000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83004: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1c83004u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c83008: 0xc7203e2  jal         func_1C80F88
    ctx->pc = 0x1C83008u;
    SET_GPR_U32(ctx, 31, 0x1C83010u);
    ctx->pc = 0x1C8300Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C83008u;
    // 0x1c8300c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F88u, 0x1C83008u, 0x1C83010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C83010u;
label_1c83010:
    // 0x1c83010: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c83010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c83014: 0xc7203d6  jal         func_1C80F58
    ctx->pc = 0x1C83014u;
    SET_GPR_U32(ctx, 31, 0x1C8301Cu);
    ctx->pc = 0x1C83018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C83014u;
    // 0x1c83018: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F58u, 0x1C83014u, 0x1C8301Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8301Cu;
label_1c8301c:
    // 0x1c8301c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c8301cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83020: 0xc7203e6  jal         func_1C80F98
    ctx->pc = 0x1C83020u;
    SET_GPR_U32(ctx, 31, 0x1C83028u);
    ctx->pc = 0x1C83024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C83020u;
    // 0x1c83024: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F98u, 0x1C83020u, 0x1C83028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C83028u;
label_1c83028:
    // 0x1c83028: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c83028u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c8302c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c8302cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c83030: 0x3e00008  jr          $ra
    ctx->pc = 0x1C83030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C83034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83030u;
        // 0x1c83034: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C83030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C83038u;
}
