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

// Function: sub_01C6B488
// Address: 0x1c6b488 - 0x1c6b548
void sub_01C6B488_0x1c6b488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C6B488_0x1c6b488");
#endif

    switch (ctx->pc) {
        case 0x1c6b4acu: goto label_1c6b4ac;
        default: break;
    }

    ctx->pc = 0x1c6b488u;

    // 0x1c6b488: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c6b488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c6b48c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c6b48cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c6b490: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c6b490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c6b494: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c6b494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c6b498: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c6b498u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b49c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1c6b49cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b4a0: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c6b4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c6b4a4: 0xc71a798  jal         func_1C69E60
    ctx->pc = 0x1C6B4A4u;
    SET_GPR_U32(ctx, 31, 0x1C6B4ACu);
    ctx->pc = 0x1C6B4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6B4A4u;
    // 0x1c6b4a8: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E60u, 0x1C6B4A4u, 0x1C6B4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B4ACu;
label_1c6b4ac:
    // 0x1c6b4ac: 0x8e0e0000  lw          $t6, 0x0($s0)
    ctx->pc = 0x1c6b4acu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c6b4b0: 0x240f0060  addiu       $t7, $zero, 0x60
    ctx->pc = 0x1c6b4b0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1c6b4b4: 0x8e0b0004  lw          $t3, 0x4($s0)
    ctx->pc = 0x1c6b4b4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c6b4b8: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x1c6b4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1c6b4bc: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x1c6b4bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1c6b4c0: 0x8e0d000c  lw          $t5, 0xC($s0)
    ctx->pc = 0x1c6b4c0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c6b4c4: 0x8c4c00b0  lw          $t4, 0xB0($v0)
    ctx->pc = 0x1c6b4c4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x1c6b4c8: 0xae2d0570  sw          $t5, 0x570($s1)
    ctx->pc = 0x1c6b4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1392), GPR_U32(ctx, 13));
    // 0x1c6b4cc: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1c6b4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6b4d0: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1c6b4d0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c6b4d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c6b4d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6b4d8: 0x16f5818  mult        $t3, $t3, $t7
    ctx->pc = 0x1c6b4d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x1c6b4dc: 0xe620056c  swc1        $f0, 0x56C($s1)
    ctx->pc = 0x1c6b4dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1388), bits); }
    // 0x1c6b4e0: 0x18e6021  addu        $t4, $t4, $t6
    ctx->pc = 0x1c6b4e0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x1c6b4e4: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1c6b4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6b4e8: 0x8d8d0010  lw          $t5, 0x10($t4)
    ctx->pc = 0x1c6b4e8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x1c6b4ec: 0x8e0f0010  lw          $t7, 0x10($s0)
    ctx->pc = 0x1c6b4ecu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c6b4f0: 0xe6200590  swc1        $f0, 0x590($s1)
    ctx->pc = 0x1c6b4f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1424), bits); }
    // 0x1c6b4f4: 0x1ab6821  addu        $t5, $t5, $t3
    ctx->pc = 0x1c6b4f4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x1c6b4f8: 0xae2f0580  sw          $t7, 0x580($s1)
    ctx->pc = 0x1c6b4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1408), GPR_U32(ctx, 15));
    // 0x1c6b4fc: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x1c6b4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6b500: 0x8e0f0014  lw          $t7, 0x14($s0)
    ctx->pc = 0x1c6b500u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1c6b504: 0xae2d0568  sw          $t5, 0x568($s1)
    ctx->pc = 0x1c6b504u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1384), GPR_U32(ctx, 13));
    // 0x1c6b508: 0xae2f0584  sw          $t7, 0x584($s1)
    ctx->pc = 0x1c6b508u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1412), GPR_U32(ctx, 15));
    // 0x1c6b50c: 0xe6200594  swc1        $f0, 0x594($s1)
    ctx->pc = 0x1c6b50cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1428), bits); }
    // 0x1c6b510: 0x8e0e0018  lw          $t6, 0x18($s0)
    ctx->pc = 0x1c6b510u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1c6b514: 0x8c4f004c  lw          $t7, 0x4C($v0)
    ctx->pc = 0x1c6b514u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1c6b518: 0xae2e0588  sw          $t6, 0x588($s1)
    ctx->pc = 0x1c6b518u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1416), GPR_U32(ctx, 14));
    // 0x1c6b51c: 0x25ef4610  addiu       $t7, $t7, 0x4610
    ctx->pc = 0x1c6b51cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 17936));
    // 0x1c6b520: 0xae2c0564  sw          $t4, 0x564($s1)
    ctx->pc = 0x1c6b520u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1380), GPR_U32(ctx, 12));
    // 0x1c6b524: 0x8e0e001c  lw          $t6, 0x1C($s0)
    ctx->pc = 0x1c6b524u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1c6b528: 0xae2f0560  sw          $t7, 0x560($s1)
    ctx->pc = 0x1c6b528u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1376), GPR_U32(ctx, 15));
    // 0x1c6b52c: 0xae2e058c  sw          $t6, 0x58C($s1)
    ctx->pc = 0x1c6b52cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1420), GPR_U32(ctx, 14));
    // 0x1c6b530: 0x8e0f0028  lw          $t7, 0x28($s0)
    ctx->pc = 0x1c6b530u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1c6b534: 0xae2f0598  sw          $t7, 0x598($s1)
    ctx->pc = 0x1c6b534u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1432), GPR_U32(ctx, 15));
    // 0x1c6b538: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c6b538u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6b53c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c6b53cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c6b540: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6B540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6B544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B540u;
        // 0x1c6b544: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6B540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6B548u;
}
