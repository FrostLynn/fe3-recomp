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

// Function: sub_01D7E418
// Address: 0x1d7e418 - 0x1d7e4f8
void sub_01D7E418_0x1d7e418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D7E418_0x1d7e418");
#endif

    switch (ctx->pc) {
        case 0x1d7e42cu: goto label_1d7e42c;
        case 0x1d7e440u: goto label_1d7e440;
        case 0x1d7e444u: goto label_1d7e444;
        case 0x1d7e460u: goto label_1d7e460;
        case 0x1d7e46cu: goto label_1d7e46c;
        case 0x1d7e49cu: goto label_1d7e49c;
        case 0x1d7e4c8u: goto label_1d7e4c8;
        case 0x1d7e4d4u: goto label_1d7e4d4;
        default: break;
    }

    ctx->pc = 0x1d7e418u;

    // 0x1d7e418: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d7e418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d7e41c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d7e41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d7e420: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d7e420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d7e424: 0xc75f5d2  jal         func_1D7D748
    ctx->pc = 0x1D7E424u;
    SET_GPR_U32(ctx, 31, 0x1D7E42Cu);
    ctx->pc = 0x1D7E428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E424u;
    // 0x1d7e428: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D748u, 0x1D7E424u, 0x1D7E42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E42Cu;
label_1d7e42c:
    // 0x1d7e42c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d7e42cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7e430: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D7E430u;
    {
        const bool branch_taken_0x1d7e430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D7E434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7E430u;
        // 0x1d7e434: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7e430) {
            ctx->pc = 0x1D7E454u;
            goto label_1d7e454;
        }
    }
    ctx->pc = 0x1D7E438u;
    // 0x1d7e438: 0xc75f5d4  jal         func_1D7D750
    ctx->pc = 0x1D7E438u;
    SET_GPR_U32(ctx, 31, 0x1D7E440u);
    ctx->pc = 0x1D7D750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D750u, 0x1D7E438u, 0x1D7E440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E440u;
label_1d7e440:
    // 0x1d7e440: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d7e440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d7e444:
    // 0x1d7e444: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d7e444u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7e448: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d7e448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d7e44c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7E44Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7E450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7E44Cu;
        // 0x1d7e450: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7E44Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7E454u;
label_1d7e454:
    // 0x1d7e454: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d7e454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d7e458: 0xc75f5d6  jal         func_1D7D758
    ctx->pc = 0x1D7E458u;
    SET_GPR_U32(ctx, 31, 0x1D7E460u);
    ctx->pc = 0x1D7E45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E458u;
    // 0x1d7e45c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D758u, 0x1D7E458u, 0x1D7E460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E460u;
label_1d7e460:
    // 0x1d7e460: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1d7e460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1d7e464: 0xc75f5e4  jal         func_1D7D790
    ctx->pc = 0x1D7E464u;
    SET_GPR_U32(ctx, 31, 0x1D7E46Cu);
    ctx->pc = 0x1D7E468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E464u;
    // 0x1d7e468: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D790u, 0x1D7E464u, 0x1D7E46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E46Cu;
label_1d7e46c:
    // 0x1d7e46c: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1D7E46Cu;
    {
        const bool branch_taken_0x1d7e46c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7E470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7E46Cu;
        // 0x1d7e470: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7e46c) {
            ctx->pc = 0x1D7E444u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7e444;
        }
    }
    ctx->pc = 0x1D7E474u;
    // 0x1d7e474: 0x0  nop
    ctx->pc = 0x1d7e474u;
    // NOP
    // 0x1d7e478: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d7e478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d7e47c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d7e47cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d7e480: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d7e480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d7e484: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d7e484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d7e488: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d7e488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e48c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d7e48cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e490: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d7e490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d7e494: 0xc75f5d6  jal         func_1D7D758
    ctx->pc = 0x1D7E494u;
    SET_GPR_U32(ctx, 31, 0x1D7E49Cu);
    ctx->pc = 0x1D7E498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E494u;
    // 0x1d7e498: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D758u, 0x1D7E494u, 0x1D7E49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E49Cu;
label_1d7e49c:
    // 0x1d7e49c: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1d7e49cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1d7e4a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d7e4a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e4a4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d7e4a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7e4a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d7e4a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e4ac: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d7e4acu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d7e4b0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d7e4b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7e4b4: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x1d7e4b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x1d7e4b8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d7e4b8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e4bc: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d7e4bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d7e4c0: 0xc75f5e2  jal         func_1D7D788
    ctx->pc = 0x1D7E4C0u;
    SET_GPR_U32(ctx, 31, 0x1D7E4C8u);
    ctx->pc = 0x1D7E4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E4C0u;
    // 0x1d7e4c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D788u, 0x1D7E4C0u, 0x1D7E4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E4C8u;
label_1d7e4c8:
    // 0x1d7e4c8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d7e4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d7e4cc: 0xc75f5d6  jal         func_1D7D758
    ctx->pc = 0x1D7E4CCu;
    SET_GPR_U32(ctx, 31, 0x1D7E4D4u);
    ctx->pc = 0x1D7E4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E4CCu;
    // 0x1d7e4d0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D758u, 0x1D7E4CCu, 0x1D7E4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E4D4u;
label_1d7e4d4:
    // 0x1d7e4d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d7e4d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e4d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d7e4d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d7e4dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d7e4dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7e4e0: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1d7e4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1d7e4e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d7e4e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7e4e8: 0x875f5e6  j           func_1D7D798
    ctx->pc = 0x1D7E4E8u;
    ctx->pc = 0x1D7E4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E4E8u;
    // 0x1d7e4ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D798u;
    sub_01D7D798_0x1d7d798(rdram, ctx, runtime); return;
    ctx->pc = 0x1D7E4F0u;
    // 0x1d7e4f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7E4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7E4F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7E4F8u;
}
