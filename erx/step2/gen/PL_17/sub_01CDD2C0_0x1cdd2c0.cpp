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

// Function: sub_01CDD2C0
// Address: 0x1cdd2c0 - 0x1cdd328
void sub_01CDD2C0_0x1cdd2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDD2C0_0x1cdd2c0");
#endif

    switch (ctx->pc) {
        case 0x1cdd2dcu: goto label_1cdd2dc;
        case 0x1cdd314u: goto label_1cdd314;
        default: break;
    }

    ctx->pc = 0x1cdd2c0u;

    // 0x1cdd2c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cdd2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cdd2c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cdd2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cdd2c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cdd2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cdd2cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cdd2ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdd2d0: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1cdd2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1cdd2d4: 0xc736896  jal         func_1CDA258
    ctx->pc = 0x1CDD2D4u;
    SET_GPR_U32(ctx, 31, 0x1CDD2DCu);
    ctx->pc = 0x1CDD2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDD2D4u;
    // 0x1cdd2d8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA258u, 0x1CDD2D4u, 0x1CDD2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDD2DCu;
label_1cdd2dc:
    // 0x1cdd2dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cdd2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdd2e0: 0x8e0e0024  lw          $t6, 0x24($s0)
    ctx->pc = 0x1cdd2e0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1cdd2e4: 0x24840390  addiu       $a0, $a0, 0x390
    ctx->pc = 0x1cdd2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 912));
    // 0x1cdd2e8: 0x24050151  addiu       $a1, $zero, 0x151
    ctx->pc = 0x1cdd2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 337));
    // 0x1cdd2ec: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cdd2ecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdd2f0: 0x11cf0006  beq         $t6, $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CDD2F0u;
    {
        const bool branch_taken_0x1cdd2f0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1CDD2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD2F0u;
        // 0x1cdd2f4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdd2f0) {
            ctx->pc = 0x1CDD30Cu;
            goto label_1cdd30c;
        }
    }
    ctx->pc = 0x1CDD2F8u;
    // 0x1cdd2f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cdd2f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdd2fc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cdd2fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cdd300: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cdd300u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdd304: 0x8736c56  j           func_1CDB158
    ctx->pc = 0x1CDD304u;
    ctx->pc = 0x1CDD308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDD304u;
    // 0x1cdd308: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDB158u;
    sub_01CDB158_0x1cdb158(rdram, ctx, runtime); return;
    ctx->pc = 0x1CDD30Cu;
label_1cdd30c:
    // 0x1cdd30c: 0xc73689c  jal         func_1CDA270
    ctx->pc = 0x1CDD30Cu;
    SET_GPR_U32(ctx, 31, 0x1CDD314u);
    ctx->pc = 0x1CDA270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA270u, 0x1CDD30Cu, 0x1CDD314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDD314u;
label_1cdd314:
    // 0x1cdd314: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cdd314u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdd318: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cdd318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cdd31c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDD31Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDD320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD31Cu;
        // 0x1cdd320: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDD31Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDD324u;
    // 0x1cdd324: 0x0  nop
    ctx->pc = 0x1cdd324u;
    // NOP
    ctx->pc = 0x1cdd328u;
}
