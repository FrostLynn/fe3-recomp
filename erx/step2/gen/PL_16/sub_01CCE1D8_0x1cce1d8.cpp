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

// Function: sub_01CCE1D8
// Address: 0x1cce1d8 - 0x1cce300
void sub_01CCE1D8_0x1cce1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCE1D8_0x1cce1d8");
#endif

    switch (ctx->pc) {
        case 0x1cce200u: goto label_1cce200;
        case 0x1cce214u: goto label_1cce214;
        case 0x1cce218u: goto label_1cce218;
        case 0x1cce238u: goto label_1cce238;
        case 0x1cce248u: goto label_1cce248;
        case 0x1cce27cu: goto label_1cce27c;
        case 0x1cce2b4u: goto label_1cce2b4;
        case 0x1cce2c0u: goto label_1cce2c0;
        case 0x1cce2d0u: goto label_1cce2d0;
        case 0x1cce2e8u: goto label_1cce2e8;
        default: break;
    }

    ctx->pc = 0x1cce1d8u;

    // 0x1cce1d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cce1d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cce1dc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cce1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cce1e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cce1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cce1e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cce1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cce1e8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1cce1e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce1ec: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1cce1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1cce1f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cce1f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce1f4: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cce1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cce1f8: 0xc733516  jal         func_1CCD458
    ctx->pc = 0x1CCE1F8u;
    SET_GPR_U32(ctx, 31, 0x1CCE200u);
    ctx->pc = 0x1CCE1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE1F8u;
    // 0x1cce1fc: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD458u, 0x1CCE1F8u, 0x1CCE200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE200u;
label_1cce200:
    // 0x1cce200: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1cce200u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1cce204: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CCE204u;
    {
        const bool branch_taken_0x1cce204 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCE208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCE204u;
        // 0x1cce208: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cce204) {
            ctx->pc = 0x1CCE250u;
            goto label_1cce250;
        }
    }
    ctx->pc = 0x1CCE20Cu;
    // 0x1cce20c: 0x120f0008  beq         $s0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CCE20Cu;
    {
        const bool branch_taken_0x1cce20c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1cce20c) {
            ctx->pc = 0x1CCE230u;
            goto label_1cce230;
        }
    }
    ctx->pc = 0x1CCE214u;
label_1cce214:
    // 0x1cce214: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cce214u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cce218:
    // 0x1cce218: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cce218u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cce21c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cce21cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cce220: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cce220u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cce224: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1cce224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cce228: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCE228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCE22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCE228u;
        // 0x1cce22c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCE228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCE230u;
label_1cce230:
    // 0x1cce230: 0xc733512  jal         func_1CCD448
    ctx->pc = 0x1CCE230u;
    SET_GPR_U32(ctx, 31, 0x1CCE238u);
    ctx->pc = 0x1CCE234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE230u;
    // 0x1cce234: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD448u, 0x1CCE230u, 0x1CCE238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE238u;
label_1cce238:
    // 0x1cce238: 0x1450fff6  bne         $v0, $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1CCE238u;
    {
        const bool branch_taken_0x1cce238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1CCE23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCE238u;
        // 0x1cce23c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cce238) {
            ctx->pc = 0x1CCE214u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cce214;
        }
    }
    ctx->pc = 0x1CCE240u;
    // 0x1cce240: 0xc733514  jal         func_1CCD450
    ctx->pc = 0x1CCE240u;
    SET_GPR_U32(ctx, 31, 0x1CCE248u);
    ctx->pc = 0x1CCD450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD450u, 0x1CCE240u, 0x1CCE248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE248u;
label_1cce248:
    // 0x1cce248: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1CCE248u;
    {
        const bool branch_taken_0x1cce248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCE24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCE248u;
        // 0x1cce24c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cce248) {
            ctx->pc = 0x1CCE218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cce218;
        }
    }
    ctx->pc = 0x1CCE250u;
label_1cce250:
    // 0x1cce250: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1cce250u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1cce254: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1CCE254u;
    {
        const bool branch_taken_0x1cce254 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CCE258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCE254u;
        // 0x1cce258: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cce254) {
            ctx->pc = 0x1CCE218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cce218;
        }
    }
    ctx->pc = 0x1CCE25Cu;
    // 0x1cce25c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1cce25cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce260: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cce260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce264: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cce264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce268: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cce268u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce26c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cce26cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce270: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cce270u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cce274: 0xc733522  jal         func_1CCD488
    ctx->pc = 0x1CCE274u;
    SET_GPR_U32(ctx, 31, 0x1CCE27Cu);
    ctx->pc = 0x1CCE278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE274u;
    // 0x1cce278: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD488u, 0x1CCE274u, 0x1CCE27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE27Cu;
label_1cce27c:
    // 0x1cce27c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cce27cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cce280: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x1CCE280u;
    {
        const bool branch_taken_0x1cce280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCE284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCE280u;
        // 0x1cce284: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cce280) {
            ctx->pc = 0x1CCE214u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cce214;
        }
    }
    ctx->pc = 0x1CCE288u;
    // 0x1cce288: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cce288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cce28c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1cce28cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cce290: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cce290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cce294: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cce294u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce298: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cce298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cce29c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cce29cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce2a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cce2a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce2a4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cce2a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cce2a8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cce2a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce2ac: 0xc733522  jal         func_1CCD488
    ctx->pc = 0x1CCE2ACu;
    SET_GPR_U32(ctx, 31, 0x1CCE2B4u);
    ctx->pc = 0x1CCE2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE2ACu;
    // 0x1cce2b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD488u, 0x1CCE2ACu, 0x1CCE2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE2B4u;
label_1cce2b4:
    // 0x1cce2b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cce2b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce2b8: 0xc73351a  jal         func_1CCD468
    ctx->pc = 0x1CCE2B8u;
    SET_GPR_U32(ctx, 31, 0x1CCE2C0u);
    ctx->pc = 0x1CCE2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE2B8u;
    // 0x1cce2bc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD468u, 0x1CCE2B8u, 0x1CCE2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE2C0u;
label_1cce2c0:
    // 0x1cce2c0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cce2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cce2c4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1cce2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cce2c8: 0xc733516  jal         func_1CCD458
    ctx->pc = 0x1CCE2C8u;
    SET_GPR_U32(ctx, 31, 0x1CCE2D0u);
    ctx->pc = 0x1CCE2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE2C8u;
    // 0x1cce2cc: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD458u, 0x1CCE2C8u, 0x1CCE2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE2D0u;
label_1cce2d0:
    // 0x1cce2d0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cce2d0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cce2d4: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1cce2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1cce2d8: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1cce2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1cce2dc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cce2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cce2e0: 0xc733516  jal         func_1CCD458
    ctx->pc = 0x1CCE2E0u;
    SET_GPR_U32(ctx, 31, 0x1CCE2E8u);
    ctx->pc = 0x1CCE2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE2E0u;
    // 0x1cce2e4: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD458u, 0x1CCE2E0u, 0x1CCE2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE2E8u;
label_1cce2e8:
    // 0x1cce2e8: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1cce2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1cce2ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cce2ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cce2f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cce2f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cce2f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCE2F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCE2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCE2F4u;
        // 0x1cce2f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCE2F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCE2FCu;
    // 0x1cce2fc: 0x0  nop
    ctx->pc = 0x1cce2fcu;
    // NOP
    ctx->pc = 0x1cce300u;
}
