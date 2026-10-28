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

// Function: sub_01D0DD90
// Address: 0x1d0dd90 - 0x1d0de78
void sub_01D0DD90_0x1d0dd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0DD90_0x1d0dd90");
#endif

    switch (ctx->pc) {
        case 0x1d0dda4u: goto label_1d0dda4;
        case 0x1d0ddb8u: goto label_1d0ddb8;
        case 0x1d0ddbcu: goto label_1d0ddbc;
        case 0x1d0ddd8u: goto label_1d0ddd8;
        case 0x1d0dde4u: goto label_1d0dde4;
        case 0x1d0de24u: goto label_1d0de24;
        case 0x1d0de50u: goto label_1d0de50;
        case 0x1d0de5cu: goto label_1d0de5c;
        case 0x1d0de68u: goto label_1d0de68;
        default: break;
    }

    ctx->pc = 0x1d0dd90u;

    // 0x1d0dd90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d0dd90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d0dd94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d0dd94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d0dd98: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d0dd98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d0dd9c: 0xc742f52  jal         func_1D0BD48
    ctx->pc = 0x1D0DD9Cu;
    SET_GPR_U32(ctx, 31, 0x1D0DDA4u);
    ctx->pc = 0x1D0DDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0DD9Cu;
    // 0x1d0dda0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD48u, 0x1D0DD9Cu, 0x1D0DDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0DDA4u;
label_1d0dda4:
    // 0x1d0dda4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d0dda4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0dda8: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D0DDA8u;
    {
        const bool branch_taken_0x1d0dda8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D0DDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0DDA8u;
        // 0x1d0ddac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0dda8) {
            ctx->pc = 0x1D0DDCCu;
            goto label_1d0ddcc;
        }
    }
    ctx->pc = 0x1D0DDB0u;
    // 0x1d0ddb0: 0xc742f54  jal         func_1D0BD50
    ctx->pc = 0x1D0DDB0u;
    SET_GPR_U32(ctx, 31, 0x1D0DDB8u);
    ctx->pc = 0x1D0BD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD50u, 0x1D0DDB0u, 0x1D0DDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0DDB8u;
label_1d0ddb8:
    // 0x1d0ddb8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d0ddb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d0ddbc:
    // 0x1d0ddbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d0ddbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0ddc0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d0ddc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d0ddc4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0DDC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0DDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0DDC4u;
        // 0x1d0ddc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0DDC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0DDCCu;
label_1d0ddcc:
    // 0x1d0ddcc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d0ddccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d0ddd0: 0xc742f56  jal         func_1D0BD58
    ctx->pc = 0x1D0DDD0u;
    SET_GPR_U32(ctx, 31, 0x1D0DDD8u);
    ctx->pc = 0x1D0DDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0DDD0u;
    // 0x1d0ddd4: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD58u, 0x1D0DDD0u, 0x1D0DDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0DDD8u;
label_1d0ddd8:
    // 0x1d0ddd8: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1d0ddd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1d0dddc: 0xc742f64  jal         func_1D0BD90
    ctx->pc = 0x1D0DDDCu;
    SET_GPR_U32(ctx, 31, 0x1D0DDE4u);
    ctx->pc = 0x1D0DDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0DDDCu;
    // 0x1d0dde0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD90u, 0x1D0DDDCu, 0x1D0DDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0DDE4u;
label_1d0dde4:
    // 0x1d0dde4: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1D0DDE4u;
    {
        const bool branch_taken_0x1d0dde4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0DDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0DDE4u;
        // 0x1d0dde8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0dde4) {
            ctx->pc = 0x1D0DDBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0ddbc;
        }
    }
    ctx->pc = 0x1D0DDECu;
    // 0x1d0ddec: 0x0  nop
    ctx->pc = 0x1d0ddecu;
    // NOP
    // 0x1d0ddf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d0ddf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d0ddf4: 0x3c0f01d2  lui         $t7, 0x1D2
    ctx->pc = 0x1d0ddf4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)466 << 16));
    // 0x1d0ddf8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d0ddf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d0ddfc: 0x25ee8f68  addiu       $t6, $t7, -0x7098
    ctx->pc = 0x1d0ddfcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 4294938472));
    // 0x1d0de00: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1d0de00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1d0de04: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1d0de04u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1D18F6Cu));
    // 0x1d0de08: 0x8ded8f68  lw          $t5, -0x7098($t7)
    ctx->pc = 0x1d0de08u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1D18F68u));
    // 0x1d0de0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d0de0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0de10: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1d0de10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1d0de14: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1d0de14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1d0de18: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1d0de18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d0de1c: 0xc742f56  jal         func_1D0BD58
    ctx->pc = 0x1D0DE1Cu;
    SET_GPR_U32(ctx, 31, 0x1D0DE24u);
    ctx->pc = 0x1D0DE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0DE1Cu;
    // 0x1d0de20: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD58u, 0x1D0DE1Cu, 0x1D0DE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0DE24u;
label_1d0de24:
    // 0x1d0de24: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1d0de24u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1d0de28: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d0de28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0de2c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d0de2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0de30: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d0de30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0de34: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d0de34u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d0de38: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d0de38u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0de3c: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1d0de3cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1d0de40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0de40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0de44: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d0de44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d0de48: 0xc742f62  jal         func_1D0BD88
    ctx->pc = 0x1D0DE48u;
    SET_GPR_U32(ctx, 31, 0x1D0DE50u);
    ctx->pc = 0x1D0DE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0DE48u;
    // 0x1d0de4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD88u, 0x1D0DE48u, 0x1D0DE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0DE50u;
label_1d0de50:
    // 0x1d0de50: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d0de50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d0de54: 0xc742f56  jal         func_1D0BD58
    ctx->pc = 0x1D0DE54u;
    SET_GPR_U32(ctx, 31, 0x1D0DE5Cu);
    ctx->pc = 0x1D0DE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0DE54u;
    // 0x1d0de58: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD58u, 0x1D0DE54u, 0x1D0DE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0DE5Cu;
label_1d0de5c:
    // 0x1d0de5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d0de5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0de60: 0xc742f66  jal         func_1D0BD98
    ctx->pc = 0x1D0DE60u;
    SET_GPR_U32(ctx, 31, 0x1D0DE68u);
    ctx->pc = 0x1D0DE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0DE60u;
    // 0x1d0de64: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD98u, 0x1D0DE60u, 0x1D0DE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0DE68u;
label_1d0de68:
    // 0x1d0de68: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1d0de68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0de6c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d0de6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d0de70: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0DE70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0DE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0DE70u;
        // 0x1d0de74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0DE70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0DE78u;
}
