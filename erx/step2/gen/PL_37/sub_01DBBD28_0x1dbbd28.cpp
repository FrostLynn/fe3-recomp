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

// Function: sub_01DBBD28
// Address: 0x1dbbd28 - 0x1dbbe38
void sub_01DBBD28_0x1dbbd28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBBD28_0x1dbbd28");
#endif

    switch (ctx->pc) {
        case 0x1dbbd44u: goto label_1dbbd44;
        case 0x1dbbd4cu: goto label_1dbbd4c;
        case 0x1dbbd60u: goto label_1dbbd60;
        case 0x1dbbd64u: goto label_1dbbd64;
        case 0x1dbbdbcu: goto label_1dbbdbc;
        case 0x1dbbdccu: goto label_1dbbdcc;
        case 0x1dbbde0u: goto label_1dbbde0;
        case 0x1dbbdf4u: goto label_1dbbdf4;
        case 0x1dbbe04u: goto label_1dbbe04;
        default: break;
    }

    ctx->pc = 0x1dbbd28u;

    // 0x1dbbd28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dbbd28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dbbd2c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1dbbd2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dbbd30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dbbd30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dbbd34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dbbd34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbbd38: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1dbbd38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1dbbd3c: 0xc76ee52  jal         func_1DBB948
    ctx->pc = 0x1DBBD3Cu;
    SET_GPR_U32(ctx, 31, 0x1DBBD44u);
    ctx->pc = 0x1DBBD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBBD3Cu;
    // 0x1dbbd40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB948u, 0x1DBBD3Cu, 0x1DBBD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBBD44u;
label_1dbbd44:
    // 0x1dbbd44: 0xc76ee54  jal         func_1DBB950
    ctx->pc = 0x1DBBD44u;
    SET_GPR_U32(ctx, 31, 0x1DBBD4Cu);
    ctx->pc = 0x1DBBD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBBD44u;
    // 0x1dbbd48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB950u, 0x1DBBD44u, 0x1DBBD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBBD4Cu;
label_1dbbd4c:
    // 0x1dbbd4c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1dbbd4cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dbbd50: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DBBD50u;
    {
        const bool branch_taken_0x1dbbd50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1DBBD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBBD50u;
        // 0x1dbbd54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbbd50) {
            ctx->pc = 0x1DBBD74u;
            goto label_1dbbd74;
        }
    }
    ctx->pc = 0x1DBBD58u;
    // 0x1dbbd58: 0xc76ee56  jal         func_1DBB958
    ctx->pc = 0x1DBBD58u;
    SET_GPR_U32(ctx, 31, 0x1DBBD60u);
    ctx->pc = 0x1DBB958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB958u, 0x1DBBD58u, 0x1DBBD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBBD60u;
label_1dbbd60:
    // 0x1dbbd60: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1dbbd60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1dbbd64:
    // 0x1dbbd64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dbbd64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbbd68: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dbbd68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dbbd6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBBD6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBBD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBBD6Cu;
        // 0x1dbbd70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBBD6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBBD74u;
label_1dbbd74:
    // 0x1dbbd74: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1DBBD74u;
    {
        const bool branch_taken_0x1dbbd74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBBD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBBD74u;
        // 0x1dbbd78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbbd74) {
            ctx->pc = 0x1DBBD64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dbbd64;
        }
    }
    ctx->pc = 0x1DBBD7Cu;
    // 0x1dbbd7c: 0x0  nop
    ctx->pc = 0x1dbbd7cu;
    // NOP
    // 0x1dbbd80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1dbbd80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1dbbd84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dbbd84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dbbd88: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1dbbd88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1dbbd8c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1dbbd8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1dbbd90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dbbd90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbbd94: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dbbd94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dbbd98: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1dbbd98u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbbd9c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1dbbd9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1dbbda0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1dbbda0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1dbbda4: 0x30f100ff  andi        $s1, $a3, 0xFF
    ctx->pc = 0x1dbbda4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1dbbda8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1dbbda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1dbbdac: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1dbbdacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1dbbdb0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1dbbdb0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbbdb4: 0xc76ee58  jal         func_1DBB960
    ctx->pc = 0x1DBBDB4u;
    SET_GPR_U32(ctx, 31, 0x1DBBDBCu);
    ctx->pc = 0x1DBBDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBBDB4u;
    // 0x1dbbdb8: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB960u, 0x1DBBDB4u, 0x1DBBDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBBDBCu;
label_1dbbdbc:
    // 0x1dbbdbc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1dbbdbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1dbbdc0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1dbbdc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbbdc4: 0xc76ee5a  jal         func_1DBB968
    ctx->pc = 0x1DBBDC4u;
    SET_GPR_U32(ctx, 31, 0x1DBBDCCu);
    ctx->pc = 0x1DBBDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBBDC4u;
    // 0x1dbbdc8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB968u, 0x1DBBDC4u, 0x1DBBDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBBDCCu;
label_1dbbdcc:
    // 0x1dbbdcc: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1dbbdccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1dbbdd0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1dbbdd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbbdd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dbbdd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbbdd8: 0xc76ee5c  jal         func_1DBB970
    ctx->pc = 0x1DBBDD8u;
    SET_GPR_U32(ctx, 31, 0x1DBBDE0u);
    ctx->pc = 0x1DBBDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBBDD8u;
    // 0x1dbbddc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB970u, 0x1DBBDD8u, 0x1DBBDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBBDE0u;
label_1dbbde0:
    // 0x1dbbde0: 0xae400430  sw          $zero, 0x430($s2)
    ctx->pc = 0x1dbbde0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1072), GPR_U32(ctx, 0));
    // 0x1dbbde4: 0x26640390  addiu       $a0, $s3, 0x390
    ctx->pc = 0x1dbbde4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 912));
    // 0x1dbbde8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1dbbde8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbbdec: 0xc76ee5e  jal         func_1DBB978
    ctx->pc = 0x1DBBDECu;
    SET_GPR_U32(ctx, 31, 0x1DBBDF4u);
    ctx->pc = 0x1DBBDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBBDECu;
    // 0x1dbbdf0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB978u, 0x1DBBDECu, 0x1DBBDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBBDF4u;
label_1dbbdf4:
    // 0x1dbbdf4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1dbbdf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dbbdf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dbbdf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbbdfc: 0xc76ee52  jal         func_1DBB948
    ctx->pc = 0x1DBBDFCu;
    SET_GPR_U32(ctx, 31, 0x1DBBE04u);
    ctx->pc = 0x1DBBE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBBDFCu;
    // 0x1dbbe00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB948u, 0x1DBBDFCu, 0x1DBBE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBBE04u;
label_1dbbe04:
    // 0x1dbbe04: 0xa27109b0  sb          $s1, 0x9B0($s3)
    ctx->pc = 0x1dbbe04u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2480), (uint8_t)GPR_U32(ctx, 17));
    // 0x1dbbe08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dbbe08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbbe0c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1dbbe0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbbe10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dbbe10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbbe14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dbbe14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dbbe18: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dbbe18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dbbe1c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1dbbe1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dbbe20: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1dbbe20u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dbbe24: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1dbbe24u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1dbbe28: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1dbbe28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dbbe2c: 0x876ee60  j           func_1DBB980
    ctx->pc = 0x1DBBE2Cu;
    ctx->pc = 0x1DBBE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBBE2Cu;
    // 0x1dbbe30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB980u;
    sub_01DBB980_0x1dbb980(rdram, ctx, runtime); return;
    ctx->pc = 0x1DBBE34u;
    // 0x1dbbe34: 0x0  nop
    ctx->pc = 0x1dbbe34u;
    // NOP
    ctx->pc = 0x1dbbe38u;
}
