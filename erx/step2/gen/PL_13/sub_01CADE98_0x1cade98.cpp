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

// Function: sub_01CADE98
// Address: 0x1cade98 - 0x1cae030
void sub_01CADE98_0x1cade98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CADE98_0x1cade98");
#endif

    switch (ctx->pc) {
        case 0x1cadeb4u: goto label_1cadeb4;
        case 0x1cadebcu: goto label_1cadebc;
        case 0x1caded0u: goto label_1caded0;
        case 0x1caded8u: goto label_1caded8;
        case 0x1cadedcu: goto label_1cadedc;
        case 0x1cadf20u: goto label_1cadf20;
        case 0x1cadf30u: goto label_1cadf30;
        case 0x1cadf58u: goto label_1cadf58;
        case 0x1cadf60u: goto label_1cadf60;
        case 0x1cadf94u: goto label_1cadf94;
        case 0x1cadfbcu: goto label_1cadfbc;
        case 0x1cadfc8u: goto label_1cadfc8;
        case 0x1cadfd8u: goto label_1cadfd8;
        default: break;
    }

    ctx->pc = 0x1cade98u;

    // 0x1cade98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cade98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cade9c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cade9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cadea0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cadea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cadea4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cadea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cadea8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cadea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cadeac: 0xc72b446  jal         func_1CAD118
    ctx->pc = 0x1CADEACu;
    SET_GPR_U32(ctx, 31, 0x1CADEB4u);
    ctx->pc = 0x1CADEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CADEACu;
    // 0x1cadeb0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD118u, 0x1CADEACu, 0x1CADEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CADEB4u;
label_1cadeb4:
    // 0x1cadeb4: 0xc72b448  jal         func_1CAD120
    ctx->pc = 0x1CADEB4u;
    SET_GPR_U32(ctx, 31, 0x1CADEBCu);
    ctx->pc = 0x1CADEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CADEB4u;
    // 0x1cadeb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD120u, 0x1CADEB4u, 0x1CADEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CADEBCu;
label_1cadebc:
    // 0x1cadebc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cadebcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cadec0: 0x144f000a  bne         $v0, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1CADEC0u;
    {
        const bool branch_taken_0x1cadec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CADEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CADEC0u;
        // 0x1cadec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cadec0) {
            ctx->pc = 0x1CADEECu;
            goto label_1cadeec;
        }
    }
    ctx->pc = 0x1CADEC8u;
    // 0x1cadec8: 0xc72b460  jal         func_1CAD180
    ctx->pc = 0x1CADEC8u;
    SET_GPR_U32(ctx, 31, 0x1CADED0u);
    ctx->pc = 0x1CAD180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD180u, 0x1CADEC8u, 0x1CADED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CADED0u;
label_1caded0:
    // 0x1caded0: 0xc72b44a  jal         func_1CAD128
    ctx->pc = 0x1CADED0u;
    SET_GPR_U32(ctx, 31, 0x1CADED8u);
    ctx->pc = 0x1CADED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CADED0u;
    // 0x1caded4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD128u, 0x1CADED0u, 0x1CADED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CADED8u;
label_1caded8:
    // 0x1caded8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1caded8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1cadedc:
    // 0x1cadedc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cadedcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cadee0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cadee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cadee4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CADEE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CADEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CADEE4u;
        // 0x1cadee8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CADEE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CADEECu;
label_1cadeec:
    // 0x1cadeec: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1CADEECu;
    {
        const bool branch_taken_0x1cadeec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CADEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CADEECu;
        // 0x1cadef0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cadeec) {
            ctx->pc = 0x1CADEDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cadedc;
        }
    }
    ctx->pc = 0x1CADEF4u;
    // 0x1cadef4: 0x0  nop
    ctx->pc = 0x1cadef4u;
    // NOP
    // 0x1cadef8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cadef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cadefc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cadefcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cadf00: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cadf00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cadf04: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cadf04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cadf08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cadf08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cadf0c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cadf0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1cadf10: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1cadf10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1cadf14: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1cadf14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1cadf18: 0xc72b44c  jal         func_1CAD130
    ctx->pc = 0x1CADF18u;
    SET_GPR_U32(ctx, 31, 0x1CADF20u);
    ctx->pc = 0x1CADF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CADF18u;
    // 0x1cadf1c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD130u, 0x1CADF18u, 0x1CADF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CADF20u;
label_1cadf20:
    // 0x1cadf20: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cadf20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cadf24: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1cadf24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cadf28: 0xc72b44e  jal         func_1CAD138
    ctx->pc = 0x1CADF28u;
    SET_GPR_U32(ctx, 31, 0x1CADF30u);
    ctx->pc = 0x1CADF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CADF28u;
    // 0x1cadf2c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD138u, 0x1CADF28u, 0x1CADF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CADF30u;
label_1cadf30:
    // 0x1cadf30: 0x8e2e024c  lw          $t6, 0x24C($s1)
    ctx->pc = 0x1cadf30u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 588)));
    // 0x1cadf34: 0x340d8000  ori         $t5, $zero, 0x8000
    ctx->pc = 0x1cadf34u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1cadf38: 0x8dcf0084  lw          $t7, 0x84($t6)
    ctx->pc = 0x1cadf38u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1cadf3c: 0x1ed7821  addu        $t7, $t7, $t5
    ctx->pc = 0x1cadf3cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
    // 0x1cadf40: 0x91ee1606  lbu         $t6, 0x1606($t7)
    ctx->pc = 0x1cadf40u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 5638)));
    // 0x1cadf44: 0x11c00030  beqz        $t6, . + 4 + (0x30 << 2)
    ctx->pc = 0x1CADF44u;
    {
        const bool branch_taken_0x1cadf44 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CADF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CADF44u;
        // 0x1cadf48: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cadf44) {
            ctx->pc = 0x1CAE008u;
            goto label_1cae008;
        }
    }
    ctx->pc = 0x1CADF4Cu;
    // 0x1cadf4c: 0x241300c9  addiu       $s3, $zero, 0xC9
    ctx->pc = 0x1cadf4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
    // 0x1cadf50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cadf50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cadf54: 0x2405006a  addiu       $a1, $zero, 0x6A
    ctx->pc = 0x1cadf54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
label_1cadf58:
    // 0x1cadf58: 0xc72b454  jal         func_1CAD150
    ctx->pc = 0x1CADF58u;
    SET_GPR_U32(ctx, 31, 0x1CADF60u);
    ctx->pc = 0x1CAD150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD150u, 0x1CADF58u, 0x1CADF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CADF60u;
label_1cadf60:
    // 0x1cadf60: 0xae200430  sw          $zero, 0x430($s1)
    ctx->pc = 0x1cadf60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1072), GPR_U32(ctx, 0));
    // 0x1cadf64: 0x240f001a  addiu       $t7, $zero, 0x1A
    ctx->pc = 0x1cadf64u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1cadf68: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1cadf68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1cadf6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cadf6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cadf70: 0x8e4e0008  lw          $t6, 0x8($s2)
    ctx->pc = 0x1cadf70u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1cadf74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cadf74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cadf78: 0x11cf000b  beq         $t6, $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x1CADF78u;
    {
        const bool branch_taken_0x1cadf78 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1CADF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CADF78u;
        // 0x1cadf7c: 0x24060047  addiu       $a2, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cadf78) {
            ctx->pc = 0x1CADFA8u;
            goto label_1cadfa8;
        }
    }
    ctx->pc = 0x1CADF80u;
    // 0x1cadf80: 0x29cf001b  slti        $t7, $t6, 0x1B
    ctx->pc = 0x1cadf80u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x1cadf84: 0x11e0001e  beqz        $t7, . + 4 + (0x1E << 2)
    ctx->pc = 0x1CADF84u;
    {
        const bool branch_taken_0x1cadf84 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CADF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CADF84u;
        // 0x1cadf88: 0x240f001f  addiu       $t7, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cadf84) {
            ctx->pc = 0x1CAE000u;
            goto label_1cae000;
        }
    }
    ctx->pc = 0x1CADF8Cu;
    // 0x1cadf8c: 0x240f0019  addiu       $t7, $zero, 0x19
    ctx->pc = 0x1cadf8cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1cadf90: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x1cadf90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_1cadf94:
    // 0x1cadf94: 0x11cf0005  beq         $t6, $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CADF94u;
    {
        const bool branch_taken_0x1cadf94 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1CADF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CADF94u;
        // 0x1cadf98: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cadf94) {
            ctx->pc = 0x1CADFACu;
            goto label_1cadfac;
        }
    }
    ctx->pc = 0x1CADF9Cu;
    // 0x1cadf9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cadf9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cadfa0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cadfa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cadfa4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1cadfa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1cadfa8:
    // 0x1cadfa8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cadfa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cadfac:
    // 0x1cadfac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cadfacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cadfb0: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1cadfb0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cadfb4: 0xc72b458  jal         func_1CAD160
    ctx->pc = 0x1CADFB4u;
    SET_GPR_U32(ctx, 31, 0x1CADFBCu);
    ctx->pc = 0x1CADFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CADFB4u;
    // 0x1cadfb8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD160u, 0x1CADFB4u, 0x1CADFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CADFBCu;
label_1cadfbc:
    // 0x1cadfbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cadfbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cadfc0: 0xc72b450  jal         func_1CAD140
    ctx->pc = 0x1CADFC0u;
    SET_GPR_U32(ctx, 31, 0x1CADFC8u);
    ctx->pc = 0x1CADFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CADFC0u;
    // 0x1cadfc4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD140u, 0x1CADFC0u, 0x1CADFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CADFC8u;
label_1cadfc8:
    // 0x1cadfc8: 0x26440390  addiu       $a0, $s2, 0x390
    ctx->pc = 0x1cadfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 912));
    // 0x1cadfcc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1cadfccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cadfd0: 0xc72b452  jal         func_1CAD148
    ctx->pc = 0x1CADFD0u;
    SET_GPR_U32(ctx, 31, 0x1CADFD8u);
    ctx->pc = 0x1CADFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CADFD0u;
    // 0x1cadfd4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD148u, 0x1CADFD0u, 0x1CADFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CADFD8u;
label_1cadfd8:
    // 0x1cadfd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cadfd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cadfdc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cadfdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cadfe0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cadfe0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cadfe4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cadfe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cadfe8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cadfe8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cadfec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cadfecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cadff0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1cadff0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cadff4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cadff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cadff8: 0x872b446  j           func_1CAD118
    ctx->pc = 0x1CADFF8u;
    ctx->pc = 0x1CADFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CADFF8u;
    // 0x1cadffc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD118u;
    sub_01CAD118_0x1cad118(rdram, ctx, runtime); return;
    ctx->pc = 0x1CAE000u;
label_1cae000:
    // 0x1cae000: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x1CAE000u;
    {
        const bool branch_taken_0x1cae000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAE004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE000u;
        // 0x1cae004: 0x24060049  addiu       $a2, $zero, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cae000) {
            ctx->pc = 0x1CADF94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cadf94;
        }
    }
    ctx->pc = 0x1CAE008u;
label_1cae008:
    // 0x1cae008: 0x241300c8  addiu       $s3, $zero, 0xC8
    ctx->pc = 0x1cae008u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1cae00c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cae00cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae010: 0x1000ffd1  b           . + 4 + (-0x2F << 2)
    ctx->pc = 0x1CAE010u;
    {
        const bool branch_taken_0x1cae010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAE014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE010u;
        // 0x1cae014: 0x24050069  addiu       $a1, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cae010) {
            ctx->pc = 0x1CADF58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cadf58;
        }
    }
    ctx->pc = 0x1CAE018u;
    // 0x1cae018: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cae018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cae01c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cae01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cae020: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cae020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cae024: 0x872b456  j           func_1CAD158
    ctx->pc = 0x1CAE024u;
    ctx->pc = 0x1CAE028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE024u;
    // 0x1cae028: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD158u;
    sub_01CAD158_0x1cad158(rdram, ctx, runtime); return;
    ctx->pc = 0x1CAE02Cu;
    // 0x1cae02c: 0x0  nop
    ctx->pc = 0x1cae02cu;
    // NOP
    ctx->pc = 0x1cae030u;
}
