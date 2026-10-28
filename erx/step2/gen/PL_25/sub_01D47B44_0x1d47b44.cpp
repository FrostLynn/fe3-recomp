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

// Function: sub_01D47B44
// Address: 0x1d47b44 - 0x1d47bb0
void sub_01D47B44_0x1d47b44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D47B44_0x1d47b44");
#endif

    switch (ctx->pc) {
        case 0x1d47b54u: goto label_1d47b54;
        case 0x1d47b64u: goto label_1d47b64;
        case 0x1d47b74u: goto label_1d47b74;
        case 0x1d47b84u: goto label_1d47b84;
        default: break;
    }

    ctx->pc = 0x1d47b44u;

    // 0x1d47b44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d47b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47b48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d47b48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47b4c: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
    ctx->pc = 0x1D47B4Cu;
    {
        const bool branch_taken_0x1d47b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D47B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47B4Cu;
        // 0x1d47b50: 0x2406004a  addiu       $a2, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d47b4c) {
            ctx->pc = 0x1D47AD8u;
            return;
        }
    }
    ctx->pc = 0x1D47B54u;
label_1d47b54:
    // 0x1d47b54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d47b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47b58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d47b58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47b5c: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x1D47B5Cu;
    {
        const bool branch_taken_0x1d47b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D47B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47B5Cu;
        // 0x1d47b60: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d47b5c) {
            ctx->pc = 0x1D47AD8u;
            return;
        }
    }
    ctx->pc = 0x1D47B64u;
label_1d47b64:
    // 0x1d47b64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d47b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47b68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d47b68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47b6c: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x1D47B6Cu;
    {
        const bool branch_taken_0x1d47b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D47B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47B6Cu;
        // 0x1d47b70: 0x24060049  addiu       $a2, $zero, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d47b6c) {
            ctx->pc = 0x1D47AD8u;
            return;
        }
    }
    ctx->pc = 0x1D47B74u;
label_1d47b74:
    // 0x1d47b74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d47b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47b78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d47b78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47b7c: 0x1000ffd6  b           . + 4 + (-0x2A << 2)
    ctx->pc = 0x1D47B7Cu;
    {
        const bool branch_taken_0x1d47b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D47B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47B7Cu;
        // 0x1d47b80: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d47b7c) {
            ctx->pc = 0x1D47AD8u;
            return;
        }
    }
    ctx->pc = 0x1D47B84u;
label_1d47b84:
    // 0x1d47b84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d47b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47b88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d47b88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47b8c: 0x1000ffd2  b           . + 4 + (-0x2E << 2)
    ctx->pc = 0x1D47B8Cu;
    {
        const bool branch_taken_0x1d47b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D47B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47B8Cu;
        // 0x1d47b90: 0x2406004b  addiu       $a2, $zero, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d47b8c) {
            ctx->pc = 0x1D47AD8u;
            return;
        }
    }
    ctx->pc = 0x1D47B94u;
    // 0x1d47b94: 0x0  nop
    ctx->pc = 0x1d47b94u;
    // NOP
    // 0x1d47b98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d47b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d47b9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d47b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d47ba0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d47ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d47ba4: 0x8751760  j           func_1D45D80
    ctx->pc = 0x1D47BA4u;
    ctx->pc = 0x1D47BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D47BA4u;
    // 0x1d47ba8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D80u;
    sub_01D45D80_0x1d45d80(rdram, ctx, runtime); return;
    ctx->pc = 0x1D47BACu;
    // 0x1d47bac: 0x0  nop
    ctx->pc = 0x1d47bacu;
    // NOP
    ctx->pc = 0x1d47bb0u;
}
