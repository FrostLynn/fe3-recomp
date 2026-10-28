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

// Function: sub_01D51A30
// Address: 0x1d51a30 - 0x1d51b40
void sub_01D51A30_0x1d51a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D51A30_0x1d51a30");
#endif

    switch (ctx->pc) {
        case 0x1d51a4cu: goto label_1d51a4c;
        case 0x1d51a54u: goto label_1d51a54;
        case 0x1d51a68u: goto label_1d51a68;
        case 0x1d51a6cu: goto label_1d51a6c;
        case 0x1d51ac4u: goto label_1d51ac4;
        case 0x1d51ad4u: goto label_1d51ad4;
        case 0x1d51ae8u: goto label_1d51ae8;
        case 0x1d51afcu: goto label_1d51afc;
        case 0x1d51b0cu: goto label_1d51b0c;
        default: break;
    }

    ctx->pc = 0x1d51a30u;

    // 0x1d51a30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d51a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d51a34: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d51a34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d51a38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d51a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d51a3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d51a3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d51a40: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d51a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d51a44: 0xc7543d0  jal         func_1D50F40
    ctx->pc = 0x1D51A44u;
    SET_GPR_U32(ctx, 31, 0x1D51A4Cu);
    ctx->pc = 0x1D51A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D51A44u;
    // 0x1d51a48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F40u, 0x1D51A44u, 0x1D51A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D51A4Cu;
label_1d51a4c:
    // 0x1d51a4c: 0xc7543d2  jal         func_1D50F48
    ctx->pc = 0x1D51A4Cu;
    SET_GPR_U32(ctx, 31, 0x1D51A54u);
    ctx->pc = 0x1D51A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D51A4Cu;
    // 0x1d51a50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F48u, 0x1D51A4Cu, 0x1D51A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D51A54u;
label_1d51a54:
    // 0x1d51a54: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d51a54u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d51a58: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D51A58u;
    {
        const bool branch_taken_0x1d51a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D51A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D51A58u;
        // 0x1d51a5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d51a58) {
            ctx->pc = 0x1D51A7Cu;
            goto label_1d51a7c;
        }
    }
    ctx->pc = 0x1D51A60u;
    // 0x1d51a60: 0xc7543d4  jal         func_1D50F50
    ctx->pc = 0x1D51A60u;
    SET_GPR_U32(ctx, 31, 0x1D51A68u);
    ctx->pc = 0x1D50F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F50u, 0x1D51A60u, 0x1D51A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D51A68u;
label_1d51a68:
    // 0x1d51a68: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d51a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d51a6c:
    // 0x1d51a6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d51a6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d51a70: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d51a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d51a74: 0x3e00008  jr          $ra
    ctx->pc = 0x1D51A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D51A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D51A74u;
        // 0x1d51a78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D51A74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D51A7Cu;
label_1d51a7c:
    // 0x1d51a7c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D51A7Cu;
    {
        const bool branch_taken_0x1d51a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D51A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D51A7Cu;
        // 0x1d51a80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d51a7c) {
            ctx->pc = 0x1D51A6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d51a6c;
        }
    }
    ctx->pc = 0x1D51A84u;
    // 0x1d51a84: 0x0  nop
    ctx->pc = 0x1d51a84u;
    // NOP
    // 0x1d51a88: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d51a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d51a8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d51a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d51a90: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1d51a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1d51a94: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d51a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d51a98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d51a98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d51a9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d51a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d51aa0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1d51aa0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d51aa4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d51aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d51aa8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d51aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d51aac: 0x30f100ff  andi        $s1, $a3, 0xFF
    ctx->pc = 0x1d51aacu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1d51ab0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d51ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1d51ab4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d51ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d51ab8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1d51ab8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d51abc: 0xc7543d6  jal         func_1D50F58
    ctx->pc = 0x1D51ABCu;
    SET_GPR_U32(ctx, 31, 0x1D51AC4u);
    ctx->pc = 0x1D51AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D51ABCu;
    // 0x1d51ac0: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F58u, 0x1D51ABCu, 0x1D51AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D51AC4u;
label_1d51ac4:
    // 0x1d51ac4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d51ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d51ac8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d51ac8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d51acc: 0xc7543d8  jal         func_1D50F60
    ctx->pc = 0x1D51ACCu;
    SET_GPR_U32(ctx, 31, 0x1D51AD4u);
    ctx->pc = 0x1D51AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D51ACCu;
    // 0x1d51ad0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F60u, 0x1D51ACCu, 0x1D51AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D51AD4u;
label_1d51ad4:
    // 0x1d51ad4: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d51ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d51ad8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1d51ad8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d51adc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d51adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d51ae0: 0xc7543da  jal         func_1D50F68
    ctx->pc = 0x1D51AE0u;
    SET_GPR_U32(ctx, 31, 0x1D51AE8u);
    ctx->pc = 0x1D51AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D51AE0u;
    // 0x1d51ae4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F68u, 0x1D51AE0u, 0x1D51AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D51AE8u;
label_1d51ae8:
    // 0x1d51ae8: 0xae400430  sw          $zero, 0x430($s2)
    ctx->pc = 0x1d51ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1072), GPR_U32(ctx, 0));
    // 0x1d51aec: 0x26640390  addiu       $a0, $s3, 0x390
    ctx->pc = 0x1d51aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 912));
    // 0x1d51af0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1d51af0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d51af4: 0xc7543dc  jal         func_1D50F70
    ctx->pc = 0x1D51AF4u;
    SET_GPR_U32(ctx, 31, 0x1D51AFCu);
    ctx->pc = 0x1D51AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D51AF4u;
    // 0x1d51af8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F70u, 0x1D51AF4u, 0x1D51AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D51AFCu;
label_1d51afc:
    // 0x1d51afc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d51afcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d51b00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d51b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d51b04: 0xc7543d0  jal         func_1D50F40
    ctx->pc = 0x1D51B04u;
    SET_GPR_U32(ctx, 31, 0x1D51B0Cu);
    ctx->pc = 0x1D51B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D51B04u;
    // 0x1d51b08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F40u, 0x1D51B04u, 0x1D51B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D51B0Cu;
label_1d51b0c:
    // 0x1d51b0c: 0xa27109b0  sb          $s1, 0x9B0($s3)
    ctx->pc = 0x1d51b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2480), (uint8_t)GPR_U32(ctx, 17));
    // 0x1d51b10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d51b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d51b14: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1d51b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d51b18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d51b18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d51b1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d51b1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d51b20: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d51b20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d51b24: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d51b24u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d51b28: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d51b28u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d51b2c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1d51b2cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d51b30: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d51b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d51b34: 0x87543de  j           func_1D50F78
    ctx->pc = 0x1D51B34u;
    ctx->pc = 0x1D51B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D51B34u;
    // 0x1d51b38: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F78u;
    sub_01D50F78_0x1d50f78(rdram, ctx, runtime); return;
    ctx->pc = 0x1D51B3Cu;
    // 0x1d51b3c: 0x0  nop
    ctx->pc = 0x1d51b3cu;
    // NOP
    ctx->pc = 0x1d51b40u;
}
