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

// Function: sub_01C30D80
// Address: 0x1c30d80 - 0x1c30e40
void sub_01C30D80_0x1c30d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C30D80_0x1c30d80");
#endif

    switch (ctx->pc) {
        case 0x1c30da4u: goto label_1c30da4;
        default: break;
    }

    ctx->pc = 0x1c30d80u;

    // 0x1c30d80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c30d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c30d84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c30d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c30d88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c30d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c30d8c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c30d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c30d90: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c30d90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c30d94: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1c30d94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c30d98: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c30d98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c30d9c: 0xc70bdd6  jal         func_1C2F758
    ctx->pc = 0x1C30D9Cu;
    SET_GPR_U32(ctx, 31, 0x1C30DA4u);
    ctx->pc = 0x1C30DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C30D9Cu;
    // 0x1c30da0: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F758u, 0x1C30D9Cu, 0x1C30DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C30DA4u;
label_1c30da4:
    // 0x1c30da4: 0x8e0e0000  lw          $t6, 0x0($s0)
    ctx->pc = 0x1c30da4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c30da8: 0x240f0060  addiu       $t7, $zero, 0x60
    ctx->pc = 0x1c30da8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1c30dac: 0x8e0b0004  lw          $t3, 0x4($s0)
    ctx->pc = 0x1c30dacu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c30db0: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x1c30db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1c30db4: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x1c30db4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1c30db8: 0x8e0d000c  lw          $t5, 0xC($s0)
    ctx->pc = 0x1c30db8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c30dbc: 0x8c4c00b0  lw          $t4, 0xB0($v0)
    ctx->pc = 0x1c30dbcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x1c30dc0: 0xae2d0570  sw          $t5, 0x570($s1)
    ctx->pc = 0x1c30dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1392), GPR_U32(ctx, 13));
    // 0x1c30dc4: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1c30dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c30dc8: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1c30dc8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c30dcc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c30dccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c30dd0: 0x16f5818  mult        $t3, $t3, $t7
    ctx->pc = 0x1c30dd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x1c30dd4: 0xe620056c  swc1        $f0, 0x56C($s1)
    ctx->pc = 0x1c30dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1388), bits); }
    // 0x1c30dd8: 0x18e6021  addu        $t4, $t4, $t6
    ctx->pc = 0x1c30dd8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x1c30ddc: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1c30ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c30de0: 0x8d8d0010  lw          $t5, 0x10($t4)
    ctx->pc = 0x1c30de0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x1c30de4: 0x8e0f0010  lw          $t7, 0x10($s0)
    ctx->pc = 0x1c30de4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c30de8: 0xe6200590  swc1        $f0, 0x590($s1)
    ctx->pc = 0x1c30de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1424), bits); }
    // 0x1c30dec: 0x1ab6821  addu        $t5, $t5, $t3
    ctx->pc = 0x1c30decu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x1c30df0: 0xae2f0580  sw          $t7, 0x580($s1)
    ctx->pc = 0x1c30df0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1408), GPR_U32(ctx, 15));
    // 0x1c30df4: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x1c30df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c30df8: 0x8e0f0014  lw          $t7, 0x14($s0)
    ctx->pc = 0x1c30df8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1c30dfc: 0xae2d0568  sw          $t5, 0x568($s1)
    ctx->pc = 0x1c30dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1384), GPR_U32(ctx, 13));
    // 0x1c30e00: 0xae2f0584  sw          $t7, 0x584($s1)
    ctx->pc = 0x1c30e00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1412), GPR_U32(ctx, 15));
    // 0x1c30e04: 0xe6200594  swc1        $f0, 0x594($s1)
    ctx->pc = 0x1c30e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1428), bits); }
    // 0x1c30e08: 0x8e0e0018  lw          $t6, 0x18($s0)
    ctx->pc = 0x1c30e08u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1c30e0c: 0x8c4f004c  lw          $t7, 0x4C($v0)
    ctx->pc = 0x1c30e0cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1c30e10: 0xae2e0588  sw          $t6, 0x588($s1)
    ctx->pc = 0x1c30e10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1416), GPR_U32(ctx, 14));
    // 0x1c30e14: 0x25ef4610  addiu       $t7, $t7, 0x4610
    ctx->pc = 0x1c30e14u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 17936));
    // 0x1c30e18: 0xae2c0564  sw          $t4, 0x564($s1)
    ctx->pc = 0x1c30e18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1380), GPR_U32(ctx, 12));
    // 0x1c30e1c: 0x8e0e001c  lw          $t6, 0x1C($s0)
    ctx->pc = 0x1c30e1cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1c30e20: 0xae2f0560  sw          $t7, 0x560($s1)
    ctx->pc = 0x1c30e20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1376), GPR_U32(ctx, 15));
    // 0x1c30e24: 0xae2e058c  sw          $t6, 0x58C($s1)
    ctx->pc = 0x1c30e24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1420), GPR_U32(ctx, 14));
    // 0x1c30e28: 0x8e0f0028  lw          $t7, 0x28($s0)
    ctx->pc = 0x1c30e28u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1c30e2c: 0xae2f0598  sw          $t7, 0x598($s1)
    ctx->pc = 0x1c30e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1432), GPR_U32(ctx, 15));
    // 0x1c30e30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c30e30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c30e34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c30e34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c30e38: 0x3e00008  jr          $ra
    ctx->pc = 0x1C30E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C30E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C30E38u;
        // 0x1c30e3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C30E38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C30E40u;
}
