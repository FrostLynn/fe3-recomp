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

// Function: sub_01CF1418
// Address: 0x1cf1418 - 0x1cf14a0
void sub_01CF1418_0x1cf1418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CF1418_0x1cf1418");
#endif

    switch (ctx->pc) {
        case 0x1cf1434u: goto label_1cf1434;
        case 0x1cf146cu: goto label_1cf146c;
        case 0x1cf1480u: goto label_1cf1480;
        default: break;
    }

    ctx->pc = 0x1cf1418u;

    // 0x1cf1418: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cf1418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cf141c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cf141cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cf1420: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cf1420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cf1424: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cf1424u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1428: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1cf1428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1cf142c: 0xc73bd5a  jal         func_1CEF568
    ctx->pc = 0x1CF142Cu;
    SET_GPR_U32(ctx, 31, 0x1CF1434u);
    ctx->pc = 0x1CF1430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF142Cu;
    // 0x1cf1430: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF568u, 0x1CF142Cu, 0x1CF1434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1434u;
label_1cf1434:
    // 0x1cf1434: 0x8c4f0008  lw          $t7, 0x8($v0)
    ctx->pc = 0x1cf1434u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1cf1438: 0x25effff5  addiu       $t7, $t7, -0xB
    ctx->pc = 0x1cf1438u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967285));
    // 0x1cf143c: 0x2dee0013  sltiu       $t6, $t7, 0x13
    ctx->pc = 0x1cf143cu;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
    // 0x1cf1440: 0x11c00017  beqz        $t6, . + 4 + (0x17 << 2)
    ctx->pc = 0x1CF1440u;
    {
        const bool branch_taken_0x1cf1440 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF1444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF1440u;
        // 0x1cf1444: 0x3c0e01cf  lui         $t6, 0x1CF (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)463 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf1440) {
            ctx->pc = 0x1CF14A0u;
            return;
        }
    }
    ctx->pc = 0x1CF1448u;
    // 0x1cf1448: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1cf1448u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1cf144c: 0x25ce2f9c  addiu       $t6, $t6, 0x2F9C
    ctx->pc = 0x1cf144cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 12188));
    // 0x1cf1450: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1cf1450u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1cf1454: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1cf1454u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1cf1458: 0x1a00008  jr          $t5
    ctx->pc = 0x1CF1458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CF1460u: goto label_1cf1460;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF1458u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1CF1460u;
label_1cf1460:
    // 0x1cf1460: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cf1460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1464: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cf1464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1468: 0x24060053  addiu       $a2, $zero, 0x53
    ctx->pc = 0x1cf1468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
label_1cf146c:
    // 0x1cf146c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cf146cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf1470: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cf1470u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1474: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1cf1474u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cf1478: 0xc73bd64  jal         func_1CEF590
    ctx->pc = 0x1CF1478u;
    SET_GPR_U32(ctx, 31, 0x1CF1480u);
    ctx->pc = 0x1CF147Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1478u;
    // 0x1cf147c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF590u, 0x1CF1478u, 0x1CF1480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1480u;
label_1cf1480:
    // 0x1cf1480: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cf1480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1484: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cf1484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cf1488: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cf1488u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf148c: 0x2405007b  addiu       $a1, $zero, 0x7B
    ctx->pc = 0x1cf148cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    // 0x1cf1490: 0x240600dd  addiu       $a2, $zero, 0xDD
    ctx->pc = 0x1cf1490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 221));
    // 0x1cf1494: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cf1494u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf1498: 0x873c02c  j           func_1CF00B0
    ctx->pc = 0x1CF1498u;
    ctx->pc = 0x1CF149Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1498u;
    // 0x1cf149c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF00B0u;
    sub_01CF00B0_0x1cf00b0(rdram, ctx, runtime); return;
    ctx->pc = 0x1CF14A0u;
}
