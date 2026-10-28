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

// Function: sub_01DBCCA8
// Address: 0x1dbcca8 - 0x1dbccd0
void sub_01DBCCA8_0x1dbcca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBCCA8_0x1dbcca8");
#endif

    ctx->pc = 0x1dbcca8u;

    // 0x1dbcca8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dbcca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dbccac: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1dbccacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbccb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dbccb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dbccb4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1dbccb4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbccb8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1dbccb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dbccbc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1dbccbcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbccc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dbccc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbccc4: 0x876ef24  j           func_1DBBC90
    ctx->pc = 0x1DBCCC4u;
    ctx->pc = 0x1DBCCC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBCCC4u;
    // 0x1dbccc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBBC90u;
    sub_01DBBC90_0x1dbbc90(rdram, ctx, runtime); return;
    ctx->pc = 0x1DBCCCCu;
    // 0x1dbcccc: 0x0  nop
    ctx->pc = 0x1dbccccu;
    // NOP
    ctx->pc = 0x1dbccd0u;
}
