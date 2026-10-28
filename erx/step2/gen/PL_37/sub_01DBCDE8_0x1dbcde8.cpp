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

// Function: sub_01DBCDE8
// Address: 0x1dbcde8 - 0x1dbce60
void sub_01DBCDE8_0x1dbcde8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBCDE8_0x1dbcde8");
#endif

    switch (ctx->pc) {
        case 0x1dbce00u: goto label_1dbce00;
        case 0x1dbce18u: goto label_1dbce18;
        case 0x1dbce2cu: goto label_1dbce2c;
        case 0x1dbce40u: goto label_1dbce40;
        default: break;
    }

    ctx->pc = 0x1dbcde8u;

    // 0x1dbcde8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dbcde8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dbcdec: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1dbcdecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1dbcdf0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dbcdf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dbcdf4: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1dbcdf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1dbcdf8: 0xc76ee58  jal         func_1DBB960
    ctx->pc = 0x1DBCDF8u;
    SET_GPR_U32(ctx, 31, 0x1DBCE00u);
    ctx->pc = 0x1DBCDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBCDF8u;
    // 0x1dbcdfc: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB960u, 0x1DBCDF8u, 0x1DBCE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBCE00u;
label_1dbce00:
    // 0x1dbce00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dbce00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbce04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dbce04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbce08: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1dbce08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dbce0c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1dbce0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dbce10: 0xc76f32a  jal         func_1DBCCA8
    ctx->pc = 0x1DBCE10u;
    SET_GPR_U32(ctx, 31, 0x1DBCE18u);
    ctx->pc = 0x1DBCE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBCE10u;
    // 0x1dbce14: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBCCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBCCA8u, 0x1DBCE10u, 0x1DBCE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBCE18u;
label_1dbce18:
    // 0x1dbce18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dbce18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbce1c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1dbce1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dbce20: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1dbce20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dbce24: 0xc76f32a  jal         func_1DBCCA8
    ctx->pc = 0x1DBCE24u;
    SET_GPR_U32(ctx, 31, 0x1DBCE2Cu);
    ctx->pc = 0x1DBCE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBCE24u;
    // 0x1dbce28: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBCCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBCCA8u, 0x1DBCE24u, 0x1DBCE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBCE2Cu;
label_1dbce2c:
    // 0x1dbce2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dbce2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbce30: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1dbce30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dbce34: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1dbce34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dbce38: 0xc76f32a  jal         func_1DBCCA8
    ctx->pc = 0x1DBCE38u;
    SET_GPR_U32(ctx, 31, 0x1DBCE40u);
    ctx->pc = 0x1DBCE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBCE38u;
    // 0x1dbce3c: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBCCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBCCA8u, 0x1DBCE38u, 0x1DBCE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBCE40u;
label_1dbce40:
    // 0x1dbce40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dbce40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbce44: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dbce44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dbce48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dbce48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbce4c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1dbce4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dbce50: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1dbce50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dbce54: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1dbce54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1dbce58: 0x876f32a  j           func_1DBCCA8
    ctx->pc = 0x1DBCE58u;
    ctx->pc = 0x1DBCE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBCE58u;
    // 0x1dbce5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBCCA8u;
    sub_01DBCCA8_0x1dbcca8(rdram, ctx, runtime); return;
    ctx->pc = 0x1DBCE60u;
}
