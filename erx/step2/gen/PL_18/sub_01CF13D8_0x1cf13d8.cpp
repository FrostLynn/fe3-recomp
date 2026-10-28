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

// Function: sub_01CF13D8
// Address: 0x1cf13d8 - 0x1cf1400
void sub_01CF13D8_0x1cf13d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CF13D8_0x1cf13d8");
#endif

    switch (ctx->pc) {
        case 0x1cf13ecu: goto label_1cf13ec;
        default: break;
    }

    ctx->pc = 0x1cf13d8u;

    // 0x1cf13d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cf13d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cf13dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cf13dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cf13e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cf13e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cf13e4: 0xc73bd6e  jal         func_1CEF5B8
    ctx->pc = 0x1CF13E4u;
    SET_GPR_U32(ctx, 31, 0x1CF13ECu);
    ctx->pc = 0x1CF13E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF13E4u;
    // 0x1cf13e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF5B8u, 0x1CF13E4u, 0x1CF13ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF13ECu;
label_1cf13ec:
    // 0x1cf13ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cf13ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf13f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cf13f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cf13f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cf13f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf13f8: 0x873c05a  j           func_1CF0168
    ctx->pc = 0x1CF13F8u;
    ctx->pc = 0x1CF13FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF13F8u;
    // 0x1cf13fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF0168u;
    sub_01CF0168_0x1cf0168(rdram, ctx, runtime); return;
    ctx->pc = 0x1CF1400u;
}
