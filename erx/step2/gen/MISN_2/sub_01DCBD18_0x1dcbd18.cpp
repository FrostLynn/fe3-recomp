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

// Function: sub_01DCBD18
// Address: 0x1dcbd18 - 0x1dcbe88
void sub_01DCBD18_0x1dcbd18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DCBD18_0x1dcbd18");
#endif

    switch (ctx->pc) {
        case 0x1dcbd44u: goto label_1dcbd44;
        case 0x1dcbdc8u: goto label_1dcbdc8;
        case 0x1dcbdf8u: goto label_1dcbdf8;
        case 0x1dcbe0cu: goto label_1dcbe0c;
        case 0x1dcbe1cu: goto label_1dcbe1c;
        case 0x1dcbe2cu: goto label_1dcbe2c;
        case 0x1dcbe3cu: goto label_1dcbe3c;
        case 0x1dcbe58u: goto label_1dcbe58;
        default: break;
    }

    ctx->pc = 0x1dcbd18u;

    // 0x1dcbd18: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1dcbd18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1dcbd1c: 0x8f8f8030  lw          $t7, -0x7FD0($gp)
    ctx->pc = 0x1dcbd1cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934576)));
    // 0x1dcbd20: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1dcbd20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x1dcbd24: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1dcbd24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1dcbd28: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1dcbd28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1dcbd2c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1dcbd2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1dcbd30: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1dcbd30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1dcbd34: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1dcbd34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1dcbd38: 0x8c92000c  lw          $s2, 0xC($a0)
    ctx->pc = 0x1dcbd38u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1dcbd3c: 0xc772ed0  jal         func_1DCBB40
    ctx->pc = 0x1DCBD3Cu;
    SET_GPR_U32(ctx, 31, 0x1DCBD44u);
    ctx->pc = 0x1DCBD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCBD3Cu;
    // 0x1dcbd40: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCBB40u, 0x1DCBD3Cu, 0x1DCBD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCBD44u;
label_1dcbd44:
    // 0x1dcbd44: 0x8c4e03a4  lw          $t6, 0x3A4($v0)
    ctx->pc = 0x1dcbd44u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 932)));
    // 0x1dcbd48: 0x11c00008  beqz        $t6, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DCBD48u;
    {
        const bool branch_taken_0x1dcbd48 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCBD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCBD48u;
        // 0x1dcbd4c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcbd48) {
            ctx->pc = 0x1DCBD6Cu;
            goto label_1dcbd6c;
        }
    }
    ctx->pc = 0x1DCBD50u;
    // 0x1dcbd50: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x1dcbd50u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dcbd54: 0x11cf0005  beq         $t6, $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DCBD54u;
    {
        const bool branch_taken_0x1dcbd54 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1DCBD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCBD54u;
        // 0x1dcbd58: 0x240f0003  addiu       $t7, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcbd54) {
            ctx->pc = 0x1DCBD6Cu;
            goto label_1dcbd6c;
        }
    }
    ctx->pc = 0x1DCBD5Cu;
    // 0x1dcbd5c: 0x11cf0003  beq         $t6, $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DCBD5Cu;
    {
        const bool branch_taken_0x1dcbd5c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1DCBD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCBD5Cu;
        // 0x1dcbd60: 0x240f0099  addiu       $t7, $zero, 0x99 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcbd5c) {
            ctx->pc = 0x1DCBD6Cu;
            goto label_1dcbd6c;
        }
    }
    ctx->pc = 0x1DCBD64u;
    // 0x1dcbd64: 0x15cf003c  bne         $t6, $t7, . + 4 + (0x3C << 2)
    ctx->pc = 0x1DCBD64u;
    {
        const bool branch_taken_0x1dcbd64 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1DCBD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCBD64u;
        // 0x1dcbd68: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcbd64) {
            ctx->pc = 0x1DCBE58u;
            goto label_1dcbe58;
        }
    }
    ctx->pc = 0x1DCBD6Cu;
label_1dcbd6c:
    // 0x1dcbd6c: 0x8f8f8030  lw          $t7, -0x7FD0($gp)
    ctx->pc = 0x1dcbd6cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934576)));
    // 0x1dcbd70: 0x3c0c000c  lui         $t4, 0xC
    ctx->pc = 0x1dcbd70u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)12 << 16));
    // 0x1dcbd74: 0x3c0b0002  lui         $t3, 0x2
    ctx->pc = 0x1dcbd74u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)2 << 16));
    // 0x1dcbd78: 0x3c0d0002  lui         $t5, 0x2
    ctx->pc = 0x1dcbd78u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)2 << 16));
    // 0x1dcbd7c: 0x8dee00f0  lw          $t6, 0xF0($t7)
    ctx->pc = 0x1dcbd7cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 240)));
    // 0x1dcbd80: 0x3c0a000c  lui         $t2, 0xC
    ctx->pc = 0x1dcbd80u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)12 << 16));
    // 0x1dcbd84: 0x358c0e30  ori         $t4, $t4, 0xE30
    ctx->pc = 0x1dcbd84u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)3632);
    // 0x1dcbd88: 0x356b25b0  ori         $t3, $t3, 0x25B0
    ctx->pc = 0x1dcbd88u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)9648);
    // 0x1dcbd8c: 0x8dcf002c  lw          $t7, 0x2C($t6)
    ctx->pc = 0x1dcbd8cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 44)));
    // 0x1dcbd90: 0x35ad2506  ori         $t5, $t5, 0x2506
    ctx->pc = 0x1dcbd90u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)9478);
    // 0x1dcbd94: 0x354a0d86  ori         $t2, $t2, 0xD86
    ctx->pc = 0x1dcbd94u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)3462);
    // 0x1dcbd98: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1dcbd98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcbd9c: 0x8dee001c  lw          $t6, 0x1C($t7)
    ctx->pc = 0x1dcbd9cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 28)));
    // 0x1dcbda0: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x1dcbda0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcbda4: 0x8dcf0048  lw          $t7, 0x48($t6)
    ctx->pc = 0x1dcbda4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 72)));
    // 0x1dcbda8: 0x1ed6821  addu        $t5, $t7, $t5
    ctx->pc = 0x1dcbda8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
    // 0x1dcbdac: 0x1ec6021  addu        $t4, $t7, $t4
    ctx->pc = 0x1dcbdacu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 12)));
    // 0x1dcbdb0: 0x1eb5821  addu        $t3, $t7, $t3
    ctx->pc = 0x1dcbdb0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 11)));
    // 0x1dcbdb4: 0xafac0000  sw          $t4, 0x0($sp)
    ctx->pc = 0x1dcbdb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 12));
    // 0x1dcbdb8: 0x1ea7821  addu        $t7, $t7, $t2
    ctx->pc = 0x1dcbdb8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 10)));
    // 0x1dcbdbc: 0xafab0004  sw          $t3, 0x4($sp)
    ctx->pc = 0x1dcbdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 11));
    // 0x1dcbdc0: 0xafaf0010  sw          $t7, 0x10($sp)
    ctx->pc = 0x1dcbdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 15));
    // 0x1dcbdc4: 0xafad0014  sw          $t5, 0x14($sp)
    ctx->pc = 0x1dcbdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 13));
label_1dcbdc8:
    // 0x1dcbdc8: 0x8e2f0010  lw          $t7, 0x10($s1)
    ctx->pc = 0x1dcbdc8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1dcbdcc: 0x91ee0000  lbu         $t6, 0x0($t7)
    ctx->pc = 0x1dcbdccu;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1dcbdd0: 0x11c00027  beqz        $t6, . + 4 + (0x27 << 2)
    ctx->pc = 0x1DCBDD0u;
    {
        const bool branch_taken_0x1dcbdd0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCBDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCBDD0u;
        // 0x1dcbdd4: 0x3c0e01dd  lui         $t6, 0x1DD (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)477 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcbdd0) {
            ctx->pc = 0x1DCBE70u;
            goto label_1dcbe70;
        }
    }
    ctx->pc = 0x1DCBDD8u;
    // 0x1dcbdd8: 0x8e6f024c  lw          $t7, 0x24C($s3)
    ctx->pc = 0x1dcbdd8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 588)));
    // 0x1dcbddc: 0x25ced774  addiu       $t6, $t6, -0x288C
    ctx->pc = 0x1dcbddcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294956916));
    // 0x1dcbde0: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x1dcbde0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1dcbde4: 0x8de50084  lw          $a1, 0x84($t7)
    ctx->pc = 0x1dcbde4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 132)));
    // 0x1dcbde8: 0xc5cc0000  lwc1        $f12, 0x0($t6)
    ctx->pc = 0x1dcbde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dcbdec: 0x8f848030  lw          $a0, -0x7FD0($gp)
    ctx->pc = 0x1dcbdecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934576)));
    // 0x1dcbdf0: 0xc772eda  jal         func_1DCBB68
    ctx->pc = 0x1DCBDF0u;
    SET_GPR_U32(ctx, 31, 0x1DCBDF8u);
    ctx->pc = 0x1DCBDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCBDF0u;
    // 0x1dcbdf4: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCBB68u, 0x1DCBDF0u, 0x1DCBDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCBDF8u;
label_1dcbdf8:
    // 0x1dcbdf8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1DCBDF8u;
    {
        const bool branch_taken_0x1dcbdf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCBDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCBDF8u;
        // 0x1dcbdfc: 0x8f8f8030  lw          $t7, -0x7FD0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcbdf8) {
            ctx->pc = 0x1DCBE70u;
            goto label_1dcbe70;
        }
    }
    ctx->pc = 0x1DCBE00u;
    // 0x1dcbe00: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1dcbe00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcbe04: 0xc772ec6  jal         func_1DCBB18
    ctx->pc = 0x1DCBE04u;
    SET_GPR_U32(ctx, 31, 0x1DCBE0Cu);
    ctx->pc = 0x1DCBE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCBE04u;
    // 0x1dcbe08: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBB18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCBB18u, 0x1DCBE04u, 0x1DCBE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCBE0Cu;
label_1dcbe0c:
    // 0x1dcbe0c: 0x24440390  addiu       $a0, $v0, 0x390
    ctx->pc = 0x1dcbe0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 912));
    // 0x1dcbe10: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1dcbe10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dcbe14: 0xc772ec8  jal         func_1DCBB20
    ctx->pc = 0x1DCBE14u;
    SET_GPR_U32(ctx, 31, 0x1DCBE1Cu);
    ctx->pc = 0x1DCBE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCBE14u;
    // 0x1dcbe18: 0x2405014f  addiu       $a1, $zero, 0x14F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 335));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCBB20u, 0x1DCBE14u, 0x1DCBE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCBE1Cu;
label_1dcbe1c:
    // 0x1dcbe1c: 0x8f8f8030  lw          $t7, -0x7FD0($gp)
    ctx->pc = 0x1dcbe1cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934576)));
    // 0x1dcbe20: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1dcbe20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcbe24: 0xc772ec6  jal         func_1DCBB18
    ctx->pc = 0x1DCBE24u;
    SET_GPR_U32(ctx, 31, 0x1DCBE2Cu);
    ctx->pc = 0x1DCBE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCBE24u;
    // 0x1dcbe28: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBB18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCBB18u, 0x1DCBE24u, 0x1DCBE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCBE2Cu;
label_1dcbe2c:
    // 0x1dcbe2c: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1dcbe2cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1dcbe30: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1dcbe30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1dcbe34: 0xc772ee2  jal         func_1DCBB88
    ctx->pc = 0x1DCBE34u;
    SET_GPR_U32(ctx, 31, 0x1DCBE3Cu);
    ctx->pc = 0x1DCBE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCBE34u;
    // 0x1dcbe38: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCBB88u, 0x1DCBE34u, 0x1DCBE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCBE3Cu;
label_1dcbe3c:
    // 0x1dcbe3c: 0x8f8e8030  lw          $t6, -0x7FD0($gp)
    ctx->pc = 0x1dcbe3cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934576)));
    // 0x1dcbe40: 0x8e2d0010  lw          $t5, 0x10($s1)
    ctx->pc = 0x1dcbe40u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1dcbe44: 0x95cf056e  lhu         $t7, 0x56E($t6)
    ctx->pc = 0x1dcbe44u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
    // 0x1dcbe48: 0x35ef0004  ori         $t7, $t7, 0x4
    ctx->pc = 0x1dcbe48u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)4);
    // 0x1dcbe4c: 0xa5cf056e  sh          $t7, 0x56E($t6)
    ctx->pc = 0x1dcbe4cu;
    WRITE16(ADD32(GPR_U32(ctx, 14), 1390), (uint16_t)GPR_U32(ctx, 15));
    // 0x1dcbe50: 0xa1a00000  sb          $zero, 0x0($t5)
    ctx->pc = 0x1dcbe50u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1dcbe54: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1dcbe54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1dcbe58:
    // 0x1dcbe58: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1dcbe58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1dcbe5c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1dcbe5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dcbe60: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1dcbe60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1dcbe64: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1dcbe64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dcbe68: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCBE68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCBE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCBE68u;
        // 0x1dcbe6c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCBE68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCBE70u;
label_1dcbe70:
    // 0x1dcbe70: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1dcbe70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1dcbe74: 0x2a0f0002  slti        $t7, $s0, 0x2
    ctx->pc = 0x1dcbe74u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1dcbe78: 0x15e0ffd3  bnez        $t7, . + 4 + (-0x2D << 2)
    ctx->pc = 0x1DCBE78u;
    {
        const bool branch_taken_0x1dcbe78 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCBE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCBE78u;
        // 0x1dcbe7c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcbe78) {
            ctx->pc = 0x1DCBDC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dcbdc8;
        }
    }
    ctx->pc = 0x1DCBE80u;
    // 0x1dcbe80: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1DCBE80u;
    {
        const bool branch_taken_0x1dcbe80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCBE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCBE80u;
        // 0x1dcbe84: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcbe80) {
            ctx->pc = 0x1DCBE58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dcbe58;
        }
    }
    ctx->pc = 0x1DCBE88u;
}
