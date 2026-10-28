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

// Function: sub_01C51810
// Address: 0x1c51810 - 0x1c51850
void sub_01C51810_0x1c51810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C51810_0x1c51810");
#endif

    switch (ctx->pc) {
        case 0x1c51824u: goto label_1c51824;
        case 0x1c51830u: goto label_1c51830;
        default: break;
    }

    ctx->pc = 0x1c51810u;

    // 0x1c51810: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c51810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c51814: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c51814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c51818: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c51818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c5181c: 0xc713e6c  jal         func_1C4F9B0
    ctx->pc = 0x1C5181Cu;
    SET_GPR_U32(ctx, 31, 0x1C51824u);
    ctx->pc = 0x1C51820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5181Cu;
    // 0x1c51820: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F9B0u, 0x1C5181Cu, 0x1C51824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51824u;
label_1c51824:
    // 0x1c51824: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c51824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c51828: 0xc713e62  jal         func_1C4F988
    ctx->pc = 0x1C51828u;
    SET_GPR_U32(ctx, 31, 0x1C51830u);
    ctx->pc = 0x1C5182Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51828u;
    // 0x1c5182c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F988u, 0x1C51828u, 0x1C51830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51830u;
label_1c51830:
    // 0x1c51830: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c51830u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c51834: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c51834u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c51838: 0x25ef0070  addiu       $t7, $t7, 0x70
    ctx->pc = 0x1c51838u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 112));
    // 0x1c5183c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c5183cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c51840: 0xade04598  sw          $zero, 0x4598($t7)
    ctx->pc = 0x1c51840u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 17816), GPR_U32(ctx, 0));
    // 0x1c51844: 0xade04590  sw          $zero, 0x4590($t7)
    ctx->pc = 0x1c51844u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 17808), GPR_U32(ctx, 0));
    // 0x1c51848: 0x3e00008  jr          $ra
    ctx->pc = 0x1C51848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5184Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C51848u;
        // 0x1c5184c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C51848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C51850u;
}
