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

// Function: sub_01CF1718
// Address: 0x1cf1718 - 0x1cf1740
void sub_01CF1718_0x1cf1718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CF1718_0x1cf1718");
#endif

    switch (ctx->pc) {
        case 0x1cf172cu: goto label_1cf172c;
        default: break;
    }

    ctx->pc = 0x1cf1718u;

    // 0x1cf1718: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cf1718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cf171c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cf171cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cf1720: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cf1720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cf1724: 0xc73c0ee  jal         func_1CF03B8
    ctx->pc = 0x1CF1724u;
    SET_GPR_U32(ctx, 31, 0x1CF172Cu);
    ctx->pc = 0x1CF1728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1724u;
    // 0x1cf1728: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF03B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF03B8u, 0x1CF1724u, 0x1CF172Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF172Cu;
label_1cf172c:
    // 0x1cf172c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cf172cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1730: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cf1730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cf1734: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cf1734u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf1738: 0x873bd70  j           func_1CEF5C0
    ctx->pc = 0x1CF1738u;
    ctx->pc = 0x1CF173Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1738u;
    // 0x1cf173c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF5C0u;
    sub_01CEF5C0_0x1cef5c0(rdram, ctx, runtime); return;
    ctx->pc = 0x1CF1740u;
}
