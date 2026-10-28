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

// Function: sub_01CF0058
// Address: 0x1cf0058 - 0x1cf00b0
void sub_01CF0058_0x1cf0058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CF0058_0x1cf0058");
#endif

    switch (ctx->pc) {
        case 0x1cf0074u: goto label_1cf0074;
        case 0x1cf007cu: goto label_1cf007c;
        case 0x1cf0090u: goto label_1cf0090;
        case 0x1cf0094u: goto label_1cf0094;
        default: break;
    }

    ctx->pc = 0x1cf0058u;

    // 0x1cf0058: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cf0058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cf005c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cf005cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cf0060: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cf0060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cf0064: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cf0064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf0068: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cf0068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cf006c: 0xc73bd52  jal         func_1CEF548
    ctx->pc = 0x1CF006Cu;
    SET_GPR_U32(ctx, 31, 0x1CF0074u);
    ctx->pc = 0x1CF0070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF006Cu;
    // 0x1cf0070: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF548u, 0x1CF006Cu, 0x1CF0074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF0074u;
label_1cf0074:
    // 0x1cf0074: 0xc73bd54  jal         func_1CEF550
    ctx->pc = 0x1CF0074u;
    SET_GPR_U32(ctx, 31, 0x1CF007Cu);
    ctx->pc = 0x1CF0078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF0074u;
    // 0x1cf0078: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF550u, 0x1CF0074u, 0x1CF007Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF007Cu;
label_1cf007c:
    // 0x1cf007c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cf007cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf0080: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CF0080u;
    {
        const bool branch_taken_0x1cf0080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CF0084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF0080u;
        // 0x1cf0084: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf0080) {
            ctx->pc = 0x1CF00A4u;
            goto label_1cf00a4;
        }
    }
    ctx->pc = 0x1CF0088u;
    // 0x1cf0088: 0xc73bd56  jal         func_1CEF558
    ctx->pc = 0x1CF0088u;
    SET_GPR_U32(ctx, 31, 0x1CF0090u);
    ctx->pc = 0x1CEF558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF558u, 0x1CF0088u, 0x1CF0090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF0090u;
label_1cf0090:
    // 0x1cf0090: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1cf0090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1cf0094:
    // 0x1cf0094: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cf0094u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf0098: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cf0098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cf009c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF009Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF00A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF009Cu;
        // 0x1cf00a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF009Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF00A4u;
label_1cf00a4:
    // 0x1cf00a4: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1CF00A4u;
    {
        const bool branch_taken_0x1cf00a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF00A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF00A4u;
        // 0x1cf00a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf00a4) {
            ctx->pc = 0x1CF0094u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cf0094;
        }
    }
    ctx->pc = 0x1CF00ACu;
    // 0x1cf00ac: 0x0  nop
    ctx->pc = 0x1cf00acu;
    // NOP
    ctx->pc = 0x1cf00b0u;
}
