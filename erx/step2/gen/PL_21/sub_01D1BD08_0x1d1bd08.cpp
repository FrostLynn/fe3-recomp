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

// Function: sub_01D1BD08
// Address: 0x1d1bd08 - 0x1d1bd48
void sub_01D1BD08_0x1d1bd08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D1BD08_0x1d1bd08");
#endif

    switch (ctx->pc) {
        case 0x1d1bd24u: goto label_1d1bd24;
        default: break;
    }

    ctx->pc = 0x1d1bd08u;

    // 0x1d1bd08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d1bd08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d1bd0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d1bd0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d1bd10: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d1bd10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d1bd14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d1bd14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1bd18: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d1bd18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d1bd1c: 0xc74641a  jal         func_1D19068
    ctx->pc = 0x1D1BD1Cu;
    SET_GPR_U32(ctx, 31, 0x1D1BD24u);
    ctx->pc = 0x1D1BD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1BD1Cu;
    // 0x1d1bd20: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19068u, 0x1D1BD1Cu, 0x1D1BD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1BD24u;
label_1d1bd24:
    // 0x1d1bd24: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x1d1bd24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d1bd28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1bd28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1bd2c: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x1d1bd2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d1bd30: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d1bd30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d1bd34: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1d1bd34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d1bd38: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x1d1bd38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x1d1bd3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d1bd3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1bd40: 0x87466a4  j           func_1D19A90
    ctx->pc = 0x1D1BD40u;
    ctx->pc = 0x1D1BD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1BD40u;
    // 0x1d1bd44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19A90u;
    sub_01D19A90_0x1d19a90(rdram, ctx, runtime); return;
    ctx->pc = 0x1D1BD48u;
}
