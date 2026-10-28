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

// Function: sub_01C01E00
// Address: 0x1c01e00 - 0x1c01e80
void sub_01C01E00_0x1c01e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C01E00_0x1c01e00");
#endif

    switch (ctx->pc) {
        case 0x1c01e10u: goto label_1c01e10;
        case 0x1c01e24u: goto label_1c01e24;
        case 0x1c01e34u: goto label_1c01e34;
        case 0x1c01e44u: goto label_1c01e44;
        case 0x1c01e54u: goto label_1c01e54;
        default: break;
    }

    ctx->pc = 0x1c01e00u;

    // 0x1c01e00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c01e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c01e04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c01e04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c01e08: 0x2406004e  addiu       $a2, $zero, 0x4E
    ctx->pc = 0x1c01e08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1c01e0c: 0x0  nop
    ctx->pc = 0x1c01e0cu;
    // NOP
label_1c01e10:
    // 0x1c01e10: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c01e10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c01e14: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c01e14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c01e18: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c01e18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c01e1c: 0x1000ffee  b           . + 4 + (-0x12 << 2)
    ctx->pc = 0x1C01E1Cu;
    {
        const bool branch_taken_0x1c01e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C01E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01E1Cu;
        // 0x1c01e20: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c01e1c) {
            ctx->pc = 0x1C01DD8u;
            return;
        }
    }
    ctx->pc = 0x1C01E24u;
label_1c01e24:
    // 0x1c01e24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c01e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c01e28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c01e28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c01e2c: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x1C01E2Cu;
    {
        const bool branch_taken_0x1c01e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C01E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01E2Cu;
        // 0x1c01e30: 0x24060052  addiu       $a2, $zero, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c01e2c) {
            ctx->pc = 0x1C01E10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c01e10;
        }
    }
    ctx->pc = 0x1C01E34u;
label_1c01e34:
    // 0x1c01e34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c01e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c01e38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c01e38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c01e3c: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1C01E3Cu;
    {
        const bool branch_taken_0x1c01e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C01E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01E3Cu;
        // 0x1c01e40: 0x2406004f  addiu       $a2, $zero, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c01e3c) {
            ctx->pc = 0x1C01E10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c01e10;
        }
    }
    ctx->pc = 0x1C01E44u;
label_1c01e44:
    // 0x1c01e44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c01e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c01e48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c01e48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c01e4c: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C01E4Cu;
    {
        const bool branch_taken_0x1c01e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C01E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01E4Cu;
        // 0x1c01e50: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c01e4c) {
            ctx->pc = 0x1C01E10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c01e10;
        }
    }
    ctx->pc = 0x1C01E54u;
label_1c01e54:
    // 0x1c01e54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c01e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c01e58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c01e58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c01e5c: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x1C01E5Cu;
    {
        const bool branch_taken_0x1c01e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C01E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01E5Cu;
        // 0x1c01e60: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c01e5c) {
            ctx->pc = 0x1C01E10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c01e10;
        }
    }
    ctx->pc = 0x1C01E64u;
    // 0x1c01e64: 0x0  nop
    ctx->pc = 0x1c01e64u;
    // NOP
    // 0x1c01e68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c01e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c01e6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c01e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c01e70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c01e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c01e74: 0x8700318  j           func_1C00C60
    ctx->pc = 0x1C01E74u;
    ctx->pc = 0x1C01E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C01E74u;
    // 0x1c01e78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00C60u;
    sub_01C00C60_0x1c00c60(rdram, ctx, runtime); return;
    ctx->pc = 0x1C01E7Cu;
    // 0x1c01e7c: 0x0  nop
    ctx->pc = 0x1c01e7cu;
    // NOP
    ctx->pc = 0x1c01e80u;
}
