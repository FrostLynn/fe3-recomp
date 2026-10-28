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

// Function: sub_01C6BF98
// Address: 0x1c6bf98 - 0x1c6c0a8
void sub_01C6BF98_0x1c6bf98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C6BF98_0x1c6bf98");
#endif

    switch (ctx->pc) {
        case 0x1c6bfb8u: goto label_1c6bfb8;
        case 0x1c6bfccu: goto label_1c6bfcc;
        case 0x1c6bfd0u: goto label_1c6bfd0;
        case 0x1c6bfecu: goto label_1c6bfec;
        case 0x1c6bffcu: goto label_1c6bffc;
        case 0x1c6c048u: goto label_1c6c048;
        case 0x1c6c084u: goto label_1c6c084;
        case 0x1c6c090u: goto label_1c6c090;
        default: break;
    }

    ctx->pc = 0x1c6bf98u;

    // 0x1c6bf98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c6bf98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c6bf9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c6bf9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c6bfa0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c6bfa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c6bfa4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c6bfa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c6bfa8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c6bfa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6bfac: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c6bfacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c6bfb0: 0xc71a798  jal         func_1C69E60
    ctx->pc = 0x1C6BFB0u;
    SET_GPR_U32(ctx, 31, 0x1C6BFB8u);
    ctx->pc = 0x1C6BFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BFB0u;
    // 0x1c6bfb4: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E60u, 0x1C6BFB0u, 0x1C6BFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BFB8u;
label_1c6bfb8:
    // 0x1c6bfb8: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1c6bfb8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1c6bfbc: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C6BFBCu;
    {
        const bool branch_taken_0x1c6bfbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6BFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6BFBCu;
        // 0x1c6bfc0: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6bfbc) {
            ctx->pc = 0x1C6C008u;
            goto label_1c6c008;
        }
    }
    ctx->pc = 0x1C6BFC4u;
    // 0x1c6bfc4: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C6BFC4u;
    {
        const bool branch_taken_0x1c6bfc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1c6bfc4) {
            ctx->pc = 0x1C6BFE4u;
            goto label_1c6bfe4;
        }
    }
    ctx->pc = 0x1C6BFCCu;
label_1c6bfcc:
    // 0x1c6bfcc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c6bfccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c6bfd0:
    // 0x1c6bfd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c6bfd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6bfd4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c6bfd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c6bfd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c6bfd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6bfdc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6BFDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6BFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6BFDCu;
        // 0x1c6bfe0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6BFDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6BFE4u;
label_1c6bfe4:
    // 0x1c6bfe4: 0xc71a794  jal         func_1C69E50
    ctx->pc = 0x1C6BFE4u;
    SET_GPR_U32(ctx, 31, 0x1C6BFECu);
    ctx->pc = 0x1C6BFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BFE4u;
    // 0x1c6bfe8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E50u, 0x1C6BFE4u, 0x1C6BFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BFECu;
label_1c6bfec:
    // 0x1c6bfec: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1C6BFECu;
    {
        const bool branch_taken_0x1c6bfec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1C6BFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6BFECu;
        // 0x1c6bff0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6bfec) {
            ctx->pc = 0x1C6BFCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6bfcc;
        }
    }
    ctx->pc = 0x1C6BFF4u;
    // 0x1c6bff4: 0xc71a796  jal         func_1C69E58
    ctx->pc = 0x1C6BFF4u;
    SET_GPR_U32(ctx, 31, 0x1C6BFFCu);
    ctx->pc = 0x1C69E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E58u, 0x1C6BFF4u, 0x1C6BFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BFFCu;
label_1c6bffc:
    // 0x1c6bffc: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1C6BFFCu;
    {
        const bool branch_taken_0x1c6bffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6C000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6BFFCu;
        // 0x1c6c000: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6bffc) {
            ctx->pc = 0x1C6BFD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6bfd0;
        }
    }
    ctx->pc = 0x1C6C004u;
    // 0x1c6c004: 0x0  nop
    ctx->pc = 0x1c6c004u;
    // NOP
label_1c6c008:
    // 0x1c6c008: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1c6c008u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1c6c00c: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C6C00Cu;
    {
        const bool branch_taken_0x1c6c00c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6C010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6C00Cu;
        // 0x1c6c010: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6c00c) {
            ctx->pc = 0x1C6BFD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6bfd0;
        }
    }
    ctx->pc = 0x1C6C014u;
    // 0x1c6c014: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1c6c014u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1c6c018: 0x3c0e01c7  lui         $t6, 0x1C7
    ctx->pc = 0x1c6c018u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)455 << 16));
    // 0x1c6c01c: 0x25cef360  addiu       $t6, $t6, -0xCA0
    ctx->pc = 0x1c6c01cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294964064));
    // 0x1c6c020: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c6c020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c024: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1c6c024u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1c6c028: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c6c028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c02c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1c6c02cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1c6c030: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c6c030u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c034: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1c6c034u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c6c038: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c6c038u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c03c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c6c03cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6c040: 0xc71a7a4  jal         func_1C69E90
    ctx->pc = 0x1C6C040u;
    SET_GPR_U32(ctx, 31, 0x1C6C048u);
    ctx->pc = 0x1C6C044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C040u;
    // 0x1c6c044: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E90u, 0x1C6C040u, 0x1C6C048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C048u;
label_1c6c048:
    // 0x1c6c048: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c6c048u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6c04c: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1C6C04Cu;
    {
        const bool branch_taken_0x1c6c04c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6C050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6C04Cu;
        // 0x1c6c050: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6c04c) {
            ctx->pc = 0x1C6BFCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6bfcc;
        }
    }
    ctx->pc = 0x1C6C054u;
    // 0x1c6c054: 0x0  nop
    ctx->pc = 0x1c6c054u;
    // NOP
    // 0x1c6c058: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c6c058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c6c05c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c6c05cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c6c060: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c6c060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c6c064: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c6c064u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c068: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c6c068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c6c06c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c6c06cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c070: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c6c070u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c074: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c6c074u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6c078: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c6c078u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c07c: 0xc71a7a4  jal         func_1C69E90
    ctx->pc = 0x1C6C07Cu;
    SET_GPR_U32(ctx, 31, 0x1C6C084u);
    ctx->pc = 0x1C6C080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C07Cu;
    // 0x1c6c080: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E90u, 0x1C6C07Cu, 0x1C6C084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C084u;
label_1c6c084:
    // 0x1c6c084: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6c084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c088: 0xc71a79c  jal         func_1C69E70
    ctx->pc = 0x1C6C088u;
    SET_GPR_U32(ctx, 31, 0x1C6C090u);
    ctx->pc = 0x1C6C08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C088u;
    // 0x1c6c08c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E70u, 0x1C6C088u, 0x1C6C090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C090u;
label_1c6c090:
    // 0x1c6c090: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c6c090u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c6c094: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c6c094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c6c098: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c6c098u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6c09c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6C09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6C0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6C09Cu;
        // 0x1c6c0a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6C09Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6C0A4u;
    // 0x1c6c0a4: 0x0  nop
    ctx->pc = 0x1c6c0a4u;
    // NOP
    ctx->pc = 0x1c6c0a8u;
}
