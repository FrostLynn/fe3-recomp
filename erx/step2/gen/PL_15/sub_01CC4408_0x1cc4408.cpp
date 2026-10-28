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

// Function: sub_01CC4408
// Address: 0x1cc4408 - 0x1cc44f0
void sub_01CC4408_0x1cc4408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC4408_0x1cc4408");
#endif

    switch (ctx->pc) {
        case 0x1cc441cu: goto label_1cc441c;
        case 0x1cc4430u: goto label_1cc4430;
        case 0x1cc4434u: goto label_1cc4434;
        case 0x1cc4450u: goto label_1cc4450;
        case 0x1cc445cu: goto label_1cc445c;
        case 0x1cc449cu: goto label_1cc449c;
        case 0x1cc44c8u: goto label_1cc44c8;
        case 0x1cc44d4u: goto label_1cc44d4;
        case 0x1cc44e0u: goto label_1cc44e0;
        default: break;
    }

    ctx->pc = 0x1cc4408u;

    // 0x1cc4408: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cc4408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cc440c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cc440cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cc4410: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cc4410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cc4414: 0xc730914  jal         func_1CC2450
    ctx->pc = 0x1CC4414u;
    SET_GPR_U32(ctx, 31, 0x1CC441Cu);
    ctx->pc = 0x1CC4418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC4414u;
    // 0x1cc4418: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2450u, 0x1CC4414u, 0x1CC441Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC441Cu;
label_1cc441c:
    // 0x1cc441c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cc441cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc4420: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CC4420u;
    {
        const bool branch_taken_0x1cc4420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CC4424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC4420u;
        // 0x1cc4424: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc4420) {
            ctx->pc = 0x1CC4444u;
            goto label_1cc4444;
        }
    }
    ctx->pc = 0x1CC4428u;
    // 0x1cc4428: 0xc730916  jal         func_1CC2458
    ctx->pc = 0x1CC4428u;
    SET_GPR_U32(ctx, 31, 0x1CC4430u);
    ctx->pc = 0x1CC2458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2458u, 0x1CC4428u, 0x1CC4430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC4430u;
label_1cc4430:
    // 0x1cc4430: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1cc4430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1cc4434:
    // 0x1cc4434: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cc4434u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc4438: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cc4438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cc443c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC443Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC4440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC443Cu;
        // 0x1cc4440: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC443Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC4444u;
label_1cc4444:
    // 0x1cc4444: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cc4444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cc4448: 0xc730918  jal         func_1CC2460
    ctx->pc = 0x1CC4448u;
    SET_GPR_U32(ctx, 31, 0x1CC4450u);
    ctx->pc = 0x1CC444Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC4448u;
    // 0x1cc444c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2460u, 0x1CC4448u, 0x1CC4450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC4450u;
label_1cc4450:
    // 0x1cc4450: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1cc4450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1cc4454: 0xc730926  jal         func_1CC2498
    ctx->pc = 0x1CC4454u;
    SET_GPR_U32(ctx, 31, 0x1CC445Cu);
    ctx->pc = 0x1CC4458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC4454u;
    // 0x1cc4458: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2498u, 0x1CC4454u, 0x1CC445Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC445Cu;
label_1cc445c:
    // 0x1cc445c: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1CC445Cu;
    {
        const bool branch_taken_0x1cc445c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC4460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC445Cu;
        // 0x1cc4460: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc445c) {
            ctx->pc = 0x1CC4434u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc4434;
        }
    }
    ctx->pc = 0x1CC4464u;
    // 0x1cc4464: 0x0  nop
    ctx->pc = 0x1cc4464u;
    // NOP
    // 0x1cc4468: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cc4468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cc446c: 0x3c0f01cd  lui         $t7, 0x1CD
    ctx->pc = 0x1cc446cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)461 << 16));
    // 0x1cc4470: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1cc4470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1cc4474: 0x25eed3c0  addiu       $t6, $t7, -0x2C40
    ctx->pc = 0x1cc4474u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 4294955968));
    // 0x1cc4478: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1cc4478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1cc447c: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1cc447cu;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1CCD3C4u));
    // 0x1cc4480: 0x8dedd3c0  lw          $t5, -0x2C40($t7)
    ctx->pc = 0x1cc4480u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1CCD3C0u));
    // 0x1cc4484: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cc4484u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc4488: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1cc4488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1cc448c: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1cc448cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1cc4490: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1cc4490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1cc4494: 0xc730918  jal         func_1CC2460
    ctx->pc = 0x1CC4494u;
    SET_GPR_U32(ctx, 31, 0x1CC449Cu);
    ctx->pc = 0x1CC4498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC4494u;
    // 0x1cc4498: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2460u, 0x1CC4494u, 0x1CC449Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC449Cu;
label_1cc449c:
    // 0x1cc449c: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1cc449cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1cc44a0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cc44a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc44a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cc44a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc44a8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cc44a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc44ac: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1cc44acu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1cc44b0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cc44b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc44b4: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1cc44b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1cc44b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cc44b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc44bc: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1cc44bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1cc44c0: 0xc730924  jal         func_1CC2490
    ctx->pc = 0x1CC44C0u;
    SET_GPR_U32(ctx, 31, 0x1CC44C8u);
    ctx->pc = 0x1CC44C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC44C0u;
    // 0x1cc44c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2490u, 0x1CC44C0u, 0x1CC44C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC44C8u;
label_1cc44c8:
    // 0x1cc44c8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cc44c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cc44cc: 0xc730918  jal         func_1CC2460
    ctx->pc = 0x1CC44CCu;
    SET_GPR_U32(ctx, 31, 0x1CC44D4u);
    ctx->pc = 0x1CC44D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC44CCu;
    // 0x1cc44d0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2460u, 0x1CC44CCu, 0x1CC44D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC44D4u;
label_1cc44d4:
    // 0x1cc44d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cc44d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc44d8: 0xc730928  jal         func_1CC24A0
    ctx->pc = 0x1CC44D8u;
    SET_GPR_U32(ctx, 31, 0x1CC44E0u);
    ctx->pc = 0x1CC44DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC44D8u;
    // 0x1cc44dc: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC24A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC24A0u, 0x1CC44D8u, 0x1CC44E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC44E0u;
label_1cc44e0:
    // 0x1cc44e0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1cc44e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc44e4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1cc44e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cc44e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC44E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC44ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC44E8u;
        // 0x1cc44ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC44E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC44F0u;
}
