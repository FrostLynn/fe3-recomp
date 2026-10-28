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

// Function: sub_01C30BC0
// Address: 0x1c30bc0 - 0x1c30c80
void sub_01C30BC0_0x1c30bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C30BC0_0x1c30bc0");
#endif

    switch (ctx->pc) {
        case 0x1c30be4u: goto label_1c30be4;
        default: break;
    }

    ctx->pc = 0x1c30bc0u;

    // 0x1c30bc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c30bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c30bc4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c30bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c30bc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c30bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c30bcc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c30bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c30bd0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c30bd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c30bd4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1c30bd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c30bd8: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c30bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c30bdc: 0xc70bdd6  jal         func_1C2F758
    ctx->pc = 0x1C30BDCu;
    SET_GPR_U32(ctx, 31, 0x1C30BE4u);
    ctx->pc = 0x1C30BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C30BDCu;
    // 0x1c30be0: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F758u, 0x1C30BDCu, 0x1C30BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C30BE4u;
label_1c30be4:
    // 0x1c30be4: 0x8e0e0000  lw          $t6, 0x0($s0)
    ctx->pc = 0x1c30be4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c30be8: 0x240f0060  addiu       $t7, $zero, 0x60
    ctx->pc = 0x1c30be8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1c30bec: 0x8e0c0004  lw          $t4, 0x4($s0)
    ctx->pc = 0x1c30becu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c30bf0: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x1c30bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1c30bf4: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x1c30bf4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1c30bf8: 0x8e0d000c  lw          $t5, 0xC($s0)
    ctx->pc = 0x1c30bf8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c30bfc: 0x8c4b00b0  lw          $t3, 0xB0($v0)
    ctx->pc = 0x1c30bfcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x1c30c00: 0xae2d0400  sw          $t5, 0x400($s1)
    ctx->pc = 0x1c30c00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1024), GPR_U32(ctx, 13));
    // 0x1c30c04: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1c30c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c30c08: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1c30c08u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c30c0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c30c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c30c10: 0x18f6018  mult        $t4, $t4, $t7
    ctx->pc = 0x1c30c10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x1c30c14: 0xe62003fc  swc1        $f0, 0x3FC($s1)
    ctx->pc = 0x1c30c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1020), bits); }
    // 0x1c30c18: 0x16e5821  addu        $t3, $t3, $t6
    ctx->pc = 0x1c30c18u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 14)));
    // 0x1c30c1c: 0x8d6d0010  lw          $t5, 0x10($t3)
    ctx->pc = 0x1c30c1cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x1c30c20: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x1c30c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c30c24: 0x8e0f0018  lw          $t7, 0x18($s0)
    ctx->pc = 0x1c30c24u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1c30c28: 0x1ac6821  addu        $t5, $t5, $t4
    ctx->pc = 0x1c30c28u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x1c30c2c: 0x8e0c0010  lw          $t4, 0x10($s0)
    ctx->pc = 0x1c30c2cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c30c30: 0xae2f040c  sw          $t7, 0x40C($s1)
    ctx->pc = 0x1c30c30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1036), GPR_U32(ctx, 15));
    // 0x1c30c34: 0xae2d03f8  sw          $t5, 0x3F8($s1)
    ctx->pc = 0x1c30c34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1016), GPR_U32(ctx, 13));
    // 0x1c30c38: 0x8e0e0020  lw          $t6, 0x20($s0)
    ctx->pc = 0x1c30c38u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1c30c3c: 0x8c4f004c  lw          $t7, 0x4C($v0)
    ctx->pc = 0x1c30c3cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1c30c40: 0xae2e0410  sw          $t6, 0x410($s1)
    ctx->pc = 0x1c30c40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1040), GPR_U32(ctx, 14));
    // 0x1c30c44: 0x25ef4610  addiu       $t7, $t7, 0x4610
    ctx->pc = 0x1c30c44u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 17936));
    // 0x1c30c48: 0xae2c0404  sw          $t4, 0x404($s1)
    ctx->pc = 0x1c30c48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1028), GPR_U32(ctx, 12));
    // 0x1c30c4c: 0x8e0e0024  lw          $t6, 0x24($s0)
    ctx->pc = 0x1c30c4cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c30c50: 0xae2f03f0  sw          $t7, 0x3F0($s1)
    ctx->pc = 0x1c30c50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1008), GPR_U32(ctx, 15));
    // 0x1c30c54: 0xae2e0414  sw          $t6, 0x414($s1)
    ctx->pc = 0x1c30c54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1044), GPR_U32(ctx, 14));
    // 0x1c30c58: 0xe6200408  swc1        $f0, 0x408($s1)
    ctx->pc = 0x1c30c58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1032), bits); }
    // 0x1c30c5c: 0x8e0e0028  lw          $t6, 0x28($s0)
    ctx->pc = 0x1c30c5cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1c30c60: 0xae2b03f4  sw          $t3, 0x3F4($s1)
    ctx->pc = 0x1c30c60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1012), GPR_U32(ctx, 11));
    // 0x1c30c64: 0xae2e0418  sw          $t6, 0x418($s1)
    ctx->pc = 0x1c30c64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1048), GPR_U32(ctx, 14));
    // 0x1c30c68: 0x8e0f002c  lw          $t7, 0x2C($s0)
    ctx->pc = 0x1c30c68u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1c30c6c: 0xae2f041c  sw          $t7, 0x41C($s1)
    ctx->pc = 0x1c30c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1052), GPR_U32(ctx, 15));
    // 0x1c30c70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c30c70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c30c74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c30c74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c30c78: 0x3e00008  jr          $ra
    ctx->pc = 0x1C30C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C30C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C30C78u;
        // 0x1c30c7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C30C78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C30C80u;
}
