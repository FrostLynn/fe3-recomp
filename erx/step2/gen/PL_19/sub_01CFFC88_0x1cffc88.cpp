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

// Function: sub_01CFFC88
// Address: 0x1cffc88 - 0x1cffcc8
void sub_01CFFC88_0x1cffc88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFFC88_0x1cffc88");
#endif

    switch (ctx->pc) {
        case 0x1cffca4u: goto label_1cffca4;
        default: break;
    }

    ctx->pc = 0x1cffc88u;

    // 0x1cffc88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cffc88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cffc8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cffc8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cffc90: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cffc90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cffc94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cffc94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cffc98: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1cffc98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cffc9c: 0xc73f49a  jal         func_1CFD268
    ctx->pc = 0x1CFFC9Cu;
    SET_GPR_U32(ctx, 31, 0x1CFFCA4u);
    ctx->pc = 0x1CFFCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFFC9Cu;
    // 0x1cffca0: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD268u, 0x1CFFC9Cu, 0x1CFFCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFFCA4u;
label_1cffca4:
    // 0x1cffca4: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x1cffca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cffca8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cffca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cffcac: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x1cffcacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cffcb0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cffcb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cffcb4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1cffcb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cffcb8: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x1cffcb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x1cffcbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cffcbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cffcc0: 0x873f724  j           func_1CFDC90
    ctx->pc = 0x1CFFCC0u;
    ctx->pc = 0x1CFFCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFFCC0u;
    // 0x1cffcc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFDC90u;
    sub_01CFDC90_0x1cfdc90(rdram, ctx, runtime); return;
    ctx->pc = 0x1CFFCC8u;
}
