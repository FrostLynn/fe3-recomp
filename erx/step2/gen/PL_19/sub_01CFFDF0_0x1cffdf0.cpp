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

// Function: sub_01CFFDF0
// Address: 0x1cffdf0 - 0x1cffe18
void sub_01CFFDF0_0x1cffdf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFFDF0_0x1cffdf0");
#endif

    switch (ctx->pc) {
        case 0x1cffe04u: goto label_1cffe04;
        default: break;
    }

    ctx->pc = 0x1cffdf0u;

    // 0x1cffdf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cffdf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cffdf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cffdf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cffdf8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cffdf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cffdfc: 0xc73f74e  jal         func_1CFDD38
    ctx->pc = 0x1CFFDFCu;
    SET_GPR_U32(ctx, 31, 0x1CFFE04u);
    ctx->pc = 0x1CFFE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFFDFCu;
    // 0x1cffe00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFDD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFDD38u, 0x1CFFDFCu, 0x1CFFE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFFE04u;
label_1cffe04:
    // 0x1cffe04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cffe04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cffe08: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cffe08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cffe0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cffe0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cffe10: 0x873f508  j           func_1CFD420
    ctx->pc = 0x1CFFE10u;
    ctx->pc = 0x1CFFE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFFE10u;
    // 0x1cffe14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD420u;
    sub_01CFD420_0x1cfd420(rdram, ctx, runtime); return;
    ctx->pc = 0x1CFFE18u;
}
