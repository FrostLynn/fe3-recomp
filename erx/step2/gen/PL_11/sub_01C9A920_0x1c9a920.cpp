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

// Function: sub_01C9A920
// Address: 0x1c9a920 - 0x1c9a998
void sub_01C9A920_0x1c9a920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C9A920_0x1c9a920");
#endif

    switch (ctx->pc) {
        case 0x1c9a934u: goto label_1c9a934;
        case 0x1c9a948u: goto label_1c9a948;
        case 0x1c9a94cu: goto label_1c9a94c;
        default: break;
    }

    ctx->pc = 0x1c9a920u;

    // 0x1c9a920: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c9a920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c9a924: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c9a924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c9a928: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c9a928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c9a92c: 0xc7262d2  jal         func_1C98B48
    ctx->pc = 0x1C9A92Cu;
    SET_GPR_U32(ctx, 31, 0x1C9A934u);
    ctx->pc = 0x1C9A930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9A92Cu;
    // 0x1c9a930: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B48u, 0x1C9A92Cu, 0x1C9A934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9A934u;
label_1c9a934:
    // 0x1c9a934: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c9a934u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9a938: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C9A938u;
    {
        const bool branch_taken_0x1c9a938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C9A93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9A938u;
        // 0x1c9a93c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9a938) {
            ctx->pc = 0x1C9A95Cu;
            goto label_1c9a95c;
        }
    }
    ctx->pc = 0x1C9A940u;
    // 0x1c9a940: 0xc7262d4  jal         func_1C98B50
    ctx->pc = 0x1C9A940u;
    SET_GPR_U32(ctx, 31, 0x1C9A948u);
    ctx->pc = 0x1C98B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B50u, 0x1C9A940u, 0x1C9A948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9A948u;
label_1c9a948:
    // 0x1c9a948: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c9a948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c9a94c:
    // 0x1c9a94c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c9a94cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9a950: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c9a950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c9a954: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9A954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9A958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9A954u;
        // 0x1c9a958: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9A954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9A95Cu;
label_1c9a95c:
    // 0x1c9a95c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C9A95Cu;
    {
        const bool branch_taken_0x1c9a95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9A960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9A95Cu;
        // 0x1c9a960: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9a95c) {
            ctx->pc = 0x1C9A94Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c9a94c;
        }
    }
    ctx->pc = 0x1C9A964u;
    // 0x1c9a964: 0x0  nop
    ctx->pc = 0x1c9a964u;
    // NOP
    // 0x1c9a968: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c9a968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c9a96c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c9a96cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9a970: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c9a970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c9a974: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c9a974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c9a978: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c9a978u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9a97c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c9a97cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9a980: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c9a980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9a984: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c9a984u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c9a988: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1c9a988u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9a98c: 0x87262e2  j           func_1C98B88
    ctx->pc = 0x1C9A98Cu;
    ctx->pc = 0x1C9A990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9A98Cu;
    // 0x1c9a990: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B88u;
    sub_01C98B88_0x1c98b88(rdram, ctx, runtime); return;
    ctx->pc = 0x1C9A994u;
    // 0x1c9a994: 0x0  nop
    ctx->pc = 0x1c9a994u;
    // NOP
    ctx->pc = 0x1c9a998u;
}
