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

// Function: sub_01CDBC40
// Address: 0x1cdbc40 - 0x1cdbcd8
void sub_01CDBC40_0x1cdbc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDBC40_0x1cdbc40");
#endif

    switch (ctx->pc) {
        case 0x1cdbc64u: goto label_1cdbc64;
        default: break;
    }

    ctx->pc = 0x1cdbc40u;

    // 0x1cdbc40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cdbc40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cdbc44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cdbc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cdbc48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cdbc48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cdbc4c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cdbc4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cdbc50: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1cdbc50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdbc54: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1cdbc54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdbc58: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cdbc58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cdbc5c: 0xc736896  jal         func_1CDA258
    ctx->pc = 0x1CDBC5Cu;
    SET_GPR_U32(ctx, 31, 0x1CDBC64u);
    ctx->pc = 0x1CDBC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDBC5Cu;
    // 0x1cdbc60: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA258u, 0x1CDBC5Cu, 0x1CDBC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDBC64u;
label_1cdbc64:
    // 0x1cdbc64: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x1cdbc64u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cdbc68: 0x8c4c02b4  lw          $t4, 0x2B4($v0)
    ctx->pc = 0x1cdbc68u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 692)));
    // 0x1cdbc6c: 0xae2f05d4  sw          $t7, 0x5D4($s1)
    ctx->pc = 0x1cdbc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1492), GPR_U32(ctx, 15));
    // 0x1cdbc70: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1cdbc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdbc74: 0x8e0f0004  lw          $t7, 0x4($s0)
    ctx->pc = 0x1cdbc74u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1cdbc78: 0xe62005e0  swc1        $f0, 0x5E0($s1)
    ctx->pc = 0x1cdbc78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1504), bits); }
    // 0x1cdbc7c: 0xae2f05d8  sw          $t7, 0x5D8($s1)
    ctx->pc = 0x1cdbc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1496), GPR_U32(ctx, 15));
    // 0x1cdbc80: 0xae2205d0  sw          $v0, 0x5D0($s1)
    ctx->pc = 0x1cdbc80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1488), GPR_U32(ctx, 2));
    // 0x1cdbc84: 0x8e0f000c  lw          $t7, 0xC($s0)
    ctx->pc = 0x1cdbc84u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cdbc88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cdbc88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cdbc8c: 0xae2f05dc  sw          $t7, 0x5DC($s1)
    ctx->pc = 0x1cdbc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1500), GPR_U32(ctx, 15));
    // 0x1cdbc90: 0x8e0e0010  lw          $t6, 0x10($s0)
    ctx->pc = 0x1cdbc90u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cdbc94: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1cdbc94u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1cdbc98: 0x8e0d0020  lw          $t5, 0x20($s0)
    ctx->pc = 0x1cdbc98u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1cdbc9c: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x1cdbc9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1cdbca0: 0xae2d05f0  sw          $t5, 0x5F0($s1)
    ctx->pc = 0x1cdbca0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 13));
    // 0x1cdbca4: 0x8e0f0024  lw          $t7, 0x24($s0)
    ctx->pc = 0x1cdbca4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1cdbca8: 0x18e6021  addu        $t4, $t4, $t6
    ctx->pc = 0x1cdbca8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
    // 0x1cdbcac: 0xae2c05e4  sw          $t4, 0x5E4($s1)
    ctx->pc = 0x1cdbcacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1508), GPR_U32(ctx, 12));
    // 0x1cdbcb0: 0xae2f05f4  sw          $t7, 0x5F4($s1)
    ctx->pc = 0x1cdbcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 15));
    // 0x1cdbcb4: 0x8e0f0028  lw          $t7, 0x28($s0)
    ctx->pc = 0x1cdbcb4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1cdbcb8: 0xae2f05f8  sw          $t7, 0x5F8($s1)
    ctx->pc = 0x1cdbcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1528), GPR_U32(ctx, 15));
    // 0x1cdbcbc: 0x8e0e002c  lw          $t6, 0x2C($s0)
    ctx->pc = 0x1cdbcbcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1cdbcc0: 0xae2e05fc  sw          $t6, 0x5FC($s1)
    ctx->pc = 0x1cdbcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1532), GPR_U32(ctx, 14));
    // 0x1cdbcc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cdbcc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdbcc8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cdbcc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cdbccc: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDBCCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDBCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDBCCCu;
        // 0x1cdbcd0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDBCCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDBCD4u;
    // 0x1cdbcd4: 0x0  nop
    ctx->pc = 0x1cdbcd4u;
    // NOP
    ctx->pc = 0x1cdbcd8u;
}
