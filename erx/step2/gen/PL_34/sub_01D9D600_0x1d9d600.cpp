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

// Function: sub_01D9D600
// Address: 0x1d9d600 - 0x1d9d6e0
void sub_01D9D600_0x1d9d600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D9D600_0x1d9d600");
#endif

    switch (ctx->pc) {
        case 0x1d9d614u: goto label_1d9d614;
        case 0x1d9d628u: goto label_1d9d628;
        case 0x1d9d62cu: goto label_1d9d62c;
        case 0x1d9d648u: goto label_1d9d648;
        case 0x1d9d654u: goto label_1d9d654;
        case 0x1d9d684u: goto label_1d9d684;
        case 0x1d9d6b0u: goto label_1d9d6b0;
        case 0x1d9d6bcu: goto label_1d9d6bc;
        default: break;
    }

    ctx->pc = 0x1d9d600u;

    // 0x1d9d600: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d9d600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d9d604: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d9d604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d9d608: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d9d608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d9d60c: 0xc767252  jal         func_1D9C948
    ctx->pc = 0x1D9D60Cu;
    SET_GPR_U32(ctx, 31, 0x1D9D614u);
    ctx->pc = 0x1D9D610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9D60Cu;
    // 0x1d9d610: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C948u, 0x1D9D60Cu, 0x1D9D614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9D614u;
label_1d9d614:
    // 0x1d9d614: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d9d614u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9d618: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D9D618u;
    {
        const bool branch_taken_0x1d9d618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D9D61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9D618u;
        // 0x1d9d61c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9d618) {
            ctx->pc = 0x1D9D63Cu;
            goto label_1d9d63c;
        }
    }
    ctx->pc = 0x1D9D620u;
    // 0x1d9d620: 0xc767254  jal         func_1D9C950
    ctx->pc = 0x1D9D620u;
    SET_GPR_U32(ctx, 31, 0x1D9D628u);
    ctx->pc = 0x1D9C950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C950u, 0x1D9D620u, 0x1D9D628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9D628u;
label_1d9d628:
    // 0x1d9d628: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d9d628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d9d62c:
    // 0x1d9d62c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9d62cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9d630: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d9d630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d9d634: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9D634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9D638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9D634u;
        // 0x1d9d638: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9D634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9D63Cu;
label_1d9d63c:
    // 0x1d9d63c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d9d63cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d9d640: 0xc767256  jal         func_1D9C958
    ctx->pc = 0x1D9D640u;
    SET_GPR_U32(ctx, 31, 0x1D9D648u);
    ctx->pc = 0x1D9D644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9D640u;
    // 0x1d9d644: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C958u, 0x1D9D640u, 0x1D9D648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9D648u;
label_1d9d648:
    // 0x1d9d648: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1d9d648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1d9d64c: 0xc767264  jal         func_1D9C990
    ctx->pc = 0x1D9D64Cu;
    SET_GPR_U32(ctx, 31, 0x1D9D654u);
    ctx->pc = 0x1D9D650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9D64Cu;
    // 0x1d9d650: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C990u, 0x1D9D64Cu, 0x1D9D654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9D654u;
label_1d9d654:
    // 0x1d9d654: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1D9D654u;
    {
        const bool branch_taken_0x1d9d654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9D658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9D654u;
        // 0x1d9d658: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9d654) {
            ctx->pc = 0x1D9D62Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9d62c;
        }
    }
    ctx->pc = 0x1D9D65Cu;
    // 0x1d9d65c: 0x0  nop
    ctx->pc = 0x1d9d65cu;
    // NOP
    // 0x1d9d660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d9d660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d9d664: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d9d664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d9d668: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d9d668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d9d66c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d9d66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d9d670: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d9d670u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d674: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d9d674u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d678: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d9d678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d9d67c: 0xc767256  jal         func_1D9C958
    ctx->pc = 0x1D9D67Cu;
    SET_GPR_U32(ctx, 31, 0x1D9D684u);
    ctx->pc = 0x1D9D680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9D67Cu;
    // 0x1d9d680: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C958u, 0x1D9D67Cu, 0x1D9D684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9D684u;
label_1d9d684:
    // 0x1d9d684: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1d9d684u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1d9d688: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d9d688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d68c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d9d68cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9d690: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d9d690u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d694: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d9d694u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d9d698: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d9d698u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9d69c: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x1d9d69cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x1d9d6a0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d9d6a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d6a4: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d9d6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d9d6a8: 0xc767262  jal         func_1D9C988
    ctx->pc = 0x1D9D6A8u;
    SET_GPR_U32(ctx, 31, 0x1D9D6B0u);
    ctx->pc = 0x1D9D6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9D6A8u;
    // 0x1d9d6ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C988u, 0x1D9D6A8u, 0x1D9D6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9D6B0u;
label_1d9d6b0:
    // 0x1d9d6b0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d9d6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d9d6b4: 0xc767256  jal         func_1D9C958
    ctx->pc = 0x1D9D6B4u;
    SET_GPR_U32(ctx, 31, 0x1D9D6BCu);
    ctx->pc = 0x1D9D6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9D6B4u;
    // 0x1d9d6b8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C958u, 0x1D9D6B4u, 0x1D9D6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9D6BCu;
label_1d9d6bc:
    // 0x1d9d6bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d9d6bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d6c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d9d6c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d9d6c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9d6c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9d6c8: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1d9d6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1d9d6cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d9d6ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9d6d0: 0x8767266  j           func_1D9C998
    ctx->pc = 0x1D9D6D0u;
    ctx->pc = 0x1D9D6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9D6D0u;
    // 0x1d9d6d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C998u;
    sub_01D9C998_0x1d9c998(rdram, ctx, runtime); return;
    ctx->pc = 0x1D9D6D8u;
    // 0x1d9d6d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9D6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9D6D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9D6E0u;
}
