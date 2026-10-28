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

// Function: sub_01CCF124
// Address: 0x1ccf124 - 0x1ccf180
void sub_01CCF124_0x1ccf124(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCF124_0x1ccf124");
#endif

    switch (ctx->pc) {
        case 0x1ccf134u: goto label_1ccf134;
        case 0x1ccf144u: goto label_1ccf144;
        case 0x1ccf154u: goto label_1ccf154;
        default: break;
    }

    ctx->pc = 0x1ccf124u;

    // 0x1ccf124: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ccf124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf128: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ccf128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf12c: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
    ctx->pc = 0x1CCF12Cu;
    {
        const bool branch_taken_0x1ccf12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCF130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCF12Cu;
        // 0x1ccf130: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccf12c) {
            ctx->pc = 0x1CCF0B8u;
            return;
        }
    }
    ctx->pc = 0x1CCF134u;
label_1ccf134:
    // 0x1ccf134: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ccf134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf138: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ccf138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf13c: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x1CCF13Cu;
    {
        const bool branch_taken_0x1ccf13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCF140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCF13Cu;
        // 0x1ccf140: 0x24060047  addiu       $a2, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccf13c) {
            ctx->pc = 0x1CCF0B8u;
            return;
        }
    }
    ctx->pc = 0x1CCF144u;
label_1ccf144:
    // 0x1ccf144: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ccf144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf148: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ccf148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf14c: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x1CCF14Cu;
    {
        const bool branch_taken_0x1ccf14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCF150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCF14Cu;
        // 0x1ccf150: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccf14c) {
            ctx->pc = 0x1CCF0B8u;
            return;
        }
    }
    ctx->pc = 0x1CCF154u;
label_1ccf154:
    // 0x1ccf154: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ccf154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf158: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ccf158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf15c: 0x1000ffd6  b           . + 4 + (-0x2A << 2)
    ctx->pc = 0x1CCF15Cu;
    {
        const bool branch_taken_0x1ccf15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCF160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCF15Cu;
        // 0x1ccf160: 0x24060049  addiu       $a2, $zero, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccf15c) {
            ctx->pc = 0x1CCF0B8u;
            return;
        }
    }
    ctx->pc = 0x1CCF164u;
    // 0x1ccf164: 0x0  nop
    ctx->pc = 0x1ccf164u;
    // NOP
    // 0x1ccf168: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ccf168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ccf16c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ccf16cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ccf170: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ccf170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ccf174: 0x8733520  j           func_1CCD480
    ctx->pc = 0x1CCF174u;
    ctx->pc = 0x1CCF178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF174u;
    // 0x1ccf178: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD480u;
    sub_01CCD480_0x1ccd480(rdram, ctx, runtime); return;
    ctx->pc = 0x1CCF17Cu;
    // 0x1ccf17c: 0x0  nop
    ctx->pc = 0x1ccf17cu;
    // NOP
    ctx->pc = 0x1ccf180u;
}
