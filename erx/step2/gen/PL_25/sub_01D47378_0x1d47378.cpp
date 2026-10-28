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

// Function: sub_01D47378
// Address: 0x1d47378 - 0x1d47438
void sub_01D47378_0x1d47378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D47378_0x1d47378");
#endif

    switch (ctx->pc) {
        case 0x1d4739cu: goto label_1d4739c;
        default: break;
    }

    ctx->pc = 0x1d47378u;

    // 0x1d47378: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d47378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d4737c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d4737cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d47380: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d47380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d47384: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d47384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d47388: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d47388u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4738c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1d4738cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47390: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d47390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d47394: 0xc751756  jal         func_1D45D58
    ctx->pc = 0x1D47394u;
    SET_GPR_U32(ctx, 31, 0x1D4739Cu);
    ctx->pc = 0x1D47398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D47394u;
    // 0x1d47398: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D58u, 0x1D47394u, 0x1D4739Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4739Cu;
label_1d4739c:
    // 0x1d4739c: 0x8e0e0000  lw          $t6, 0x0($s0)
    ctx->pc = 0x1d4739cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d473a0: 0x240f0060  addiu       $t7, $zero, 0x60
    ctx->pc = 0x1d473a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1d473a4: 0x8e0b0004  lw          $t3, 0x4($s0)
    ctx->pc = 0x1d473a4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d473a8: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x1d473a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1d473ac: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x1d473acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1d473b0: 0x8e0d000c  lw          $t5, 0xC($s0)
    ctx->pc = 0x1d473b0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d473b4: 0x8c4c00b0  lw          $t4, 0xB0($v0)
    ctx->pc = 0x1d473b4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x1d473b8: 0xae2d0570  sw          $t5, 0x570($s1)
    ctx->pc = 0x1d473b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1392), GPR_U32(ctx, 13));
    // 0x1d473bc: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1d473bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d473c0: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1d473c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1d473c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d473c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d473c8: 0x16f5818  mult        $t3, $t3, $t7
    ctx->pc = 0x1d473c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x1d473cc: 0xe620056c  swc1        $f0, 0x56C($s1)
    ctx->pc = 0x1d473ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1388), bits); }
    // 0x1d473d0: 0x18e6021  addu        $t4, $t4, $t6
    ctx->pc = 0x1d473d0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x1d473d4: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1d473d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d473d8: 0x8d8d0010  lw          $t5, 0x10($t4)
    ctx->pc = 0x1d473d8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x1d473dc: 0x8e0f0010  lw          $t7, 0x10($s0)
    ctx->pc = 0x1d473dcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d473e0: 0xe6200590  swc1        $f0, 0x590($s1)
    ctx->pc = 0x1d473e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1424), bits); }
    // 0x1d473e4: 0x1ab6821  addu        $t5, $t5, $t3
    ctx->pc = 0x1d473e4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x1d473e8: 0xae2f0580  sw          $t7, 0x580($s1)
    ctx->pc = 0x1d473e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1408), GPR_U32(ctx, 15));
    // 0x1d473ec: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x1d473ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d473f0: 0x8e0f0014  lw          $t7, 0x14($s0)
    ctx->pc = 0x1d473f0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1d473f4: 0xae2d0568  sw          $t5, 0x568($s1)
    ctx->pc = 0x1d473f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1384), GPR_U32(ctx, 13));
    // 0x1d473f8: 0xae2f0584  sw          $t7, 0x584($s1)
    ctx->pc = 0x1d473f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1412), GPR_U32(ctx, 15));
    // 0x1d473fc: 0xe6200594  swc1        $f0, 0x594($s1)
    ctx->pc = 0x1d473fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1428), bits); }
    // 0x1d47400: 0x8e0e0018  lw          $t6, 0x18($s0)
    ctx->pc = 0x1d47400u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1d47404: 0x8c4f004c  lw          $t7, 0x4C($v0)
    ctx->pc = 0x1d47404u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1d47408: 0xae2e0588  sw          $t6, 0x588($s1)
    ctx->pc = 0x1d47408u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1416), GPR_U32(ctx, 14));
    // 0x1d4740c: 0x25ef4610  addiu       $t7, $t7, 0x4610
    ctx->pc = 0x1d4740cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 17936));
    // 0x1d47410: 0xae2c0564  sw          $t4, 0x564($s1)
    ctx->pc = 0x1d47410u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1380), GPR_U32(ctx, 12));
    // 0x1d47414: 0x8e0e001c  lw          $t6, 0x1C($s0)
    ctx->pc = 0x1d47414u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1d47418: 0xae2f0560  sw          $t7, 0x560($s1)
    ctx->pc = 0x1d47418u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1376), GPR_U32(ctx, 15));
    // 0x1d4741c: 0xae2e058c  sw          $t6, 0x58C($s1)
    ctx->pc = 0x1d4741cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1420), GPR_U32(ctx, 14));
    // 0x1d47420: 0x8e0f0028  lw          $t7, 0x28($s0)
    ctx->pc = 0x1d47420u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1d47424: 0xae2f0598  sw          $t7, 0x598($s1)
    ctx->pc = 0x1d47424u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1432), GPR_U32(ctx, 15));
    // 0x1d47428: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d47428u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d4742c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d4742cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d47430: 0x3e00008  jr          $ra
    ctx->pc = 0x1D47430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D47434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47430u;
        // 0x1d47434: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D47430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D47438u;
}
