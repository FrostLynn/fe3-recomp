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

// Function: sub_01DBDE98
// Address: 0x1dbde98 - 0x1dbdef8
void sub_01DBDE98_0x1dbde98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBDE98_0x1dbde98");
#endif

    switch (ctx->pc) {
        case 0x1dbdeb0u: goto label_1dbdeb0;
        case 0x1dbdec8u: goto label_1dbdec8;
        default: break;
    }

    ctx->pc = 0x1dbde98u;

    // 0x1dbde98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dbde98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dbde9c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1dbde9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1dbdea0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dbdea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dbdea4: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1dbdea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1dbdea8: 0xc76ee58  jal         func_1DBB960
    ctx->pc = 0x1DBDEA8u;
    SET_GPR_U32(ctx, 31, 0x1DBDEB0u);
    ctx->pc = 0x1DBDEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBDEA8u;
    // 0x1dbdeac: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB960u, 0x1DBDEA8u, 0x1DBDEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBDEB0u;
label_1dbdeb0:
    // 0x1dbdeb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dbdeb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbdeb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dbdeb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbdeb8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1dbdeb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1dbdebc: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x1dbdebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1dbdec0: 0xc76f32a  jal         func_1DBCCA8
    ctx->pc = 0x1DBDEC0u;
    SET_GPR_U32(ctx, 31, 0x1DBDEC8u);
    ctx->pc = 0x1DBDEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBDEC0u;
    // 0x1dbdec4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBCCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBCCA8u, 0x1DBDEC0u, 0x1DBDEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBDEC8u;
label_1dbdec8:
    // 0x1dbdec8: 0x8e0f024c  lw          $t7, 0x24C($s0)
    ctx->pc = 0x1dbdec8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 588)));
    // 0x1dbdecc: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x1dbdeccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dbded0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dbded0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dbded4: 0x25ef47e0  addiu       $t7, $t7, 0x47E0
    ctx->pc = 0x1dbded4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 18400));
    // 0x1dbded8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dbded8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbdedc: 0xa1ee0009  sb          $t6, 0x9($t7)
    ctx->pc = 0x1dbdedcu;
    WRITE8(ADD32(GPR_U32(ctx, 15), 9), (uint8_t)GPR_U32(ctx, 14));
    // 0x1dbdee0: 0xade00048  sw          $zero, 0x48($t7)
    ctx->pc = 0x1dbdee0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 72), GPR_U32(ctx, 0));
    // 0x1dbdee4: 0xade0003c  sw          $zero, 0x3C($t7)
    ctx->pc = 0x1dbdee4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 60), GPR_U32(ctx, 0));
    // 0x1dbdee8: 0xade00044  sw          $zero, 0x44($t7)
    ctx->pc = 0x1dbdee8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 68), GPR_U32(ctx, 0));
    // 0x1dbdeec: 0xade00040  sw          $zero, 0x40($t7)
    ctx->pc = 0x1dbdeecu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 64), GPR_U32(ctx, 0));
    // 0x1dbdef0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBDEF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBDEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBDEF0u;
        // 0x1dbdef4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBDEF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBDEF8u;
}
