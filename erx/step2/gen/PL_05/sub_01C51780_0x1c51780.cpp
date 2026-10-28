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

// Function: sub_01C51780
// Address: 0x1c51780 - 0x1c51810
void sub_01C51780_0x1c51780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C51780_0x1c51780");
#endif

    switch (ctx->pc) {
        case 0x1c51794u: goto label_1c51794;
        case 0x1c517a8u: goto label_1c517a8;
        case 0x1c517acu: goto label_1c517ac;
        case 0x1c517f4u: goto label_1c517f4;
        default: break;
    }

    ctx->pc = 0x1c51780u;

    // 0x1c51780: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c51780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c51784: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c51784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c51788: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c51788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c5178c: 0xc713e5e  jal         func_1C4F978
    ctx->pc = 0x1C5178Cu;
    SET_GPR_U32(ctx, 31, 0x1C51794u);
    ctx->pc = 0x1C51790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5178Cu;
    // 0x1c51790: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F978u, 0x1C5178Cu, 0x1C51794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51794u;
label_1c51794:
    // 0x1c51794: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c51794u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c51798: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C51798u;
    {
        const bool branch_taken_0x1c51798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C5179Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C51798u;
        // 0x1c5179c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c51798) {
            ctx->pc = 0x1C517BCu;
            goto label_1c517bc;
        }
    }
    ctx->pc = 0x1C517A0u;
    // 0x1c517a0: 0xc713e60  jal         func_1C4F980
    ctx->pc = 0x1C517A0u;
    SET_GPR_U32(ctx, 31, 0x1C517A8u);
    ctx->pc = 0x1C4F980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F980u, 0x1C517A0u, 0x1C517A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C517A8u;
label_1c517a8:
    // 0x1c517a8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c517a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c517ac:
    // 0x1c517ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c517acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c517b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c517b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c517b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C517B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C517B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C517B4u;
        // 0x1c517b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C517B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C517BCu;
label_1c517bc:
    // 0x1c517bc: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C517BCu;
    {
        const bool branch_taken_0x1c517bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C517C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C517BCu;
        // 0x1c517c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c517bc) {
            ctx->pc = 0x1C517ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c517ac;
        }
    }
    ctx->pc = 0x1C517C4u;
    // 0x1c517c4: 0x0  nop
    ctx->pc = 0x1c517c4u;
    // NOP
    // 0x1c517c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c517c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c517cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c517ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c517d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c517d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c517d4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c517d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c517d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c517d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c517dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c517dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c517e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c517e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c517e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c517e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c517e8: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c517e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c517ec: 0xc713e6e  jal         func_1C4F9B8
    ctx->pc = 0x1C517ECu;
    SET_GPR_U32(ctx, 31, 0x1C517F4u);
    ctx->pc = 0x1C517F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C517ECu;
    // 0x1c517f0: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F9B8u, 0x1C517ECu, 0x1C517F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C517F4u;
label_1c517f4:
    // 0x1c517f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c517f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c517f8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c517f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c517fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c517fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c51800: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1c51800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c51804: 0x8713e66  j           func_1C4F998
    ctx->pc = 0x1C51804u;
    ctx->pc = 0x1C51808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51804u;
    // 0x1c51808: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F998u;
    sub_01C4F998_0x1c4f998(rdram, ctx, runtime); return;
    ctx->pc = 0x1C5180Cu;
    // 0x1c5180c: 0x0  nop
    ctx->pc = 0x1c5180cu;
    // NOP
    ctx->pc = 0x1c51810u;
}
