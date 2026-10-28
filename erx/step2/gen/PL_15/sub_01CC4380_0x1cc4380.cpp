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

// Function: sub_01CC4380
// Address: 0x1cc4380 - 0x1cc43c0
void sub_01CC4380_0x1cc4380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC4380_0x1cc4380");
#endif

    switch (ctx->pc) {
        case 0x1cc4394u: goto label_1cc4394;
        case 0x1cc43a0u: goto label_1cc43a0;
        default: break;
    }

    ctx->pc = 0x1cc4380u;

    // 0x1cc4380: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cc4380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cc4384: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cc4384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cc4388: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cc4388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cc438c: 0xc730922  jal         func_1CC2488
    ctx->pc = 0x1CC438Cu;
    SET_GPR_U32(ctx, 31, 0x1CC4394u);
    ctx->pc = 0x1CC4390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC438Cu;
    // 0x1cc4390: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2488u, 0x1CC438Cu, 0x1CC4394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC4394u;
label_1cc4394:
    // 0x1cc4394: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1cc4394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cc4398: 0xc730918  jal         func_1CC2460
    ctx->pc = 0x1CC4398u;
    SET_GPR_U32(ctx, 31, 0x1CC43A0u);
    ctx->pc = 0x1CC439Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC4398u;
    // 0x1cc439c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2460u, 0x1CC4398u, 0x1CC43A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC43A0u;
label_1cc43a0:
    // 0x1cc43a0: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1cc43a0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1cc43a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cc43a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc43a8: 0x25ef0070  addiu       $t7, $t7, 0x70
    ctx->pc = 0x1cc43a8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 112));
    // 0x1cc43ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cc43acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cc43b0: 0xade04598  sw          $zero, 0x4598($t7)
    ctx->pc = 0x1cc43b0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 17816), GPR_U32(ctx, 0));
    // 0x1cc43b4: 0xade04590  sw          $zero, 0x4590($t7)
    ctx->pc = 0x1cc43b4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 17808), GPR_U32(ctx, 0));
    // 0x1cc43b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC43B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC43BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC43B8u;
        // 0x1cc43bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC43B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC43C0u;
}
