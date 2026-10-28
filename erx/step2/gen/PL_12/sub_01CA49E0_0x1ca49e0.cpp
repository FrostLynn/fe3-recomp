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

// Function: sub_01CA49E0
// Address: 0x1ca49e0 - 0x1ca4a20
void sub_01CA49E0_0x1ca49e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CA49E0_0x1ca49e0");
#endif

    switch (ctx->pc) {
        case 0x1ca49f4u: goto label_1ca49f4;
        default: break;
    }

    ctx->pc = 0x1ca49e0u;

    // 0x1ca49e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ca49e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ca49e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ca49e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ca49e8: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1ca49e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1ca49ec: 0xc7289d6  jal         func_1CA2758
    ctx->pc = 0x1CA49ECu;
    SET_GPR_U32(ctx, 31, 0x1CA49F4u);
    ctx->pc = 0x1CA49F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA49ECu;
    // 0x1ca49f0: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2758u, 0x1CA49ECu, 0x1CA49F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA49F4u;
label_1ca49f4:
    // 0x1ca49f4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ca49f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ca49f8: 0x3c0f01cb  lui         $t7, 0x1CB
    ctx->pc = 0x1ca49f8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)459 << 16));
    // 0x1ca49fc: 0x25efcfe8  addiu       $t7, $t7, -0x3018
    ctx->pc = 0x1ca49fcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294954984));
    // 0x1ca4a00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ca4a00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca4a04: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1ca4a04u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x1ca4a08: 0x24440580  addiu       $a0, $v0, 0x580
    ctx->pc = 0x1ca4a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x1ca4a0c: 0x460063c6  mov.s       $f15, $f12
    ctx->pc = 0x1ca4a0cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    // 0x1ca4a10: 0xc5ed0000  lwc1        $f13, 0x0($t7)
    ctx->pc = 0x1ca4a10u;
    { uint32_t bits = FAST_READ32(0x1CACFE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ca4a14: 0x8728c6a  j           func_1CA31A8
    ctx->pc = 0x1CA4A14u;
    ctx->pc = 0x1CA4A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA4A14u;
    // 0x1ca4a18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA31A8u;
    sub_01CA31A8_0x1ca31a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1CA4A1Cu;
    // 0x1ca4a1c: 0x0  nop
    ctx->pc = 0x1ca4a1cu;
    // NOP
    ctx->pc = 0x1ca4a20u;
}
