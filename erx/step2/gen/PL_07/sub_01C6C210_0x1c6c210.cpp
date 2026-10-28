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

// Function: sub_01C6C210
// Address: 0x1c6c210 - 0x1c6c320
void sub_01C6C210_0x1c6c210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C6C210_0x1c6c210");
#endif

    switch (ctx->pc) {
        case 0x1c6c230u: goto label_1c6c230;
        case 0x1c6c244u: goto label_1c6c244;
        case 0x1c6c248u: goto label_1c6c248;
        case 0x1c6c264u: goto label_1c6c264;
        case 0x1c6c274u: goto label_1c6c274;
        case 0x1c6c2c0u: goto label_1c6c2c0;
        case 0x1c6c2fcu: goto label_1c6c2fc;
        case 0x1c6c308u: goto label_1c6c308;
        default: break;
    }

    ctx->pc = 0x1c6c210u;

    // 0x1c6c210: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c6c210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c6c214: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c6c214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c6c218: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c6c218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c6c21c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c6c21cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c6c220: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c6c220u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c224: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c6c224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c6c228: 0xc71a798  jal         func_1C69E60
    ctx->pc = 0x1C6C228u;
    SET_GPR_U32(ctx, 31, 0x1C6C230u);
    ctx->pc = 0x1C6C22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C228u;
    // 0x1c6c22c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E60u, 0x1C6C228u, 0x1C6C230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C230u;
label_1c6c230:
    // 0x1c6c230: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1c6c230u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1c6c234: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C6C234u;
    {
        const bool branch_taken_0x1c6c234 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6C238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6C234u;
        // 0x1c6c238: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6c234) {
            ctx->pc = 0x1C6C280u;
            goto label_1c6c280;
        }
    }
    ctx->pc = 0x1C6C23Cu;
    // 0x1c6c23c: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C6C23Cu;
    {
        const bool branch_taken_0x1c6c23c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1c6c23c) {
            ctx->pc = 0x1C6C25Cu;
            goto label_1c6c25c;
        }
    }
    ctx->pc = 0x1C6C244u;
label_1c6c244:
    // 0x1c6c244: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c6c244u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c6c248:
    // 0x1c6c248: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c6c248u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6c24c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c6c24cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c6c250: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c6c250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6c254: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6C254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6C258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6C254u;
        // 0x1c6c258: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6C254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6C25Cu;
label_1c6c25c:
    // 0x1c6c25c: 0xc71a794  jal         func_1C69E50
    ctx->pc = 0x1C6C25Cu;
    SET_GPR_U32(ctx, 31, 0x1C6C264u);
    ctx->pc = 0x1C6C260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C25Cu;
    // 0x1c6c260: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E50u, 0x1C6C25Cu, 0x1C6C264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C264u;
label_1c6c264:
    // 0x1c6c264: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1C6C264u;
    {
        const bool branch_taken_0x1c6c264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1C6C268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6C264u;
        // 0x1c6c268: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6c264) {
            ctx->pc = 0x1C6C244u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6c244;
        }
    }
    ctx->pc = 0x1C6C26Cu;
    // 0x1c6c26c: 0xc71a796  jal         func_1C69E58
    ctx->pc = 0x1C6C26Cu;
    SET_GPR_U32(ctx, 31, 0x1C6C274u);
    ctx->pc = 0x1C69E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E58u, 0x1C6C26Cu, 0x1C6C274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C274u;
label_1c6c274:
    // 0x1c6c274: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1C6C274u;
    {
        const bool branch_taken_0x1c6c274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6C278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6C274u;
        // 0x1c6c278: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6c274) {
            ctx->pc = 0x1C6C248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6c248;
        }
    }
    ctx->pc = 0x1C6C27Cu;
    // 0x1c6c27c: 0x0  nop
    ctx->pc = 0x1c6c27cu;
    // NOP
label_1c6c280:
    // 0x1c6c280: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1c6c280u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1c6c284: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C6C284u;
    {
        const bool branch_taken_0x1c6c284 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6C288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6C284u;
        // 0x1c6c288: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6c284) {
            ctx->pc = 0x1C6C248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6c248;
        }
    }
    ctx->pc = 0x1C6C28Cu;
    // 0x1c6c28c: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1c6c28cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1c6c290: 0x3c0e01c7  lui         $t6, 0x1C7
    ctx->pc = 0x1c6c290u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)455 << 16));
    // 0x1c6c294: 0x25cef380  addiu       $t6, $t6, -0xC80
    ctx->pc = 0x1c6c294u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294964096));
    // 0x1c6c298: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c6c298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c29c: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1c6c29cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1c6c2a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c6c2a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c2a4: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1c6c2a4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1c6c2a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c6c2a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c2ac: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1c6c2acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c6c2b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c6c2b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c2b4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c6c2b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6c2b8: 0xc71a7a4  jal         func_1C69E90
    ctx->pc = 0x1C6C2B8u;
    SET_GPR_U32(ctx, 31, 0x1C6C2C0u);
    ctx->pc = 0x1C6C2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C2B8u;
    // 0x1c6c2bc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E90u, 0x1C6C2B8u, 0x1C6C2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C2C0u;
label_1c6c2c0:
    // 0x1c6c2c0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c6c2c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6c2c4: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1C6C2C4u;
    {
        const bool branch_taken_0x1c6c2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6C2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6C2C4u;
        // 0x1c6c2c8: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6c2c4) {
            ctx->pc = 0x1C6C244u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6c244;
        }
    }
    ctx->pc = 0x1C6C2CCu;
    // 0x1c6c2cc: 0x0  nop
    ctx->pc = 0x1c6c2ccu;
    // NOP
    // 0x1c6c2d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c6c2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c6c2d4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c6c2d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c6c2d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c6c2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c6c2dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c6c2dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c2e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c6c2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c6c2e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c6c2e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c2e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c6c2e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c2ec: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c6c2ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6c2f0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c6c2f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c2f4: 0xc71a7a4  jal         func_1C69E90
    ctx->pc = 0x1C6C2F4u;
    SET_GPR_U32(ctx, 31, 0x1C6C2FCu);
    ctx->pc = 0x1C6C2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C2F4u;
    // 0x1c6c2f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E90u, 0x1C6C2F4u, 0x1C6C2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C2FCu;
label_1c6c2fc:
    // 0x1c6c2fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6c2fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c300: 0xc71a79c  jal         func_1C69E70
    ctx->pc = 0x1C6C300u;
    SET_GPR_U32(ctx, 31, 0x1C6C308u);
    ctx->pc = 0x1C6C304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C300u;
    // 0x1c6c304: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E70u, 0x1C6C300u, 0x1C6C308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C308u;
label_1c6c308:
    // 0x1c6c308: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c6c308u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c6c30c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c6c30cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c6c310: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c6c310u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6c314: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6C314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6C318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6C314u;
        // 0x1c6c318: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6C314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6C31Cu;
    // 0x1c6c31c: 0x0  nop
    ctx->pc = 0x1c6c31cu;
    // NOP
    ctx->pc = 0x1c6c320u;
}
