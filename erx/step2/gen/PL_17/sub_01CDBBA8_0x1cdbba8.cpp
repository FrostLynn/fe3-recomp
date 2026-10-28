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

// Function: sub_01CDBBA8
// Address: 0x1cdbba8 - 0x1cdbc40
void sub_01CDBBA8_0x1cdbba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDBBA8_0x1cdbba8");
#endif

    switch (ctx->pc) {
        case 0x1cdbbccu: goto label_1cdbbcc;
        default: break;
    }

    ctx->pc = 0x1cdbba8u;

    // 0x1cdbba8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cdbba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cdbbac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cdbbacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cdbbb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cdbbb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cdbbb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cdbbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cdbbb8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1cdbbb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdbbbc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1cdbbbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdbbc0: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cdbbc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cdbbc4: 0xc736896  jal         func_1CDA258
    ctx->pc = 0x1CDBBC4u;
    SET_GPR_U32(ctx, 31, 0x1CDBBCCu);
    ctx->pc = 0x1CDBBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDBBC4u;
    // 0x1cdbbc8: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA258u, 0x1CDBBC4u, 0x1CDBBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDBBCCu;
label_1cdbbcc:
    // 0x1cdbbcc: 0x8e0c0000  lw          $t4, 0x0($s0)
    ctx->pc = 0x1cdbbccu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cdbbd0: 0x240f0390  addiu       $t7, $zero, 0x390
    ctx->pc = 0x1cdbbd0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1cdbbd4: 0x8e0b0004  lw          $t3, 0x4($s0)
    ctx->pc = 0x1cdbbd4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1cdbbd8: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x1cdbbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1cdbbdc: 0x18f6018  mult        $t4, $t4, $t7
    ctx->pc = 0x1cdbbdcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x1cdbbe0: 0x8e0e0010  lw          $t6, 0x10($s0)
    ctx->pc = 0x1cdbbe0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cdbbe4: 0x8c4a004c  lw          $t2, 0x4C($v0)
    ctx->pc = 0x1cdbbe4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1cdbbe8: 0xae2e05b0  sw          $t6, 0x5B0($s1)
    ctx->pc = 0x1cdbbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1456), GPR_U32(ctx, 14));
    // 0x1cdbbec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cdbbecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cdbbf0: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1cdbbf0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1cdbbf4: 0x8e0d0014  lw          $t5, 0x14($s0)
    ctx->pc = 0x1cdbbf4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1cdbbf8: 0x16f5818  mult        $t3, $t3, $t7
    ctx->pc = 0x1cdbbf8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x1cdbbfc: 0x8d4e0084  lw          $t6, 0x84($t2)
    ctx->pc = 0x1cdbbfcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 132)));
    // 0x1cdbc00: 0xae2d05b4  sw          $t5, 0x5B4($s1)
    ctx->pc = 0x1cdbc00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1460), GPR_U32(ctx, 13));
    // 0x1cdbc04: 0x1cc7021  addu        $t6, $t6, $t4
    ctx->pc = 0x1cdbc04u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
    // 0x1cdbc08: 0x8e0d0018  lw          $t5, 0x18($s0)
    ctx->pc = 0x1cdbc08u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1cdbc0c: 0x25ce00e0  addiu       $t6, $t6, 0xE0
    ctx->pc = 0x1cdbc0cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 224));
    // 0x1cdbc10: 0x8c4f00b4  lw          $t7, 0xB4($v0)
    ctx->pc = 0x1cdbc10u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x1cdbc14: 0xae2d05b8  sw          $t5, 0x5B8($s1)
    ctx->pc = 0x1cdbc14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1464), GPR_U32(ctx, 13));
    // 0x1cdbc18: 0x1eb7821  addu        $t7, $t7, $t3
    ctx->pc = 0x1cdbc18u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 11)));
    // 0x1cdbc1c: 0xae2e05a0  sw          $t6, 0x5A0($s1)
    ctx->pc = 0x1cdbc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1440), GPR_U32(ctx, 14));
    // 0x1cdbc20: 0xae2f05a4  sw          $t7, 0x5A4($s1)
    ctx->pc = 0x1cdbc20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1444), GPR_U32(ctx, 15));
    // 0x1cdbc24: 0x8e0f001c  lw          $t7, 0x1C($s0)
    ctx->pc = 0x1cdbc24u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1cdbc28: 0xae2f05bc  sw          $t7, 0x5BC($s1)
    ctx->pc = 0x1cdbc28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1468), GPR_U32(ctx, 15));
    // 0x1cdbc2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cdbc2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdbc30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cdbc30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cdbc34: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDBC34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDBC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDBC34u;
        // 0x1cdbc38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDBC34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDBC3Cu;
    // 0x1cdbc3c: 0x0  nop
    ctx->pc = 0x1cdbc3cu;
    // NOP
    ctx->pc = 0x1cdbc40u;
}
