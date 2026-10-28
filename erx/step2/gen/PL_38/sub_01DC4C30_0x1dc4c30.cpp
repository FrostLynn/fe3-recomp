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

// Function: sub_01DC4C30
// Address: 0x1dc4c30 - 0x1dc4ca0
void sub_01DC4C30_0x1dc4c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DC4C30_0x1dc4c30");
#endif

    switch (ctx->pc) {
        case 0x1dc4c44u: goto label_1dc4c44;
        case 0x1dc4c84u: goto label_1dc4c84;
        default: break;
    }

    ctx->pc = 0x1dc4c30u;

    // 0x1dc4c30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dc4c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dc4c34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dc4c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dc4c38: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1dc4c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1dc4c3c: 0xc7710b4  jal         func_1DC42D0
    ctx->pc = 0x1DC4C3Cu;
    SET_GPR_U32(ctx, 31, 0x1DC4C44u);
    ctx->pc = 0x1DC4C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC4C3Cu;
    // 0x1dc4c40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC42D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC42D0u, 0x1DC4C3Cu, 0x1DC4C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC4C44u;
label_1dc4c44:
    // 0x1dc4c44: 0x3c0f01dd  lui         $t7, 0x1DD
    ctx->pc = 0x1dc4c44u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)477 << 16));
    // 0x1dc4c48: 0x8f8e805c  lw          $t6, -0x7FA4($gp)
    ctx->pc = 0x1dc4c48u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934620)));
    // 0x1dc4c4c: 0x25efa264  addiu       $t7, $t7, -0x5D9C
    ctx->pc = 0x1dc4c4cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294943332));
    // 0x1dc4c50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dc4c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc4c54: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1dc4c54u;
    { uint32_t bits = FAST_READ32(0x1DCA264u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dc4c58: 0xe7080  sll         $t6, $t6, 2
    ctx->pc = 0x1dc4c58u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x1dc4c5c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1dc4c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dc4c60: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1dc4c60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dc4c64: 0x3c0f01dc  lui         $t7, 0x1DC
    ctx->pc = 0x1dc4c64u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)476 << 16));
    // 0x1dc4c68: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dc4c68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc4c6c: 0x25ef5660  addiu       $t7, $t7, 0x5660
    ctx->pc = 0x1dc4c6cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 22112));
    // 0x1dc4c70: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1dc4c70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dc4c74: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x1dc4c74u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x1dc4c78: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1dc4c78u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc4c7c: 0xc771156  jal         func_1DC4558
    ctx->pc = 0x1DC4C7Cu;
    SET_GPR_U32(ctx, 31, 0x1DC4C84u);
    ctx->pc = 0x1DC4C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC4C7Cu;
    // 0x1dc4c80: 0x8dc60048  lw          $a2, 0x48($t6) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC4558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC4558u, 0x1DC4C7Cu, 0x1DC4C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC4C84u;
label_1dc4c84:
    // 0x1dc4c84: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x1dc4c84u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dc4c88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dc4c88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc4c8c: 0xaf8f805c  sw          $t7, -0x7FA4($gp)
    ctx->pc = 0x1dc4c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934620), GPR_U32(ctx, 15));
    // 0x1dc4c90: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dc4c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dc4c94: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC4C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC4C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC4C94u;
        // 0x1dc4c98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC4C94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC4C9Cu;
    // 0x1dc4c9c: 0x0  nop
    ctx->pc = 0x1dc4c9cu;
    // NOP
    ctx->pc = 0x1dc4ca0u;
}
