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

// Function: sub_01D35540
// Address: 0x1d35540 - 0x1d35578
void sub_01D35540_0x1d35540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D35540_0x1d35540");
#endif

    switch (ctx->pc) {
        case 0x1d35568u: goto label_1d35568;
        default: break;
    }

    ctx->pc = 0x1d35540u;

    // 0x1d35540: 0x3c0f01d4  lui         $t7, 0x1D4
    ctx->pc = 0x1d35540u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)468 << 16));
    // 0x1d35544: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d35544u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d35548: 0x25eebaf0  addiu       $t6, $t7, -0x4510
    ctx->pc = 0x1d35548u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949616));
    // 0x1d3554c: 0x8dedbaf0  lw          $t5, -0x4510($t7)
    ctx->pc = 0x1d3554cu;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1D3BAF0u));
    // 0x1d35550: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1d35550u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1D3BAF4u));
    // 0x1d35554: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1d35554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d35558: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d35558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d3555c: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1d3555cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1d35560: 0xc74d098  jal         func_1D34260
    ctx->pc = 0x1D35560u;
    SET_GPR_U32(ctx, 31, 0x1D35568u);
    ctx->pc = 0x1D35564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D35560u;
    // 0x1d35564: 0xafac0004  sw          $t4, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D34260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D34260u, 0x1D35560u, 0x1D35568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D35568u;
label_1d35568:
    // 0x1d35568: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d35568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d3556c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3556Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D35570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3556Cu;
        // 0x1d35570: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3556Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D35574u;
    // 0x1d35574: 0x0  nop
    ctx->pc = 0x1d35574u;
    // NOP
    ctx->pc = 0x1d35578u;
}
