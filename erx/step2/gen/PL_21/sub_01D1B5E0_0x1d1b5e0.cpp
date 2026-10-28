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

// Function: sub_01D1B5E0
// Address: 0x1d1b5e0 - 0x1d1b6a0
void sub_01D1B5E0_0x1d1b5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D1B5E0_0x1d1b5e0");
#endif

    switch (ctx->pc) {
        case 0x1d1b5f4u: goto label_1d1b5f4;
        case 0x1d1b608u: goto label_1d1b608;
        case 0x1d1b60cu: goto label_1d1b60c;
        case 0x1d1b648u: goto label_1d1b648;
        case 0x1d1b654u: goto label_1d1b654;
        case 0x1d1b660u: goto label_1d1b660;
        case 0x1d1b680u: goto label_1d1b680;
        default: break;
    }

    ctx->pc = 0x1d1b5e0u;

    // 0x1d1b5e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d1b5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d1b5e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d1b5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d1b5e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d1b5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d1b5ec: 0xc746416  jal         func_1D19058
    ctx->pc = 0x1D1B5ECu;
    SET_GPR_U32(ctx, 31, 0x1D1B5F4u);
    ctx->pc = 0x1D1B5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1B5ECu;
    // 0x1d1b5f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19058u, 0x1D1B5ECu, 0x1D1B5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B5F4u;
label_1d1b5f4:
    // 0x1d1b5f4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d1b5f4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1b5f8: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D1B5F8u;
    {
        const bool branch_taken_0x1d1b5f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D1B5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B5F8u;
        // 0x1d1b5fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b5f8) {
            ctx->pc = 0x1D1B61Cu;
            goto label_1d1b61c;
        }
    }
    ctx->pc = 0x1D1B600u;
    // 0x1d1b600: 0xc746418  jal         func_1D19060
    ctx->pc = 0x1D1B600u;
    SET_GPR_U32(ctx, 31, 0x1D1B608u);
    ctx->pc = 0x1D19060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19060u, 0x1D1B600u, 0x1D1B608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B608u;
label_1d1b608:
    // 0x1d1b608: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d1b608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d1b60c:
    // 0x1d1b60c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d1b60cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1b610: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d1b610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d1b614: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1B614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1B618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B614u;
        // 0x1d1b618: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1B614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1B61Cu;
label_1d1b61c:
    // 0x1d1b61c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D1B61Cu;
    {
        const bool branch_taken_0x1d1b61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1B620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B61Cu;
        // 0x1d1b620: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b61c) {
            ctx->pc = 0x1D1B60Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1b60c;
        }
    }
    ctx->pc = 0x1D1B624u;
    // 0x1d1b624: 0x0  nop
    ctx->pc = 0x1d1b624u;
    // NOP
    // 0x1d1b628: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d1b628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d1b62c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d1b62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d1b630: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d1b630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d1b634: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d1b634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d1b638: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d1b638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d1b63c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d1b63cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1b640: 0xc74641a  jal         func_1D19068
    ctx->pc = 0x1D1B640u;
    SET_GPR_U32(ctx, 31, 0x1D1B648u);
    ctx->pc = 0x1D1B644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1B640u;
    // 0x1d1b644: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19068u, 0x1D1B640u, 0x1D1B648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B648u;
label_1d1b648:
    // 0x1d1b648: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d1b648u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1b64c: 0xc746f98  jal         func_1D1BE60
    ctx->pc = 0x1D1B64Cu;
    SET_GPR_U32(ctx, 31, 0x1D1B654u);
    ctx->pc = 0x1D1B650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1B64Cu;
    // 0x1d1b650: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1BE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1BE60u, 0x1D1B64Cu, 0x1D1B654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B654u;
label_1d1b654:
    // 0x1d1b654: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d1b654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1b658: 0xc7466b4  jal         func_1D19AD0
    ctx->pc = 0x1D1B658u;
    SET_GPR_U32(ctx, 31, 0x1D1B660u);
    ctx->pc = 0x1D1B65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1B658u;
    // 0x1d1b65c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19AD0u, 0x1D1B658u, 0x1D1B660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B660u;
label_1d1b660:
    // 0x1d1b660: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d1b660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1b664: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1b664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1b668: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d1b668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d1b66c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d1b66cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1b670: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d1b670u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1b674: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d1b674u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1b678: 0xc746426  jal         func_1D19098
    ctx->pc = 0x1D1B678u;
    SET_GPR_U32(ctx, 31, 0x1D1B680u);
    ctx->pc = 0x1D1B67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1B678u;
    // 0x1d1b67c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19098u, 0x1D1B678u, 0x1D1B680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B680u;
label_1d1b680:
    // 0x1d1b680: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d1b680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1b684: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d1b684u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1b688: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d1b688u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d1b68c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d1b68cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d1b690: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d1b690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d1b694: 0x874641e  j           func_1D19078
    ctx->pc = 0x1D1B694u;
    ctx->pc = 0x1D1B698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1B694u;
    // 0x1d1b698: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19078u;
    sub_01D19078_0x1d19078(rdram, ctx, runtime); return;
    ctx->pc = 0x1D1B69Cu;
    // 0x1d1b69c: 0x0  nop
    ctx->pc = 0x1d1b69cu;
    // NOP
    ctx->pc = 0x1d1b6a0u;
}
