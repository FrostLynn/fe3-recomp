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

// Function: sub_01CFE8C0
// Address: 0x1cfe8c0 - 0x1cfe980
void sub_01CFE8C0_0x1cfe8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFE8C0_0x1cfe8c0");
#endif

    switch (ctx->pc) {
        case 0x1cfe8e4u: goto label_1cfe8e4;
        default: break;
    }

    ctx->pc = 0x1cfe8c0u;

    // 0x1cfe8c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cfe8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cfe8c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cfe8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cfe8c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cfe8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cfe8cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cfe8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cfe8d0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1cfe8d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe8d4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1cfe8d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe8d8: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cfe8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cfe8dc: 0xc73f49a  jal         func_1CFD268
    ctx->pc = 0x1CFE8DCu;
    SET_GPR_U32(ctx, 31, 0x1CFE8E4u);
    ctx->pc = 0x1CFE8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE8DCu;
    // 0x1cfe8e0: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD268u, 0x1CFE8DCu, 0x1CFE8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE8E4u;
label_1cfe8e4:
    // 0x1cfe8e4: 0x8e0e0000  lw          $t6, 0x0($s0)
    ctx->pc = 0x1cfe8e4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cfe8e8: 0x240f0060  addiu       $t7, $zero, 0x60
    ctx->pc = 0x1cfe8e8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1cfe8ec: 0x8e0b0004  lw          $t3, 0x4($s0)
    ctx->pc = 0x1cfe8ecu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1cfe8f0: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x1cfe8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1cfe8f4: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x1cfe8f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1cfe8f8: 0x8e0d000c  lw          $t5, 0xC($s0)
    ctx->pc = 0x1cfe8f8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cfe8fc: 0x8c4c00b0  lw          $t4, 0xB0($v0)
    ctx->pc = 0x1cfe8fcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x1cfe900: 0xae2d0570  sw          $t5, 0x570($s1)
    ctx->pc = 0x1cfe900u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1392), GPR_U32(ctx, 13));
    // 0x1cfe904: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1cfe904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cfe908: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1cfe908u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1cfe90c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cfe90cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cfe910: 0x16f5818  mult        $t3, $t3, $t7
    ctx->pc = 0x1cfe910u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x1cfe914: 0xe620056c  swc1        $f0, 0x56C($s1)
    ctx->pc = 0x1cfe914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1388), bits); }
    // 0x1cfe918: 0x18e6021  addu        $t4, $t4, $t6
    ctx->pc = 0x1cfe918u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x1cfe91c: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1cfe91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cfe920: 0x8d8d0010  lw          $t5, 0x10($t4)
    ctx->pc = 0x1cfe920u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x1cfe924: 0x8e0f0010  lw          $t7, 0x10($s0)
    ctx->pc = 0x1cfe924u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cfe928: 0xe6200590  swc1        $f0, 0x590($s1)
    ctx->pc = 0x1cfe928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1424), bits); }
    // 0x1cfe92c: 0x1ab6821  addu        $t5, $t5, $t3
    ctx->pc = 0x1cfe92cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x1cfe930: 0xae2f0580  sw          $t7, 0x580($s1)
    ctx->pc = 0x1cfe930u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1408), GPR_U32(ctx, 15));
    // 0x1cfe934: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x1cfe934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cfe938: 0x8e0f0014  lw          $t7, 0x14($s0)
    ctx->pc = 0x1cfe938u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1cfe93c: 0xae2d0568  sw          $t5, 0x568($s1)
    ctx->pc = 0x1cfe93cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1384), GPR_U32(ctx, 13));
    // 0x1cfe940: 0xae2f0584  sw          $t7, 0x584($s1)
    ctx->pc = 0x1cfe940u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1412), GPR_U32(ctx, 15));
    // 0x1cfe944: 0xe6200594  swc1        $f0, 0x594($s1)
    ctx->pc = 0x1cfe944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1428), bits); }
    // 0x1cfe948: 0x8e0e0018  lw          $t6, 0x18($s0)
    ctx->pc = 0x1cfe948u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1cfe94c: 0x8c4f004c  lw          $t7, 0x4C($v0)
    ctx->pc = 0x1cfe94cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1cfe950: 0xae2e0588  sw          $t6, 0x588($s1)
    ctx->pc = 0x1cfe950u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1416), GPR_U32(ctx, 14));
    // 0x1cfe954: 0x25ef4610  addiu       $t7, $t7, 0x4610
    ctx->pc = 0x1cfe954u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 17936));
    // 0x1cfe958: 0xae2c0564  sw          $t4, 0x564($s1)
    ctx->pc = 0x1cfe958u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1380), GPR_U32(ctx, 12));
    // 0x1cfe95c: 0x8e0e001c  lw          $t6, 0x1C($s0)
    ctx->pc = 0x1cfe95cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1cfe960: 0xae2f0560  sw          $t7, 0x560($s1)
    ctx->pc = 0x1cfe960u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1376), GPR_U32(ctx, 15));
    // 0x1cfe964: 0xae2e058c  sw          $t6, 0x58C($s1)
    ctx->pc = 0x1cfe964u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1420), GPR_U32(ctx, 14));
    // 0x1cfe968: 0x8e0f0028  lw          $t7, 0x28($s0)
    ctx->pc = 0x1cfe968u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1cfe96c: 0xae2f0598  sw          $t7, 0x598($s1)
    ctx->pc = 0x1cfe96cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1432), GPR_U32(ctx, 15));
    // 0x1cfe970: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cfe970u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cfe974: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cfe974u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cfe978: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFE978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFE97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFE978u;
        // 0x1cfe97c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFE978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CFE980u;
}
