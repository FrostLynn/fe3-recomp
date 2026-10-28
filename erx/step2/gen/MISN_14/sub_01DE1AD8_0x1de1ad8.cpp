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

// Function: sub_01DE1AD8
// Address: 0x1de1ad8 - 0x1de1b30
void sub_01DE1AD8_0x1de1ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE1AD8_0x1de1ad8");
#endif

    switch (ctx->pc) {
        case 0x1de1af0u: goto label_1de1af0;
        case 0x1de1b08u: goto label_1de1b08;
        default: break;
    }

    ctx->pc = 0x1de1ad8u;

    // 0x1de1ad8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1de1ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1de1adc: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x1de1adcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x1de1ae0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1de1ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1de1ae4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1de1ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1de1ae8: 0xc778668  jal         func_1DE19A0
    ctx->pc = 0x1DE1AE8u;
    SET_GPR_U32(ctx, 31, 0x1DE1AF0u);
    ctx->pc = 0x1DE1AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE1AE8u;
    // 0x1de1aec: 0x24842180  addiu       $a0, $a0, 0x2180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE19A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE19A0u, 0x1DE1AE8u, 0x1DE1AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE1AF0u;
label_1de1af0:
    // 0x1de1af0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DE1AF0u;
    {
        const bool branch_taken_0x1de1af0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE1AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE1AF0u;
        // 0x1de1af4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de1af0) {
            ctx->pc = 0x1DE1B18u;
            goto label_1de1b18;
        }
    }
    ctx->pc = 0x1DE1AF8u;
    // 0x1de1af8: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de1af8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de1afc: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1de1afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1de1b00: 0xc77864e  jal         func_1DE1938
    ctx->pc = 0x1DE1B00u;
    SET_GPR_U32(ctx, 31, 0x1DE1B08u);
    ctx->pc = 0x1DE1B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE1B00u;
    // 0x1de1b04: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE1938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE1938u, 0x1DE1B00u, 0x1DE1B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE1B08u;
label_1de1b08:
    // 0x1de1b08: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1de1b08u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1de1b0c: 0x25ef0070  addiu       $t7, $t7, 0x70
    ctx->pc = 0x1de1b0cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 112));
    // 0x1de1b10: 0xade04598  sw          $zero, 0x4598($t7)
    ctx->pc = 0x1de1b10u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 17816), GPR_U32(ctx, 0));
    // 0x1de1b14: 0xade04590  sw          $zero, 0x4590($t7)
    ctx->pc = 0x1de1b14u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 17808), GPR_U32(ctx, 0));
label_1de1b18:
    // 0x1de1b18: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x1de1b18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1de1b1c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1de1b1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1de1b20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1de1b20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de1b24: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE1B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE1B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE1B24u;
        // 0x1de1b28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE1B24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE1B2Cu;
    // 0x1de1b2c: 0x0  nop
    ctx->pc = 0x1de1b2cu;
    // NOP
    ctx->pc = 0x1de1b30u;
}
