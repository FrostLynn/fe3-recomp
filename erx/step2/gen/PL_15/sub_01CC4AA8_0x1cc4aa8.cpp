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

// Function: sub_01CC4AA8
// Address: 0x1cc4aa8 - 0x1cc4b38
void sub_01CC4AA8_0x1cc4aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC4AA8_0x1cc4aa8");
#endif

    switch (ctx->pc) {
        case 0x1cc4abcu: goto label_1cc4abc;
        case 0x1cc4ad0u: goto label_1cc4ad0;
        case 0x1cc4ad4u: goto label_1cc4ad4;
        case 0x1cc4b1cu: goto label_1cc4b1c;
        default: break;
    }

    ctx->pc = 0x1cc4aa8u;

    // 0x1cc4aa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cc4aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cc4aac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cc4aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cc4ab0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cc4ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cc4ab4: 0xc730914  jal         func_1CC2450
    ctx->pc = 0x1CC4AB4u;
    SET_GPR_U32(ctx, 31, 0x1CC4ABCu);
    ctx->pc = 0x1CC4AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC4AB4u;
    // 0x1cc4ab8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2450u, 0x1CC4AB4u, 0x1CC4ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC4ABCu;
label_1cc4abc:
    // 0x1cc4abc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cc4abcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc4ac0: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CC4AC0u;
    {
        const bool branch_taken_0x1cc4ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CC4AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC4AC0u;
        // 0x1cc4ac4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc4ac0) {
            ctx->pc = 0x1CC4AE4u;
            goto label_1cc4ae4;
        }
    }
    ctx->pc = 0x1CC4AC8u;
    // 0x1cc4ac8: 0xc730916  jal         func_1CC2458
    ctx->pc = 0x1CC4AC8u;
    SET_GPR_U32(ctx, 31, 0x1CC4AD0u);
    ctx->pc = 0x1CC2458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2458u, 0x1CC4AC8u, 0x1CC4AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC4AD0u;
label_1cc4ad0:
    // 0x1cc4ad0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1cc4ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1cc4ad4:
    // 0x1cc4ad4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cc4ad4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc4ad8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cc4ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cc4adc: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC4ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC4AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC4ADCu;
        // 0x1cc4ae0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC4ADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC4AE4u;
label_1cc4ae4:
    // 0x1cc4ae4: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1CC4AE4u;
    {
        const bool branch_taken_0x1cc4ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC4AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC4AE4u;
        // 0x1cc4ae8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc4ae4) {
            ctx->pc = 0x1CC4AD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc4ad4;
        }
    }
    ctx->pc = 0x1CC4AECu;
    // 0x1cc4aec: 0x0  nop
    ctx->pc = 0x1cc4aecu;
    // NOP
    // 0x1cc4af0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cc4af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cc4af4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cc4af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc4af8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cc4af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cc4afc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1cc4afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cc4b00: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cc4b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cc4b04: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cc4b04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc4b08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cc4b08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc4b0c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cc4b0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc4b10: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cc4b10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc4b14: 0xc730924  jal         func_1CC2490
    ctx->pc = 0x1CC4B14u;
    SET_GPR_U32(ctx, 31, 0x1CC4B1Cu);
    ctx->pc = 0x1CC4B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC4B14u;
    // 0x1cc4b18: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2490u, 0x1CC4B14u, 0x1CC4B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC4B1Cu;
label_1cc4b1c:
    // 0x1cc4b1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cc4b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc4b20: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cc4b20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cc4b24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cc4b24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc4b28: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1cc4b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cc4b2c: 0x873091c  j           func_1CC2470
    ctx->pc = 0x1CC4B2Cu;
    ctx->pc = 0x1CC4B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC4B2Cu;
    // 0x1cc4b30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2470u;
    sub_01CC2470_0x1cc2470(rdram, ctx, runtime); return;
    ctx->pc = 0x1CC4B34u;
    // 0x1cc4b34: 0x0  nop
    ctx->pc = 0x1cc4b34u;
    // NOP
    ctx->pc = 0x1cc4b38u;
}
