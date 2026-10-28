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

// Function: sub_01D0D1D0
// Address: 0x1d0d1d0 - 0x1d0d290
void sub_01D0D1D0_0x1d0d1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0D1D0_0x1d0d1d0");
#endif

    switch (ctx->pc) {
        case 0x1d0d1f4u: goto label_1d0d1f4;
        default: break;
    }

    ctx->pc = 0x1d0d1d0u;

    // 0x1d0d1d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d0d1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d0d1d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d0d1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d0d1d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d0d1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d0d1dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d0d1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d0d1e0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d0d1e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0d1e4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1d0d1e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0d1e8: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d0d1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d0d1ec: 0xc742f56  jal         func_1D0BD58
    ctx->pc = 0x1D0D1ECu;
    SET_GPR_U32(ctx, 31, 0x1D0D1F4u);
    ctx->pc = 0x1D0D1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0D1ECu;
    // 0x1d0d1f0: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD58u, 0x1D0D1ECu, 0x1D0D1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0D1F4u;
label_1d0d1f4:
    // 0x1d0d1f4: 0x8e0e0000  lw          $t6, 0x0($s0)
    ctx->pc = 0x1d0d1f4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d0d1f8: 0x240f0060  addiu       $t7, $zero, 0x60
    ctx->pc = 0x1d0d1f8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1d0d1fc: 0x8e0c0004  lw          $t4, 0x4($s0)
    ctx->pc = 0x1d0d1fcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d0d200: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x1d0d200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1d0d204: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x1d0d204u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1d0d208: 0x8e0d000c  lw          $t5, 0xC($s0)
    ctx->pc = 0x1d0d208u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d0d20c: 0x8c4b00b0  lw          $t3, 0xB0($v0)
    ctx->pc = 0x1d0d20cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x1d0d210: 0xae2d0400  sw          $t5, 0x400($s1)
    ctx->pc = 0x1d0d210u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1024), GPR_U32(ctx, 13));
    // 0x1d0d214: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1d0d214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0d218: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1d0d218u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1d0d21c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d0d21cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0d220: 0x18f6018  mult        $t4, $t4, $t7
    ctx->pc = 0x1d0d220u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x1d0d224: 0xe62003fc  swc1        $f0, 0x3FC($s1)
    ctx->pc = 0x1d0d224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1020), bits); }
    // 0x1d0d228: 0x16e5821  addu        $t3, $t3, $t6
    ctx->pc = 0x1d0d228u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 14)));
    // 0x1d0d22c: 0x8d6d0010  lw          $t5, 0x10($t3)
    ctx->pc = 0x1d0d22cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x1d0d230: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x1d0d230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0d234: 0x8e0f0018  lw          $t7, 0x18($s0)
    ctx->pc = 0x1d0d234u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1d0d238: 0x1ac6821  addu        $t5, $t5, $t4
    ctx->pc = 0x1d0d238u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x1d0d23c: 0x8e0c0010  lw          $t4, 0x10($s0)
    ctx->pc = 0x1d0d23cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d0d240: 0xae2f040c  sw          $t7, 0x40C($s1)
    ctx->pc = 0x1d0d240u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1036), GPR_U32(ctx, 15));
    // 0x1d0d244: 0xae2d03f8  sw          $t5, 0x3F8($s1)
    ctx->pc = 0x1d0d244u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1016), GPR_U32(ctx, 13));
    // 0x1d0d248: 0x8e0e0020  lw          $t6, 0x20($s0)
    ctx->pc = 0x1d0d248u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1d0d24c: 0x8c4f004c  lw          $t7, 0x4C($v0)
    ctx->pc = 0x1d0d24cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1d0d250: 0xae2e0410  sw          $t6, 0x410($s1)
    ctx->pc = 0x1d0d250u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1040), GPR_U32(ctx, 14));
    // 0x1d0d254: 0x25ef4610  addiu       $t7, $t7, 0x4610
    ctx->pc = 0x1d0d254u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 17936));
    // 0x1d0d258: 0xae2c0404  sw          $t4, 0x404($s1)
    ctx->pc = 0x1d0d258u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1028), GPR_U32(ctx, 12));
    // 0x1d0d25c: 0x8e0e0024  lw          $t6, 0x24($s0)
    ctx->pc = 0x1d0d25cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1d0d260: 0xae2f03f0  sw          $t7, 0x3F0($s1)
    ctx->pc = 0x1d0d260u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1008), GPR_U32(ctx, 15));
    // 0x1d0d264: 0xae2e0414  sw          $t6, 0x414($s1)
    ctx->pc = 0x1d0d264u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1044), GPR_U32(ctx, 14));
    // 0x1d0d268: 0xe6200408  swc1        $f0, 0x408($s1)
    ctx->pc = 0x1d0d268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1032), bits); }
    // 0x1d0d26c: 0x8e0e0028  lw          $t6, 0x28($s0)
    ctx->pc = 0x1d0d26cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1d0d270: 0xae2b03f4  sw          $t3, 0x3F4($s1)
    ctx->pc = 0x1d0d270u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1012), GPR_U32(ctx, 11));
    // 0x1d0d274: 0xae2e0418  sw          $t6, 0x418($s1)
    ctx->pc = 0x1d0d274u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1048), GPR_U32(ctx, 14));
    // 0x1d0d278: 0x8e0f002c  lw          $t7, 0x2C($s0)
    ctx->pc = 0x1d0d278u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1d0d27c: 0xae2f041c  sw          $t7, 0x41C($s1)
    ctx->pc = 0x1d0d27cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1052), GPR_U32(ctx, 15));
    // 0x1d0d280: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d0d280u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0d284: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d0d284u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d0d288: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0D288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0D28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0D288u;
        // 0x1d0d28c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0D288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0D290u;
}
