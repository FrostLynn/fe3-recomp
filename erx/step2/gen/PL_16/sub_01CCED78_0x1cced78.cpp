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

// Function: sub_01CCED78
// Address: 0x1cced78 - 0x1ccee10
void sub_01CCED78_0x1cced78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCED78_0x1cced78");
#endif

    switch (ctx->pc) {
        case 0x1cced9cu: goto label_1cced9c;
        default: break;
    }

    ctx->pc = 0x1cced78u;

    // 0x1cced78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cced78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cced7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cced7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cced80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cced80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cced84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cced84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cced88: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1cced88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cced8c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1cced8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cced90: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cced90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cced94: 0xc733516  jal         func_1CCD458
    ctx->pc = 0x1CCED94u;
    SET_GPR_U32(ctx, 31, 0x1CCED9Cu);
    ctx->pc = 0x1CCED98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCED94u;
    // 0x1cced98: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD458u, 0x1CCED94u, 0x1CCED9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCED9Cu;
label_1cced9c:
    // 0x1cced9c: 0x8e0c0000  lw          $t4, 0x0($s0)
    ctx->pc = 0x1cced9cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cceda0: 0x240f0390  addiu       $t7, $zero, 0x390
    ctx->pc = 0x1cceda0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1cceda4: 0x8e0b0004  lw          $t3, 0x4($s0)
    ctx->pc = 0x1cceda4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1cceda8: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x1cceda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1ccedac: 0x18f6018  mult        $t4, $t4, $t7
    ctx->pc = 0x1ccedacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x1ccedb0: 0x8e0e0010  lw          $t6, 0x10($s0)
    ctx->pc = 0x1ccedb0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1ccedb4: 0x8c4a004c  lw          $t2, 0x4C($v0)
    ctx->pc = 0x1ccedb4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1ccedb8: 0xae2e05b0  sw          $t6, 0x5B0($s1)
    ctx->pc = 0x1ccedb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1456), GPR_U32(ctx, 14));
    // 0x1ccedbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ccedbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ccedc0: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1ccedc0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1ccedc4: 0x8e0d0014  lw          $t5, 0x14($s0)
    ctx->pc = 0x1ccedc4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1ccedc8: 0x16f5818  mult        $t3, $t3, $t7
    ctx->pc = 0x1ccedc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x1ccedcc: 0x8d4e0084  lw          $t6, 0x84($t2)
    ctx->pc = 0x1ccedccu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 132)));
    // 0x1ccedd0: 0xae2d05b4  sw          $t5, 0x5B4($s1)
    ctx->pc = 0x1ccedd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1460), GPR_U32(ctx, 13));
    // 0x1ccedd4: 0x1cc7021  addu        $t6, $t6, $t4
    ctx->pc = 0x1ccedd4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
    // 0x1ccedd8: 0x8e0d0018  lw          $t5, 0x18($s0)
    ctx->pc = 0x1ccedd8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1cceddc: 0x25ce00e0  addiu       $t6, $t6, 0xE0
    ctx->pc = 0x1cceddcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 224));
    // 0x1ccede0: 0x8c4f00b4  lw          $t7, 0xB4($v0)
    ctx->pc = 0x1ccede0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x1ccede4: 0xae2d05b8  sw          $t5, 0x5B8($s1)
    ctx->pc = 0x1ccede4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1464), GPR_U32(ctx, 13));
    // 0x1ccede8: 0x1eb7821  addu        $t7, $t7, $t3
    ctx->pc = 0x1ccede8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 11)));
    // 0x1ccedec: 0xae2e05a0  sw          $t6, 0x5A0($s1)
    ctx->pc = 0x1ccedecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1440), GPR_U32(ctx, 14));
    // 0x1ccedf0: 0xae2f05a4  sw          $t7, 0x5A4($s1)
    ctx->pc = 0x1ccedf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1444), GPR_U32(ctx, 15));
    // 0x1ccedf4: 0x8e0f001c  lw          $t7, 0x1C($s0)
    ctx->pc = 0x1ccedf4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1ccedf8: 0xae2f05bc  sw          $t7, 0x5BC($s1)
    ctx->pc = 0x1ccedf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1468), GPR_U32(ctx, 15));
    // 0x1ccedfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ccedfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ccee00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ccee00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ccee04: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCEE04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCEE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCEE04u;
        // 0x1ccee08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCEE04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCEE0Cu;
    // 0x1ccee0c: 0x0  nop
    ctx->pc = 0x1ccee0cu;
    // NOP
    ctx->pc = 0x1ccee10u;
}
