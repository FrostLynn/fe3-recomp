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

// Function: sub_01CF0458
// Address: 0x1cf0458 - 0x1cf0520
void sub_01CF0458_0x1cf0458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CF0458_0x1cf0458");
#endif

    switch (ctx->pc) {
        case 0x1cf0474u: goto label_1cf0474;
        case 0x1cf0484u: goto label_1cf0484;
        case 0x1cf0490u: goto label_1cf0490;
        case 0x1cf04a0u: goto label_1cf04a0;
        case 0x1cf04b8u: goto label_1cf04b8;
        case 0x1cf04e4u: goto label_1cf04e4;
        default: break;
    }

    ctx->pc = 0x1cf0458u;

    // 0x1cf0458: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cf0458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cf045c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cf045cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cf0460: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cf0460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cf0464: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cf0464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cf0468: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cf0468u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf046c: 0xc73bd58  jal         func_1CEF560
    ctx->pc = 0x1CF046Cu;
    SET_GPR_U32(ctx, 31, 0x1CF0474u);
    ctx->pc = 0x1CF0470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF046Cu;
    // 0x1cf0470: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF560u, 0x1CF046Cu, 0x1CF0474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF0474u;
label_1cf0474:
    // 0x1cf0474: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1cf0474u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1cf0478: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1cf0478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1cf047c: 0xc73c00e  jal         func_1CF0038
    ctx->pc = 0x1CF047Cu;
    SET_GPR_U32(ctx, 31, 0x1CF0484u);
    ctx->pc = 0x1CF0480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF047Cu;
    // 0x1cf0480: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF0038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF0038u, 0x1CF047Cu, 0x1CF0484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF0484u;
label_1cf0484:
    // 0x1cf0484: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1cf0484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cf0488: 0xc73bd58  jal         func_1CEF560
    ctx->pc = 0x1CF0488u;
    SET_GPR_U32(ctx, 31, 0x1CF0490u);
    ctx->pc = 0x1CF048Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF0488u;
    // 0x1cf048c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF560u, 0x1CF0488u, 0x1CF0490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF0490u;
label_1cf0490:
    // 0x1cf0490: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1cf0490u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1cf0494: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1cf0494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1cf0498: 0xc73c00e  jal         func_1CF0038
    ctx->pc = 0x1CF0498u;
    SET_GPR_U32(ctx, 31, 0x1CF04A0u);
    ctx->pc = 0x1CF049Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF0498u;
    // 0x1cf049c: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF0038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF0038u, 0x1CF0498u, 0x1CF04A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF04A0u;
label_1cf04a0:
    // 0x1cf04a0: 0x8e0f0018  lw          $t7, 0x18($s0)
    ctx->pc = 0x1cf04a0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1cf04a4: 0x55e00019  bnel        $t7, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1CF04A4u;
    {
        const bool branch_taken_0x1cf04a4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cf04a4) {
            ctx->pc = 0x1CF04A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CF04A4u;
            // 0x1cf04a8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF050Cu;
            goto label_1cf050c;
        }
    }
    ctx->pc = 0x1CF04ACu;
    // 0x1cf04ac: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1cf04acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cf04b0: 0xc73bd6a  jal         func_1CEF5A8
    ctx->pc = 0x1CF04B0u;
    SET_GPR_U32(ctx, 31, 0x1CF04B8u);
    ctx->pc = 0x1CF04B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF04B0u;
    // 0x1cf04b4: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF5A8u, 0x1CF04B0u, 0x1CF04B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF04B8u;
label_1cf04b8:
    // 0x1cf04b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cf04b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf04bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cf04bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf04c0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1cf04c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cf04c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cf04c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf04c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cf04c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf04cc: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1cf04ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cf04d0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1cf04d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1cf04d4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1CF04D4u;
    {
        const bool branch_taken_0x1cf04d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF04D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF04D4u;
        // 0x1cf04d8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf04d4) {
            ctx->pc = 0x1CF0508u;
            goto label_1cf0508;
        }
    }
    ctx->pc = 0x1CF04DCu;
    // 0x1cf04dc: 0xc73bd64  jal         func_1CEF590
    ctx->pc = 0x1CF04DCu;
    SET_GPR_U32(ctx, 31, 0x1CF04E4u);
    ctx->pc = 0x1CEF590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF590u, 0x1CF04DCu, 0x1CF04E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF04E4u;
label_1cf04e4:
    // 0x1cf04e4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cf04e4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf04e8: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x1cf04e8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cf04ec: 0xae0f0018  sw          $t7, 0x18($s0)
    ctx->pc = 0x1cf04ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 15));
    // 0x1cf04f0: 0x8dae0328  lw          $t6, 0x328($t5)
    ctx->pc = 0x1cf04f0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 808)));
    // 0x1cf04f4: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x1cf04f4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cf04f8: 0x15cf0004  bne         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CF04F8u;
    {
        const bool branch_taken_0x1cf04f8 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CF04FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF04F8u;
        // 0x1cf04fc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf04f8) {
            ctx->pc = 0x1CF050Cu;
            goto label_1cf050c;
        }
    }
    ctx->pc = 0x1CF0500u;
    // 0x1cf0500: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x1cf0500u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cf0504: 0xadaf0328  sw          $t7, 0x328($t5)
    ctx->pc = 0x1cf0504u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 808), GPR_U32(ctx, 15));
label_1cf0508:
    // 0x1cf0508: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cf0508u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cf050c:
    // 0x1cf050c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cf050cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf0510: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cf0510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cf0514: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF0514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF0518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF0514u;
        // 0x1cf0518: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF0514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF051Cu;
    // 0x1cf051c: 0x0  nop
    ctx->pc = 0x1cf051cu;
    // NOP
    ctx->pc = 0x1cf0520u;
}
