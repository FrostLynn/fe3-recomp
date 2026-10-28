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

// Function: sub_01D67CA8
// Address: 0x1d67ca8 - 0x1d67d08
void sub_01D67CA8_0x1d67ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D67CA8_0x1d67ca8");
#endif

    switch (ctx->pc) {
        case 0x1d67cc4u: goto label_1d67cc4;
        case 0x1d67cd4u: goto label_1d67cd4;
        case 0x1d67ce0u: goto label_1d67ce0;
        case 0x1d67cf0u: goto label_1d67cf0;
        default: break;
    }

    ctx->pc = 0x1d67ca8u;

    // 0x1d67ca8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d67ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d67cac: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d67cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d67cb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d67cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d67cb4: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d67cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d67cb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d67cb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67cbc: 0xc7599cc  jal         func_1D66730
    ctx->pc = 0x1D67CBCu;
    SET_GPR_U32(ctx, 31, 0x1D67CC4u);
    ctx->pc = 0x1D67CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67CBCu;
    // 0x1d67cc0: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66730u, 0x1D67CBCu, 0x1D67CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67CC4u;
label_1d67cc4:
    // 0x1d67cc4: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d67cc4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d67cc8: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d67cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d67ccc: 0xc759c82  jal         func_1D67208
    ctx->pc = 0x1D67CCCu;
    SET_GPR_U32(ctx, 31, 0x1D67CD4u);
    ctx->pc = 0x1D67CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67CCCu;
    // 0x1d67cd0: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D67208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D67208u, 0x1D67CCCu, 0x1D67CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67CD4u;
label_1d67cd4:
    // 0x1d67cd4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d67cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d67cd8: 0xc7599cc  jal         func_1D66730
    ctx->pc = 0x1D67CD8u;
    SET_GPR_U32(ctx, 31, 0x1D67CE0u);
    ctx->pc = 0x1D67CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67CD8u;
    // 0x1d67cdc: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66730u, 0x1D67CD8u, 0x1D67CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67CE0u;
label_1d67ce0:
    // 0x1d67ce0: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d67ce0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d67ce4: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d67ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d67ce8: 0xc759c82  jal         func_1D67208
    ctx->pc = 0x1D67CE8u;
    SET_GPR_U32(ctx, 31, 0x1D67CF0u);
    ctx->pc = 0x1D67CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67CE8u;
    // 0x1d67cec: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D67208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D67208u, 0x1D67CE8u, 0x1D67CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67CF0u;
label_1d67cf0:
    // 0x1d67cf0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d67cf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d67cf4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d67cf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67cf8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d67cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d67cfc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D67CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D67D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D67CFCu;
        // 0x1d67d00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D67CFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D67D04u;
    // 0x1d67d04: 0x0  nop
    ctx->pc = 0x1d67d04u;
    // NOP
    ctx->pc = 0x1d67d08u;
}
