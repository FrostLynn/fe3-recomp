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

// Function: sub_01DBD520
// Address: 0x1dbd520 - 0x1dbd568
void sub_01DBD520_0x1dbd520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBD520_0x1dbd520");
#endif

    switch (ctx->pc) {
        case 0x1dbd53cu: goto label_1dbd53c;
        case 0x1dbd550u: goto label_1dbd550;
        default: break;
    }

    ctx->pc = 0x1dbd520u;

    // 0x1dbd520: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dbd520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dbd524: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1dbd524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1dbd528: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dbd528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dbd52c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1dbd52cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1dbd530: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dbd530u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbd534: 0xc76ee58  jal         func_1DBB960
    ctx->pc = 0x1DBD534u;
    SET_GPR_U32(ctx, 31, 0x1DBD53Cu);
    ctx->pc = 0x1DBD538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBD534u;
    // 0x1dbd538: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB960u, 0x1DBD534u, 0x1DBD53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBD53Cu;
label_1dbd53c:
    // 0x1dbd53c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dbd53cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbd540: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1dbd540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dbd544: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1dbd544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dbd548: 0xc76f32a  jal         func_1DBCCA8
    ctx->pc = 0x1DBD548u;
    SET_GPR_U32(ctx, 31, 0x1DBD550u);
    ctx->pc = 0x1DBD54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBD548u;
    // 0x1dbd54c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBCCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBCCA8u, 0x1DBD548u, 0x1DBD550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBD550u;
label_1dbd550:
    // 0x1dbd550: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dbd550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbd554: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dbd554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dbd558: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dbd558u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbd55c: 0x876ef1c  j           func_1DBBC70
    ctx->pc = 0x1DBD55Cu;
    ctx->pc = 0x1DBD560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBD55Cu;
    // 0x1dbd560: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBBC70u;
    sub_01DBBC70_0x1dbbc70(rdram, ctx, runtime); return;
    ctx->pc = 0x1DBD564u;
    // 0x1dbd564: 0x0  nop
    ctx->pc = 0x1dbd564u;
    // NOP
    ctx->pc = 0x1dbd568u;
}
