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

// Function: sub_01CAE7E8
// Address: 0x1cae7e8 - 0x1cae840
void sub_01CAE7E8_0x1cae7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CAE7E8_0x1cae7e8");
#endif

    switch (ctx->pc) {
        case 0x1cae814u: goto label_1cae814;
        case 0x1cae820u: goto label_1cae820;
        default: break;
    }

    ctx->pc = 0x1cae7e8u;

    // 0x1cae7e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cae7e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cae7ec: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1cae7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cae7f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cae7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cae7f4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cae7f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cae7f8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cae7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cae7fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cae7fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae800: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cae800u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae804: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1cae804u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cae808: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cae808u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae80c: 0xc72b458  jal         func_1CAD160
    ctx->pc = 0x1CAE80Cu;
    SET_GPR_U32(ctx, 31, 0x1CAE814u);
    ctx->pc = 0x1CAE810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE80Cu;
    // 0x1cae810: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD160u, 0x1CAE80Cu, 0x1CAE814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE814u;
label_1cae814:
    // 0x1cae814: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cae814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae818: 0xc72b450  jal         func_1CAD140
    ctx->pc = 0x1CAE818u;
    SET_GPR_U32(ctx, 31, 0x1CAE820u);
    ctx->pc = 0x1CAE81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE818u;
    // 0x1cae81c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD140u, 0x1CAE818u, 0x1CAE820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE820u;
label_1cae820:
    // 0x1cae820: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1cae820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1cae824: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cae824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae828: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1cae828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1cae82c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cae82cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae830: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cae830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cae834: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cae834u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cae838: 0x872b6e0  j           func_1CADB80
    ctx->pc = 0x1CAE838u;
    ctx->pc = 0x1CAE83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE838u;
    // 0x1cae83c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CADB80u;
    sub_01CADB80_0x1cadb80(rdram, ctx, runtime); return;
    ctx->pc = 0x1CAE840u;
}
