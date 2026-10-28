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

// Function: sub_01D948E0
// Address: 0x1d948e0 - 0x1d949c8
void sub_01D948E0_0x1d948e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D948E0_0x1d948e0");
#endif

    switch (ctx->pc) {
        case 0x1d948f4u: goto label_1d948f4;
        case 0x1d94908u: goto label_1d94908;
        case 0x1d9490cu: goto label_1d9490c;
        case 0x1d94928u: goto label_1d94928;
        case 0x1d94934u: goto label_1d94934;
        case 0x1d94974u: goto label_1d94974;
        case 0x1d949a0u: goto label_1d949a0;
        case 0x1d949acu: goto label_1d949ac;
        case 0x1d949b8u: goto label_1d949b8;
        default: break;
    }

    ctx->pc = 0x1d948e0u;

    // 0x1d948e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d948e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d948e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d948e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d948e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d948e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d948ec: 0xc764a12  jal         func_1D92848
    ctx->pc = 0x1D948ECu;
    SET_GPR_U32(ctx, 31, 0x1D948F4u);
    ctx->pc = 0x1D948F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D948ECu;
    // 0x1d948f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92848u, 0x1D948ECu, 0x1D948F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D948F4u;
label_1d948f4:
    // 0x1d948f4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d948f4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d948f8: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D948F8u;
    {
        const bool branch_taken_0x1d948f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D948FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D948F8u;
        // 0x1d948fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d948f8) {
            ctx->pc = 0x1D9491Cu;
            goto label_1d9491c;
        }
    }
    ctx->pc = 0x1D94900u;
    // 0x1d94900: 0xc764a14  jal         func_1D92850
    ctx->pc = 0x1D94900u;
    SET_GPR_U32(ctx, 31, 0x1D94908u);
    ctx->pc = 0x1D92850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92850u, 0x1D94900u, 0x1D94908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94908u;
label_1d94908:
    // 0x1d94908: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d94908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d9490c:
    // 0x1d9490c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9490cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d94910: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d94910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d94914: 0x3e00008  jr          $ra
    ctx->pc = 0x1D94914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D94918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D94914u;
        // 0x1d94918: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D94914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9491Cu;
label_1d9491c:
    // 0x1d9491c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d9491cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d94920: 0xc764a16  jal         func_1D92858
    ctx->pc = 0x1D94920u;
    SET_GPR_U32(ctx, 31, 0x1D94928u);
    ctx->pc = 0x1D94924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D94920u;
    // 0x1d94924: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92858u, 0x1D94920u, 0x1D94928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94928u;
label_1d94928:
    // 0x1d94928: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1d94928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1d9492c: 0xc764a24  jal         func_1D92890
    ctx->pc = 0x1D9492Cu;
    SET_GPR_U32(ctx, 31, 0x1D94934u);
    ctx->pc = 0x1D94930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9492Cu;
    // 0x1d94930: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92890u, 0x1D9492Cu, 0x1D94934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94934u;
label_1d94934:
    // 0x1d94934: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1D94934u;
    {
        const bool branch_taken_0x1d94934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D94938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D94934u;
        // 0x1d94938: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d94934) {
            ctx->pc = 0x1D9490Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9490c;
        }
    }
    ctx->pc = 0x1D9493Cu;
    // 0x1d9493c: 0x0  nop
    ctx->pc = 0x1d9493cu;
    // NOP
    // 0x1d94940: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d94940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d94944: 0x3c0f01da  lui         $t7, 0x1DA
    ctx->pc = 0x1d94944u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)474 << 16));
    // 0x1d94948: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d94948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d9494c: 0x25eec8a8  addiu       $t6, $t7, -0x3758
    ctx->pc = 0x1d9494cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 4294953128));
    // 0x1d94950: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1d94950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1d94954: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1d94954u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1D9C8ACu));
    // 0x1d94958: 0x8dedc8a8  lw          $t5, -0x3758($t7)
    ctx->pc = 0x1d94958u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1D9C8A8u));
    // 0x1d9495c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d9495cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94960: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1d94960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1d94964: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1d94964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1d94968: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1d94968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d9496c: 0xc764a16  jal         func_1D92858
    ctx->pc = 0x1D9496Cu;
    SET_GPR_U32(ctx, 31, 0x1D94974u);
    ctx->pc = 0x1D94970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9496Cu;
    // 0x1d94970: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92858u, 0x1D9496Cu, 0x1D94974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94974u;
label_1d94974:
    // 0x1d94974: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1d94974u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1d94978: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d94978u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9497c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d9497cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94980: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d94980u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d94984: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d94984u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d94988: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d94988u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9498c: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1d9498cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1d94990: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d94990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94994: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d94994u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d94998: 0xc764a22  jal         func_1D92888
    ctx->pc = 0x1D94998u;
    SET_GPR_U32(ctx, 31, 0x1D949A0u);
    ctx->pc = 0x1D9499Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D94998u;
    // 0x1d9499c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92888u, 0x1D94998u, 0x1D949A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D949A0u;
label_1d949a0:
    // 0x1d949a0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d949a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d949a4: 0xc764a16  jal         func_1D92858
    ctx->pc = 0x1D949A4u;
    SET_GPR_U32(ctx, 31, 0x1D949ACu);
    ctx->pc = 0x1D949A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D949A4u;
    // 0x1d949a8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92858u, 0x1D949A4u, 0x1D949ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D949ACu;
label_1d949ac:
    // 0x1d949ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d949acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d949b0: 0xc764a26  jal         func_1D92898
    ctx->pc = 0x1D949B0u;
    SET_GPR_U32(ctx, 31, 0x1D949B8u);
    ctx->pc = 0x1D949B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D949B0u;
    // 0x1d949b4: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92898u, 0x1D949B0u, 0x1D949B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D949B8u;
label_1d949b8:
    // 0x1d949b8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1d949b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d949bc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d949bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d949c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D949C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D949C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D949C0u;
        // 0x1d949c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D949C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D949C8u;
}
