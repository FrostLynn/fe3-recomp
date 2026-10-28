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

// Function: sub_01DD0DF0
// Address: 0x1dd0df0 - 0x1dd0e50
void sub_01DD0DF0_0x1dd0df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD0DF0_0x1dd0df0");
#endif

    switch (ctx->pc) {
        case 0x1dd0e08u: goto label_1dd0e08;
        case 0x1dd0e30u: goto label_1dd0e30;
        default: break;
    }

    ctx->pc = 0x1dd0df0u;

    // 0x1dd0df0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dd0df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dd0df4: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dd0df4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd0df8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd0df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dd0dfc: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1dd0dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1dd0e00: 0xc774286  jal         func_1DD0A18
    ctx->pc = 0x1DD0E00u;
    SET_GPR_U32(ctx, 31, 0x1DD0E08u);
    ctx->pc = 0x1DD0E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD0E00u;
    // 0x1dd0e04: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD0A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD0A18u, 0x1DD0E00u, 0x1DD0E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD0E08u;
label_1dd0e08:
    // 0x1dd0e08: 0x8f8d8014  lw          $t5, -0x7FEC($gp)
    ctx->pc = 0x1dd0e08u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd0e0c: 0x91af0428  lbu         $t7, 0x428($t5)
    ctx->pc = 0x1dd0e0cu;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 1064)));
    // 0x1dd0e10: 0x11e00005  beqz        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DD0E10u;
    {
        const bool branch_taken_0x1dd0e10 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD0E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD0E10u;
        // 0x1dd0e14: 0x8f8f801c  lw          $t7, -0x7FE4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934556)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd0e10) {
            ctx->pc = 0x1DD0E28u;
            goto label_1dd0e28;
        }
    }
    ctx->pc = 0x1DD0E18u;
    // 0x1dd0e18: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x1dd0e18u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd0e1c: 0xa1ae0432  sb          $t6, 0x432($t5)
    ctx->pc = 0x1dd0e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 13), 1074), (uint8_t)GPR_U32(ctx, 14));
    // 0x1dd0e20: 0x35ef0002  ori         $t7, $t7, 0x2
    ctx->pc = 0x1dd0e20u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)2);
    // 0x1dd0e24: 0xaf8f801c  sw          $t7, -0x7FE4($gp)
    ctx->pc = 0x1dd0e24u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934556), GPR_U32(ctx, 15));
label_1dd0e28:
    // 0x1dd0e28: 0xc77432c  jal         func_1DD0CB0
    ctx->pc = 0x1DD0E28u;
    SET_GPR_U32(ctx, 31, 0x1DD0E30u);
    ctx->pc = 0x1DD0CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD0CB0u, 0x1DD0E28u, 0x1DD0E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD0E30u;
label_1dd0e30:
    // 0x1dd0e30: 0x8f848014  lw          $a0, -0x7FEC($gp)
    ctx->pc = 0x1dd0e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd0e34: 0x2405f6d6  addiu       $a1, $zero, -0x92A
    ctx->pc = 0x1dd0e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294964950));
    // 0x1dd0e38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd0e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd0e3c: 0x2406270f  addiu       $a2, $zero, 0x270F
    ctx->pc = 0x1dd0e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x1dd0e40: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1dd0e40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dd0e44: 0x2408fffe  addiu       $t0, $zero, -0x2
    ctx->pc = 0x1dd0e44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1dd0e48: 0x8774294  j           func_1DD0A50
    ctx->pc = 0x1DD0E48u;
    ctx->pc = 0x1DD0E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD0E48u;
    // 0x1dd0e4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD0A50u;
    sub_01DD0A50_0x1dd0a50(rdram, ctx, runtime); return;
    ctx->pc = 0x1DD0E50u;
}
