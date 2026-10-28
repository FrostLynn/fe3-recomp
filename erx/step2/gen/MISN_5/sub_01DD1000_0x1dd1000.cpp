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

// Function: sub_01DD1000
// Address: 0x1dd1000 - 0x1dd1060
void sub_01DD1000_0x1dd1000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD1000_0x1dd1000");
#endif

    switch (ctx->pc) {
        case 0x1dd1018u: goto label_1dd1018;
        case 0x1dd1040u: goto label_1dd1040;
        default: break;
    }

    ctx->pc = 0x1dd1000u;

    // 0x1dd1000: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dd1000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dd1004: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dd1004u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd1008: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd1008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dd100c: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1dd100cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1dd1010: 0xc774286  jal         func_1DD0A18
    ctx->pc = 0x1DD1010u;
    SET_GPR_U32(ctx, 31, 0x1DD1018u);
    ctx->pc = 0x1DD1014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD1010u;
    // 0x1dd1014: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD0A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD0A18u, 0x1DD1010u, 0x1DD1018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD1018u;
label_1dd1018:
    // 0x1dd1018: 0x8f8d8014  lw          $t5, -0x7FEC($gp)
    ctx->pc = 0x1dd1018u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd101c: 0x91af0428  lbu         $t7, 0x428($t5)
    ctx->pc = 0x1dd101cu;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 1064)));
    // 0x1dd1020: 0x11e00005  beqz        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DD1020u;
    {
        const bool branch_taken_0x1dd1020 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD1024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD1020u;
        // 0x1dd1024: 0x8f8f801c  lw          $t7, -0x7FE4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934556)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd1020) {
            ctx->pc = 0x1DD1038u;
            goto label_1dd1038;
        }
    }
    ctx->pc = 0x1DD1028u;
    // 0x1dd1028: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x1dd1028u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd102c: 0xa1ae0435  sb          $t6, 0x435($t5)
    ctx->pc = 0x1dd102cu;
    WRITE8(ADD32(GPR_U32(ctx, 13), 1077), (uint8_t)GPR_U32(ctx, 14));
    // 0x1dd1030: 0x35ef0010  ori         $t7, $t7, 0x10
    ctx->pc = 0x1dd1030u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)16);
    // 0x1dd1034: 0xaf8f801c  sw          $t7, -0x7FE4($gp)
    ctx->pc = 0x1dd1034u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934556), GPR_U32(ctx, 15));
label_1dd1038:
    // 0x1dd1038: 0xc77432c  jal         func_1DD0CB0
    ctx->pc = 0x1DD1038u;
    SET_GPR_U32(ctx, 31, 0x1DD1040u);
    ctx->pc = 0x1DD0CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD0CB0u, 0x1DD1038u, 0x1DD1040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD1040u;
label_1dd1040:
    // 0x1dd1040: 0x8f848014  lw          $a0, -0x7FEC($gp)
    ctx->pc = 0x1dd1040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd1044: 0x2405f6ce  addiu       $a1, $zero, -0x932
    ctx->pc = 0x1dd1044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294964942));
    // 0x1dd1048: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd1048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd104c: 0x2406270f  addiu       $a2, $zero, 0x270F
    ctx->pc = 0x1dd104cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x1dd1050: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1dd1050u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dd1054: 0x2408fffe  addiu       $t0, $zero, -0x2
    ctx->pc = 0x1dd1054u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1dd1058: 0x8774294  j           func_1DD0A50
    ctx->pc = 0x1DD1058u;
    ctx->pc = 0x1DD105Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD1058u;
    // 0x1dd105c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD0A50u;
    sub_01DD0A50_0x1dd0a50(rdram, ctx, runtime); return;
    ctx->pc = 0x1DD1060u;
}
