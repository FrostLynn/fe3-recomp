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

// Function: sub_01D713E0
// Address: 0x1d713e0 - 0x1d714f0
void sub_01D713E0_0x1d713e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D713E0_0x1d713e0");
#endif

    switch (ctx->pc) {
        case 0x1d71400u: goto label_1d71400;
        case 0x1d71414u: goto label_1d71414;
        case 0x1d71418u: goto label_1d71418;
        case 0x1d71434u: goto label_1d71434;
        case 0x1d71444u: goto label_1d71444;
        case 0x1d71490u: goto label_1d71490;
        case 0x1d714ccu: goto label_1d714cc;
        case 0x1d714d8u: goto label_1d714d8;
        default: break;
    }

    ctx->pc = 0x1d713e0u;

    // 0x1d713e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d713e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d713e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d713e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d713e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d713e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d713ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d713ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d713f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d713f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d713f4: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d713f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d713f8: 0xc75c00c  jal         func_1D70030
    ctx->pc = 0x1D713F8u;
    SET_GPR_U32(ctx, 31, 0x1D71400u);
    ctx->pc = 0x1D713FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D713F8u;
    // 0x1d713fc: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70030u, 0x1D713F8u, 0x1D71400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D71400u;
label_1d71400:
    // 0x1d71400: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1d71400u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d71404: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D71404u;
    {
        const bool branch_taken_0x1d71404 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D71408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D71404u;
        // 0x1d71408: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d71404) {
            ctx->pc = 0x1D71450u;
            goto label_1d71450;
        }
    }
    ctx->pc = 0x1D7140Cu;
    // 0x1d7140c: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D7140Cu;
    {
        const bool branch_taken_0x1d7140c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1d7140c) {
            ctx->pc = 0x1D7142Cu;
            goto label_1d7142c;
        }
    }
    ctx->pc = 0x1D71414u;
label_1d71414:
    // 0x1d71414: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d71414u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d71418:
    // 0x1d71418: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d71418u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7141c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d7141cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d71420: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d71420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d71424: 0x3e00008  jr          $ra
    ctx->pc = 0x1D71424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D71428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D71424u;
        // 0x1d71428: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D71424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7142Cu;
label_1d7142c:
    // 0x1d7142c: 0xc75c008  jal         func_1D70020
    ctx->pc = 0x1D7142Cu;
    SET_GPR_U32(ctx, 31, 0x1D71434u);
    ctx->pc = 0x1D71430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7142Cu;
    // 0x1d71430: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70020u, 0x1D7142Cu, 0x1D71434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D71434u;
label_1d71434:
    // 0x1d71434: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D71434u;
    {
        const bool branch_taken_0x1d71434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1D71438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D71434u;
        // 0x1d71438: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d71434) {
            ctx->pc = 0x1D71414u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d71414;
        }
    }
    ctx->pc = 0x1D7143Cu;
    // 0x1d7143c: 0xc75c00a  jal         func_1D70028
    ctx->pc = 0x1D7143Cu;
    SET_GPR_U32(ctx, 31, 0x1D71444u);
    ctx->pc = 0x1D70028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70028u, 0x1D7143Cu, 0x1D71444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D71444u;
label_1d71444:
    // 0x1d71444: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1D71444u;
    {
        const bool branch_taken_0x1d71444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D71448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D71444u;
        // 0x1d71448: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d71444) {
            ctx->pc = 0x1D71418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d71418;
        }
    }
    ctx->pc = 0x1D7144Cu;
    // 0x1d7144c: 0x0  nop
    ctx->pc = 0x1d7144cu;
    // NOP
label_1d71450:
    // 0x1d71450: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1d71450u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1d71454: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D71454u;
    {
        const bool branch_taken_0x1d71454 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D71458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D71454u;
        // 0x1d71458: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d71454) {
            ctx->pc = 0x1D71418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d71418;
        }
    }
    ctx->pc = 0x1D7145Cu;
    // 0x1d7145c: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1d7145cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1d71460: 0x3c0e01d7  lui         $t6, 0x1D7
    ctx->pc = 0x1d71460u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)471 << 16));
    // 0x1d71464: 0x25ce3dc0  addiu       $t6, $t6, 0x3DC0
    ctx->pc = 0x1d71464u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 15808));
    // 0x1d71468: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d71468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7146c: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d7146cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d71470: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d71470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d71474: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d71474u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d71478: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d71478u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7147c: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d7147cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d71480: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d71480u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d71484: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d71484u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d71488: 0xc75c018  jal         func_1D70060
    ctx->pc = 0x1D71488u;
    SET_GPR_U32(ctx, 31, 0x1D71490u);
    ctx->pc = 0x1D7148Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D71488u;
    // 0x1d7148c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70060u, 0x1D71488u, 0x1D71490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D71490u;
label_1d71490:
    // 0x1d71490: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d71490u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d71494: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1D71494u;
    {
        const bool branch_taken_0x1d71494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D71498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D71494u;
        // 0x1d71498: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d71494) {
            ctx->pc = 0x1D71414u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d71414;
        }
    }
    ctx->pc = 0x1D7149Cu;
    // 0x1d7149c: 0x0  nop
    ctx->pc = 0x1d7149cu;
    // NOP
    // 0x1d714a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d714a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d714a4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d714a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d714a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d714a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d714ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d714acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d714b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d714b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d714b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d714b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d714b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d714b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d714bc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d714bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d714c0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d714c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d714c4: 0xc75c018  jal         func_1D70060
    ctx->pc = 0x1D714C4u;
    SET_GPR_U32(ctx, 31, 0x1D714CCu);
    ctx->pc = 0x1D714C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D714C4u;
    // 0x1d714c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70060u, 0x1D714C4u, 0x1D714CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D714CCu;
label_1d714cc:
    // 0x1d714cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d714ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d714d0: 0xc75c010  jal         func_1D70040
    ctx->pc = 0x1D714D0u;
    SET_GPR_U32(ctx, 31, 0x1D714D8u);
    ctx->pc = 0x1D714D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D714D0u;
    // 0x1d714d4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D70040u, 0x1D714D0u, 0x1D714D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D714D8u;
label_1d714d8:
    // 0x1d714d8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d714d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d714dc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d714dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d714e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d714e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d714e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D714E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D714E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D714E4u;
        // 0x1d714e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D714E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D714ECu;
    // 0x1d714ec: 0x0  nop
    ctx->pc = 0x1d714ecu;
    // NOP
    ctx->pc = 0x1d714f0u;
}
