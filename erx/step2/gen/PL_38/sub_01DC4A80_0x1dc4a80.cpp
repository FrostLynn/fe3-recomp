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

// Function: sub_01DC4A80
// Address: 0x1dc4a80 - 0x1dc4ae0
void sub_01DC4A80_0x1dc4a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DC4A80_0x1dc4a80");
#endif

    switch (ctx->pc) {
        case 0x1dc4a94u: goto label_1dc4a94;
        default: break;
    }

    ctx->pc = 0x1dc4a80u;

    // 0x1dc4a80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dc4a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dc4a84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dc4a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dc4a88: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1dc4a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1dc4a8c: 0xc771144  jal         func_1DC4510
    ctx->pc = 0x1DC4A8Cu;
    SET_GPR_U32(ctx, 31, 0x1DC4A94u);
    ctx->pc = 0x1DC4A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC4A8Cu;
    // 0x1dc4a90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC4510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC4510u, 0x1DC4A8Cu, 0x1DC4A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC4A94u;
label_1dc4a94:
    // 0x1dc4a94: 0x3c0f01dd  lui         $t7, 0x1DD
    ctx->pc = 0x1dc4a94u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)477 << 16));
    // 0x1dc4a98: 0x8f8e805c  lw          $t6, -0x7FA4($gp)
    ctx->pc = 0x1dc4a98u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934620)));
    // 0x1dc4a9c: 0x25efa258  addiu       $t7, $t7, -0x5DA8
    ctx->pc = 0x1dc4a9cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294943320));
    // 0x1dc4aa0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dc4aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dc4aa4: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1dc4aa4u;
    { uint32_t bits = FAST_READ32(0x1DCA258u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dc4aa8: 0xe7080  sll         $t6, $t6, 2
    ctx->pc = 0x1dc4aa8u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x1dc4aac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dc4aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc4ab0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1dc4ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dc4ab4: 0x3c0f01dc  lui         $t7, 0x1DC
    ctx->pc = 0x1dc4ab4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)476 << 16));
    // 0x1dc4ab8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dc4ab8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc4abc: 0x25ef5660  addiu       $t7, $t7, 0x5660
    ctx->pc = 0x1dc4abcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 22112));
    // 0x1dc4ac0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1dc4ac0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dc4ac4: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x1dc4ac4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x1dc4ac8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dc4ac8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc4acc: 0x8dc60024  lw          $a2, 0x24($t6)
    ctx->pc = 0x1dc4accu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 36)));
    // 0x1dc4ad0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1dc4ad0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dc4ad4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1dc4ad4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc4ad8: 0x8771156  j           func_1DC4558
    ctx->pc = 0x1DC4AD8u;
    ctx->pc = 0x1DC4ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC4AD8u;
    // 0x1dc4adc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC4558u;
    sub_01DC4558_0x1dc4558(rdram, ctx, runtime); return;
    ctx->pc = 0x1DC4AE0u;
}
