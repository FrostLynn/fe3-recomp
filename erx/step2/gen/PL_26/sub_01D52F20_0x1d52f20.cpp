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

// Function: sub_01D52F20
// Address: 0x1d52f20 - 0x1d53008
void sub_01D52F20_0x1d52f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D52F20_0x1d52f20");
#endif

    switch (ctx->pc) {
        case 0x1d52f34u: goto label_1d52f34;
        case 0x1d52f48u: goto label_1d52f48;
        case 0x1d52f4cu: goto label_1d52f4c;
        case 0x1d52f68u: goto label_1d52f68;
        case 0x1d52f74u: goto label_1d52f74;
        case 0x1d52fb4u: goto label_1d52fb4;
        case 0x1d52fe0u: goto label_1d52fe0;
        case 0x1d52fecu: goto label_1d52fec;
        case 0x1d52ff8u: goto label_1d52ff8;
        default: break;
    }

    ctx->pc = 0x1d52f20u;

    // 0x1d52f20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d52f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d52f24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d52f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d52f28: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d52f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d52f2c: 0xc7543d2  jal         func_1D50F48
    ctx->pc = 0x1D52F2Cu;
    SET_GPR_U32(ctx, 31, 0x1D52F34u);
    ctx->pc = 0x1D52F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D52F2Cu;
    // 0x1d52f30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F48u, 0x1D52F2Cu, 0x1D52F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D52F34u;
label_1d52f34:
    // 0x1d52f34: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d52f34u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d52f38: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D52F38u;
    {
        const bool branch_taken_0x1d52f38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D52F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D52F38u;
        // 0x1d52f3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d52f38) {
            ctx->pc = 0x1D52F5Cu;
            goto label_1d52f5c;
        }
    }
    ctx->pc = 0x1D52F40u;
    // 0x1d52f40: 0xc7543d4  jal         func_1D50F50
    ctx->pc = 0x1D52F40u;
    SET_GPR_U32(ctx, 31, 0x1D52F48u);
    ctx->pc = 0x1D50F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F50u, 0x1D52F40u, 0x1D52F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D52F48u;
label_1d52f48:
    // 0x1d52f48: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d52f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d52f4c:
    // 0x1d52f4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d52f4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d52f50: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d52f50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d52f54: 0x3e00008  jr          $ra
    ctx->pc = 0x1D52F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D52F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D52F54u;
        // 0x1d52f58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D52F54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D52F5Cu;
label_1d52f5c:
    // 0x1d52f5c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d52f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d52f60: 0xc7543d6  jal         func_1D50F58
    ctx->pc = 0x1D52F60u;
    SET_GPR_U32(ctx, 31, 0x1D52F68u);
    ctx->pc = 0x1D52F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D52F60u;
    // 0x1d52f64: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F58u, 0x1D52F60u, 0x1D52F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D52F68u;
label_1d52f68:
    // 0x1d52f68: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1d52f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1d52f6c: 0xc7543e4  jal         func_1D50F90
    ctx->pc = 0x1D52F6Cu;
    SET_GPR_U32(ctx, 31, 0x1D52F74u);
    ctx->pc = 0x1D52F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D52F6Cu;
    // 0x1d52f70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F90u, 0x1D52F6Cu, 0x1D52F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D52F74u;
label_1d52f74:
    // 0x1d52f74: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1D52F74u;
    {
        const bool branch_taken_0x1d52f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D52F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D52F74u;
        // 0x1d52f78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d52f74) {
            ctx->pc = 0x1D52F4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d52f4c;
        }
    }
    ctx->pc = 0x1D52F7Cu;
    // 0x1d52f7c: 0x0  nop
    ctx->pc = 0x1d52f7cu;
    // NOP
    // 0x1d52f80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d52f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d52f84: 0x3c0f01d6  lui         $t7, 0x1D6
    ctx->pc = 0x1d52f84u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)470 << 16));
    // 0x1d52f88: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d52f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d52f8c: 0x25eecbd0  addiu       $t6, $t7, -0x3430
    ctx->pc = 0x1d52f8cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 4294953936));
    // 0x1d52f90: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1d52f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1d52f94: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1d52f94u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1D5CBD4u));
    // 0x1d52f98: 0x8dedcbd0  lw          $t5, -0x3430($t7)
    ctx->pc = 0x1d52f98u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1D5CBD0u));
    // 0x1d52f9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d52f9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52fa0: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1d52fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1d52fa4: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1d52fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1d52fa8: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1d52fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d52fac: 0xc7543d6  jal         func_1D50F58
    ctx->pc = 0x1D52FACu;
    SET_GPR_U32(ctx, 31, 0x1D52FB4u);
    ctx->pc = 0x1D52FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D52FACu;
    // 0x1d52fb0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F58u, 0x1D52FACu, 0x1D52FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D52FB4u;
label_1d52fb4:
    // 0x1d52fb4: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1d52fb4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1d52fb8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d52fb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d52fbc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d52fbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52fc0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d52fc0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d52fc4: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d52fc4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d52fc8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d52fc8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52fcc: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1d52fccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1d52fd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d52fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52fd4: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d52fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d52fd8: 0xc7543e2  jal         func_1D50F88
    ctx->pc = 0x1D52FD8u;
    SET_GPR_U32(ctx, 31, 0x1D52FE0u);
    ctx->pc = 0x1D52FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D52FD8u;
    // 0x1d52fdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F88u, 0x1D52FD8u, 0x1D52FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D52FE0u;
label_1d52fe0:
    // 0x1d52fe0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d52fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d52fe4: 0xc7543d6  jal         func_1D50F58
    ctx->pc = 0x1D52FE4u;
    SET_GPR_U32(ctx, 31, 0x1D52FECu);
    ctx->pc = 0x1D52FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D52FE4u;
    // 0x1d52fe8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F58u, 0x1D52FE4u, 0x1D52FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D52FECu;
label_1d52fec:
    // 0x1d52fec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d52fecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52ff0: 0xc7543e6  jal         func_1D50F98
    ctx->pc = 0x1D52FF0u;
    SET_GPR_U32(ctx, 31, 0x1D52FF8u);
    ctx->pc = 0x1D52FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D52FF0u;
    // 0x1d52ff4: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F98u, 0x1D52FF0u, 0x1D52FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D52FF8u;
label_1d52ff8:
    // 0x1d52ff8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1d52ff8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d52ffc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d52ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d53000: 0x3e00008  jr          $ra
    ctx->pc = 0x1D53000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D53004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53000u;
        // 0x1d53004: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D53000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D53008u;
}
