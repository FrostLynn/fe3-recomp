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

// Function: sub_01C318F0
// Address: 0x1c318f0 - 0x1c319e8
void sub_01C318F0_0x1c318f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C318F0_0x1c318f0");
#endif

    switch (ctx->pc) {
        case 0x1c31910u: goto label_1c31910;
        case 0x1c31924u: goto label_1c31924;
        case 0x1c31928u: goto label_1c31928;
        case 0x1c31944u: goto label_1c31944;
        case 0x1c31954u: goto label_1c31954;
        case 0x1c3198cu: goto label_1c3198c;
        case 0x1c319c4u: goto label_1c319c4;
        case 0x1c319d0u: goto label_1c319d0;
        default: break;
    }

    ctx->pc = 0x1c318f0u;

    // 0x1c318f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c318f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c318f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c318f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c318f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c318f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c318fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c318fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c31900: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c31900u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31904: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c31904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c31908: 0xc70bdd6  jal         func_1C2F758
    ctx->pc = 0x1C31908u;
    SET_GPR_U32(ctx, 31, 0x1C31910u);
    ctx->pc = 0x1C3190Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31908u;
    // 0x1c3190c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F758u, 0x1C31908u, 0x1C31910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31910u;
label_1c31910:
    // 0x1c31910: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1c31910u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1c31914: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C31914u;
    {
        const bool branch_taken_0x1c31914 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C31918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31914u;
        // 0x1c31918: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c31914) {
            ctx->pc = 0x1C31960u;
            goto label_1c31960;
        }
    }
    ctx->pc = 0x1C3191Cu;
    // 0x1c3191c: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C3191Cu;
    {
        const bool branch_taken_0x1c3191c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1c3191c) {
            ctx->pc = 0x1C3193Cu;
            goto label_1c3193c;
        }
    }
    ctx->pc = 0x1C31924u;
label_1c31924:
    // 0x1c31924: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c31924u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c31928:
    // 0x1c31928: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c31928u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3192c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c3192cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c31930: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c31930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c31934: 0x3e00008  jr          $ra
    ctx->pc = 0x1C31934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C31938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31934u;
        // 0x1c31938: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C31934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3193Cu;
label_1c3193c:
    // 0x1c3193c: 0xc70bdd2  jal         func_1C2F748
    ctx->pc = 0x1C3193Cu;
    SET_GPR_U32(ctx, 31, 0x1C31944u);
    ctx->pc = 0x1C31940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3193Cu;
    // 0x1c31940: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F748u, 0x1C3193Cu, 0x1C31944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31944u;
label_1c31944:
    // 0x1c31944: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1C31944u;
    {
        const bool branch_taken_0x1c31944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1C31948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31944u;
        // 0x1c31948: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c31944) {
            ctx->pc = 0x1C31924u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c31924;
        }
    }
    ctx->pc = 0x1C3194Cu;
    // 0x1c3194c: 0xc70bdd4  jal         func_1C2F750
    ctx->pc = 0x1C3194Cu;
    SET_GPR_U32(ctx, 31, 0x1C31954u);
    ctx->pc = 0x1C2F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F750u, 0x1C3194Cu, 0x1C31954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31954u;
label_1c31954:
    // 0x1c31954: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1C31954u;
    {
        const bool branch_taken_0x1c31954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C31958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31954u;
        // 0x1c31958: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c31954) {
            ctx->pc = 0x1C31928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c31928;
        }
    }
    ctx->pc = 0x1C3195Cu;
    // 0x1c3195c: 0x0  nop
    ctx->pc = 0x1c3195cu;
    // NOP
label_1c31960:
    // 0x1c31960: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1c31960u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1c31964: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C31964u;
    {
        const bool branch_taken_0x1c31964 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C31968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31964u;
        // 0x1c31968: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c31964) {
            ctx->pc = 0x1C31928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c31928;
        }
    }
    ctx->pc = 0x1C3196Cu;
    // 0x1c3196c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c3196cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31970: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c31970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31974: 0x2406003d  addiu       $a2, $zero, 0x3D
    ctx->pc = 0x1c31974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x1c31978: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c31978u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3197c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c3197cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31980: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c31980u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c31984: 0xc70bde2  jal         func_1C2F788
    ctx->pc = 0x1C31984u;
    SET_GPR_U32(ctx, 31, 0x1C3198Cu);
    ctx->pc = 0x1C31988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31984u;
    // 0x1c31988: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F788u, 0x1C31984u, 0x1C3198Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3198Cu;
label_1c3198c:
    // 0x1c3198c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c3198cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c31990: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x1C31990u;
    {
        const bool branch_taken_0x1c31990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C31994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31990u;
        // 0x1c31994: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c31990) {
            ctx->pc = 0x1C31924u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c31924;
        }
    }
    ctx->pc = 0x1C31998u;
    // 0x1c31998: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c31998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c3199c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c3199cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c319a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c319a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c319a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c319a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c319a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c319a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c319ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c319acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c319b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c319b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c319b4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c319b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c319b8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c319b8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c319bc: 0xc70bde2  jal         func_1C2F788
    ctx->pc = 0x1C319BCu;
    SET_GPR_U32(ctx, 31, 0x1C319C4u);
    ctx->pc = 0x1C319C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C319BCu;
    // 0x1c319c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F788u, 0x1C319BCu, 0x1C319C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C319C4u;
label_1c319c4:
    // 0x1c319c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c319c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c319c8: 0xc70bdda  jal         func_1C2F768
    ctx->pc = 0x1C319C8u;
    SET_GPR_U32(ctx, 31, 0x1C319D0u);
    ctx->pc = 0x1C319CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C319C8u;
    // 0x1c319cc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F768u, 0x1C319C8u, 0x1C319D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C319D0u;
label_1c319d0:
    // 0x1c319d0: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c319d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c319d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c319d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c319d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c319d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c319dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c319dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c319e0: 0x870bdee  j           func_1C2F7B8
    ctx->pc = 0x1C319E0u;
    ctx->pc = 0x1C319E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C319E0u;
    // 0x1c319e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F7B8u;
    sub_01C2F7B8_0x1c2f7b8(rdram, ctx, runtime); return;
    ctx->pc = 0x1C319E8u;
}
