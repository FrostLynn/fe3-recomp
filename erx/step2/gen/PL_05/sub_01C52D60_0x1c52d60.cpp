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

// Function: sub_01C52D60
// Address: 0x1c52d60 - 0x1c52de0
void sub_01C52D60_0x1c52d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C52D60_0x1c52d60");
#endif

    switch (ctx->pc) {
        case 0x1c52da0u: goto label_1c52da0;
        default: break;
    }

    ctx->pc = 0x1c52d60u;

    // 0x1c52d60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c52d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c52d64: 0x938f8094  lbu         $t7, -0x7F6C($gp)
    ctx->pc = 0x1c52d64u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934676)));
    // 0x1c52d68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c52d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c52d6c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c52d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c52d70: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1c52d70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1c52d74: 0x11e00012  beqz        $t7, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C52D74u;
    {
        const bool branch_taken_0x1c52d74 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C52D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C52D74u;
        // 0x1c52d78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c52d74) {
            ctx->pc = 0x1C52DC0u;
            goto label_1c52dc0;
        }
    }
    ctx->pc = 0x1C52D7Cu;
    // 0x1c52d7c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c52d7cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c52d80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c52d80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52d84: 0xac8f0018  sw          $t7, 0x18($a0)
    ctx->pc = 0x1c52d84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 15));
    // 0x1c52d88: 0x24060043  addiu       $a2, $zero, 0x43
    ctx->pc = 0x1c52d88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1c52d8c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c52d8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c52d90: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c52d90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52d94: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c52d94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c52d98: 0xc713e6e  jal         func_1C4F9B8
    ctx->pc = 0x1C52D98u;
    SET_GPR_U32(ctx, 31, 0x1C52DA0u);
    ctx->pc = 0x1C52D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C52D98u;
    // 0x1c52d9c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F9B8u, 0x1C52D98u, 0x1C52DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52DA0u;
label_1c52da0:
    // 0x1c52da0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c52da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52da4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c52da4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c52da8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c52da8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c52dac: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x1c52dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1c52db0: 0x240600b0  addiu       $a2, $zero, 0xB0
    ctx->pc = 0x1c52db0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x1c52db4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c52db4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52db8: 0x871413c  j           func_1C504F0
    ctx->pc = 0x1C52DB8u;
    ctx->pc = 0x1C52DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C52DB8u;
    // 0x1c52dbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C504F0u;
    sub_01C504F0_0x1c504f0(rdram, ctx, runtime); return;
    ctx->pc = 0x1C52DC0u;
label_1c52dc0:
    // 0x1c52dc0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c52dc0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c52dc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c52dc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c52dc8: 0x3c0501c6  lui         $a1, 0x1C6
    ctx->pc = 0x1c52dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)454 << 16));
    // 0x1c52dcc: 0xa38f8094  sb          $t7, -0x7F6C($gp)
    ctx->pc = 0x1c52dccu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934676), (uint8_t)GPR_U32(ctx, 15));
    // 0x1c52dd0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c52dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c52dd4: 0x24a597f0  addiu       $a1, $a1, -0x6810
    ctx->pc = 0x1c52dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940656));
    // 0x1c52dd8: 0x8714258  j           func_1C50960
    ctx->pc = 0x1C52DD8u;
    ctx->pc = 0x1C52DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C52DD8u;
    // 0x1c52ddc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C50960u;
    sub_01C50960_0x1c50960(rdram, ctx, runtime); return;
    ctx->pc = 0x1C52DE0u;
}
