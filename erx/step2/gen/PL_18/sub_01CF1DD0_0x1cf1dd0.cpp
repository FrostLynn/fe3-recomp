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

// Function: sub_01CF1DD0
// Address: 0x1cf1dd0 - 0x1cf1e10
void sub_01CF1DD0_0x1cf1dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CF1DD0_0x1cf1dd0");
#endif

    switch (ctx->pc) {
        case 0x1cf1decu: goto label_1cf1dec;
        default: break;
    }

    ctx->pc = 0x1cf1dd0u;

    // 0x1cf1dd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cf1dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cf1dd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cf1dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cf1dd8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cf1dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cf1ddc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cf1ddcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1de0: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1cf1de0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cf1de4: 0xc73bd58  jal         func_1CEF560
    ctx->pc = 0x1CF1DE4u;
    SET_GPR_U32(ctx, 31, 0x1CF1DECu);
    ctx->pc = 0x1CF1DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1DE4u;
    // 0x1cf1de8: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF560u, 0x1CF1DE4u, 0x1CF1DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1DECu;
label_1cf1dec:
    // 0x1cf1dec: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x1cf1decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf1df0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cf1df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1df4: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x1cf1df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf1df8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cf1df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cf1dfc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1cf1dfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cf1e00: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x1cf1e00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x1cf1e04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cf1e04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf1e08: 0x873bfe4  j           func_1CEFF90
    ctx->pc = 0x1CF1E08u;
    ctx->pc = 0x1CF1E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1E08u;
    // 0x1cf1e0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEFF90u;
    sub_01CEFF90_0x1ceff90(rdram, ctx, runtime); return;
    ctx->pc = 0x1CF1E10u;
}
