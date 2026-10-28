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

// Function: sub_01C43130
// Address: 0x1c43130 - 0x1c43210
void sub_01C43130_0x1c43130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C43130_0x1c43130");
#endif

    switch (ctx->pc) {
        case 0x1c43144u: goto label_1c43144;
        case 0x1c43158u: goto label_1c43158;
        case 0x1c4315cu: goto label_1c4315c;
        case 0x1c43178u: goto label_1c43178;
        case 0x1c43184u: goto label_1c43184;
        case 0x1c431b4u: goto label_1c431b4;
        case 0x1c431e0u: goto label_1c431e0;
        case 0x1c431ecu: goto label_1c431ec;
        default: break;
    }

    ctx->pc = 0x1c43130u;

    // 0x1c43130: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c43130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c43134: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c43134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c43138: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c43138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c4313c: 0xc710912  jal         func_1C42448
    ctx->pc = 0x1C4313Cu;
    SET_GPR_U32(ctx, 31, 0x1C43144u);
    ctx->pc = 0x1C43140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4313Cu;
    // 0x1c43140: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42448u, 0x1C4313Cu, 0x1C43144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C43144u;
label_1c43144:
    // 0x1c43144: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c43144u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c43148: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C43148u;
    {
        const bool branch_taken_0x1c43148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C4314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C43148u;
        // 0x1c4314c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c43148) {
            ctx->pc = 0x1C4316Cu;
            goto label_1c4316c;
        }
    }
    ctx->pc = 0x1C43150u;
    // 0x1c43150: 0xc710914  jal         func_1C42450
    ctx->pc = 0x1C43150u;
    SET_GPR_U32(ctx, 31, 0x1C43158u);
    ctx->pc = 0x1C42450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42450u, 0x1C43150u, 0x1C43158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C43158u;
label_1c43158:
    // 0x1c43158: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c43158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c4315c:
    // 0x1c4315c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c4315cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c43160: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c43160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c43164: 0x3e00008  jr          $ra
    ctx->pc = 0x1C43164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C43168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C43164u;
        // 0x1c43168: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C43164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4316Cu;
label_1c4316c:
    // 0x1c4316c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c4316cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c43170: 0xc710916  jal         func_1C42458
    ctx->pc = 0x1C43170u;
    SET_GPR_U32(ctx, 31, 0x1C43178u);
    ctx->pc = 0x1C43174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C43170u;
    // 0x1c43174: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42458u, 0x1C43170u, 0x1C43178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C43178u;
label_1c43178:
    // 0x1c43178: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1c43178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1c4317c: 0xc710924  jal         func_1C42490
    ctx->pc = 0x1C4317Cu;
    SET_GPR_U32(ctx, 31, 0x1C43184u);
    ctx->pc = 0x1C43180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4317Cu;
    // 0x1c43180: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42490u, 0x1C4317Cu, 0x1C43184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C43184u;
label_1c43184:
    // 0x1c43184: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1C43184u;
    {
        const bool branch_taken_0x1c43184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C43188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C43184u;
        // 0x1c43188: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c43184) {
            ctx->pc = 0x1C4315Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c4315c;
        }
    }
    ctx->pc = 0x1C4318Cu;
    // 0x1c4318c: 0x0  nop
    ctx->pc = 0x1c4318cu;
    // NOP
    // 0x1c43190: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c43190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c43194: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c43194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c43198: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c43198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c4319c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c4319cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c431a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c431a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c431a4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c431a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c431a8: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c431a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c431ac: 0xc710916  jal         func_1C42458
    ctx->pc = 0x1C431ACu;
    SET_GPR_U32(ctx, 31, 0x1C431B4u);
    ctx->pc = 0x1C431B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C431ACu;
    // 0x1c431b0: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42458u, 0x1C431ACu, 0x1C431B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C431B4u;
label_1c431b4:
    // 0x1c431b4: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1c431b4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1c431b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c431b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c431bc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c431bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c431c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c431c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c431c4: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1c431c4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1c431c8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c431c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c431cc: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x1c431ccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x1c431d0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c431d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c431d4: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1c431d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c431d8: 0xc710922  jal         func_1C42488
    ctx->pc = 0x1C431D8u;
    SET_GPR_U32(ctx, 31, 0x1C431E0u);
    ctx->pc = 0x1C431DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C431D8u;
    // 0x1c431dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42488u, 0x1C431D8u, 0x1C431E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C431E0u;
label_1c431e0:
    // 0x1c431e0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c431e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c431e4: 0xc710916  jal         func_1C42458
    ctx->pc = 0x1C431E4u;
    SET_GPR_U32(ctx, 31, 0x1C431ECu);
    ctx->pc = 0x1C431E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C431E4u;
    // 0x1c431e8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42458u, 0x1C431E4u, 0x1C431ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C431ECu;
label_1c431ec:
    // 0x1c431ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c431ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c431f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c431f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c431f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c431f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c431f8: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1c431f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1c431fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c431fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c43200: 0x8710926  j           func_1C42498
    ctx->pc = 0x1C43200u;
    ctx->pc = 0x1C43204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C43200u;
    // 0x1c43204: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42498u;
    sub_01C42498_0x1c42498(rdram, ctx, runtime); return;
    ctx->pc = 0x1C43208u;
    // 0x1c43208: 0x3e00008  jr          $ra
    ctx->pc = 0x1C43208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C43208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C43210u;
}
