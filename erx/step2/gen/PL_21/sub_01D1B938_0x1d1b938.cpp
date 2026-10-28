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

// Function: sub_01D1B938
// Address: 0x1d1b938 - 0x1d1b988
void sub_01D1B938_0x1d1b938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D1B938_0x1d1b938");
#endif

    switch (ctx->pc) {
        case 0x1d1b964u: goto label_1d1b964;
        case 0x1d1b970u: goto label_1d1b970;
        default: break;
    }

    ctx->pc = 0x1d1b938u;

    // 0x1d1b938: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d1b938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d1b93c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d1b93cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d1b940: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d1b940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d1b944: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d1b944u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1b948: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d1b948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d1b94c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d1b94cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1b950: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d1b950u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1b954: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d1b954u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1b958: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d1b958u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1b95c: 0xc746426  jal         func_1D19098
    ctx->pc = 0x1D1B95Cu;
    SET_GPR_U32(ctx, 31, 0x1D1B964u);
    ctx->pc = 0x1D1B960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1B95Cu;
    // 0x1d1b960: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19098u, 0x1D1B95Cu, 0x1D1B964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B964u;
label_1d1b964:
    // 0x1d1b964: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1b964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1b968: 0xc74641e  jal         func_1D19078
    ctx->pc = 0x1D1B968u;
    SET_GPR_U32(ctx, 31, 0x1D1B970u);
    ctx->pc = 0x1D1B96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1B968u;
    // 0x1d1b96c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19078u, 0x1D1B968u, 0x1D1B970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B970u;
label_1d1b970:
    // 0x1d1b970: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1d1b970u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1d1b974: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d1b974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d1b978: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d1b978u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1b97c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1B97Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1B980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B97Cu;
        // 0x1d1b980: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1B97Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1B984u;
    // 0x1d1b984: 0x0  nop
    ctx->pc = 0x1d1b984u;
    // NOP
    ctx->pc = 0x1d1b988u;
}
