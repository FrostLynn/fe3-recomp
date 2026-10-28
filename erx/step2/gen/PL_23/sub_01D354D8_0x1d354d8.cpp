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

// Function: sub_01D354D8
// Address: 0x1d354d8 - 0x1d35510
void sub_01D354D8_0x1d354d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D354D8_0x1d354d8");
#endif

    switch (ctx->pc) {
        case 0x1d35500u: goto label_1d35500;
        default: break;
    }

    ctx->pc = 0x1d354d8u;

    // 0x1d354d8: 0x3c0f01d4  lui         $t7, 0x1D4
    ctx->pc = 0x1d354d8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)468 << 16));
    // 0x1d354dc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d354dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d354e0: 0x25eebae8  addiu       $t6, $t7, -0x4518
    ctx->pc = 0x1d354e0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949608));
    // 0x1d354e4: 0x8dedbae8  lw          $t5, -0x4518($t7)
    ctx->pc = 0x1d354e4u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1D3BAE8u));
    // 0x1d354e8: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1d354e8u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1D3BAECu));
    // 0x1d354ec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1d354ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d354f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d354f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d354f4: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1d354f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1d354f8: 0xc74d098  jal         func_1D34260
    ctx->pc = 0x1D354F8u;
    SET_GPR_U32(ctx, 31, 0x1D35500u);
    ctx->pc = 0x1D354FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D354F8u;
    // 0x1d354fc: 0xafac0004  sw          $t4, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D34260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D34260u, 0x1D354F8u, 0x1D35500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D35500u;
label_1d35500:
    // 0x1d35500: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d35500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d35504: 0x3e00008  jr          $ra
    ctx->pc = 0x1D35504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D35508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D35504u;
        // 0x1d35508: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D35504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3550Cu;
    // 0x1d3550c: 0x0  nop
    ctx->pc = 0x1d3550cu;
    // NOP
    ctx->pc = 0x1d35510u;
}
