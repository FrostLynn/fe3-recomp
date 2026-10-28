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

// Function: sub_01C44940
// Address: 0x1c44940 - 0x1c44968
void sub_01C44940_0x1c44940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C44940_0x1c44940");
#endif

    switch (ctx->pc) {
        case 0x1c44954u: goto label_1c44954;
        default: break;
    }

    ctx->pc = 0x1c44940u;

    // 0x1c44940: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c44940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c44944: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c44944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c44948: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c44948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c4494c: 0xc71092e  jal         func_1C424B8
    ctx->pc = 0x1C4494Cu;
    SET_GPR_U32(ctx, 31, 0x1C44954u);
    ctx->pc = 0x1C44950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4494Cu;
    // 0x1c44950: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C424B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C424B8u, 0x1C4494Cu, 0x1C44954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C44954u;
label_1c44954:
    // 0x1c44954: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c44954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44958: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c44958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c4495c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c4495cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c44960: 0x8710cb0  j           func_1C432C0
    ctx->pc = 0x1C44960u;
    ctx->pc = 0x1C44964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C44960u;
    // 0x1c44964: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C432C0u;
    sub_01C432C0_0x1c432c0(rdram, ctx, runtime); return;
    ctx->pc = 0x1C44968u;
}
