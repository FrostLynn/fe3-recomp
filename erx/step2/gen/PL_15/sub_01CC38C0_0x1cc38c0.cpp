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

// Function: sub_01CC38C0
// Address: 0x1cc38c0 - 0x1cc3980
void sub_01CC38C0_0x1cc38c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC38C0_0x1cc38c0");
#endif

    switch (ctx->pc) {
        case 0x1cc38e4u: goto label_1cc38e4;
        default: break;
    }

    ctx->pc = 0x1cc38c0u;

    // 0x1cc38c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cc38c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cc38c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cc38c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cc38c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cc38c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cc38cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cc38ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cc38d0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1cc38d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc38d4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1cc38d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc38d8: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cc38d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cc38dc: 0xc730918  jal         func_1CC2460
    ctx->pc = 0x1CC38DCu;
    SET_GPR_U32(ctx, 31, 0x1CC38E4u);
    ctx->pc = 0x1CC38E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC38DCu;
    // 0x1cc38e0: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2460u, 0x1CC38DCu, 0x1CC38E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC38E4u;
label_1cc38e4:
    // 0x1cc38e4: 0x8e0e0000  lw          $t6, 0x0($s0)
    ctx->pc = 0x1cc38e4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cc38e8: 0x240f0060  addiu       $t7, $zero, 0x60
    ctx->pc = 0x1cc38e8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1cc38ec: 0x8e0c0004  lw          $t4, 0x4($s0)
    ctx->pc = 0x1cc38ecu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1cc38f0: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x1cc38f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1cc38f4: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x1cc38f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1cc38f8: 0x8e0d000c  lw          $t5, 0xC($s0)
    ctx->pc = 0x1cc38f8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cc38fc: 0x8c4b00b0  lw          $t3, 0xB0($v0)
    ctx->pc = 0x1cc38fcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x1cc3900: 0xae2d0400  sw          $t5, 0x400($s1)
    ctx->pc = 0x1cc3900u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1024), GPR_U32(ctx, 13));
    // 0x1cc3904: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1cc3904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc3908: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1cc3908u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1cc390c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cc390cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc3910: 0x18f6018  mult        $t4, $t4, $t7
    ctx->pc = 0x1cc3910u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x1cc3914: 0xe62003fc  swc1        $f0, 0x3FC($s1)
    ctx->pc = 0x1cc3914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1020), bits); }
    // 0x1cc3918: 0x16e5821  addu        $t3, $t3, $t6
    ctx->pc = 0x1cc3918u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 14)));
    // 0x1cc391c: 0x8d6d0010  lw          $t5, 0x10($t3)
    ctx->pc = 0x1cc391cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x1cc3920: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x1cc3920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc3924: 0x8e0f0018  lw          $t7, 0x18($s0)
    ctx->pc = 0x1cc3924u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1cc3928: 0x1ac6821  addu        $t5, $t5, $t4
    ctx->pc = 0x1cc3928u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x1cc392c: 0x8e0c0010  lw          $t4, 0x10($s0)
    ctx->pc = 0x1cc392cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cc3930: 0xae2f040c  sw          $t7, 0x40C($s1)
    ctx->pc = 0x1cc3930u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1036), GPR_U32(ctx, 15));
    // 0x1cc3934: 0xae2d03f8  sw          $t5, 0x3F8($s1)
    ctx->pc = 0x1cc3934u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1016), GPR_U32(ctx, 13));
    // 0x1cc3938: 0x8e0e0020  lw          $t6, 0x20($s0)
    ctx->pc = 0x1cc3938u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1cc393c: 0x8c4f004c  lw          $t7, 0x4C($v0)
    ctx->pc = 0x1cc393cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1cc3940: 0xae2e0410  sw          $t6, 0x410($s1)
    ctx->pc = 0x1cc3940u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1040), GPR_U32(ctx, 14));
    // 0x1cc3944: 0x25ef4610  addiu       $t7, $t7, 0x4610
    ctx->pc = 0x1cc3944u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 17936));
    // 0x1cc3948: 0xae2c0404  sw          $t4, 0x404($s1)
    ctx->pc = 0x1cc3948u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1028), GPR_U32(ctx, 12));
    // 0x1cc394c: 0x8e0e0024  lw          $t6, 0x24($s0)
    ctx->pc = 0x1cc394cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1cc3950: 0xae2f03f0  sw          $t7, 0x3F0($s1)
    ctx->pc = 0x1cc3950u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1008), GPR_U32(ctx, 15));
    // 0x1cc3954: 0xae2e0414  sw          $t6, 0x414($s1)
    ctx->pc = 0x1cc3954u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1044), GPR_U32(ctx, 14));
    // 0x1cc3958: 0xe6200408  swc1        $f0, 0x408($s1)
    ctx->pc = 0x1cc3958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1032), bits); }
    // 0x1cc395c: 0x8e0e0028  lw          $t6, 0x28($s0)
    ctx->pc = 0x1cc395cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1cc3960: 0xae2b03f4  sw          $t3, 0x3F4($s1)
    ctx->pc = 0x1cc3960u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1012), GPR_U32(ctx, 11));
    // 0x1cc3964: 0xae2e0418  sw          $t6, 0x418($s1)
    ctx->pc = 0x1cc3964u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1048), GPR_U32(ctx, 14));
    // 0x1cc3968: 0x8e0f002c  lw          $t7, 0x2C($s0)
    ctx->pc = 0x1cc3968u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1cc396c: 0xae2f041c  sw          $t7, 0x41C($s1)
    ctx->pc = 0x1cc396cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1052), GPR_U32(ctx, 15));
    // 0x1cc3970: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cc3970u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc3974: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cc3974u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cc3978: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC3978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC397Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC3978u;
        // 0x1cc397c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC3978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC3980u;
}
