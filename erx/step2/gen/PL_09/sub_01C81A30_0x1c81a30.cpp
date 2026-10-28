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

// Function: sub_01C81A30
// Address: 0x1c81a30 - 0x1c81b40
void sub_01C81A30_0x1c81a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C81A30_0x1c81a30");
#endif

    switch (ctx->pc) {
        case 0x1c81a4cu: goto label_1c81a4c;
        case 0x1c81a54u: goto label_1c81a54;
        case 0x1c81a68u: goto label_1c81a68;
        case 0x1c81a6cu: goto label_1c81a6c;
        case 0x1c81ac4u: goto label_1c81ac4;
        case 0x1c81ad4u: goto label_1c81ad4;
        case 0x1c81ae8u: goto label_1c81ae8;
        case 0x1c81afcu: goto label_1c81afc;
        case 0x1c81b0cu: goto label_1c81b0c;
        default: break;
    }

    ctx->pc = 0x1c81a30u;

    // 0x1c81a30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c81a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c81a34: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c81a34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c81a38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c81a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c81a3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c81a3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c81a40: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c81a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c81a44: 0xc7203d0  jal         func_1C80F40
    ctx->pc = 0x1C81A44u;
    SET_GPR_U32(ctx, 31, 0x1C81A4Cu);
    ctx->pc = 0x1C81A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C81A44u;
    // 0x1c81a48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F40u, 0x1C81A44u, 0x1C81A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C81A4Cu;
label_1c81a4c:
    // 0x1c81a4c: 0xc7203d2  jal         func_1C80F48
    ctx->pc = 0x1C81A4Cu;
    SET_GPR_U32(ctx, 31, 0x1C81A54u);
    ctx->pc = 0x1C81A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C81A4Cu;
    // 0x1c81a50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F48u, 0x1C81A4Cu, 0x1C81A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C81A54u;
label_1c81a54:
    // 0x1c81a54: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c81a54u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c81a58: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C81A58u;
    {
        const bool branch_taken_0x1c81a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C81A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C81A58u;
        // 0x1c81a5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c81a58) {
            ctx->pc = 0x1C81A7Cu;
            goto label_1c81a7c;
        }
    }
    ctx->pc = 0x1C81A60u;
    // 0x1c81a60: 0xc7203d4  jal         func_1C80F50
    ctx->pc = 0x1C81A60u;
    SET_GPR_U32(ctx, 31, 0x1C81A68u);
    ctx->pc = 0x1C80F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F50u, 0x1C81A60u, 0x1C81A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C81A68u;
label_1c81a68:
    // 0x1c81a68: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c81a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c81a6c:
    // 0x1c81a6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c81a6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c81a70: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c81a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c81a74: 0x3e00008  jr          $ra
    ctx->pc = 0x1C81A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C81A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C81A74u;
        // 0x1c81a78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C81A74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C81A7Cu;
label_1c81a7c:
    // 0x1c81a7c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C81A7Cu;
    {
        const bool branch_taken_0x1c81a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C81A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C81A7Cu;
        // 0x1c81a80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c81a7c) {
            ctx->pc = 0x1C81A6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c81a6c;
        }
    }
    ctx->pc = 0x1C81A84u;
    // 0x1c81a84: 0x0  nop
    ctx->pc = 0x1c81a84u;
    // NOP
    // 0x1c81a88: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c81a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c81a8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c81a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c81a90: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1c81a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1c81a94: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c81a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c81a98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c81a98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c81a9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c81a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c81aa0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1c81aa0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c81aa4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c81aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c81aa8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c81aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c81aac: 0x30f100ff  andi        $s1, $a3, 0xFF
    ctx->pc = 0x1c81aacu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1c81ab0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1c81ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1c81ab4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c81ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c81ab8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1c81ab8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c81abc: 0xc7203d6  jal         func_1C80F58
    ctx->pc = 0x1C81ABCu;
    SET_GPR_U32(ctx, 31, 0x1C81AC4u);
    ctx->pc = 0x1C81AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C81ABCu;
    // 0x1c81ac0: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F58u, 0x1C81ABCu, 0x1C81AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C81AC4u;
label_1c81ac4:
    // 0x1c81ac4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c81ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c81ac8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c81ac8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c81acc: 0xc7203d8  jal         func_1C80F60
    ctx->pc = 0x1C81ACCu;
    SET_GPR_U32(ctx, 31, 0x1C81AD4u);
    ctx->pc = 0x1C81AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C81ACCu;
    // 0x1c81ad0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F60u, 0x1C81ACCu, 0x1C81AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C81AD4u;
label_1c81ad4:
    // 0x1c81ad4: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c81ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c81ad8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1c81ad8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c81adc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c81adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c81ae0: 0xc7203da  jal         func_1C80F68
    ctx->pc = 0x1C81AE0u;
    SET_GPR_U32(ctx, 31, 0x1C81AE8u);
    ctx->pc = 0x1C81AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C81AE0u;
    // 0x1c81ae4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F68u, 0x1C81AE0u, 0x1C81AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C81AE8u;
label_1c81ae8:
    // 0x1c81ae8: 0xae400430  sw          $zero, 0x430($s2)
    ctx->pc = 0x1c81ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1072), GPR_U32(ctx, 0));
    // 0x1c81aec: 0x26640390  addiu       $a0, $s3, 0x390
    ctx->pc = 0x1c81aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 912));
    // 0x1c81af0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1c81af0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c81af4: 0xc7203dc  jal         func_1C80F70
    ctx->pc = 0x1C81AF4u;
    SET_GPR_U32(ctx, 31, 0x1C81AFCu);
    ctx->pc = 0x1C81AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C81AF4u;
    // 0x1c81af8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F70u, 0x1C81AF4u, 0x1C81AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C81AFCu;
label_1c81afc:
    // 0x1c81afc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c81afcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c81b00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c81b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c81b04: 0xc7203d0  jal         func_1C80F40
    ctx->pc = 0x1C81B04u;
    SET_GPR_U32(ctx, 31, 0x1C81B0Cu);
    ctx->pc = 0x1C81B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C81B04u;
    // 0x1c81b08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F40u, 0x1C81B04u, 0x1C81B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C81B0Cu;
label_1c81b0c:
    // 0x1c81b0c: 0xa27109b0  sb          $s1, 0x9B0($s3)
    ctx->pc = 0x1c81b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2480), (uint8_t)GPR_U32(ctx, 17));
    // 0x1c81b10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c81b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c81b14: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1c81b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c81b18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c81b18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c81b1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c81b1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c81b20: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c81b20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c81b24: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c81b24u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c81b28: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c81b28u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c81b2c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1c81b2cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c81b30: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c81b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c81b34: 0x87203de  j           func_1C80F78
    ctx->pc = 0x1C81B34u;
    ctx->pc = 0x1C81B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C81B34u;
    // 0x1c81b38: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F78u;
    sub_01C80F78_0x1c80f78(rdram, ctx, runtime); return;
    ctx->pc = 0x1C81B3Cu;
    // 0x1c81b3c: 0x0  nop
    ctx->pc = 0x1c81b3cu;
    // NOP
    ctx->pc = 0x1c81b40u;
}
