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

// Function: sub_01CFDD80
// Address: 0x1cfdd80 - 0x1cfddd8
void sub_01CFDD80_0x1cfdd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFDD80_0x1cfdd80");
#endif

    switch (ctx->pc) {
        case 0x1cfdd9cu: goto label_1cfdd9c;
        case 0x1cfdda4u: goto label_1cfdda4;
        case 0x1cfddb8u: goto label_1cfddb8;
        case 0x1cfddbcu: goto label_1cfddbc;
        default: break;
    }

    ctx->pc = 0x1cfdd80u;

    // 0x1cfdd80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cfdd80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cfdd84: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cfdd84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cfdd88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cfdd88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cfdd8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cfdd8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfdd90: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cfdd90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cfdd94: 0xc73f494  jal         func_1CFD250
    ctx->pc = 0x1CFDD94u;
    SET_GPR_U32(ctx, 31, 0x1CFDD9Cu);
    ctx->pc = 0x1CFDD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFDD94u;
    // 0x1cfdd98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD250u, 0x1CFDD94u, 0x1CFDD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFDD9Cu;
label_1cfdd9c:
    // 0x1cfdd9c: 0xc73f496  jal         func_1CFD258
    ctx->pc = 0x1CFDD9Cu;
    SET_GPR_U32(ctx, 31, 0x1CFDDA4u);
    ctx->pc = 0x1CFDDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFDD9Cu;
    // 0x1cfdda0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD258u, 0x1CFDD9Cu, 0x1CFDDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFDDA4u;
label_1cfdda4:
    // 0x1cfdda4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cfdda4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cfdda8: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CFDDA8u;
    {
        const bool branch_taken_0x1cfdda8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CFDDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFDDA8u;
        // 0x1cfddac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfdda8) {
            ctx->pc = 0x1CFDDCCu;
            goto label_1cfddcc;
        }
    }
    ctx->pc = 0x1CFDDB0u;
    // 0x1cfddb0: 0xc73f498  jal         func_1CFD260
    ctx->pc = 0x1CFDDB0u;
    SET_GPR_U32(ctx, 31, 0x1CFDDB8u);
    ctx->pc = 0x1CFD260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD260u, 0x1CFDDB0u, 0x1CFDDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFDDB8u;
label_1cfddb8:
    // 0x1cfddb8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1cfddb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1cfddbc:
    // 0x1cfddbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cfddbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cfddc0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cfddc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cfddc4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFDDC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFDDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFDDC4u;
        // 0x1cfddc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFDDC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CFDDCCu;
label_1cfddcc:
    // 0x1cfddcc: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1CFDDCCu;
    {
        const bool branch_taken_0x1cfddcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFDDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFDDCCu;
        // 0x1cfddd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfddcc) {
            ctx->pc = 0x1CFDDBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cfddbc;
        }
    }
    ctx->pc = 0x1CFDDD4u;
    // 0x1cfddd4: 0x0  nop
    ctx->pc = 0x1cfddd4u;
    // NOP
    ctx->pc = 0x1cfddd8u;
}
