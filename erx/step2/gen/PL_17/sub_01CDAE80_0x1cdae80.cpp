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

// Function: sub_01CDAE80
// Address: 0x1cdae80 - 0x1cdaf10
void sub_01CDAE80_0x1cdae80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDAE80_0x1cdae80");
#endif

    switch (ctx->pc) {
        case 0x1cdae94u: goto label_1cdae94;
        case 0x1cdaea8u: goto label_1cdaea8;
        case 0x1cdaeacu: goto label_1cdaeac;
        case 0x1cdaef4u: goto label_1cdaef4;
        default: break;
    }

    ctx->pc = 0x1cdae80u;

    // 0x1cdae80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cdae80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cdae84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cdae84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cdae88: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cdae88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cdae8c: 0xc736892  jal         func_1CDA248
    ctx->pc = 0x1CDAE8Cu;
    SET_GPR_U32(ctx, 31, 0x1CDAE94u);
    ctx->pc = 0x1CDAE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDAE8Cu;
    // 0x1cdae90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA248u, 0x1CDAE8Cu, 0x1CDAE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDAE94u;
label_1cdae94:
    // 0x1cdae94: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cdae94u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdae98: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CDAE98u;
    {
        const bool branch_taken_0x1cdae98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CDAE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDAE98u;
        // 0x1cdae9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdae98) {
            ctx->pc = 0x1CDAEBCu;
            goto label_1cdaebc;
        }
    }
    ctx->pc = 0x1CDAEA0u;
    // 0x1cdaea0: 0xc736894  jal         func_1CDA250
    ctx->pc = 0x1CDAEA0u;
    SET_GPR_U32(ctx, 31, 0x1CDAEA8u);
    ctx->pc = 0x1CDA250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA250u, 0x1CDAEA0u, 0x1CDAEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDAEA8u;
label_1cdaea8:
    // 0x1cdaea8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1cdaea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1cdaeac:
    // 0x1cdaeac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cdaeacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdaeb0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cdaeb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cdaeb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDAEB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDAEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDAEB4u;
        // 0x1cdaeb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDAEB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDAEBCu;
label_1cdaebc:
    // 0x1cdaebc: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1CDAEBCu;
    {
        const bool branch_taken_0x1cdaebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDAEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDAEBCu;
        // 0x1cdaec0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdaebc) {
            ctx->pc = 0x1CDAEACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdaeac;
        }
    }
    ctx->pc = 0x1CDAEC4u;
    // 0x1cdaec4: 0x0  nop
    ctx->pc = 0x1cdaec4u;
    // NOP
    // 0x1cdaec8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cdaec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cdaecc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cdaeccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdaed0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cdaed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cdaed4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1cdaed4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cdaed8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cdaed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cdaedc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cdaedcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdaee0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cdaee0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdaee4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cdaee4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdaee8: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1cdaee8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cdaeec: 0xc7368a2  jal         func_1CDA288
    ctx->pc = 0x1CDAEECu;
    SET_GPR_U32(ctx, 31, 0x1CDAEF4u);
    ctx->pc = 0x1CDAEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDAEECu;
    // 0x1cdaef0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA288u, 0x1CDAEECu, 0x1CDAEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDAEF4u;
label_1cdaef4:
    // 0x1cdaef4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cdaef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdaef8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cdaef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cdaefc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cdaefcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdaf00: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1cdaf00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cdaf04: 0x873689a  j           func_1CDA268
    ctx->pc = 0x1CDAF04u;
    ctx->pc = 0x1CDAF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDAF04u;
    // 0x1cdaf08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA268u;
    sub_01CDA268_0x1cda268(rdram, ctx, runtime); return;
    ctx->pc = 0x1CDAF0Cu;
    // 0x1cdaf0c: 0x0  nop
    ctx->pc = 0x1cdaf0cu;
    // NOP
    ctx->pc = 0x1cdaf10u;
}
