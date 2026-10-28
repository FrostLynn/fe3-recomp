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

// Function: sub_01D35270
// Address: 0x1d35270 - 0x1d352c8
void sub_01D35270_0x1d35270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D35270_0x1d35270");
#endif

    switch (ctx->pc) {
        case 0x1d35284u: goto label_1d35284;
        case 0x1d35294u: goto label_1d35294;
        case 0x1d35298u: goto label_1d35298;
        default: break;
    }

    ctx->pc = 0x1d35270u;

    // 0x1d35270: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d35270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d35274: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d35274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d35278: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d35278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d3527c: 0xc74d056  jal         func_1D34158
    ctx->pc = 0x1D3527Cu;
    SET_GPR_U32(ctx, 31, 0x1D35284u);
    ctx->pc = 0x1D35280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3527Cu;
    // 0x1d35280: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D34158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D34158u, 0x1D3527Cu, 0x1D35284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D35284u;
label_1d35284:
    // 0x1d35284: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D35284u;
    {
        const bool branch_taken_0x1d35284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D35288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D35284u;
        // 0x1d35288: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d35284) {
            ctx->pc = 0x1D352A8u;
            goto label_1d352a8;
        }
    }
    ctx->pc = 0x1D3528Cu;
    // 0x1d3528c: 0xc74cd6c  jal         func_1D335B0
    ctx->pc = 0x1D3528Cu;
    SET_GPR_U32(ctx, 31, 0x1D35294u);
    ctx->pc = 0x1D335B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D335B0u, 0x1D3528Cu, 0x1D35294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D35294u;
label_1d35294:
    // 0x1d35294: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d35294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d35298:
    // 0x1d35298: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d35298u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3529c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d3529cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d352a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D352A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D352A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D352A0u;
        // 0x1d352a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D352A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D352A8u;
label_1d352a8:
    // 0x1d352a8: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D352A8u;
    {
        const bool branch_taken_0x1d352a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D352ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D352A8u;
        // 0x1d352ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d352a8) {
            ctx->pc = 0x1D35298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d35298;
        }
    }
    ctx->pc = 0x1D352B0u;
    // 0x1d352b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d352b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d352b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d352b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d352b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d352b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d352bc: 0x874d068  j           func_1D341A0
    ctx->pc = 0x1D352BCu;
    ctx->pc = 0x1D352C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D352BCu;
    // 0x1d352c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D341A0u;
    sub_01D341A0_0x1d341a0(rdram, ctx, runtime); return;
    ctx->pc = 0x1D352C4u;
    // 0x1d352c4: 0x0  nop
    ctx->pc = 0x1d352c4u;
    // NOP
    ctx->pc = 0x1d352c8u;
}
