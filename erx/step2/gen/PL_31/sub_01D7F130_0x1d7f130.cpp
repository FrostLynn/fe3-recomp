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

// Function: sub_01D7F130
// Address: 0x1d7f130 - 0x1d7f1c8
void sub_01D7F130_0x1d7f130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D7F130_0x1d7f130");
#endif

    switch (ctx->pc) {
        case 0x1d7f154u: goto label_1d7f154;
        default: break;
    }

    ctx->pc = 0x1d7f130u;

    // 0x1d7f130: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d7f130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d7f134: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d7f134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d7f138: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d7f138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d7f13c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d7f13cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d7f140: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d7f140u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f144: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1d7f144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f148: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d7f148u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d7f14c: 0xc75f5d6  jal         func_1D7D758
    ctx->pc = 0x1D7F14Cu;
    SET_GPR_U32(ctx, 31, 0x1D7F154u);
    ctx->pc = 0x1D7F150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F14Cu;
    // 0x1d7f150: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D758u, 0x1D7F14Cu, 0x1D7F154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F154u;
label_1d7f154:
    // 0x1d7f154: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x1d7f154u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d7f158: 0x8c4c02b4  lw          $t4, 0x2B4($v0)
    ctx->pc = 0x1d7f158u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 692)));
    // 0x1d7f15c: 0xae2f05d4  sw          $t7, 0x5D4($s1)
    ctx->pc = 0x1d7f15cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1492), GPR_U32(ctx, 15));
    // 0x1d7f160: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1d7f160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7f164: 0x8e0f0004  lw          $t7, 0x4($s0)
    ctx->pc = 0x1d7f164u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d7f168: 0xe62005e0  swc1        $f0, 0x5E0($s1)
    ctx->pc = 0x1d7f168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1504), bits); }
    // 0x1d7f16c: 0xae2f05d8  sw          $t7, 0x5D8($s1)
    ctx->pc = 0x1d7f16cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1496), GPR_U32(ctx, 15));
    // 0x1d7f170: 0xae2205d0  sw          $v0, 0x5D0($s1)
    ctx->pc = 0x1d7f170u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1488), GPR_U32(ctx, 2));
    // 0x1d7f174: 0x8e0f000c  lw          $t7, 0xC($s0)
    ctx->pc = 0x1d7f174u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d7f178: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d7f178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7f17c: 0xae2f05dc  sw          $t7, 0x5DC($s1)
    ctx->pc = 0x1d7f17cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1500), GPR_U32(ctx, 15));
    // 0x1d7f180: 0x8e0e0010  lw          $t6, 0x10($s0)
    ctx->pc = 0x1d7f180u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d7f184: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1d7f184u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1d7f188: 0x8e0d0020  lw          $t5, 0x20($s0)
    ctx->pc = 0x1d7f188u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1d7f18c: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x1d7f18cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1d7f190: 0xae2d05f0  sw          $t5, 0x5F0($s1)
    ctx->pc = 0x1d7f190u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 13));
    // 0x1d7f194: 0x8e0f0024  lw          $t7, 0x24($s0)
    ctx->pc = 0x1d7f194u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1d7f198: 0x18e6021  addu        $t4, $t4, $t6
    ctx->pc = 0x1d7f198u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x1d7f19c: 0xae2c05e4  sw          $t4, 0x5E4($s1)
    ctx->pc = 0x1d7f19cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1508), GPR_U32(ctx, 12));
    // 0x1d7f1a0: 0xae2f05f4  sw          $t7, 0x5F4($s1)
    ctx->pc = 0x1d7f1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 15));
    // 0x1d7f1a4: 0x8e0f0028  lw          $t7, 0x28($s0)
    ctx->pc = 0x1d7f1a4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1d7f1a8: 0xae2f05f8  sw          $t7, 0x5F8($s1)
    ctx->pc = 0x1d7f1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1528), GPR_U32(ctx, 15));
    // 0x1d7f1ac: 0x8e0e002c  lw          $t6, 0x2C($s0)
    ctx->pc = 0x1d7f1acu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1d7f1b0: 0xae2e05fc  sw          $t6, 0x5FC($s1)
    ctx->pc = 0x1d7f1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1532), GPR_U32(ctx, 14));
    // 0x1d7f1b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d7f1b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7f1b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d7f1b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d7f1bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7F1BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7F1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F1BCu;
        // 0x1d7f1c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7F1BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7F1C4u;
    // 0x1d7f1c4: 0x0  nop
    ctx->pc = 0x1d7f1c4u;
    // NOP
    ctx->pc = 0x1d7f1c8u;
}
