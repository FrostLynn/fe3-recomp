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

// Function: sub_01CA45C8
// Address: 0x1ca45c8 - 0x1ca4608
void sub_01CA45C8_0x1ca45c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CA45C8_0x1ca45c8");
#endif

    switch (ctx->pc) {
        case 0x1ca45dcu: goto label_1ca45dc;
        case 0x1ca45e8u: goto label_1ca45e8;
        default: break;
    }

    ctx->pc = 0x1ca45c8u;

    // 0x1ca45c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ca45c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ca45cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ca45ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ca45d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ca45d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ca45d4: 0xc7289e0  jal         func_1CA2780
    ctx->pc = 0x1CA45D4u;
    SET_GPR_U32(ctx, 31, 0x1CA45DCu);
    ctx->pc = 0x1CA45D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA45D4u;
    // 0x1ca45d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2780u, 0x1CA45D4u, 0x1CA45DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA45DCu;
label_1ca45dc:
    // 0x1ca45dc: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1ca45dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1ca45e0: 0xc7289d6  jal         func_1CA2758
    ctx->pc = 0x1CA45E0u;
    SET_GPR_U32(ctx, 31, 0x1CA45E8u);
    ctx->pc = 0x1CA45E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA45E0u;
    // 0x1ca45e4: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2758u, 0x1CA45E0u, 0x1CA45E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA45E8u;
label_1ca45e8:
    // 0x1ca45e8: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1ca45e8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1ca45ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ca45ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca45f0: 0x25ef0070  addiu       $t7, $t7, 0x70
    ctx->pc = 0x1ca45f0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 112));
    // 0x1ca45f4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ca45f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ca45f8: 0xade04598  sw          $zero, 0x4598($t7)
    ctx->pc = 0x1ca45f8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 17816), GPR_U32(ctx, 0));
    // 0x1ca45fc: 0xade04590  sw          $zero, 0x4590($t7)
    ctx->pc = 0x1ca45fcu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 17808), GPR_U32(ctx, 0));
    // 0x1ca4600: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA4600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA4604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA4600u;
        // 0x1ca4604: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA4600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA4608u;
}
