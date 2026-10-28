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

// Function: sub_01CFFE98
// Address: 0x1cffe98 - 0x1cffee0
void sub_01CFFE98_0x1cffe98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFFE98_0x1cffe98");
#endif

    switch (ctx->pc) {
        case 0x1cffeb4u: goto label_1cffeb4;
        default: break;
    }

    ctx->pc = 0x1cffe98u;

    // 0x1cffe98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cffe98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cffe9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cffe9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cffea0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cffea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cffea4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cffea4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cffea8: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1cffea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cffeac: 0xc73f49a  jal         func_1CFD268
    ctx->pc = 0x1CFFEACu;
    SET_GPR_U32(ctx, 31, 0x1CFFEB4u);
    ctx->pc = 0x1CFFEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFFEACu;
    // 0x1cffeb0: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD268u, 0x1CFFEACu, 0x1CFFEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFFEB4u;
label_1cffeb4:
    // 0x1cffeb4: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1cffeb4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1cffeb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cffeb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cffebc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cffebcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cffec0: 0x25ef47e0  addiu       $t7, $t7, 0x47E0
    ctx->pc = 0x1cffec0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 18400));
    // 0x1cffec4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cffec4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cffec8: 0xe5e0003c  swc1        $f0, 0x3C($t7)
    ctx->pc = 0x1cffec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 60), bits); }
    // 0x1cffecc: 0xe5e00044  swc1        $f0, 0x44($t7)
    ctx->pc = 0x1cffeccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 68), bits); }
    // 0x1cffed0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cffed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cffed4: 0x873ff52  j           func_1CFFD48
    ctx->pc = 0x1CFFED4u;
    ctx->pc = 0x1CFFED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFFED4u;
    // 0x1cffed8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFFD48u;
    sub_01CFFD48_0x1cffd48(rdram, ctx, runtime); return;
    ctx->pc = 0x1CFFEDCu;
    // 0x1cffedc: 0x0  nop
    ctx->pc = 0x1cffedcu;
    // NOP
    ctx->pc = 0x1cffee0u;
}
