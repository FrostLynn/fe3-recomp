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

// Function: sub_01D787A8
// Address: 0x1d787a8 - 0x1d787f8
void sub_01D787A8_0x1d787a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D787A8_0x1d787a8");
#endif

    switch (ctx->pc) {
        case 0x1d787d8u: goto label_1d787d8;
        case 0x1d787e8u: goto label_1d787e8;
        default: break;
    }

    ctx->pc = 0x1d787a8u;

    // 0x1d787a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d787a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d787ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d787acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d787b0: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x1d787b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d787b4: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x1d787b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d787b8: 0x8c8f0000  lw          $t7, 0x0($a0)
    ctx->pc = 0x1d787b8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d787bc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d787bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d787c0: 0x8dee08d8  lw          $t6, 0x8D8($t7)
    ctx->pc = 0x1d787c0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 2264)));
    // 0x1d787c4: 0x15c00008  bnez        $t6, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D787C4u;
    {
        const bool branch_taken_0x1d787c4 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D787C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D787C4u;
        // 0x1d787c8: 0xe480001c  swc1        $f0, 0x1C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d787c4) {
            ctx->pc = 0x1D787E8u;
            goto label_1d787e8;
        }
    }
    ctx->pc = 0x1D787CCu;
    // 0x1d787cc: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d787ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d787d0: 0xc75ded4  jal         func_1D77B50
    ctx->pc = 0x1D787D0u;
    SET_GPR_U32(ctx, 31, 0x1D787D8u);
    ctx->pc = 0x1D787D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D787D0u;
    // 0x1d787d4: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D77B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D77B50u, 0x1D787D0u, 0x1D787D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D787D8u;
label_1d787d8:
    // 0x1d787d8: 0x24440390  addiu       $a0, $v0, 0x390
    ctx->pc = 0x1d787d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 912));
    // 0x1d787dc: 0x24050140  addiu       $a1, $zero, 0x140
    ctx->pc = 0x1d787dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1d787e0: 0xc75deda  jal         func_1D77B68
    ctx->pc = 0x1D787E0u;
    SET_GPR_U32(ctx, 31, 0x1D787E8u);
    ctx->pc = 0x1D787E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D787E0u;
    // 0x1d787e4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D77B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D77B68u, 0x1D787E0u, 0x1D787E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D787E8u;
label_1d787e8:
    // 0x1d787e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d787e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d787ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d787ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d787f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D787F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D787F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D787F0u;
        // 0x1d787f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D787F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D787F8u;
}
