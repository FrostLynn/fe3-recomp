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

// Function: sub_01DD0F50
// Address: 0x1dd0f50 - 0x1dd0fb0
void sub_01DD0F50_0x1dd0f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD0F50_0x1dd0f50");
#endif

    switch (ctx->pc) {
        case 0x1dd0f68u: goto label_1dd0f68;
        case 0x1dd0f90u: goto label_1dd0f90;
        default: break;
    }

    ctx->pc = 0x1dd0f50u;

    // 0x1dd0f50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dd0f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dd0f54: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dd0f54u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd0f58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd0f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dd0f5c: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1dd0f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1dd0f60: 0xc774286  jal         func_1DD0A18
    ctx->pc = 0x1DD0F60u;
    SET_GPR_U32(ctx, 31, 0x1DD0F68u);
    ctx->pc = 0x1DD0F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD0F60u;
    // 0x1dd0f64: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD0A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD0A18u, 0x1DD0F60u, 0x1DD0F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD0F68u;
label_1dd0f68:
    // 0x1dd0f68: 0x8f8d8014  lw          $t5, -0x7FEC($gp)
    ctx->pc = 0x1dd0f68u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd0f6c: 0x91af0428  lbu         $t7, 0x428($t5)
    ctx->pc = 0x1dd0f6cu;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 1064)));
    // 0x1dd0f70: 0x11e00005  beqz        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DD0F70u;
    {
        const bool branch_taken_0x1dd0f70 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD0F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD0F70u;
        // 0x1dd0f74: 0x8f8f801c  lw          $t7, -0x7FE4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934556)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd0f70) {
            ctx->pc = 0x1DD0F88u;
            goto label_1dd0f88;
        }
    }
    ctx->pc = 0x1DD0F78u;
    // 0x1dd0f78: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x1dd0f78u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd0f7c: 0xa1ae0434  sb          $t6, 0x434($t5)
    ctx->pc = 0x1dd0f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 13), 1076), (uint8_t)GPR_U32(ctx, 14));
    // 0x1dd0f80: 0x35ef0008  ori         $t7, $t7, 0x8
    ctx->pc = 0x1dd0f80u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)8);
    // 0x1dd0f84: 0xaf8f801c  sw          $t7, -0x7FE4($gp)
    ctx->pc = 0x1dd0f84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934556), GPR_U32(ctx, 15));
label_1dd0f88:
    // 0x1dd0f88: 0xc77432c  jal         func_1DD0CB0
    ctx->pc = 0x1DD0F88u;
    SET_GPR_U32(ctx, 31, 0x1DD0F90u);
    ctx->pc = 0x1DD0CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD0CB0u, 0x1DD0F88u, 0x1DD0F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD0F90u;
label_1dd0f90:
    // 0x1dd0f90: 0x8f848014  lw          $a0, -0x7FEC($gp)
    ctx->pc = 0x1dd0f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd0f94: 0x2405f6da  addiu       $a1, $zero, -0x926
    ctx->pc = 0x1dd0f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294964954));
    // 0x1dd0f98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd0f98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd0f9c: 0x2406270f  addiu       $a2, $zero, 0x270F
    ctx->pc = 0x1dd0f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x1dd0fa0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1dd0fa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dd0fa4: 0x2408fffe  addiu       $t0, $zero, -0x2
    ctx->pc = 0x1dd0fa4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1dd0fa8: 0x8774294  j           func_1DD0A50
    ctx->pc = 0x1DD0FA8u;
    ctx->pc = 0x1DD0FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD0FA8u;
    // 0x1dd0fac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD0A50u;
    sub_01DD0A50_0x1dd0a50(rdram, ctx, runtime); return;
    ctx->pc = 0x1DD0FB0u;
}
