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

// Function: sub_01D29640
// Address: 0x1d29640 - 0x1d29700
void sub_01D29640_0x1d29640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D29640_0x1d29640");
#endif

    switch (ctx->pc) {
        case 0x1d29654u: goto label_1d29654;
        case 0x1d29668u: goto label_1d29668;
        case 0x1d2966cu: goto label_1d2966c;
        case 0x1d296a8u: goto label_1d296a8;
        case 0x1d296b4u: goto label_1d296b4;
        case 0x1d296c0u: goto label_1d296c0;
        case 0x1d296e0u: goto label_1d296e0;
        default: break;
    }

    ctx->pc = 0x1d29640u;

    // 0x1d29640: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d29640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d29644: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d29644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d29648: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d29648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d2964c: 0xc749b16  jal         func_1D26C58
    ctx->pc = 0x1D2964Cu;
    SET_GPR_U32(ctx, 31, 0x1D29654u);
    ctx->pc = 0x1D29650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2964Cu;
    // 0x1d29650: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C58u, 0x1D2964Cu, 0x1D29654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D29654u;
label_1d29654:
    // 0x1d29654: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d29654u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d29658: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D29658u;
    {
        const bool branch_taken_0x1d29658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D2965Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D29658u;
        // 0x1d2965c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d29658) {
            ctx->pc = 0x1D2967Cu;
            goto label_1d2967c;
        }
    }
    ctx->pc = 0x1D29660u;
    // 0x1d29660: 0xc749b18  jal         func_1D26C60
    ctx->pc = 0x1D29660u;
    SET_GPR_U32(ctx, 31, 0x1D29668u);
    ctx->pc = 0x1D26C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C60u, 0x1D29660u, 0x1D29668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D29668u;
label_1d29668:
    // 0x1d29668: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d29668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d2966c:
    // 0x1d2966c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d2966cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d29670: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d29670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d29674: 0x3e00008  jr          $ra
    ctx->pc = 0x1D29674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D29678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D29674u;
        // 0x1d29678: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D29674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2967Cu;
label_1d2967c:
    // 0x1d2967c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D2967Cu;
    {
        const bool branch_taken_0x1d2967c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D29680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2967Cu;
        // 0x1d29680: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2967c) {
            ctx->pc = 0x1D2966Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d2966c;
        }
    }
    ctx->pc = 0x1D29684u;
    // 0x1d29684: 0x0  nop
    ctx->pc = 0x1d29684u;
    // NOP
    // 0x1d29688: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d29688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d2968c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d2968cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d29690: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d29690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d29694: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d29694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d29698: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d29698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d2969c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d2969cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d296a0: 0xc749b1a  jal         func_1D26C68
    ctx->pc = 0x1D296A0u;
    SET_GPR_U32(ctx, 31, 0x1D296A8u);
    ctx->pc = 0x1D296A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D296A0u;
    // 0x1d296a4: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C68u, 0x1D296A0u, 0x1D296A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D296A8u;
label_1d296a8:
    // 0x1d296a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d296a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d296ac: 0xc74a684  jal         func_1D29A10
    ctx->pc = 0x1D296ACu;
    SET_GPR_U32(ctx, 31, 0x1D296B4u);
    ctx->pc = 0x1D296B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D296ACu;
    // 0x1d296b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D29A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D29A10u, 0x1D296ACu, 0x1D296B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D296B4u;
label_1d296b4:
    // 0x1d296b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d296b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d296b8: 0xc749db6  jal         func_1D276D8
    ctx->pc = 0x1D296B8u;
    SET_GPR_U32(ctx, 31, 0x1D296C0u);
    ctx->pc = 0x1D296BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D296B8u;
    // 0x1d296bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D276D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D276D8u, 0x1D296B8u, 0x1D296C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D296C0u;
label_1d296c0:
    // 0x1d296c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d296c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d296c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d296c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d296c8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d296c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d296cc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d296ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d296d0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d296d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d296d4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d296d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d296d8: 0xc749b26  jal         func_1D26C98
    ctx->pc = 0x1D296D8u;
    SET_GPR_U32(ctx, 31, 0x1D296E0u);
    ctx->pc = 0x1D296DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D296D8u;
    // 0x1d296dc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C98u, 0x1D296D8u, 0x1D296E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D296E0u;
label_1d296e0:
    // 0x1d296e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d296e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d296e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d296e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d296e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d296e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d296ec: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d296ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d296f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d296f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d296f4: 0x8749b1e  j           func_1D26C78
    ctx->pc = 0x1D296F4u;
    ctx->pc = 0x1D296F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D296F4u;
    // 0x1d296f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C78u;
    sub_01D26C78_0x1d26c78(rdram, ctx, runtime); return;
    ctx->pc = 0x1D296FCu;
    // 0x1d296fc: 0x0  nop
    ctx->pc = 0x1d296fcu;
    // NOP
    ctx->pc = 0x1d29700u;
}
