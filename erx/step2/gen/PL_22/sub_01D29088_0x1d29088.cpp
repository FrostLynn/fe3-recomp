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

// Function: sub_01D29088
// Address: 0x1d29088 - 0x1d290c8
void sub_01D29088_0x1d29088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D29088_0x1d29088");
#endif

    switch (ctx->pc) {
        case 0x1d2909cu: goto label_1d2909c;
        default: break;
    }

    ctx->pc = 0x1d29088u;

    // 0x1d29088: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d29088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d2908c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d2908cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d29090: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d29090u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d29094: 0xc749b1a  jal         func_1D26C68
    ctx->pc = 0x1D29094u;
    SET_GPR_U32(ctx, 31, 0x1D2909Cu);
    ctx->pc = 0x1D29098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D29094u;
    // 0x1d29098: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C68u, 0x1D29094u, 0x1D2909Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2909Cu;
label_1d2909c:
    // 0x1d2909c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d2909cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d290a0: 0x3c0f01d3  lui         $t7, 0x1D3
    ctx->pc = 0x1d290a0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)467 << 16));
    // 0x1d290a4: 0x25ef33a8  addiu       $t7, $t7, 0x33A8
    ctx->pc = 0x1d290a4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 13224));
    // 0x1d290a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d290a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d290ac: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1d290acu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x1d290b0: 0x24440580  addiu       $a0, $v0, 0x580
    ctx->pc = 0x1d290b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x1d290b4: 0x460063c6  mov.s       $f15, $f12
    ctx->pc = 0x1d290b4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    // 0x1d290b8: 0xc5ed0000  lwc1        $f13, 0x0($t7)
    ctx->pc = 0x1d290b8u;
    { uint32_t bits = FAST_READ32(0x1D333A8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d290bc: 0x8749db0  j           func_1D276C0
    ctx->pc = 0x1D290BCu;
    ctx->pc = 0x1D290C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D290BCu;
    // 0x1d290c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D276C0u;
    sub_01D276C0_0x1d276c0(rdram, ctx, runtime); return;
    ctx->pc = 0x1D290C4u;
    // 0x1d290c4: 0x0  nop
    ctx->pc = 0x1d290c4u;
    // NOP
    ctx->pc = 0x1d290c8u;
}
