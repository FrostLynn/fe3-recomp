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

// Function: sub_01CF12F8
// Address: 0x1cf12f8 - 0x1cf1348
void sub_01CF12F8_0x1cf12f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CF12F8_0x1cf12f8");
#endif

    switch (ctx->pc) {
        case 0x1cf1324u: goto label_1cf1324;
        default: break;
    }

    ctx->pc = 0x1cf12f8u;

    // 0x1cf12f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cf12f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cf12fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cf12fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1300: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cf1300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cf1304: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1cf1304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cf1308: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cf1308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cf130c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cf130cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf1310: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cf1310u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1314: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cf1314u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1318: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1cf1318u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cf131c: 0xc73bd64  jal         func_1CEF590
    ctx->pc = 0x1CF131Cu;
    SET_GPR_U32(ctx, 31, 0x1CF1324u);
    ctx->pc = 0x1CF1320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF131Cu;
    // 0x1cf1320: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF590u, 0x1CF131Cu, 0x1CF1324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1324u;
label_1cf1324:
    // 0x1cf1324: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cf1324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1328: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cf1328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cf132c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cf132cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf1330: 0x24050079  addiu       $a1, $zero, 0x79
    ctx->pc = 0x1cf1330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
    // 0x1cf1334: 0x240600db  addiu       $a2, $zero, 0xDB
    ctx->pc = 0x1cf1334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 219));
    // 0x1cf1338: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cf1338u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf133c: 0x873c02c  j           func_1CF00B0
    ctx->pc = 0x1CF133Cu;
    ctx->pc = 0x1CF1340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF133Cu;
    // 0x1cf1340: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF00B0u;
    sub_01CF00B0_0x1cf00b0(rdram, ctx, runtime); return;
    ctx->pc = 0x1CF1344u;
    // 0x1cf1344: 0x0  nop
    ctx->pc = 0x1cf1344u;
    // NOP
    ctx->pc = 0x1cf1348u;
}
