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

// Function: sub_01D34390
// Address: 0x1d34390 - 0x1d34408
void sub_01D34390_0x1d34390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D34390_0x1d34390");
#endif

    switch (ctx->pc) {
        case 0x1d343bcu: goto label_1d343bc;
        case 0x1d343c8u: goto label_1d343c8;
        case 0x1d343d8u: goto label_1d343d8;
        case 0x1d343f0u: goto label_1d343f0;
        default: break;
    }

    ctx->pc = 0x1d34390u;

    // 0x1d34390: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d34390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d34394: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d34394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d34398: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d34398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d3439c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d3439cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d343a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d343a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d343a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d343a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d343a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d343a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d343ac: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d343acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d343b0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d343b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d343b4: 0xc74cd62  jal         func_1D33588
    ctx->pc = 0x1D343B4u;
    SET_GPR_U32(ctx, 31, 0x1D343BCu);
    ctx->pc = 0x1D343B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D343B4u;
    // 0x1d343b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33588u, 0x1D343B4u, 0x1D343BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D343BCu;
label_1d343bc:
    // 0x1d343bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d343bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d343c0: 0xc74cd5a  jal         func_1D33568
    ctx->pc = 0x1D343C0u;
    SET_GPR_U32(ctx, 31, 0x1D343C8u);
    ctx->pc = 0x1D343C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D343C0u;
    // 0x1d343c4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33568u, 0x1D343C0u, 0x1D343C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D343C8u;
label_1d343c8:
    // 0x1d343c8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d343c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d343cc: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d343ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d343d0: 0xc74cd56  jal         func_1D33558
    ctx->pc = 0x1D343D0u;
    SET_GPR_U32(ctx, 31, 0x1D343D8u);
    ctx->pc = 0x1D343D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D343D0u;
    // 0x1d343d4: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33558u, 0x1D343D0u, 0x1D343D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D343D8u;
label_1d343d8:
    // 0x1d343d8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d343d8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d343dc: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d343dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d343e0: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1d343e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1d343e4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d343e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d343e8: 0xc74cd56  jal         func_1D33558
    ctx->pc = 0x1D343E8u;
    SET_GPR_U32(ctx, 31, 0x1D343F0u);
    ctx->pc = 0x1D343ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D343E8u;
    // 0x1d343ec: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33558u, 0x1D343E8u, 0x1D343F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D343F0u;
label_1d343f0:
    // 0x1d343f0: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d343f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d343f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d343f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d343f8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d343f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d343fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D343FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D34400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D343FCu;
        // 0x1d34400: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D343FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D34404u;
    // 0x1d34404: 0x0  nop
    ctx->pc = 0x1d34404u;
    // NOP
    ctx->pc = 0x1d34408u;
}
