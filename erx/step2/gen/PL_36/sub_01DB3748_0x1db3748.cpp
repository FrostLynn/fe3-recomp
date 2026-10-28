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

// Function: sub_01DB3748
// Address: 0x1db3748 - 0x1db37a8
void sub_01DB3748_0x1db3748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB3748_0x1db3748");
#endif

    switch (ctx->pc) {
        case 0x1db3778u: goto label_1db3778;
        case 0x1db377cu: goto label_1db377c;
        case 0x1db379cu: goto label_1db379c;
        default: break;
    }

    ctx->pc = 0x1db3748u;

    // 0x1db3748: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x1db3748u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db374c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1db374cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1db3750: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1db3750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db3754: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1db3754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1db3758: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x1db3758u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db375c: 0x2406033c  addiu       $a2, $zero, 0x33C
    ctx->pc = 0x1db375cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 828));
    // 0x1db3760: 0x240f0145  addiu       $t7, $zero, 0x145
    ctx->pc = 0x1db3760u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 325));
    // 0x1db3764: 0x15cf0008  bne         $t6, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DB3764u;
    {
        const bool branch_taken_0x1db3764 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1DB3768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB3764u;
        // 0x1db3768: 0x1a0202d  daddu       $a0, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db3764) {
            ctx->pc = 0x1DB3788u;
            goto label_1db3788;
        }
    }
    ctx->pc = 0x1DB376Cu;
    // 0x1db376c: 0x3c0601db  lui         $a2, 0x1DB
    ctx->pc = 0x1db376cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)475 << 16));
    // 0x1db3770: 0xc76c7e4  jal         func_1DB1F90
    ctx->pc = 0x1DB3770u;
    SET_GPR_U32(ctx, 31, 0x1DB3778u);
    ctx->pc = 0x1DB3774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB3770u;
    // 0x1db3774: 0x24c67df0  addiu       $a2, $a2, 0x7DF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB1F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB1F90u, 0x1DB3770u, 0x1DB3778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB3778u;
label_1db3778:
    // 0x1db3778: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1db3778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1db377c:
    // 0x1db377c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1db377cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db3780: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB3780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB3784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB3780u;
        // 0x1db3784: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB3780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB3788u;
label_1db3788:
    // 0x1db3788: 0x3c0501db  lui         $a1, 0x1DB
    ctx->pc = 0x1db3788u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)475 << 16));
    // 0x1db378c: 0x3c0401db  lui         $a0, 0x1DB
    ctx->pc = 0x1db378cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)475 << 16));
    // 0x1db3790: 0x24a54230  addiu       $a1, $a1, 0x4230
    ctx->pc = 0x1db3790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16944));
    // 0x1db3794: 0xc76c3f0  jal         func_1DB0FC0
    ctx->pc = 0x1DB3794u;
    SET_GPR_U32(ctx, 31, 0x1DB379Cu);
    ctx->pc = 0x1DB3798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB3794u;
    // 0x1db3798: 0x24840fb8  addiu       $a0, $a0, 0xFB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0FC0u, 0x1DB3794u, 0x1DB379Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB379Cu;
label_1db379c:
    // 0x1db379c: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x1DB379Cu;
    {
        const bool branch_taken_0x1db379c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB37A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB379Cu;
        // 0x1db37a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db379c) {
            ctx->pc = 0x1DB377Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1db377c;
        }
    }
    ctx->pc = 0x1DB37A4u;
    // 0x1db37a4: 0x0  nop
    ctx->pc = 0x1db37a4u;
    // NOP
    ctx->pc = 0x1db37a8u;
}
