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

// Function: sub_01D29A50
// Address: 0x1d29a50 - 0x1d29ab4
void sub_01D29A50_0x1d29a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D29A50_0x1d29a50");
#endif

    switch (ctx->pc) {
        case 0x1d29a98u: goto label_1d29a98;
        case 0x1d29aa0u: goto label_1d29aa0;
        case 0x1d29aa4u: goto label_1d29aa4;
        default: break;
    }

    ctx->pc = 0x1d29a50u;

    // 0x1d29a50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d29a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d29a54: 0x2484fee2  addiu       $a0, $a0, -0x11E
    ctx->pc = 0x1d29a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967010));
    // 0x1d29a58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d29a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d29a5c: 0x2c8f0005  sltiu       $t7, $a0, 0x5
    ctx->pc = 0x1d29a5cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1d29a60: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d29a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d29a64: 0x11e00032  beqz        $t7, . + 4 + (0x32 << 2)
    ctx->pc = 0x1D29A64u;
    {
        const bool branch_taken_0x1d29a64 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D29A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D29A64u;
        // 0x1d29a68: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d29a64) {
            ctx->pc = 0x1D29B30u;
            return;
        }
    }
    ctx->pc = 0x1D29A6Cu;
    // 0x1d29a6c: 0x3c0e01d3  lui         $t6, 0x1D3
    ctx->pc = 0x1d29a6cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)467 << 16));
    // 0x1d29a70: 0x47880  sll         $t7, $a0, 2
    ctx->pc = 0x1d29a70u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d29a74: 0x25cea8a4  addiu       $t6, $t6, -0x575C
    ctx->pc = 0x1d29a74u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294944932));
    // 0x1d29a78: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d29a78u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d29a7c: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1d29a7cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d29a80: 0x1a00008  jr          $t5
    ctx->pc = 0x1D29A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D29A88u: goto label_1d29a88;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D29A80u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D29A88u;
label_1d29a88:
    // 0x1d29a88: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d29a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d29a8c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1d29a8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d29a90: 0x3c0601d3  lui         $a2, 0x1D3
    ctx->pc = 0x1d29a90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)467 << 16));
    // 0x1d29a94: 0x24c6f140  addiu       $a2, $a2, -0xEC0
    ctx->pc = 0x1d29a94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963520));
label_1d29a98:
    // 0x1d29a98: 0xc749f2c  jal         func_1D27CB0
    ctx->pc = 0x1D29A98u;
    SET_GPR_U32(ctx, 31, 0x1D29AA0u);
    ctx->pc = 0x1D27CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D27CB0u, 0x1D29A98u, 0x1D29AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D29AA0u;
label_1d29aa0:
    // 0x1d29aa0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d29aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d29aa4:
    // 0x1d29aa4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d29aa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d29aa8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d29aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d29aac: 0x3e00008  jr          $ra
    ctx->pc = 0x1D29AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D29AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D29AACu;
        // 0x1d29ab0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D29AACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D29AB4u;
}
