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

// Function: sub_01C78398
// Address: 0x1c78398 - 0x1c78488
void sub_01C78398_0x1c78398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C78398_0x1c78398");
#endif

    switch (ctx->pc) {
        case 0x1c783acu: goto label_1c783ac;
        case 0x1c783c0u: goto label_1c783c0;
        case 0x1c783c4u: goto label_1c783c4;
        case 0x1c78404u: goto label_1c78404;
        case 0x1c78414u: goto label_1c78414;
        case 0x1c78438u: goto label_1c78438;
        case 0x1c78444u: goto label_1c78444;
        case 0x1c78450u: goto label_1c78450;
        default: break;
    }

    ctx->pc = 0x1c78398u;

    // 0x1c78398: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c78398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c7839c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c7839cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c783a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c783a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c783a4: 0xc71d652  jal         func_1C75948
    ctx->pc = 0x1C783A4u;
    SET_GPR_U32(ctx, 31, 0x1C783ACu);
    ctx->pc = 0x1C783A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C783A4u;
    // 0x1c783a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75948u, 0x1C783A4u, 0x1C783ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C783ACu;
label_1c783ac:
    // 0x1c783ac: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c783acu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c783b0: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C783B0u;
    {
        const bool branch_taken_0x1c783b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C783B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C783B0u;
        // 0x1c783b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c783b0) {
            ctx->pc = 0x1C783D4u;
            goto label_1c783d4;
        }
    }
    ctx->pc = 0x1C783B8u;
    // 0x1c783b8: 0xc71d654  jal         func_1C75950
    ctx->pc = 0x1C783B8u;
    SET_GPR_U32(ctx, 31, 0x1C783C0u);
    ctx->pc = 0x1C75950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75950u, 0x1C783B8u, 0x1C783C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C783C0u;
label_1c783c0:
    // 0x1c783c0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c783c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c783c4:
    // 0x1c783c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c783c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c783c8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c783c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c783cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C783CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C783D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C783CCu;
        // 0x1c783d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C783CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C783D4u;
label_1c783d4:
    // 0x1c783d4: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C783D4u;
    {
        const bool branch_taken_0x1c783d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C783D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C783D4u;
        // 0x1c783d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c783d4) {
            ctx->pc = 0x1C783C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c783c4;
        }
    }
    ctx->pc = 0x1C783DCu;
    // 0x1c783dc: 0x0  nop
    ctx->pc = 0x1c783dcu;
    // NOP
    // 0x1c783e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c783e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c783e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c783e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c783e8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c783e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c783ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c783ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c783f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c783f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c783f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c783f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c783f8: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c783f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c783fc: 0xc71d656  jal         func_1C75958
    ctx->pc = 0x1C783FCu;
    SET_GPR_U32(ctx, 31, 0x1C78404u);
    ctx->pc = 0x1C78400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C783FCu;
    // 0x1c78400: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75958u, 0x1C783FCu, 0x1C78404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C78404u;
label_1c78404:
    // 0x1c78404: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c78404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c78408: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c78408u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7840c: 0xc71d658  jal         func_1C75960
    ctx->pc = 0x1C7840Cu;
    SET_GPR_U32(ctx, 31, 0x1C78414u);
    ctx->pc = 0x1C78410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7840Cu;
    // 0x1c78410: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75960u, 0x1C7840Cu, 0x1C78414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C78414u;
label_1c78414:
    // 0x1c78414: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c78414u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78418: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c78418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c7841c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c7841cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c78420: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c78420u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78424: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c78424u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c78428: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c78428u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7842c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7842cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78430: 0xc71d662  jal         func_1C75988
    ctx->pc = 0x1C78430u;
    SET_GPR_U32(ctx, 31, 0x1C78438u);
    ctx->pc = 0x1C78434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C78430u;
    // 0x1c78434: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75988u, 0x1C78430u, 0x1C78438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C78438u;
label_1c78438:
    // 0x1c78438: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c78438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7843c: 0xc71d65a  jal         func_1C75968
    ctx->pc = 0x1C7843Cu;
    SET_GPR_U32(ctx, 31, 0x1C78444u);
    ctx->pc = 0x1C78440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7843Cu;
    // 0x1c78440: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75968u, 0x1C7843Cu, 0x1C78444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C78444u;
label_1c78444:
    // 0x1c78444: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c78444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78448: 0xc71e0c4  jal         func_1C78310
    ctx->pc = 0x1C78448u;
    SET_GPR_U32(ctx, 31, 0x1C78450u);
    ctx->pc = 0x1C7844Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C78448u;
    // 0x1c7844c: 0x240500ad  addiu       $a1, $zero, 0xAD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 173));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C78310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C78310u, 0x1C78448u, 0x1C78450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C78450u;
label_1c78450:
    // 0x1c78450: 0x8e0a0000  lw          $t2, 0x0($s0)
    ctx->pc = 0x1c78450u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c78454: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1c78454u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78458: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1c78458u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7845c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c7845cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c78460: 0x3c0501c8  lui         $a1, 0x1C8
    ctx->pc = 0x1c78460u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)456 << 16));
    // 0x1c78464: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c78464u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c78468: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c78468u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c7846c: 0x25440140  addiu       $a0, $t2, 0x140
    ctx->pc = 0x1c7846cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 320));
    // 0x1c78470: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c78470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c78474: 0x24a5a6d0  addiu       $a1, $a1, -0x5930
    ctx->pc = 0x1c78474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944464));
    // 0x1c78478: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c78478u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7847c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c7847cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78480: 0x871d8f8  j           func_1C763E0
    ctx->pc = 0x1C78480u;
    ctx->pc = 0x1C78484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C78480u;
    // 0x1c78484: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C763E0u;
    sub_01C763E0_0x1c763e0(rdram, ctx, runtime); return;
    ctx->pc = 0x1C78488u;
}
