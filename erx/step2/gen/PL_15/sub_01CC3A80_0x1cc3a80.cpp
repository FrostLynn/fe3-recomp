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

// Function: sub_01CC3A80
// Address: 0x1cc3a80 - 0x1cc3b40
void sub_01CC3A80_0x1cc3a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC3A80_0x1cc3a80");
#endif

    switch (ctx->pc) {
        case 0x1cc3aa4u: goto label_1cc3aa4;
        default: break;
    }

    ctx->pc = 0x1cc3a80u;

    // 0x1cc3a80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cc3a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cc3a84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cc3a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cc3a88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cc3a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cc3a8c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cc3a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cc3a90: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1cc3a90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc3a94: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1cc3a94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc3a98: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cc3a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cc3a9c: 0xc730918  jal         func_1CC2460
    ctx->pc = 0x1CC3A9Cu;
    SET_GPR_U32(ctx, 31, 0x1CC3AA4u);
    ctx->pc = 0x1CC3AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC3A9Cu;
    // 0x1cc3aa0: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2460u, 0x1CC3A9Cu, 0x1CC3AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC3AA4u;
label_1cc3aa4:
    // 0x1cc3aa4: 0x8e0e0000  lw          $t6, 0x0($s0)
    ctx->pc = 0x1cc3aa4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cc3aa8: 0x240f0060  addiu       $t7, $zero, 0x60
    ctx->pc = 0x1cc3aa8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1cc3aac: 0x8e0b0004  lw          $t3, 0x4($s0)
    ctx->pc = 0x1cc3aacu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1cc3ab0: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x1cc3ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1cc3ab4: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x1cc3ab4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1cc3ab8: 0x8e0d000c  lw          $t5, 0xC($s0)
    ctx->pc = 0x1cc3ab8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cc3abc: 0x8c4c00b0  lw          $t4, 0xB0($v0)
    ctx->pc = 0x1cc3abcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x1cc3ac0: 0xae2d0570  sw          $t5, 0x570($s1)
    ctx->pc = 0x1cc3ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1392), GPR_U32(ctx, 13));
    // 0x1cc3ac4: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1cc3ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc3ac8: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1cc3ac8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1cc3acc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cc3accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc3ad0: 0x16f5818  mult        $t3, $t3, $t7
    ctx->pc = 0x1cc3ad0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x1cc3ad4: 0xe620056c  swc1        $f0, 0x56C($s1)
    ctx->pc = 0x1cc3ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1388), bits); }
    // 0x1cc3ad8: 0x18e6021  addu        $t4, $t4, $t6
    ctx->pc = 0x1cc3ad8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x1cc3adc: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1cc3adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc3ae0: 0x8d8d0010  lw          $t5, 0x10($t4)
    ctx->pc = 0x1cc3ae0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x1cc3ae4: 0x8e0f0010  lw          $t7, 0x10($s0)
    ctx->pc = 0x1cc3ae4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cc3ae8: 0xe6200590  swc1        $f0, 0x590($s1)
    ctx->pc = 0x1cc3ae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1424), bits); }
    // 0x1cc3aec: 0x1ab6821  addu        $t5, $t5, $t3
    ctx->pc = 0x1cc3aecu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x1cc3af0: 0xae2f0580  sw          $t7, 0x580($s1)
    ctx->pc = 0x1cc3af0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1408), GPR_U32(ctx, 15));
    // 0x1cc3af4: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x1cc3af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc3af8: 0x8e0f0014  lw          $t7, 0x14($s0)
    ctx->pc = 0x1cc3af8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1cc3afc: 0xae2d0568  sw          $t5, 0x568($s1)
    ctx->pc = 0x1cc3afcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1384), GPR_U32(ctx, 13));
    // 0x1cc3b00: 0xae2f0584  sw          $t7, 0x584($s1)
    ctx->pc = 0x1cc3b00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1412), GPR_U32(ctx, 15));
    // 0x1cc3b04: 0xe6200594  swc1        $f0, 0x594($s1)
    ctx->pc = 0x1cc3b04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1428), bits); }
    // 0x1cc3b08: 0x8e0e0018  lw          $t6, 0x18($s0)
    ctx->pc = 0x1cc3b08u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1cc3b0c: 0x8c4f004c  lw          $t7, 0x4C($v0)
    ctx->pc = 0x1cc3b0cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1cc3b10: 0xae2e0588  sw          $t6, 0x588($s1)
    ctx->pc = 0x1cc3b10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1416), GPR_U32(ctx, 14));
    // 0x1cc3b14: 0x25ef4610  addiu       $t7, $t7, 0x4610
    ctx->pc = 0x1cc3b14u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 17936));
    // 0x1cc3b18: 0xae2c0564  sw          $t4, 0x564($s1)
    ctx->pc = 0x1cc3b18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1380), GPR_U32(ctx, 12));
    // 0x1cc3b1c: 0x8e0e001c  lw          $t6, 0x1C($s0)
    ctx->pc = 0x1cc3b1cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1cc3b20: 0xae2f0560  sw          $t7, 0x560($s1)
    ctx->pc = 0x1cc3b20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1376), GPR_U32(ctx, 15));
    // 0x1cc3b24: 0xae2e058c  sw          $t6, 0x58C($s1)
    ctx->pc = 0x1cc3b24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1420), GPR_U32(ctx, 14));
    // 0x1cc3b28: 0x8e0f0028  lw          $t7, 0x28($s0)
    ctx->pc = 0x1cc3b28u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1cc3b2c: 0xae2f0598  sw          $t7, 0x598($s1)
    ctx->pc = 0x1cc3b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1432), GPR_U32(ctx, 15));
    // 0x1cc3b30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cc3b30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc3b34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cc3b34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cc3b38: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC3B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC3B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC3B38u;
        // 0x1cc3b3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC3B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC3B40u;
}
