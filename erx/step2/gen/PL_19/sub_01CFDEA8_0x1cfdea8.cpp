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

// Function: sub_01CFDEA8
// Address: 0x1cfdea8 - 0x1cfdf38
void sub_01CFDEA8_0x1cfdea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFDEA8_0x1cfdea8");
#endif

    switch (ctx->pc) {
        case 0x1cfdebcu: goto label_1cfdebc;
        case 0x1cfded0u: goto label_1cfded0;
        case 0x1cfded4u: goto label_1cfded4;
        case 0x1cfdf1cu: goto label_1cfdf1c;
        default: break;
    }

    ctx->pc = 0x1cfdea8u;

    // 0x1cfdea8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cfdea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cfdeac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cfdeacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cfdeb0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cfdeb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cfdeb4: 0xc73f496  jal         func_1CFD258
    ctx->pc = 0x1CFDEB4u;
    SET_GPR_U32(ctx, 31, 0x1CFDEBCu);
    ctx->pc = 0x1CFDEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFDEB4u;
    // 0x1cfdeb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD258u, 0x1CFDEB4u, 0x1CFDEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFDEBCu;
label_1cfdebc:
    // 0x1cfdebc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cfdebcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cfdec0: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CFDEC0u;
    {
        const bool branch_taken_0x1cfdec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CFDEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFDEC0u;
        // 0x1cfdec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfdec0) {
            ctx->pc = 0x1CFDEE4u;
            goto label_1cfdee4;
        }
    }
    ctx->pc = 0x1CFDEC8u;
    // 0x1cfdec8: 0xc73f498  jal         func_1CFD260
    ctx->pc = 0x1CFDEC8u;
    SET_GPR_U32(ctx, 31, 0x1CFDED0u);
    ctx->pc = 0x1CFD260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD260u, 0x1CFDEC8u, 0x1CFDED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFDED0u;
label_1cfded0:
    // 0x1cfded0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1cfded0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1cfded4:
    // 0x1cfded4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cfded4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cfded8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cfded8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cfdedc: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFDEDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFDEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFDEDCu;
        // 0x1cfdee0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFDEDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CFDEE4u;
label_1cfdee4:
    // 0x1cfdee4: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1CFDEE4u;
    {
        const bool branch_taken_0x1cfdee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFDEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFDEE4u;
        // 0x1cfdee8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfdee4) {
            ctx->pc = 0x1CFDED4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cfded4;
        }
    }
    ctx->pc = 0x1CFDEECu;
    // 0x1cfdeec: 0x0  nop
    ctx->pc = 0x1cfdeecu;
    // NOP
    // 0x1cfdef0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cfdef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cfdef4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cfdef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfdef8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cfdef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cfdefc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1cfdefcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cfdf00: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cfdf00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cfdf04: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cfdf04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfdf08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cfdf08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfdf0c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cfdf0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfdf10: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1cfdf10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cfdf14: 0xc73f4a6  jal         func_1CFD298
    ctx->pc = 0x1CFDF14u;
    SET_GPR_U32(ctx, 31, 0x1CFDF1Cu);
    ctx->pc = 0x1CFDF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFDF14u;
    // 0x1cfdf18: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD298u, 0x1CFDF14u, 0x1CFDF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFDF1Cu;
label_1cfdf1c:
    // 0x1cfdf1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cfdf1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfdf20: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cfdf20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cfdf24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cfdf24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cfdf28: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1cfdf28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cfdf2c: 0x873f49e  j           func_1CFD278
    ctx->pc = 0x1CFDF2Cu;
    ctx->pc = 0x1CFDF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFDF2Cu;
    // 0x1cfdf30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD278u;
    sub_01CFD278_0x1cfd278(rdram, ctx, runtime); return;
    ctx->pc = 0x1CFDF34u;
    // 0x1cfdf34: 0x0  nop
    ctx->pc = 0x1cfdf34u;
    // NOP
    ctx->pc = 0x1cfdf38u;
}
