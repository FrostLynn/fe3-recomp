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

// Function: sub_01DCC090
// Address: 0x1dcc090 - 0x1dcc100
void sub_01DCC090_0x1dcc090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DCC090_0x1dcc090");
#endif

    switch (ctx->pc) {
        case 0x1dcc0acu: goto label_1dcc0ac;
        case 0x1dcc0c4u: goto label_1dcc0c4;
        case 0x1dcc0ecu: goto label_1dcc0ec;
        default: break;
    }

    ctx->pc = 0x1dcc090u;

    // 0x1dcc090: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dcc090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dcc094: 0x8f8f8030  lw          $t7, -0x7FD0($gp)
    ctx->pc = 0x1dcc094u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934576)));
    // 0x1dcc098: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1dcc098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1dcc09c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dcc09cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dcc0a0: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1dcc0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1dcc0a4: 0xc772ec6  jal         func_1DCBB18
    ctx->pc = 0x1DCC0A4u;
    SET_GPR_U32(ctx, 31, 0x1DCC0ACu);
    ctx->pc = 0x1DCC0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCC0A4u;
    // 0x1dcc0a8: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBB18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCBB18u, 0x1DCC0A4u, 0x1DCC0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCC0ACu;
label_1dcc0ac:
    // 0x1dcc0ac: 0x8f8f8030  lw          $t7, -0x7FD0($gp)
    ctx->pc = 0x1dcc0acu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934576)));
    // 0x1dcc0b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dcc0b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcc0b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dcc0b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcc0b8: 0x8dee00f0  lw          $t6, 0xF0($t7)
    ctx->pc = 0x1dcc0b8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 240)));
    // 0x1dcc0bc: 0xc772ede  jal         func_1DCBB78
    ctx->pc = 0x1DCC0BCu;
    SET_GPR_U32(ctx, 31, 0x1DCC0C4u);
    ctx->pc = 0x1DCC0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCC0BCu;
    // 0x1dcc0c0: 0x8dc4002c  lw          $a0, 0x2C($t6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCBB78u, 0x1DCC0BCu, 0x1DCC0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCC0C4u;
label_1dcc0c4:
    // 0x1dcc0c4: 0x8e0f024c  lw          $t7, 0x24C($s0)
    ctx->pc = 0x1dcc0c4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 588)));
    // 0x1dcc0c8: 0x8c460048  lw          $a2, 0x48($v0)
    ctx->pc = 0x1dcc0c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1dcc0cc: 0x8de50084  lw          $a1, 0x84($t7)
    ctx->pc = 0x1dcc0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 132)));
    // 0x1dcc0d0: 0x8f848030  lw          $a0, -0x7FD0($gp)
    ctx->pc = 0x1dcc0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934576)));
    // 0x1dcc0d4: 0x24c60110  addiu       $a2, $a2, 0x110
    ctx->pc = 0x1dcc0d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 272));
    // 0x1dcc0d8: 0x3c0f01dd  lui         $t7, 0x1DD
    ctx->pc = 0x1dcc0d8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)477 << 16));
    // 0x1dcc0dc: 0x24a50110  addiu       $a1, $a1, 0x110
    ctx->pc = 0x1dcc0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    // 0x1dcc0e0: 0x25efd77c  addiu       $t7, $t7, -0x2884
    ctx->pc = 0x1dcc0e0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294956924));
    // 0x1dcc0e4: 0xc772eda  jal         func_1DCBB68
    ctx->pc = 0x1DCC0E4u;
    SET_GPR_U32(ctx, 31, 0x1DCC0ECu);
    ctx->pc = 0x1DCC0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCC0E4u;
    // 0x1dcc0e8: 0xc5ec0000  lwc1        $f12, 0x0($t7) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCBB68u, 0x1DCC0E4u, 0x1DCC0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCC0ECu;
label_1dcc0ec:
    // 0x1dcc0ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dcc0ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dcc0f0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1dcc0f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1dcc0f4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dcc0f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dcc0f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCC0F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCC0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCC0F8u;
        // 0x1dcc0fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCC0F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCC100u;
}
