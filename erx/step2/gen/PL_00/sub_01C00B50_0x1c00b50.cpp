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

// Function: sub_01C00B50
// Address: 0x1c00b50 - 0x1c00ba8
void sub_01C00B50_0x1c00b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C00B50_0x1c00b50");
#endif

    switch (ctx->pc) {
        case 0x1c00b6cu: goto label_1c00b6c;
        case 0x1c00b74u: goto label_1c00b74;
        case 0x1c00b88u: goto label_1c00b88;
        case 0x1c00b8cu: goto label_1c00b8c;
        default: break;
    }

    ctx->pc = 0x1c00b50u;

    // 0x1c00b50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c00b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c00b54: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c00b54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c00b58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c00b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c00b5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c00b5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c00b60: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c00b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c00b64: 0xc700012  jal         func_1C00048
    ctx->pc = 0x1C00B64u;
    SET_GPR_U32(ctx, 31, 0x1C00B6Cu);
    ctx->pc = 0x1C00B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C00B64u;
    // 0x1c00b68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00048u, 0x1C00B64u, 0x1C00B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C00B6Cu;
label_1c00b6c:
    // 0x1c00b6c: 0xc700014  jal         func_1C00050
    ctx->pc = 0x1C00B6Cu;
    SET_GPR_U32(ctx, 31, 0x1C00B74u);
    ctx->pc = 0x1C00B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C00B6Cu;
    // 0x1c00b70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00050u, 0x1C00B6Cu, 0x1C00B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C00B74u;
label_1c00b74:
    // 0x1c00b74: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c00b74u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c00b78: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C00B78u;
    {
        const bool branch_taken_0x1c00b78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C00B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C00B78u;
        // 0x1c00b7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c00b78) {
            ctx->pc = 0x1C00B9Cu;
            goto label_1c00b9c;
        }
    }
    ctx->pc = 0x1C00B80u;
    // 0x1c00b80: 0xc700016  jal         func_1C00058
    ctx->pc = 0x1C00B80u;
    SET_GPR_U32(ctx, 31, 0x1C00B88u);
    ctx->pc = 0x1C00058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00058u, 0x1C00B80u, 0x1C00B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C00B88u;
label_1c00b88:
    // 0x1c00b88: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c00b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c00b8c:
    // 0x1c00b8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c00b8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c00b90: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c00b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c00b94: 0x3e00008  jr          $ra
    ctx->pc = 0x1C00B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C00B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C00B94u;
        // 0x1c00b98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C00B94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C00B9Cu;
label_1c00b9c:
    // 0x1c00b9c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C00B9Cu;
    {
        const bool branch_taken_0x1c00b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C00BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C00B9Cu;
        // 0x1c00ba0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c00b9c) {
            ctx->pc = 0x1C00B8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c00b8c;
        }
    }
    ctx->pc = 0x1C00BA4u;
    // 0x1c00ba4: 0x0  nop
    ctx->pc = 0x1c00ba4u;
    // NOP
    ctx->pc = 0x1c00ba8u;
}
