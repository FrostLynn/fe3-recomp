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

// Function: sub_01C9A998
// Address: 0x1c9a998 - 0x1c9a9d8
void sub_01C9A998_0x1c9a998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C9A998_0x1c9a998");
#endif

    switch (ctx->pc) {
        case 0x1c9a9acu: goto label_1c9a9ac;
        case 0x1c9a9b8u: goto label_1c9a9b8;
        default: break;
    }

    ctx->pc = 0x1c9a998u;

    // 0x1c9a998: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c9a998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c9a99c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c9a99cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c9a9a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c9a9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c9a9a4: 0xc7262e0  jal         func_1C98B80
    ctx->pc = 0x1C9A9A4u;
    SET_GPR_U32(ctx, 31, 0x1C9A9ACu);
    ctx->pc = 0x1C9A9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9A9A4u;
    // 0x1c9a9a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B80u, 0x1C9A9A4u, 0x1C9A9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9A9ACu;
label_1c9a9ac:
    // 0x1c9a9ac: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c9a9acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c9a9b0: 0xc7262d6  jal         func_1C98B58
    ctx->pc = 0x1C9A9B0u;
    SET_GPR_U32(ctx, 31, 0x1C9A9B8u);
    ctx->pc = 0x1C9A9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9A9B0u;
    // 0x1c9a9b4: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B58u, 0x1C9A9B0u, 0x1C9A9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9A9B8u;
label_1c9a9b8:
    // 0x1c9a9b8: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c9a9b8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c9a9bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c9a9bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9a9c0: 0x25ef0070  addiu       $t7, $t7, 0x70
    ctx->pc = 0x1c9a9c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 112));
    // 0x1c9a9c4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c9a9c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c9a9c8: 0xade04598  sw          $zero, 0x4598($t7)
    ctx->pc = 0x1c9a9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 17816), GPR_U32(ctx, 0));
    // 0x1c9a9cc: 0xade04590  sw          $zero, 0x4590($t7)
    ctx->pc = 0x1c9a9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 17808), GPR_U32(ctx, 0));
    // 0x1c9a9d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9A9D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9A9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9A9D0u;
        // 0x1c9a9d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9A9D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9A9D8u;
}
