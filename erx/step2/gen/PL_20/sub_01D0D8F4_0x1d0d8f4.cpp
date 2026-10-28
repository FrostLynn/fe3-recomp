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

// Function: sub_01D0D8F4
// Address: 0x1d0d8f4 - 0x1d0d960
void sub_01D0D8F4_0x1d0d8f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0D8F4_0x1d0d8f4");
#endif

    switch (ctx->pc) {
        case 0x1d0d904u: goto label_1d0d904;
        case 0x1d0d914u: goto label_1d0d914;
        case 0x1d0d924u: goto label_1d0d924;
        case 0x1d0d934u: goto label_1d0d934;
        default: break;
    }

    ctx->pc = 0x1d0d8f4u;

    // 0x1d0d8f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0d8f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0d8f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d0d8f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0d8fc: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
    ctx->pc = 0x1D0D8FCu;
    {
        const bool branch_taken_0x1d0d8fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0D900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0D8FCu;
        // 0x1d0d900: 0x2406004a  addiu       $a2, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0d8fc) {
            ctx->pc = 0x1D0D888u;
            return;
        }
    }
    ctx->pc = 0x1D0D904u;
label_1d0d904:
    // 0x1d0d904: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0d904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0d908: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d0d908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0d90c: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x1D0D90Cu;
    {
        const bool branch_taken_0x1d0d90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0D910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0D90Cu;
        // 0x1d0d910: 0x24060046  addiu       $a2, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0d90c) {
            ctx->pc = 0x1D0D888u;
            return;
        }
    }
    ctx->pc = 0x1D0D914u;
label_1d0d914:
    // 0x1d0d914: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0d914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0d918: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d0d918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0d91c: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x1D0D91Cu;
    {
        const bool branch_taken_0x1d0d91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0D920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0D91Cu;
        // 0x1d0d920: 0x24060047  addiu       $a2, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0d91c) {
            ctx->pc = 0x1D0D888u;
            return;
        }
    }
    ctx->pc = 0x1D0D924u;
label_1d0d924:
    // 0x1d0d924: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0d924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0d928: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d0d928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0d92c: 0x1000ffd6  b           . + 4 + (-0x2A << 2)
    ctx->pc = 0x1D0D92Cu;
    {
        const bool branch_taken_0x1d0d92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0D930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0D92Cu;
        // 0x1d0d930: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0d92c) {
            ctx->pc = 0x1D0D888u;
            return;
        }
    }
    ctx->pc = 0x1D0D934u;
label_1d0d934:
    // 0x1d0d934: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0d934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0d938: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d0d938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0d93c: 0x1000ffd2  b           . + 4 + (-0x2E << 2)
    ctx->pc = 0x1D0D93Cu;
    {
        const bool branch_taken_0x1d0d93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0D940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0D93Cu;
        // 0x1d0d940: 0x24060049  addiu       $a2, $zero, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0d93c) {
            ctx->pc = 0x1D0D888u;
            return;
        }
    }
    ctx->pc = 0x1D0D944u;
    // 0x1d0d944: 0x0  nop
    ctx->pc = 0x1d0d944u;
    // NOP
    // 0x1d0d948: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d0d948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d0d94c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d0d94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d0d950: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d0d950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0d954: 0x8742f60  j           func_1D0BD80
    ctx->pc = 0x1D0D954u;
    ctx->pc = 0x1D0D958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0D954u;
    // 0x1d0d958: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD80u;
    sub_01D0BD80_0x1d0bd80(rdram, ctx, runtime); return;
    ctx->pc = 0x1D0D95Cu;
    // 0x1d0d95c: 0x0  nop
    ctx->pc = 0x1d0d95cu;
    // NOP
    ctx->pc = 0x1d0d960u;
}
