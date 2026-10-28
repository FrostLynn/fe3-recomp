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

// Function: sub_01C52F88
// Address: 0x1c52f88 - 0x1c52fc8
void sub_01C52F88_0x1c52f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C52F88_0x1c52f88");
#endif

    switch (ctx->pc) {
        case 0x1c52fa4u: goto label_1c52fa4;
        default: break;
    }

    ctx->pc = 0x1c52f88u;

    // 0x1c52f88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c52f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c52f8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c52f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c52f90: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c52f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c52f94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c52f94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52f98: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c52f98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c52f9c: 0xc713e62  jal         func_1C4F988
    ctx->pc = 0x1C52F9Cu;
    SET_GPR_U32(ctx, 31, 0x1C52FA4u);
    ctx->pc = 0x1C52FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C52F9Cu;
    // 0x1c52fa0: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F988u, 0x1C52F9Cu, 0x1C52FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52FA4u;
label_1c52fa4:
    // 0x1c52fa4: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x1c52fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c52fa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c52fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52fac: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x1c52facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c52fb0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c52fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c52fb4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c52fb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c52fb8: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x1c52fb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x1c52fbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c52fbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c52fc0: 0x87140e4  j           func_1C50390
    ctx->pc = 0x1C52FC0u;
    ctx->pc = 0x1C52FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C52FC0u;
    // 0x1c52fc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C50390u;
    sub_01C50390_0x1c50390(rdram, ctx, runtime); return;
    ctx->pc = 0x1C52FC8u;
}
