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

// Function: sub_01D1AB08
// Address: 0x1d1ab08 - 0x1d1ac38
void sub_01D1AB08_0x1d1ab08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D1AB08_0x1d1ab08");
#endif

    switch (ctx->pc) {
        case 0x1d1ab24u: goto label_1d1ab24;
        case 0x1d1ab2cu: goto label_1d1ab2c;
        case 0x1d1ab40u: goto label_1d1ab40;
        case 0x1d1ab44u: goto label_1d1ab44;
        case 0x1d1ab80u: goto label_1d1ab80;
        case 0x1d1abe0u: goto label_1d1abe0;
        case 0x1d1abecu: goto label_1d1abec;
        case 0x1d1abf8u: goto label_1d1abf8;
        case 0x1d1ac0cu: goto label_1d1ac0c;
        case 0x1d1ac1cu: goto label_1d1ac1c;
        default: break;
    }

    ctx->pc = 0x1d1ab08u;

    // 0x1d1ab08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d1ab08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d1ab0c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d1ab0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d1ab10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d1ab10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d1ab14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1ab14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1ab18: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d1ab18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d1ab1c: 0xc746414  jal         func_1D19050
    ctx->pc = 0x1D1AB1Cu;
    SET_GPR_U32(ctx, 31, 0x1D1AB24u);
    ctx->pc = 0x1D1AB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1AB1Cu;
    // 0x1d1ab20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19050u, 0x1D1AB1Cu, 0x1D1AB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1AB24u;
label_1d1ab24:
    // 0x1d1ab24: 0xc746416  jal         func_1D19058
    ctx->pc = 0x1D1AB24u;
    SET_GPR_U32(ctx, 31, 0x1D1AB2Cu);
    ctx->pc = 0x1D1AB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1AB24u;
    // 0x1d1ab28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19058u, 0x1D1AB24u, 0x1D1AB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1AB2Cu;
label_1d1ab2c:
    // 0x1d1ab2c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d1ab2cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1ab30: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D1AB30u;
    {
        const bool branch_taken_0x1d1ab30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D1AB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1AB30u;
        // 0x1d1ab34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1ab30) {
            ctx->pc = 0x1D1AB54u;
            goto label_1d1ab54;
        }
    }
    ctx->pc = 0x1D1AB38u;
    // 0x1d1ab38: 0xc746418  jal         func_1D19060
    ctx->pc = 0x1D1AB38u;
    SET_GPR_U32(ctx, 31, 0x1D1AB40u);
    ctx->pc = 0x1D19060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19060u, 0x1D1AB38u, 0x1D1AB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1AB40u;
label_1d1ab40:
    // 0x1d1ab40: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d1ab40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d1ab44:
    // 0x1d1ab44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d1ab44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1ab48: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d1ab48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d1ab4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1AB4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1AB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1AB4Cu;
        // 0x1d1ab50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1AB4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1AB54u;
label_1d1ab54:
    // 0x1d1ab54: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D1AB54u;
    {
        const bool branch_taken_0x1d1ab54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1AB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1AB54u;
        // 0x1d1ab58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1ab54) {
            ctx->pc = 0x1D1AB44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1ab44;
        }
    }
    ctx->pc = 0x1D1AB5Cu;
    // 0x1d1ab5c: 0x0  nop
    ctx->pc = 0x1d1ab5cu;
    // NOP
    // 0x1d1ab60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d1ab60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d1ab64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d1ab64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d1ab68: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d1ab68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d1ab6c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d1ab6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d1ab70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d1ab70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1ab74: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1d1ab74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d1ab78: 0xc74641c  jal         func_1D19070
    ctx->pc = 0x1D1AB78u;
    SET_GPR_U32(ctx, 31, 0x1D1AB80u);
    ctx->pc = 0x1D1AB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1AB78u;
    // 0x1d1ab7c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19070u, 0x1D1AB78u, 0x1D1AB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1AB80u;
label_1d1ab80:
    // 0x1d1ab80: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d1ab80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d1ab84: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d1ab84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1ab88: 0x8c4e0008  lw          $t6, 0x8($v0)
    ctx->pc = 0x1d1ab88u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d1ab8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1ab8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1ab90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1ab90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1ab94: 0x24060169  addiu       $a2, $zero, 0x169
    ctx->pc = 0x1d1ab94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 361));
    // 0x1d1ab98: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d1ab98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1ab9c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d1ab9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1aba0: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d1aba0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d1aba4: 0x240f0019  addiu       $t7, $zero, 0x19
    ctx->pc = 0x1d1aba4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1d1aba8: 0x11cf000b  beq         $t6, $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x1D1ABA8u;
    {
        const bool branch_taken_0x1d1aba8 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1D1ABACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1ABA8u;
        // 0x1d1abac: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1aba8) {
            ctx->pc = 0x1D1ABD8u;
            goto label_1d1abd8;
        }
    }
    ctx->pc = 0x1D1ABB0u;
    // 0x1d1abb0: 0x240f001a  addiu       $t7, $zero, 0x1A
    ctx->pc = 0x1d1abb0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1d1abb4: 0x15cf0008  bne         $t6, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D1ABB4u;
    {
        const bool branch_taken_0x1d1abb4 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D1ABB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1ABB4u;
        // 0x1d1abb8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1abb4) {
            ctx->pc = 0x1D1ABD8u;
            goto label_1d1abd8;
        }
    }
    ctx->pc = 0x1D1ABBCu;
    // 0x1d1abbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1abbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1abc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1abc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1abc4: 0x24060173  addiu       $a2, $zero, 0x173
    ctx->pc = 0x1d1abc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 371));
    // 0x1d1abc8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d1abc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1abcc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d1abccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1abd0: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d1abd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d1abd4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d1abd4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1abd8:
    // 0x1d1abd8: 0xc746426  jal         func_1D19098
    ctx->pc = 0x1D1ABD8u;
    SET_GPR_U32(ctx, 31, 0x1D1ABE0u);
    ctx->pc = 0x1D19098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19098u, 0x1D1ABD8u, 0x1D1ABE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1ABE0u;
label_1d1abe0:
    // 0x1d1abe0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1abe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1abe4: 0xc74641e  jal         func_1D19078
    ctx->pc = 0x1D1ABE4u;
    SET_GPR_U32(ctx, 31, 0x1D1ABECu);
    ctx->pc = 0x1D1ABE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1ABE4u;
    // 0x1d1abe8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19078u, 0x1D1ABE4u, 0x1D1ABECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1ABECu;
label_1d1abec:
    // 0x1d1abec: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d1abecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d1abf0: 0xc74641a  jal         func_1D19068
    ctx->pc = 0x1D1ABF0u;
    SET_GPR_U32(ctx, 31, 0x1D1ABF8u);
    ctx->pc = 0x1D1ABF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1ABF0u;
    // 0x1d1abf4: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19068u, 0x1D1ABF0u, 0x1D1ABF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1ABF8u;
label_1d1abf8:
    // 0x1d1abf8: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1d1abf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1d1abfc: 0x26240390  addiu       $a0, $s1, 0x390
    ctx->pc = 0x1d1abfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1d1ac00: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d1ac00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d1ac04: 0xc746420  jal         func_1D19080
    ctx->pc = 0x1D1AC04u;
    SET_GPR_U32(ctx, 31, 0x1D1AC0Cu);
    ctx->pc = 0x1D1AC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1AC04u;
    // 0x1d1ac08: 0x240500e5  addiu       $a1, $zero, 0xE5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 229));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19080u, 0x1D1AC04u, 0x1D1AC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1AC0Cu;
label_1d1ac0c:
    // 0x1d1ac0c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d1ac0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d1ac10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1ac10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1ac14: 0xc746414  jal         func_1D19050
    ctx->pc = 0x1D1AC14u;
    SET_GPR_U32(ctx, 31, 0x1D1AC1Cu);
    ctx->pc = 0x1D1AC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1AC14u;
    // 0x1d1ac18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19050u, 0x1D1AC14u, 0x1D1AC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1AC1Cu;
label_1d1ac1c:
    // 0x1d1ac1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1ac1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1ac20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d1ac20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d1ac24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d1ac24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1ac28: 0x24050083  addiu       $a1, $zero, 0x83
    ctx->pc = 0x1d1ac28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
    // 0x1d1ac2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d1ac2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d1ac30: 0x8746422  j           func_1D19088
    ctx->pc = 0x1D1AC30u;
    ctx->pc = 0x1D1AC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1AC30u;
    // 0x1d1ac34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19088u;
    sub_01D19088_0x1d19088(rdram, ctx, runtime); return;
    ctx->pc = 0x1D1AC38u;
}
