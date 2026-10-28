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

// Function: sub_01D34200
// Address: 0x1d34200 - 0x1d34260
void sub_01D34200_0x1d34200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D34200_0x1d34200");
#endif

    switch (ctx->pc) {
        case 0x1d34214u: goto label_1d34214;
        case 0x1d34228u: goto label_1d34228;
        case 0x1d3422cu: goto label_1d3422c;
        case 0x1d34248u: goto label_1d34248;
        case 0x1d34254u: goto label_1d34254;
        default: break;
    }

    ctx->pc = 0x1d34200u;

    // 0x1d34200: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d34200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d34204: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d34204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d34208: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d34208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d3420c: 0xc74cd52  jal         func_1D33548
    ctx->pc = 0x1D3420Cu;
    SET_GPR_U32(ctx, 31, 0x1D34214u);
    ctx->pc = 0x1D34210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3420Cu;
    // 0x1d34210: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33548u, 0x1D3420Cu, 0x1D34214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D34214u;
label_1d34214:
    // 0x1d34214: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d34214u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d34218: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D34218u;
    {
        const bool branch_taken_0x1d34218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D3421Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D34218u;
        // 0x1d3421c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d34218) {
            ctx->pc = 0x1D3423Cu;
            goto label_1d3423c;
        }
    }
    ctx->pc = 0x1D34220u;
    // 0x1d34220: 0xc74cd54  jal         func_1D33550
    ctx->pc = 0x1D34220u;
    SET_GPR_U32(ctx, 31, 0x1D34228u);
    ctx->pc = 0x1D33550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33550u, 0x1D34220u, 0x1D34228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D34228u;
label_1d34228:
    // 0x1d34228: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d34228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d3422c:
    // 0x1d3422c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d3422cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d34230: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d34230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d34234: 0x3e00008  jr          $ra
    ctx->pc = 0x1D34234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D34238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D34234u;
        // 0x1d34238: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D34234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3423Cu;
label_1d3423c:
    // 0x1d3423c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d3423cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d34240: 0xc74cd56  jal         func_1D33558
    ctx->pc = 0x1D34240u;
    SET_GPR_U32(ctx, 31, 0x1D34248u);
    ctx->pc = 0x1D34244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D34240u;
    // 0x1d34244: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33558u, 0x1D34240u, 0x1D34248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D34248u;
label_1d34248:
    // 0x1d34248: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1d34248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1d3424c: 0xc74cd64  jal         func_1D33590
    ctx->pc = 0x1D3424Cu;
    SET_GPR_U32(ctx, 31, 0x1D34254u);
    ctx->pc = 0x1D34250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3424Cu;
    // 0x1d34250: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33590u, 0x1D3424Cu, 0x1D34254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D34254u;
label_1d34254:
    // 0x1d34254: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1D34254u;
    {
        const bool branch_taken_0x1d34254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D34258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D34254u;
        // 0x1d34258: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d34254) {
            ctx->pc = 0x1D3422Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3422c;
        }
    }
    ctx->pc = 0x1D3425Cu;
    // 0x1d3425c: 0x0  nop
    ctx->pc = 0x1d3425cu;
    // NOP
    ctx->pc = 0x1d34260u;
}
