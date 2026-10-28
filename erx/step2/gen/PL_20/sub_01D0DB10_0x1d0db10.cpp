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

// Function: sub_01D0DB10
// Address: 0x1d0db10 - 0x1d0dc3c
void sub_01D0DB10_0x1d0db10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0DB10_0x1d0db10");
#endif

    switch (ctx->pc) {
        case 0x1d0db2cu: goto label_1d0db2c;
        case 0x1d0db34u: goto label_1d0db34;
        case 0x1d0db48u: goto label_1d0db48;
        case 0x1d0db4cu: goto label_1d0db4c;
        case 0x1d0db88u: goto label_1d0db88;
        case 0x1d0dbc8u: goto label_1d0dbc8;
        case 0x1d0dbdcu: goto label_1d0dbdc;
        case 0x1d0dbe8u: goto label_1d0dbe8;
        case 0x1d0dbf4u: goto label_1d0dbf4;
        case 0x1d0dc08u: goto label_1d0dc08;
        case 0x1d0dc20u: goto label_1d0dc20;
        default: break;
    }

    ctx->pc = 0x1d0db10u;

    // 0x1d0db10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d0db10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d0db14: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d0db14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d0db18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d0db18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d0db1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d0db1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0db20: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d0db20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d0db24: 0xc742f50  jal         func_1D0BD40
    ctx->pc = 0x1D0DB24u;
    SET_GPR_U32(ctx, 31, 0x1D0DB2Cu);
    ctx->pc = 0x1D0DB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0DB24u;
    // 0x1d0db28: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD40u, 0x1D0DB24u, 0x1D0DB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0DB2Cu;
label_1d0db2c:
    // 0x1d0db2c: 0xc742f52  jal         func_1D0BD48
    ctx->pc = 0x1D0DB2Cu;
    SET_GPR_U32(ctx, 31, 0x1D0DB34u);
    ctx->pc = 0x1D0DB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0DB2Cu;
    // 0x1d0db30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD48u, 0x1D0DB2Cu, 0x1D0DB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0DB34u;
label_1d0db34:
    // 0x1d0db34: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d0db34u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0db38: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D0DB38u;
    {
        const bool branch_taken_0x1d0db38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D0DB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0DB38u;
        // 0x1d0db3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0db38) {
            ctx->pc = 0x1D0DB5Cu;
            goto label_1d0db5c;
        }
    }
    ctx->pc = 0x1D0DB40u;
    // 0x1d0db40: 0xc742f54  jal         func_1D0BD50
    ctx->pc = 0x1D0DB40u;
    SET_GPR_U32(ctx, 31, 0x1D0DB48u);
    ctx->pc = 0x1D0BD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD50u, 0x1D0DB40u, 0x1D0DB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0DB48u;
label_1d0db48:
    // 0x1d0db48: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d0db48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d0db4c:
    // 0x1d0db4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d0db4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0db50: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d0db50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d0db54: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0DB54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0DB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0DB54u;
        // 0x1d0db58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0DB54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0DB5Cu;
label_1d0db5c:
    // 0x1d0db5c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D0DB5Cu;
    {
        const bool branch_taken_0x1d0db5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0DB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0DB5Cu;
        // 0x1d0db60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0db5c) {
            ctx->pc = 0x1D0DB4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0db4c;
        }
    }
    ctx->pc = 0x1D0DB64u;
    // 0x1d0db64: 0x0  nop
    ctx->pc = 0x1d0db64u;
    // NOP
    // 0x1d0db68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d0db68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d0db6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d0db6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d0db70: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d0db70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d0db74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d0db74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d0db78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d0db78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0db7c: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1d0db7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d0db80: 0xc742f58  jal         func_1D0BD60
    ctx->pc = 0x1D0DB80u;
    SET_GPR_U32(ctx, 31, 0x1D0DB88u);
    ctx->pc = 0x1D0DB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0DB80u;
    // 0x1d0db84: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD60u, 0x1D0DB80u, 0x1D0DB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0DB88u;
label_1d0db88:
    // 0x1d0db88: 0x8c4e0008  lw          $t6, 0x8($v0)
    ctx->pc = 0x1d0db88u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d0db8c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d0db8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0db90: 0x25cefff5  addiu       $t6, $t6, -0xB
    ctx->pc = 0x1d0db90u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967285));
    // 0x1d0db94: 0x2dcf0015  sltiu       $t7, $t6, 0x15
    ctx->pc = 0x1d0db94u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x1d0db98: 0x11e00028  beqz        $t7, . + 4 + (0x28 << 2)
    ctx->pc = 0x1D0DB98u;
    {
        const bool branch_taken_0x1d0db98 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0DB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0DB98u;
        // 0x1d0db9c: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0db98) {
            ctx->pc = 0x1D0DC3Cu;
            return;
        }
    }
    ctx->pc = 0x1D0DBA0u;
    // 0x1d0dba0: 0xe7880  sll         $t7, $t6, 2
    ctx->pc = 0x1d0dba0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x1d0dba4: 0x3c0e01d1  lui         $t6, 0x1D1
    ctx->pc = 0x1d0dba4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)465 << 16));
    // 0x1d0dba8: 0x25cefbcc  addiu       $t6, $t6, -0x434
    ctx->pc = 0x1d0dba8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294966220));
    // 0x1d0dbac: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d0dbacu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d0dbb0: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1d0dbb0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d0dbb4: 0x1a00008  jr          $t5
    ctx->pc = 0x1D0DBB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D0DBBCu: goto label_1d0dbbc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0DBB4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D0DBBCu;
label_1d0dbbc:
    // 0x1d0dbbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0dbbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0dbc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d0dbc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0dbc4: 0x24060053  addiu       $a2, $zero, 0x53
    ctx->pc = 0x1d0dbc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
label_1d0dbc8:
    // 0x1d0dbc8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d0dbc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0dbcc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d0dbccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0dbd0: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d0dbd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d0dbd4: 0xc742f62  jal         func_1D0BD88
    ctx->pc = 0x1D0DBD4u;
    SET_GPR_U32(ctx, 31, 0x1D0DBDCu);
    ctx->pc = 0x1D0DBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0DBD4u;
    // 0x1d0dbd8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD88u, 0x1D0DBD4u, 0x1D0DBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0DBDCu;
label_1d0dbdc:
    // 0x1d0dbdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0dbdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0dbe0: 0xc742f5a  jal         func_1D0BD68
    ctx->pc = 0x1D0DBE0u;
    SET_GPR_U32(ctx, 31, 0x1D0DBE8u);
    ctx->pc = 0x1D0DBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0DBE0u;
    // 0x1d0dbe4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD68u, 0x1D0DBE0u, 0x1D0DBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0DBE8u;
label_1d0dbe8:
    // 0x1d0dbe8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d0dbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d0dbec: 0xc742f56  jal         func_1D0BD58
    ctx->pc = 0x1D0DBECu;
    SET_GPR_U32(ctx, 31, 0x1D0DBF4u);
    ctx->pc = 0x1D0DBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0DBECu;
    // 0x1d0dbf0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD58u, 0x1D0DBECu, 0x1D0DBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0DBF4u;
label_1d0dbf4:
    // 0x1d0dbf4: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1d0dbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1d0dbf8: 0x26240390  addiu       $a0, $s1, 0x390
    ctx->pc = 0x1d0dbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1d0dbfc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d0dbfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d0dc00: 0xc742f5c  jal         func_1D0BD70
    ctx->pc = 0x1D0DC00u;
    SET_GPR_U32(ctx, 31, 0x1D0DC08u);
    ctx->pc = 0x1D0DC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0DC00u;
    // 0x1d0dc04: 0x240500e4  addiu       $a1, $zero, 0xE4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 228));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD70u, 0x1D0DC00u, 0x1D0DC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0DC08u;
label_1d0dc08:
    // 0x1d0dc08: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d0dc08u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0dc0c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d0dc0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d0dc10: 0xa22f09b0  sb          $t7, 0x9B0($s1)
    ctx->pc = 0x1d0dc10u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2480), (uint8_t)GPR_U32(ctx, 15));
    // 0x1d0dc14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0dc14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0dc18: 0xc742f50  jal         func_1D0BD40
    ctx->pc = 0x1D0DC18u;
    SET_GPR_U32(ctx, 31, 0x1D0DC20u);
    ctx->pc = 0x1D0DC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0DC18u;
    // 0x1d0dc1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD40u, 0x1D0DC18u, 0x1D0DC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0DC20u;
label_1d0dc20:
    // 0x1d0dc20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0dc20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0dc24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d0dc24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d0dc28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d0dc28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0dc2c: 0x24050082  addiu       $a1, $zero, 0x82
    ctx->pc = 0x1d0dc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x1d0dc30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d0dc30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0dc34: 0x8742f5e  j           func_1D0BD78
    ctx->pc = 0x1D0DC34u;
    ctx->pc = 0x1D0DC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0DC34u;
    // 0x1d0dc38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD78u;
    sub_01D0BD78_0x1d0bd78(rdram, ctx, runtime); return;
    ctx->pc = 0x1D0DC3Cu;
}
