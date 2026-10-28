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

// Function: sub_01DEA3F8
// Address: 0x1dea3f8 - 0x1dea450
void sub_01DEA3F8_0x1dea3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DEA3F8_0x1dea3f8");
#endif

    switch (ctx->pc) {
        case 0x1dea410u: goto label_1dea410;
        default: break;
    }

    ctx->pc = 0x1dea3f8u;

    // 0x1dea3f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dea3f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dea3fc: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1dea3fcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dea400: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dea400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dea404: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1dea404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1dea408: 0xc77a806  jal         func_1DEA018
    ctx->pc = 0x1DEA408u;
    SET_GPR_U32(ctx, 31, 0x1DEA410u);
    ctx->pc = 0x1DEA40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEA408u;
    // 0x1dea40c: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEA018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEA018u, 0x1DEA408u, 0x1DEA410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEA410u;
label_1dea410:
    // 0x1dea410: 0x8f848018  lw          $a0, -0x7FE8($gp)
    ctx->pc = 0x1dea410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dea414: 0x2405270f  addiu       $a1, $zero, 0x270F
    ctx->pc = 0x1dea414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x1dea418: 0x8c4e03a4  lw          $t6, 0x3A4($v0)
    ctx->pc = 0x1dea418u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 932)));
    // 0x1dea41c: 0x2406270f  addiu       $a2, $zero, 0x270F
    ctx->pc = 0x1dea41cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x1dea420: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1dea420u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dea424: 0x240f014c  addiu       $t7, $zero, 0x14C
    ctx->pc = 0x1dea424u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 332));
    // 0x1dea428: 0x15cf0005  bne         $t6, $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DEA428u;
    {
        const bool branch_taken_0x1dea428 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1DEA42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEA428u;
        // 0x1dea42c: 0x2408fffe  addiu       $t0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dea428) {
            ctx->pc = 0x1DEA440u;
            goto label_1dea440;
        }
    }
    ctx->pc = 0x1DEA430u;
    // 0x1dea430: 0x8f8e8018  lw          $t6, -0x7FE8($gp)
    ctx->pc = 0x1dea430u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dea434: 0x95cf056e  lhu         $t7, 0x56E($t6)
    ctx->pc = 0x1dea434u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 1390)));
    // 0x1dea438: 0x35ef0008  ori         $t7, $t7, 0x8
    ctx->pc = 0x1dea438u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)8);
    // 0x1dea43c: 0xa5cf056e  sh          $t7, 0x56E($t6)
    ctx->pc = 0x1dea43cu;
    WRITE16(ADD32(GPR_U32(ctx, 14), 1390), (uint16_t)GPR_U32(ctx, 15));
label_1dea440:
    // 0x1dea440: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dea440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dea444: 0x877a81a  j           func_1DEA068
    ctx->pc = 0x1DEA444u;
    ctx->pc = 0x1DEA448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEA444u;
    // 0x1dea448: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEA068u;
    sub_01DEA068_0x1dea068(rdram, ctx, runtime); return;
    ctx->pc = 0x1DEA44Cu;
    // 0x1dea44c: 0x0  nop
    ctx->pc = 0x1dea44cu;
    // NOP
    ctx->pc = 0x1dea450u;
}
