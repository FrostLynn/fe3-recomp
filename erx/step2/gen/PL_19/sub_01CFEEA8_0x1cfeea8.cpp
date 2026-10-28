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

// Function: sub_01CFEEA8
// Address: 0x1cfeea8 - 0x1cfeef0
void sub_01CFEEA8_0x1cfeea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFEEA8_0x1cfeea8");
#endif

    switch (ctx->pc) {
        case 0x1cfeeb8u: goto label_1cfeeb8;
        case 0x1cfeec8u: goto label_1cfeec8;
        default: break;
    }

    ctx->pc = 0x1cfeea8u;

    // 0x1cfeea8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cfeea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfeeac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cfeeacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfeeb0: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x1CFEEB0u;
    {
        const bool branch_taken_0x1cfeeb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFEEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFEEB0u;
        // 0x1cfeeb4: 0x24060051  addiu       $a2, $zero, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfeeb0) {
            ctx->pc = 0x1CFEE74u;
            return;
        }
    }
    ctx->pc = 0x1CFEEB8u;
label_1cfeeb8:
    // 0x1cfeeb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cfeeb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfeebc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cfeebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfeec0: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x1CFEEC0u;
    {
        const bool branch_taken_0x1cfeec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFEEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFEEC0u;
        // 0x1cfeec4: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfeec0) {
            ctx->pc = 0x1CFEE74u;
            return;
        }
    }
    ctx->pc = 0x1CFEEC8u;
label_1cfeec8:
    // 0x1cfeec8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cfeec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfeecc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cfeeccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfeed0: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x1CFEED0u;
    {
        const bool branch_taken_0x1cfeed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFEED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFEED0u;
        // 0x1cfeed4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfeed0) {
            ctx->pc = 0x1CFEE74u;
            return;
        }
    }
    ctx->pc = 0x1CFEED8u;
    // 0x1cfeed8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cfeed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cfeedc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cfeedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cfeee0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cfeee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cfeee4: 0x873f7a4  j           func_1CFDE90
    ctx->pc = 0x1CFEEE4u;
    ctx->pc = 0x1CFEEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFEEE4u;
    // 0x1cfeee8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFDE90u;
    sub_01CFDE90_0x1cfde90(rdram, ctx, runtime); return;
    ctx->pc = 0x1CFEEECu;
    // 0x1cfeeec: 0x0  nop
    ctx->pc = 0x1cfeeecu;
    // NOP
    ctx->pc = 0x1cfeef0u;
}
