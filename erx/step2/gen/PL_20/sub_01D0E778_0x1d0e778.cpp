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

// Function: sub_01D0E778
// Address: 0x1d0e778 - 0x1d0e7b8
void sub_01D0E778_0x1d0e778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0E778_0x1d0e778");
#endif

    switch (ctx->pc) {
        case 0x1d0e794u: goto label_1d0e794;
        default: break;
    }

    ctx->pc = 0x1d0e778u;

    // 0x1d0e778: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d0e778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d0e77c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d0e77cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d0e780: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d0e780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d0e784: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d0e784u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0e788: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d0e788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d0e78c: 0xc742f56  jal         func_1D0BD58
    ctx->pc = 0x1D0E78Cu;
    SET_GPR_U32(ctx, 31, 0x1D0E794u);
    ctx->pc = 0x1D0E790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0E78Cu;
    // 0x1d0e790: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD58u, 0x1D0E78Cu, 0x1D0E794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0E794u;
label_1d0e794:
    // 0x1d0e794: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x1d0e794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0e798: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0e798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0e79c: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x1d0e79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d0e7a0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d0e7a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d0e7a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d0e7a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d0e7a8: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x1d0e7a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x1d0e7ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d0e7acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0e7b0: 0x87431e0  j           func_1D0C780
    ctx->pc = 0x1D0E7B0u;
    ctx->pc = 0x1D0E7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0E7B0u;
    // 0x1d0e7b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0C780u;
    sub_01D0C780_0x1d0c780(rdram, ctx, runtime); return;
    ctx->pc = 0x1D0E7B8u;
}
