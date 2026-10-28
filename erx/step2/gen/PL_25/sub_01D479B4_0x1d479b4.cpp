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

// Function: sub_01D479B4
// Address: 0x1d479b4 - 0x1d47a20
void sub_01D479B4_0x1d479b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D479B4_0x1d479b4");
#endif

    switch (ctx->pc) {
        case 0x1d479c4u: goto label_1d479c4;
        case 0x1d479d4u: goto label_1d479d4;
        case 0x1d479e4u: goto label_1d479e4;
        case 0x1d479f4u: goto label_1d479f4;
        default: break;
    }

    ctx->pc = 0x1d479b4u;

    // 0x1d479b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d479b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d479b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d479b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d479bc: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
    ctx->pc = 0x1D479BCu;
    {
        const bool branch_taken_0x1d479bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D479C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D479BCu;
        // 0x1d479c0: 0x24060044  addiu       $a2, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d479bc) {
            ctx->pc = 0x1D47948u;
            return;
        }
    }
    ctx->pc = 0x1D479C4u;
label_1d479c4:
    // 0x1d479c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d479c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d479c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d479c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d479cc: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x1D479CCu;
    {
        const bool branch_taken_0x1d479cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D479D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D479CCu;
        // 0x1d479d0: 0x24060042  addiu       $a2, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d479cc) {
            ctx->pc = 0x1D47948u;
            return;
        }
    }
    ctx->pc = 0x1D479D4u;
label_1d479d4:
    // 0x1d479d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d479d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d479d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d479d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d479dc: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x1D479DCu;
    {
        const bool branch_taken_0x1d479dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D479E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D479DCu;
        // 0x1d479e0: 0x24060043  addiu       $a2, $zero, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d479dc) {
            ctx->pc = 0x1D47948u;
            return;
        }
    }
    ctx->pc = 0x1D479E4u;
label_1d479e4:
    // 0x1d479e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d479e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d479e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d479e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d479ec: 0x1000ffd6  b           . + 4 + (-0x2A << 2)
    ctx->pc = 0x1D479ECu;
    {
        const bool branch_taken_0x1d479ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D479F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D479ECu;
        // 0x1d479f0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d479ec) {
            ctx->pc = 0x1D47948u;
            return;
        }
    }
    ctx->pc = 0x1D479F4u;
label_1d479f4:
    // 0x1d479f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d479f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d479f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d479f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d479fc: 0x1000ffd2  b           . + 4 + (-0x2E << 2)
    ctx->pc = 0x1D479FCu;
    {
        const bool branch_taken_0x1d479fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D47A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D479FCu;
        // 0x1d47a00: 0x24060045  addiu       $a2, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d479fc) {
            ctx->pc = 0x1D47948u;
            return;
        }
    }
    ctx->pc = 0x1D47A04u;
    // 0x1d47a04: 0x0  nop
    ctx->pc = 0x1d47a04u;
    // NOP
    // 0x1d47a08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d47a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d47a0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d47a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d47a10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d47a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d47a14: 0x8751760  j           func_1D45D80
    ctx->pc = 0x1D47A14u;
    ctx->pc = 0x1D47A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D47A14u;
    // 0x1d47a18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D80u;
    sub_01D45D80_0x1d45d80(rdram, ctx, runtime); return;
    ctx->pc = 0x1D47A1Cu;
    // 0x1d47a1c: 0x0  nop
    ctx->pc = 0x1d47a1cu;
    // NOP
    ctx->pc = 0x1d47a20u;
}
