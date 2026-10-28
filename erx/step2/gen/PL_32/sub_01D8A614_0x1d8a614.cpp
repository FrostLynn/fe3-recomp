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

// Function: sub_01D8A614
// Address: 0x1d8a614 - 0x1d8a670
void sub_01D8A614_0x1d8a614(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D8A614_0x1d8a614");
#endif

    switch (ctx->pc) {
        case 0x1d8a624u: goto label_1d8a624;
        case 0x1d8a634u: goto label_1d8a634;
        case 0x1d8a644u: goto label_1d8a644;
        default: break;
    }

    ctx->pc = 0x1d8a614u;

    // 0x1d8a614: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d8a614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a618: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d8a618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a61c: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D8A61Cu;
    {
        const bool branch_taken_0x1d8a61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8A620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8A61Cu;
        // 0x1d8a620: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8a61c) {
            ctx->pc = 0x1D8A5E0u;
            return;
        }
    }
    ctx->pc = 0x1D8A624u;
label_1d8a624:
    // 0x1d8a624: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d8a624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a628: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d8a628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a62c: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x1D8A62Cu;
    {
        const bool branch_taken_0x1d8a62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8A630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8A62Cu;
        // 0x1d8a630: 0x24060051  addiu       $a2, $zero, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8a62c) {
            ctx->pc = 0x1D8A5E0u;
            return;
        }
    }
    ctx->pc = 0x1D8A634u;
label_1d8a634:
    // 0x1d8a634: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d8a634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a638: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d8a638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a63c: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x1D8A63Cu;
    {
        const bool branch_taken_0x1d8a63c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8A640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8A63Cu;
        // 0x1d8a640: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8a63c) {
            ctx->pc = 0x1D8A5E0u;
            return;
        }
    }
    ctx->pc = 0x1D8A644u;
label_1d8a644:
    // 0x1d8a644: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d8a644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a648: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d8a648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a64c: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x1D8A64Cu;
    {
        const bool branch_taken_0x1d8a64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8A650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8A64Cu;
        // 0x1d8a650: 0x2406004f  addiu       $a2, $zero, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8a64c) {
            ctx->pc = 0x1D8A5E0u;
            return;
        }
    }
    ctx->pc = 0x1D8A654u;
    // 0x1d8a654: 0x0  nop
    ctx->pc = 0x1d8a654u;
    // NOP
    // 0x1d8a658: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d8a658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d8a65c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d8a65cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d8a660: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d8a660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8a664: 0x8762550  j           func_1D89540
    ctx->pc = 0x1D8A664u;
    ctx->pc = 0x1D8A668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8A664u;
    // 0x1d8a668: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D89540u;
    sub_01D89540_0x1d89540(rdram, ctx, runtime); return;
    ctx->pc = 0x1D8A66Cu;
    // 0x1d8a66c: 0x0  nop
    ctx->pc = 0x1d8a66cu;
    // NOP
    ctx->pc = 0x1d8a670u;
}
