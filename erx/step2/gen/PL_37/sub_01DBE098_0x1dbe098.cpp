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

// Function: sub_01DBE098
// Address: 0x1dbe098 - 0x1dbe0f0
void sub_01DBE098_0x1dbe098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBE098_0x1dbe098");
#endif

    switch (ctx->pc) {
        case 0x1dbe0ccu: goto label_1dbe0cc;
        default: break;
    }

    ctx->pc = 0x1dbe098u;

    // 0x1dbe098: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dbe098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dbe09c: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x1dbe09cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1dbe0a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dbe0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dbe0a4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1dbe0a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dbe0a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dbe0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dbe0ac: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x1dbe0acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1dbe0b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dbe0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1dbe0b4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1dbe0b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbe0b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dbe0b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbe0bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1dbe0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dbe0c0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1dbe0c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbe0c4: 0xc76ef24  jal         func_1DBBC90
    ctx->pc = 0x1DBE0C4u;
    SET_GPR_U32(ctx, 31, 0x1DBE0CCu);
    ctx->pc = 0x1DBE0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBE0C4u;
    // 0x1dbe0c8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBBC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBBC90u, 0x1DBE0C4u, 0x1DBE0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBE0CCu;
label_1dbe0cc:
    // 0x1dbe0cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dbe0ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbe0d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dbe0d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dbe0d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1dbe0d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbe0d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dbe0d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbe0dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dbe0dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dbe0e0: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1dbe0e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1dbe0e4: 0x876ef38  j           func_1DBBCE0
    ctx->pc = 0x1DBE0E4u;
    ctx->pc = 0x1DBE0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBE0E4u;
    // 0x1dbe0e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBBCE0u;
    sub_01DBBCE0_0x1dbbce0(rdram, ctx, runtime); return;
    ctx->pc = 0x1DBE0ECu;
    // 0x1dbe0ec: 0x0  nop
    ctx->pc = 0x1dbe0ecu;
    // NOP
    ctx->pc = 0x1dbe0f0u;
}
