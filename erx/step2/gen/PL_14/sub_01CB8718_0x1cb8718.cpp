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

// Function: sub_01CB8718
// Address: 0x1cb8718 - 0x1cb8798
void sub_01CB8718_0x1cb8718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB8718_0x1cb8718");
#endif

    switch (ctx->pc) {
        case 0x1cb872cu: goto label_1cb872c;
        case 0x1cb8740u: goto label_1cb8740;
        case 0x1cb8748u: goto label_1cb8748;
        case 0x1cb874cu: goto label_1cb874c;
        default: break;
    }

    ctx->pc = 0x1cb8718u;

    // 0x1cb8718: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cb8718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cb871c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cb871cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cb8720: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cb8720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cb8724: 0xc72d9d2  jal         func_1CB6748
    ctx->pc = 0x1CB8724u;
    SET_GPR_U32(ctx, 31, 0x1CB872Cu);
    ctx->pc = 0x1CB8728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB8724u;
    // 0x1cb8728: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6748u, 0x1CB8724u, 0x1CB872Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB872Cu;
label_1cb872c:
    // 0x1cb872c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cb872cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb8730: 0x144f000a  bne         $v0, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1CB8730u;
    {
        const bool branch_taken_0x1cb8730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CB8734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8730u;
        // 0x1cb8734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb8730) {
            ctx->pc = 0x1CB875Cu;
            goto label_1cb875c;
        }
    }
    ctx->pc = 0x1CB8738u;
    // 0x1cb8738: 0xc72d9ec  jal         func_1CB67B0
    ctx->pc = 0x1CB8738u;
    SET_GPR_U32(ctx, 31, 0x1CB8740u);
    ctx->pc = 0x1CB67B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB67B0u, 0x1CB8738u, 0x1CB8740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8740u;
label_1cb8740:
    // 0x1cb8740: 0xc72d9d4  jal         func_1CB6750
    ctx->pc = 0x1CB8740u;
    SET_GPR_U32(ctx, 31, 0x1CB8748u);
    ctx->pc = 0x1CB8744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB8740u;
    // 0x1cb8744: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6750u, 0x1CB8740u, 0x1CB8748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8748u;
label_1cb8748:
    // 0x1cb8748: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1cb8748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1cb874c:
    // 0x1cb874c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cb874cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb8750: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cb8750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cb8754: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB8754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB8758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8754u;
        // 0x1cb8758: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB8754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB875Cu;
label_1cb875c:
    // 0x1cb875c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1CB875Cu;
    {
        const bool branch_taken_0x1cb875c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB8760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB875Cu;
        // 0x1cb8760: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb875c) {
            ctx->pc = 0x1CB874Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb874c;
        }
    }
    ctx->pc = 0x1CB8764u;
    // 0x1cb8764: 0x0  nop
    ctx->pc = 0x1cb8764u;
    // NOP
    // 0x1cb8768: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cb8768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cb876c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cb876cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8770: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cb8770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cb8774: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1cb8774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cb8778: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cb8778u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb877c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb877cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8780: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cb8780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb8784: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1cb8784u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cb8788: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1cb8788u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb878c: 0x872d9e2  j           func_1CB6788
    ctx->pc = 0x1CB878Cu;
    ctx->pc = 0x1CB8790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB878Cu;
    // 0x1cb8790: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6788u;
    sub_01CB6788_0x1cb6788(rdram, ctx, runtime); return;
    ctx->pc = 0x1CB8794u;
    // 0x1cb8794: 0x0  nop
    ctx->pc = 0x1cb8794u;
    // NOP
    ctx->pc = 0x1cb8798u;
}
