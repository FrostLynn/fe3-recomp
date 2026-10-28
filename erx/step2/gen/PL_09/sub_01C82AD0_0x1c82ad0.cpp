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

// Function: sub_01C82AD0
// Address: 0x1c82ad0 - 0x1c82bd8
void sub_01C82AD0_0x1c82ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C82AD0_0x1c82ad0");
#endif

    switch (ctx->pc) {
        case 0x1c82aecu: goto label_1c82aec;
        case 0x1c82af4u: goto label_1c82af4;
        case 0x1c82b08u: goto label_1c82b08;
        case 0x1c82b10u: goto label_1c82b10;
        case 0x1c82b14u: goto label_1c82b14;
        case 0x1c82b50u: goto label_1c82b50;
        case 0x1c82b7cu: goto label_1c82b7c;
        case 0x1c82b88u: goto label_1c82b88;
        case 0x1c82b94u: goto label_1c82b94;
        case 0x1c82ba8u: goto label_1c82ba8;
        case 0x1c82bb8u: goto label_1c82bb8;
        default: break;
    }

    ctx->pc = 0x1c82ad0u;

    // 0x1c82ad0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c82ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c82ad4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c82ad4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c82ad8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c82ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c82adc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c82adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c82ae0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c82ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c82ae4: 0xc7203d0  jal         func_1C80F40
    ctx->pc = 0x1C82AE4u;
    SET_GPR_U32(ctx, 31, 0x1C82AECu);
    ctx->pc = 0x1C82AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C82AE4u;
    // 0x1c82ae8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F40u, 0x1C82AE4u, 0x1C82AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C82AECu;
label_1c82aec:
    // 0x1c82aec: 0xc7203d2  jal         func_1C80F48
    ctx->pc = 0x1C82AECu;
    SET_GPR_U32(ctx, 31, 0x1C82AF4u);
    ctx->pc = 0x1C82AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C82AECu;
    // 0x1c82af0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F48u, 0x1C82AECu, 0x1C82AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C82AF4u;
label_1c82af4:
    // 0x1c82af4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c82af4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c82af8: 0x144f000a  bne         $v0, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1C82AF8u;
    {
        const bool branch_taken_0x1c82af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C82AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C82AF8u;
        // 0x1c82afc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c82af8) {
            ctx->pc = 0x1C82B24u;
            goto label_1c82b24;
        }
    }
    ctx->pc = 0x1C82B00u;
    // 0x1c82b00: 0xc7203ec  jal         func_1C80FB0
    ctx->pc = 0x1C82B00u;
    SET_GPR_U32(ctx, 31, 0x1C82B08u);
    ctx->pc = 0x1C80FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80FB0u, 0x1C82B00u, 0x1C82B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C82B08u;
label_1c82b08:
    // 0x1c82b08: 0xc7203d4  jal         func_1C80F50
    ctx->pc = 0x1C82B08u;
    SET_GPR_U32(ctx, 31, 0x1C82B10u);
    ctx->pc = 0x1C82B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C82B08u;
    // 0x1c82b0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F50u, 0x1C82B08u, 0x1C82B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C82B10u;
label_1c82b10:
    // 0x1c82b10: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c82b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c82b14:
    // 0x1c82b14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c82b14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c82b18: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c82b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c82b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C82B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C82B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C82B1Cu;
        // 0x1c82b20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C82B1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C82B24u;
label_1c82b24:
    // 0x1c82b24: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C82B24u;
    {
        const bool branch_taken_0x1c82b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C82B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C82B24u;
        // 0x1c82b28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c82b24) {
            ctx->pc = 0x1C82B14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c82b14;
        }
    }
    ctx->pc = 0x1C82B2Cu;
    // 0x1c82b2c: 0x0  nop
    ctx->pc = 0x1c82b2cu;
    // NOP
    // 0x1c82b30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c82b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c82b34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c82b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c82b38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c82b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c82b3c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c82b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c82b40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c82b40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c82b44: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c82b44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c82b48: 0xc7203d8  jal         func_1C80F60
    ctx->pc = 0x1C82B48u;
    SET_GPR_U32(ctx, 31, 0x1C82B50u);
    ctx->pc = 0x1C82B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C82B48u;
    // 0x1c82b4c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F60u, 0x1C82B48u, 0x1C82B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C82B50u;
label_1c82b50:
    // 0x1c82b50: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c82b50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c82b54: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c82b54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c82b58: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c82b58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c82b5c: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c82b5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c82b60: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c82b60u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c82b64: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c82b64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c82b68: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c82b68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c82b6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c82b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c82b70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c82b70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c82b74: 0xc7203e2  jal         func_1C80F88
    ctx->pc = 0x1C82B74u;
    SET_GPR_U32(ctx, 31, 0x1C82B7Cu);
    ctx->pc = 0x1C82B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C82B74u;
    // 0x1c82b78: 0x26310390  addiu       $s1, $s1, 0x390 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F88u, 0x1C82B74u, 0x1C82B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C82B7Cu;
label_1c82b7c:
    // 0x1c82b7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c82b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c82b80: 0xc7203da  jal         func_1C80F68
    ctx->pc = 0x1C82B80u;
    SET_GPR_U32(ctx, 31, 0x1C82B88u);
    ctx->pc = 0x1C82B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C82B80u;
    // 0x1c82b84: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F68u, 0x1C82B80u, 0x1C82B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C82B88u;
label_1c82b88:
    // 0x1c82b88: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c82b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c82b8c: 0xc7203d6  jal         func_1C80F58
    ctx->pc = 0x1C82B8Cu;
    SET_GPR_U32(ctx, 31, 0x1C82B94u);
    ctx->pc = 0x1C82B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C82B8Cu;
    // 0x1c82b90: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F58u, 0x1C82B8Cu, 0x1C82B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C82B94u;
label_1c82b94:
    // 0x1c82b94: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1c82b94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1c82b98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c82b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c82b9c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1c82b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c82ba0: 0xc7203dc  jal         func_1C80F70
    ctx->pc = 0x1C82BA0u;
    SET_GPR_U32(ctx, 31, 0x1C82BA8u);
    ctx->pc = 0x1C82BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C82BA0u;
    // 0x1c82ba4: 0x240500bd  addiu       $a1, $zero, 0xBD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F70u, 0x1C82BA0u, 0x1C82BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C82BA8u;
label_1c82ba8:
    // 0x1c82ba8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c82ba8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c82bac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c82bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c82bb0: 0xc7203d0  jal         func_1C80F40
    ctx->pc = 0x1C82BB0u;
    SET_GPR_U32(ctx, 31, 0x1C82BB8u);
    ctx->pc = 0x1C82BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C82BB0u;
    // 0x1c82bb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F40u, 0x1C82BB0u, 0x1C82BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C82BB8u;
label_1c82bb8:
    // 0x1c82bb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c82bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c82bbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c82bbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c82bc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c82bc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c82bc4: 0x2405005b  addiu       $a1, $zero, 0x5B
    ctx->pc = 0x1c82bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x1c82bc8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c82bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c82bcc: 0x87203de  j           func_1C80F78
    ctx->pc = 0x1C82BCCu;
    ctx->pc = 0x1C82BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C82BCCu;
    // 0x1c82bd0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F78u;
    sub_01C80F78_0x1c80f78(rdram, ctx, runtime); return;
    ctx->pc = 0x1C82BD4u;
    // 0x1c82bd4: 0x0  nop
    ctx->pc = 0x1c82bd4u;
    // NOP
    ctx->pc = 0x1c82bd8u;
}
