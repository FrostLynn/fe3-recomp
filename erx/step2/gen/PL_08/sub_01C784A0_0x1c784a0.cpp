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

// Function: sub_01C784A0
// Address: 0x1c784a0 - 0x1c78538
void sub_01C784A0_0x1c784a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C784A0_0x1c784a0");
#endif

    switch (ctx->pc) {
        case 0x1c784b4u: goto label_1c784b4;
        case 0x1c784c8u: goto label_1c784c8;
        case 0x1c784ccu: goto label_1c784cc;
        case 0x1c78514u: goto label_1c78514;
        case 0x1c78520u: goto label_1c78520;
        default: break;
    }

    ctx->pc = 0x1c784a0u;

    // 0x1c784a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c784a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c784a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c784a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c784a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c784a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c784ac: 0xc71d652  jal         func_1C75948
    ctx->pc = 0x1C784ACu;
    SET_GPR_U32(ctx, 31, 0x1C784B4u);
    ctx->pc = 0x1C784B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C784ACu;
    // 0x1c784b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75948u, 0x1C784ACu, 0x1C784B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C784B4u;
label_1c784b4:
    // 0x1c784b4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c784b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c784b8: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C784B8u;
    {
        const bool branch_taken_0x1c784b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C784BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C784B8u;
        // 0x1c784bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c784b8) {
            ctx->pc = 0x1C784DCu;
            goto label_1c784dc;
        }
    }
    ctx->pc = 0x1C784C0u;
    // 0x1c784c0: 0xc71d654  jal         func_1C75950
    ctx->pc = 0x1C784C0u;
    SET_GPR_U32(ctx, 31, 0x1C784C8u);
    ctx->pc = 0x1C75950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75950u, 0x1C784C0u, 0x1C784C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C784C8u;
label_1c784c8:
    // 0x1c784c8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c784c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c784cc:
    // 0x1c784cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c784ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c784d0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c784d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c784d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C784D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C784D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C784D4u;
        // 0x1c784d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C784D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C784DCu;
label_1c784dc:
    // 0x1c784dc: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C784DCu;
    {
        const bool branch_taken_0x1c784dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C784E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C784DCu;
        // 0x1c784e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c784dc) {
            ctx->pc = 0x1C784CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c784cc;
        }
    }
    ctx->pc = 0x1C784E4u;
    // 0x1c784e4: 0x0  nop
    ctx->pc = 0x1c784e4u;
    // NOP
    // 0x1c784e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c784e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c784ec: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c784ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c784f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c784f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c784f4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c784f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c784f8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c784f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c784fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c784fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78500: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c78500u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78504: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c78504u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c78508: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c78508u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7850c: 0xc71d662  jal         func_1C75988
    ctx->pc = 0x1C7850Cu;
    SET_GPR_U32(ctx, 31, 0x1C78514u);
    ctx->pc = 0x1C78510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7850Cu;
    // 0x1c78510: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75988u, 0x1C7850Cu, 0x1C78514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C78514u;
label_1c78514:
    // 0x1c78514: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c78514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78518: 0xc71d65a  jal         func_1C75968
    ctx->pc = 0x1C78518u;
    SET_GPR_U32(ctx, 31, 0x1C78520u);
    ctx->pc = 0x1C7851Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C78518u;
    // 0x1c7851c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75968u, 0x1C78518u, 0x1C78520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C78520u;
label_1c78520:
    // 0x1c78520: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c78520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78524: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c78524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c78528: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c78528u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7852c: 0x240500ae  addiu       $a1, $zero, 0xAE
    ctx->pc = 0x1c7852cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 174));
    // 0x1c78530: 0x871e0c4  j           func_1C78310
    ctx->pc = 0x1C78530u;
    ctx->pc = 0x1C78534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C78530u;
    // 0x1c78534: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C78310u;
    sub_01C78310_0x1c78310(rdram, ctx, runtime); return;
    ctx->pc = 0x1C78538u;
}
