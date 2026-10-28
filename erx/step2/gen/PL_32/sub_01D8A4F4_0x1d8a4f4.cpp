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

// Function: sub_01D8A4F4
// Address: 0x1d8a4f4 - 0x1d8a560
void sub_01D8A4F4_0x1d8a4f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D8A4F4_0x1d8a4f4");
#endif

    switch (ctx->pc) {
        case 0x1d8a504u: goto label_1d8a504;
        case 0x1d8a514u: goto label_1d8a514;
        case 0x1d8a524u: goto label_1d8a524;
        case 0x1d8a534u: goto label_1d8a534;
        default: break;
    }

    ctx->pc = 0x1d8a4f4u;

    // 0x1d8a4f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d8a4f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a4f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d8a4f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a4fc: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D8A4FCu;
    {
        const bool branch_taken_0x1d8a4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8A500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8A4FCu;
        // 0x1d8a500: 0x2406004a  addiu       $a2, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8a4fc) {
            ctx->pc = 0x1D8A4C0u;
            return;
        }
    }
    ctx->pc = 0x1D8A504u;
label_1d8a504:
    // 0x1d8a504: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d8a504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a508: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d8a508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a50c: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x1D8A50Cu;
    {
        const bool branch_taken_0x1d8a50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8A510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8A50Cu;
        // 0x1d8a510: 0x2406004b  addiu       $a2, $zero, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8a50c) {
            ctx->pc = 0x1D8A4C0u;
            return;
        }
    }
    ctx->pc = 0x1D8A514u;
label_1d8a514:
    // 0x1d8a514: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d8a514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a518: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d8a518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a51c: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x1D8A51Cu;
    {
        const bool branch_taken_0x1d8a51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8A520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8A51Cu;
        // 0x1d8a520: 0x24060049  addiu       $a2, $zero, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8a51c) {
            ctx->pc = 0x1D8A4C0u;
            return;
        }
    }
    ctx->pc = 0x1D8A524u;
label_1d8a524:
    // 0x1d8a524: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d8a524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a528: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d8a528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a52c: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x1D8A52Cu;
    {
        const bool branch_taken_0x1d8a52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8A530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8A52Cu;
        // 0x1d8a530: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8a52c) {
            ctx->pc = 0x1D8A4C0u;
            return;
        }
    }
    ctx->pc = 0x1D8A534u;
label_1d8a534:
    // 0x1d8a534: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d8a534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a538: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d8a538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a53c: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x1D8A53Cu;
    {
        const bool branch_taken_0x1d8a53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8A540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8A53Cu;
        // 0x1d8a540: 0x2406004c  addiu       $a2, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8a53c) {
            ctx->pc = 0x1D8A4C0u;
            return;
        }
    }
    ctx->pc = 0x1D8A544u;
    // 0x1d8a544: 0x0  nop
    ctx->pc = 0x1d8a544u;
    // NOP
    // 0x1d8a548: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d8a548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d8a54c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d8a54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d8a550: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d8a550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8a554: 0x8762550  j           func_1D89540
    ctx->pc = 0x1D8A554u;
    ctx->pc = 0x1D8A558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8A554u;
    // 0x1d8a558: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D89540u;
    sub_01D89540_0x1d89540(rdram, ctx, runtime); return;
    ctx->pc = 0x1D8A55Cu;
    // 0x1d8a55c: 0x0  nop
    ctx->pc = 0x1d8a55cu;
    // NOP
    ctx->pc = 0x1d8a560u;
}
