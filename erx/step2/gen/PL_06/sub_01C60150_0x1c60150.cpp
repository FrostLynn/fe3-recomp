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

// Function: sub_01C60150
// Address: 0x1c60150 - 0x1c601e0
void sub_01C60150_0x1c60150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C60150_0x1c60150");
#endif

    switch (ctx->pc) {
        case 0x1c60164u: goto label_1c60164;
        case 0x1c60178u: goto label_1c60178;
        case 0x1c6017cu: goto label_1c6017c;
        case 0x1c601c4u: goto label_1c601c4;
        default: break;
    }

    ctx->pc = 0x1c60150u;

    // 0x1c60150: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c60150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c60154: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c60154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c60158: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c60158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c6015c: 0xc717d52  jal         func_1C5F548
    ctx->pc = 0x1C6015Cu;
    SET_GPR_U32(ctx, 31, 0x1C60164u);
    ctx->pc = 0x1C60160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6015Cu;
    // 0x1c60160: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F548u, 0x1C6015Cu, 0x1C60164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C60164u;
label_1c60164:
    // 0x1c60164: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c60164u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c60168: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C60168u;
    {
        const bool branch_taken_0x1c60168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C6016Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C60168u;
        // 0x1c6016c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c60168) {
            ctx->pc = 0x1C6018Cu;
            goto label_1c6018c;
        }
    }
    ctx->pc = 0x1C60170u;
    // 0x1c60170: 0xc717d54  jal         func_1C5F550
    ctx->pc = 0x1C60170u;
    SET_GPR_U32(ctx, 31, 0x1C60178u);
    ctx->pc = 0x1C5F550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F550u, 0x1C60170u, 0x1C60178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C60178u;
label_1c60178:
    // 0x1c60178: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c60178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c6017c:
    // 0x1c6017c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c6017cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c60180: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c60180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c60184: 0x3e00008  jr          $ra
    ctx->pc = 0x1C60184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C60188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C60184u;
        // 0x1c60188: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C60184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6018Cu;
label_1c6018c:
    // 0x1c6018c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C6018Cu;
    {
        const bool branch_taken_0x1c6018c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C60190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6018Cu;
        // 0x1c60190: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6018c) {
            ctx->pc = 0x1C6017Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6017c;
        }
    }
    ctx->pc = 0x1C60194u;
    // 0x1c60194: 0x0  nop
    ctx->pc = 0x1c60194u;
    // NOP
    // 0x1c60198: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c60198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c6019c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c6019cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c601a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c601a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c601a4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c601a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c601a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c601a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c601ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c601acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c601b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c601b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c601b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c601b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c601b8: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c601b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c601bc: 0xc717d62  jal         func_1C5F588
    ctx->pc = 0x1C601BCu;
    SET_GPR_U32(ctx, 31, 0x1C601C4u);
    ctx->pc = 0x1C601C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C601BCu;
    // 0x1c601c0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F588u, 0x1C601BCu, 0x1C601C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C601C4u;
label_1c601c4:
    // 0x1c601c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c601c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c601c8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c601c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c601cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c601ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c601d0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1c601d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c601d4: 0x8717d5a  j           func_1C5F568
    ctx->pc = 0x1C601D4u;
    ctx->pc = 0x1C601D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C601D4u;
    // 0x1c601d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F568u;
    sub_01C5F568_0x1c5f568(rdram, ctx, runtime); return;
    ctx->pc = 0x1C601DCu;
    // 0x1c601dc: 0x0  nop
    ctx->pc = 0x1c601dcu;
    // NOP
    ctx->pc = 0x1c601e0u;
}
