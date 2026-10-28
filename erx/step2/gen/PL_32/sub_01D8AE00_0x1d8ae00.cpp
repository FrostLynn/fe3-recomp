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

// Function: sub_01D8AE00
// Address: 0x1d8ae00 - 0x1d8ae40
void sub_01D8AE00_0x1d8ae00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D8AE00_0x1d8ae00");
#endif

    switch (ctx->pc) {
        case 0x1d8ae14u: goto label_1d8ae14;
        default: break;
    }

    ctx->pc = 0x1d8ae00u;

    // 0x1d8ae00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d8ae00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d8ae04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d8ae04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d8ae08: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d8ae08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d8ae0c: 0xc762256  jal         func_1D88958
    ctx->pc = 0x1D8AE0Cu;
    SET_GPR_U32(ctx, 31, 0x1D8AE14u);
    ctx->pc = 0x1D8AE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8AE0Cu;
    // 0x1d8ae10: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88958u, 0x1D8AE0Cu, 0x1D8AE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8AE14u;
label_1d8ae14:
    // 0x1d8ae14: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d8ae14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8ae18: 0x3c0f01d9  lui         $t7, 0x1D9
    ctx->pc = 0x1d8ae18u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)473 << 16));
    // 0x1d8ae1c: 0x25ef2714  addiu       $t7, $t7, 0x2714
    ctx->pc = 0x1d8ae1cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 10004));
    // 0x1d8ae20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d8ae20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8ae24: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1d8ae24u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x1d8ae28: 0x24440580  addiu       $a0, $v0, 0x580
    ctx->pc = 0x1d8ae28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x1d8ae2c: 0x460063c6  mov.s       $f15, $f12
    ctx->pc = 0x1d8ae2cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    // 0x1d8ae30: 0xc5ed0000  lwc1        $f13, 0x0($t7)
    ctx->pc = 0x1d8ae30u;
    { uint32_t bits = FAST_READ32(0x1D92714u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d8ae34: 0x87624ea  j           func_1D893A8
    ctx->pc = 0x1D8AE34u;
    ctx->pc = 0x1D8AE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8AE34u;
    // 0x1d8ae38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D893A8u;
    sub_01D893A8_0x1d893a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D8AE3Cu;
    // 0x1d8ae3c: 0x0  nop
    ctx->pc = 0x1d8ae3cu;
    // NOP
    ctx->pc = 0x1d8ae40u;
}
