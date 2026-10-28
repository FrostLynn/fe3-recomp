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

// Function: sub_01DBDFA0
// Address: 0x1dbdfa0 - 0x1dbdff8
void sub_01DBDFA0_0x1dbdfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBDFA0_0x1dbdfa0");
#endif

    switch (ctx->pc) {
        case 0x1dbdfb4u: goto label_1dbdfb4;
        case 0x1dbdfc0u: goto label_1dbdfc0;
        default: break;
    }

    ctx->pc = 0x1dbdfa0u;

    // 0x1dbdfa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dbdfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dbdfa4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dbdfa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dbdfa8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1dbdfa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1dbdfac: 0xc76ee92  jal         func_1DBBA48
    ctx->pc = 0x1DBDFACu;
    SET_GPR_U32(ctx, 31, 0x1DBDFB4u);
    ctx->pc = 0x1DBDFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBDFACu;
    // 0x1dbdfb0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBBA48u, 0x1DBDFACu, 0x1DBDFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBDFB4u;
label_1dbdfb4:
    // 0x1dbdfb4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1dbdfb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1dbdfb8: 0xc76ee58  jal         func_1DBB960
    ctx->pc = 0x1DBDFB8u;
    SET_GPR_U32(ctx, 31, 0x1DBDFC0u);
    ctx->pc = 0x1DBDFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBDFB8u;
    // 0x1dbdfbc: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB960u, 0x1DBDFB8u, 0x1DBDFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBDFC0u;
label_1dbdfc0:
    // 0x1dbdfc0: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x1dbdfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1dbdfc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dbdfc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbdfc8: 0x8c4e004c  lw          $t6, 0x4C($v0)
    ctx->pc = 0x1dbdfc8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1dbdfcc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dbdfccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dbdfd0: 0xa1c047e9  sb          $zero, 0x47E9($t6)
    ctx->pc = 0x1dbdfd0u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 18409), (uint8_t)GPR_U32(ctx, 0));
    // 0x1dbdfd4: 0x8c4f004c  lw          $t7, 0x4C($v0)
    ctx->pc = 0x1dbdfd4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1dbdfd8: 0x25ef0070  addiu       $t7, $t7, 0x70
    ctx->pc = 0x1dbdfd8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 112));
    // 0x1dbdfdc: 0xade04598  sw          $zero, 0x4598($t7)
    ctx->pc = 0x1dbdfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 17816), GPR_U32(ctx, 0));
    // 0x1dbdfe0: 0xade04590  sw          $zero, 0x4590($t7)
    ctx->pc = 0x1dbdfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 17808), GPR_U32(ctx, 0));
    // 0x1dbdfe4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBDFE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBDFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBDFE4u;
        // 0x1dbdfe8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBDFE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBDFECu;
    // 0x1dbdfec: 0x0  nop
    ctx->pc = 0x1dbdfecu;
    // NOP
    // 0x1dbdff0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBDFF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBDFF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBDFF8u;
}
