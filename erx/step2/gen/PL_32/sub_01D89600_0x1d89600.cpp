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

// Function: sub_01D89600
// Address: 0x1d89600 - 0x1d896e0
void sub_01D89600_0x1d89600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D89600_0x1d89600");
#endif

    switch (ctx->pc) {
        case 0x1d89614u: goto label_1d89614;
        case 0x1d89628u: goto label_1d89628;
        case 0x1d8962cu: goto label_1d8962c;
        case 0x1d89648u: goto label_1d89648;
        case 0x1d89654u: goto label_1d89654;
        case 0x1d89684u: goto label_1d89684;
        case 0x1d896b0u: goto label_1d896b0;
        case 0x1d896bcu: goto label_1d896bc;
        default: break;
    }

    ctx->pc = 0x1d89600u;

    // 0x1d89600: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d89600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d89604: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d89604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d89608: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d89608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d8960c: 0xc762252  jal         func_1D88948
    ctx->pc = 0x1D8960Cu;
    SET_GPR_U32(ctx, 31, 0x1D89614u);
    ctx->pc = 0x1D89610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8960Cu;
    // 0x1d89610: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88948u, 0x1D8960Cu, 0x1D89614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D89614u;
label_1d89614:
    // 0x1d89614: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d89614u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d89618: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D89618u;
    {
        const bool branch_taken_0x1d89618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D8961Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D89618u;
        // 0x1d8961c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d89618) {
            ctx->pc = 0x1D8963Cu;
            goto label_1d8963c;
        }
    }
    ctx->pc = 0x1D89620u;
    // 0x1d89620: 0xc762254  jal         func_1D88950
    ctx->pc = 0x1D89620u;
    SET_GPR_U32(ctx, 31, 0x1D89628u);
    ctx->pc = 0x1D88950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88950u, 0x1D89620u, 0x1D89628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D89628u;
label_1d89628:
    // 0x1d89628: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d89628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d8962c:
    // 0x1d8962c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d8962cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d89630: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d89630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d89634: 0x3e00008  jr          $ra
    ctx->pc = 0x1D89634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D89638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D89634u;
        // 0x1d89638: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D89634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8963Cu;
label_1d8963c:
    // 0x1d8963c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d8963cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d89640: 0xc762256  jal         func_1D88958
    ctx->pc = 0x1D89640u;
    SET_GPR_U32(ctx, 31, 0x1D89648u);
    ctx->pc = 0x1D89644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D89640u;
    // 0x1d89644: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88958u, 0x1D89640u, 0x1D89648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D89648u;
label_1d89648:
    // 0x1d89648: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1d89648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1d8964c: 0xc762264  jal         func_1D88990
    ctx->pc = 0x1D8964Cu;
    SET_GPR_U32(ctx, 31, 0x1D89654u);
    ctx->pc = 0x1D89650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8964Cu;
    // 0x1d89650: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88990u, 0x1D8964Cu, 0x1D89654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D89654u;
label_1d89654:
    // 0x1d89654: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1D89654u;
    {
        const bool branch_taken_0x1d89654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D89658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D89654u;
        // 0x1d89658: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d89654) {
            ctx->pc = 0x1D8962Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8962c;
        }
    }
    ctx->pc = 0x1D8965Cu;
    // 0x1d8965c: 0x0  nop
    ctx->pc = 0x1d8965cu;
    // NOP
    // 0x1d89660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d89660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d89664: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d89664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d89668: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d89668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d8966c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d8966cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d89670: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d89670u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d89674: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d89674u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d89678: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d89678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d8967c: 0xc762256  jal         func_1D88958
    ctx->pc = 0x1D8967Cu;
    SET_GPR_U32(ctx, 31, 0x1D89684u);
    ctx->pc = 0x1D89680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8967Cu;
    // 0x1d89680: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88958u, 0x1D8967Cu, 0x1D89684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D89684u;
label_1d89684:
    // 0x1d89684: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1d89684u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1d89688: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d89688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8968c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d8968cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d89690: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d89690u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d89694: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d89694u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d89698: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d89698u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8969c: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x1d8969cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x1d896a0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d896a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d896a4: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d896a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d896a8: 0xc762262  jal         func_1D88988
    ctx->pc = 0x1D896A8u;
    SET_GPR_U32(ctx, 31, 0x1D896B0u);
    ctx->pc = 0x1D896ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D896A8u;
    // 0x1d896ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88988u, 0x1D896A8u, 0x1D896B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D896B0u;
label_1d896b0:
    // 0x1d896b0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d896b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d896b4: 0xc762256  jal         func_1D88958
    ctx->pc = 0x1D896B4u;
    SET_GPR_U32(ctx, 31, 0x1D896BCu);
    ctx->pc = 0x1D896B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D896B4u;
    // 0x1d896b8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88958u, 0x1D896B4u, 0x1D896BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D896BCu;
label_1d896bc:
    // 0x1d896bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d896bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d896c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d896c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d896c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d896c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d896c8: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1d896c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1d896cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d896ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d896d0: 0x8762266  j           func_1D88998
    ctx->pc = 0x1D896D0u;
    ctx->pc = 0x1D896D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D896D0u;
    // 0x1d896d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88998u;
    sub_01D88998_0x1d88998(rdram, ctx, runtime); return;
    ctx->pc = 0x1D896D8u;
    // 0x1d896d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D896D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D896D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D896E0u;
}
