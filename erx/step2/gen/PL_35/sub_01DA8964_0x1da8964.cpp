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

// Function: sub_01DA8964
// Address: 0x1da8964 - 0x1da89d0
void sub_01DA8964_0x1da8964(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DA8964_0x1da8964");
#endif

    switch (ctx->pc) {
        case 0x1da8974u: goto label_1da8974;
        case 0x1da8984u: goto label_1da8984;
        case 0x1da8994u: goto label_1da8994;
        case 0x1da89bcu: goto label_1da89bc;
        default: break;
    }

    ctx->pc = 0x1da8964u;

    // 0x1da8964: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da8964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8968: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1da8968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da896c: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x1DA896Cu;
    {
        const bool branch_taken_0x1da896c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA8970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA896Cu;
        // 0x1da8970: 0x24060047  addiu       $a2, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da896c) {
            ctx->pc = 0x1DA8930u;
            return;
        }
    }
    ctx->pc = 0x1DA8974u;
label_1da8974:
    // 0x1da8974: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da8974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8978: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1da8978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da897c: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x1DA897Cu;
    {
        const bool branch_taken_0x1da897c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA8980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA897Cu;
        // 0x1da8980: 0x24060046  addiu       $a2, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da897c) {
            ctx->pc = 0x1DA8930u;
            return;
        }
    }
    ctx->pc = 0x1DA8984u;
label_1da8984:
    // 0x1da8984: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da8984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8988: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1da8988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da898c: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x1DA898Cu;
    {
        const bool branch_taken_0x1da898c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA8990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA898Cu;
        // 0x1da8990: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da898c) {
            ctx->pc = 0x1DA8930u;
            return;
        }
    }
    ctx->pc = 0x1DA8994u;
label_1da8994:
    // 0x1da8994: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da8994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8998: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1da8998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da899c: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x1DA899Cu;
    {
        const bool branch_taken_0x1da899c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA89A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA899Cu;
        // 0x1da89a0: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da899c) {
            ctx->pc = 0x1DA8930u;
            return;
        }
    }
    ctx->pc = 0x1DA89A4u;
    // 0x1da89a4: 0x0  nop
    ctx->pc = 0x1da89a4u;
    // NOP
    // 0x1da89a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1da89a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1da89ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1da89acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1da89b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1da89b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1da89b4: 0xc769bae  jal         func_1DA6EB8
    ctx->pc = 0x1DA89B4u;
    SET_GPR_U32(ctx, 31, 0x1DA89BCu);
    ctx->pc = 0x1DA89B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA89B4u;
    // 0x1da89b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6EB8u, 0x1DA89B4u, 0x1DA89BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA89BCu;
label_1da89bc:
    // 0x1da89bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da89bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da89c0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1da89c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1da89c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1da89c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da89c8: 0x8769e94  j           func_1DA7A50
    ctx->pc = 0x1DA89C8u;
    ctx->pc = 0x1DA89CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA89C8u;
    // 0x1da89cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA7A50u;
    sub_01DA7A50_0x1da7a50(rdram, ctx, runtime); return;
    ctx->pc = 0x1DA89D0u;
}
