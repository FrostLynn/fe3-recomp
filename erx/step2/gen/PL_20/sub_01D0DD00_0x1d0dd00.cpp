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

// Function: sub_01D0DD00
// Address: 0x1d0dd00 - 0x1d0dd48
void sub_01D0DD00_0x1d0dd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0DD00_0x1d0dd00");
#endif

    switch (ctx->pc) {
        case 0x1d0dd14u: goto label_1d0dd14;
        case 0x1d0dd1cu: goto label_1d0dd1c;
        case 0x1d0dd28u: goto label_1d0dd28;
        default: break;
    }

    ctx->pc = 0x1d0dd00u;

    // 0x1d0dd00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d0dd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d0dd04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d0dd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d0dd08: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d0dd08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d0dd0c: 0xc742f60  jal         func_1D0BD80
    ctx->pc = 0x1D0DD0Cu;
    SET_GPR_U32(ctx, 31, 0x1D0DD14u);
    ctx->pc = 0x1D0DD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0DD0Cu;
    // 0x1d0dd10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD80u, 0x1D0DD0Cu, 0x1D0DD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0DD14u;
label_1d0dd14:
    // 0x1d0dd14: 0xc7431f4  jal         func_1D0C7D0
    ctx->pc = 0x1D0DD14u;
    SET_GPR_U32(ctx, 31, 0x1D0DD1Cu);
    ctx->pc = 0x1D0DD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0DD14u;
    // 0x1d0dd18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0C7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0C7D0u, 0x1D0DD14u, 0x1D0DD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0DD1Cu;
label_1d0dd1c:
    // 0x1d0dd1c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d0dd1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d0dd20: 0xc742f56  jal         func_1D0BD58
    ctx->pc = 0x1D0DD20u;
    SET_GPR_U32(ctx, 31, 0x1D0DD28u);
    ctx->pc = 0x1D0DD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0DD20u;
    // 0x1d0dd24: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD58u, 0x1D0DD20u, 0x1D0DD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0DD28u;
label_1d0dd28:
    // 0x1d0dd28: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d0dd28u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d0dd2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d0dd2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0dd30: 0x25ef0070  addiu       $t7, $t7, 0x70
    ctx->pc = 0x1d0dd30u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 112));
    // 0x1d0dd34: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d0dd34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d0dd38: 0xade04598  sw          $zero, 0x4598($t7)
    ctx->pc = 0x1d0dd38u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 17816), GPR_U32(ctx, 0));
    // 0x1d0dd3c: 0xade04590  sw          $zero, 0x4590($t7)
    ctx->pc = 0x1d0dd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 17808), GPR_U32(ctx, 0));
    // 0x1d0dd40: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0DD40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0DD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0DD40u;
        // 0x1d0dd44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0DD40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0DD48u;
}
