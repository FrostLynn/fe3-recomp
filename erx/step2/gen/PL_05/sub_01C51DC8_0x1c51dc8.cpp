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

// Function: sub_01C51DC8
// Address: 0x1c51dc8 - 0x1c51e28
void sub_01C51DC8_0x1c51dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C51DC8_0x1c51dc8");
#endif

    switch (ctx->pc) {
        case 0x1c51de4u: goto label_1c51de4;
        case 0x1c51e04u: goto label_1c51e04;
        case 0x1c51e10u: goto label_1c51e10;
        default: break;
    }

    ctx->pc = 0x1c51dc8u;

    // 0x1c51dc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c51dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c51dcc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c51dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c51dd0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c51dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c51dd4: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c51dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c51dd8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c51dd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51ddc: 0xc713e62  jal         func_1C4F988
    ctx->pc = 0x1C51DDCu;
    SET_GPR_U32(ctx, 31, 0x1C51DE4u);
    ctx->pc = 0x1C51DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51DDCu;
    // 0x1c51de0: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F988u, 0x1C51DDCu, 0x1C51DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51DE4u;
label_1c51de4:
    // 0x1c51de4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c51de4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c51de8: 0x3c0f01c6  lui         $t7, 0x1C6
    ctx->pc = 0x1c51de8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)454 << 16));
    // 0x1c51dec: 0x25eff478  addiu       $t7, $t7, -0xB88
    ctx->pc = 0x1c51decu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964344));
    // 0x1c51df0: 0x24440580  addiu       $a0, $v0, 0x580
    ctx->pc = 0x1c51df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x1c51df4: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1c51df4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x1c51df8: 0x460063c6  mov.s       $f15, $f12
    ctx->pc = 0x1c51df8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    // 0x1c51dfc: 0xc7140f0  jal         func_1C503C0
    ctx->pc = 0x1C51DFCu;
    SET_GPR_U32(ctx, 31, 0x1C51E04u);
    ctx->pc = 0x1C51E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51DFCu;
    // 0x1c51e00: 0xc5ed0000  lwc1        $f13, 0x0($t7) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C503C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C503C0u, 0x1C51DFCu, 0x1C51E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51E04u;
label_1c51e04:
    // 0x1c51e04: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c51e04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c51e08: 0xc713e62  jal         func_1C4F988
    ctx->pc = 0x1C51E08u;
    SET_GPR_U32(ctx, 31, 0x1C51E10u);
    ctx->pc = 0x1C51E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51E08u;
    // 0x1c51e0c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F988u, 0x1C51E08u, 0x1C51E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51E10u;
label_1c51e10:
    // 0x1c51e10: 0xac40074c  sw          $zero, 0x74C($v0)
    ctx->pc = 0x1c51e10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 0));
    // 0x1c51e14: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1c51e14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1c51e18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c51e18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c51e1c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c51e1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c51e20: 0x3e00008  jr          $ra
    ctx->pc = 0x1C51E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C51E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C51E20u;
        // 0x1c51e24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C51E20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C51E28u;
}
