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

// Function: sub_01C9B210
// Address: 0x1c9b210 - 0x1c9b250
void sub_01C9B210_0x1c9b210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C9B210_0x1c9b210");
#endif

    switch (ctx->pc) {
        case 0x1c9b22cu: goto label_1c9b22c;
        default: break;
    }

    ctx->pc = 0x1c9b210u;

    // 0x1c9b210: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c9b210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c9b214: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c9b214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c9b218: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c9b218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c9b21c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c9b21cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9b220: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c9b220u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c9b224: 0xc7262d6  jal         func_1C98B58
    ctx->pc = 0x1C9B224u;
    SET_GPR_U32(ctx, 31, 0x1C9B22Cu);
    ctx->pc = 0x1C9B228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9B224u;
    // 0x1c9b228: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B58u, 0x1C9B224u, 0x1C9B22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B22Cu;
label_1c9b22c:
    // 0x1c9b22c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c9b22cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9b230: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c9b230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c9b234: 0xae0f0024  sw          $t7, 0x24($s0)
    ctx->pc = 0x1c9b234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 15));
    // 0x1c9b238: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9b238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9b23c: 0x3c0501ca  lui         $a1, 0x1CA
    ctx->pc = 0x1c9b23cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)458 << 16));
    // 0x1c9b240: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c9b240u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9b244: 0x24a5c460  addiu       $a1, $a1, -0x3BA0
    ctx->pc = 0x1c9b244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952032));
    // 0x1c9b248: 0x87266c2  j           func_1C99B08
    ctx->pc = 0x1C9B248u;
    ctx->pc = 0x1C9B24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9B248u;
    // 0x1c9b24c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C99B08u;
    sub_01C99B08_0x1c99b08(rdram, ctx, runtime); return;
    ctx->pc = 0x1C9B250u;
}
