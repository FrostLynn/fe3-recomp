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

// Function: sub_01C44C58
// Address: 0x1c44c58 - 0x1c44ca0
void sub_01C44C58_0x1c44c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C44C58_0x1c44c58");
#endif

    switch (ctx->pc) {
        case 0x1c44c84u: goto label_1c44c84;
        default: break;
    }

    ctx->pc = 0x1c44c58u;

    // 0x1c44c58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c44c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c44c5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c44c5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44c60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c44c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c44c64: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c44c64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c44c68: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c44c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c44c6c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c44c6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c44c70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c44c70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44c74: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c44c74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44c78: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c44c78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c44c7c: 0xc710922  jal         func_1C42488
    ctx->pc = 0x1C44C7Cu;
    SET_GPR_U32(ctx, 31, 0x1C44C84u);
    ctx->pc = 0x1C44C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C44C7Cu;
    // 0x1c44c80: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42488u, 0x1C44C7Cu, 0x1C44C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C44C84u;
label_1c44c84:
    // 0x1c44c84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c44c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44c88: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c44c88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c44c8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c44c8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c44c90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c44c90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44c94: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c44c94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c44c98: 0x8710910  j           func_1C42440
    ctx->pc = 0x1C44C98u;
    ctx->pc = 0x1C44C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C44C98u;
    // 0x1c44c9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42440u;
    sub_01C42440_0x1c42440(rdram, ctx, runtime); return;
    ctx->pc = 0x1C44CA0u;
}
