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

// Function: sub_01D287FC
// Address: 0x1d287fc - 0x1d28878
void sub_01D287FC_0x1d287fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D287FC_0x1d287fc");
#endif

    switch (ctx->pc) {
        case 0x1d2880cu: goto label_1d2880c;
        case 0x1d2881cu: goto label_1d2881c;
        case 0x1d2882cu: goto label_1d2882c;
        case 0x1d2883cu: goto label_1d2883c;
        case 0x1d2884cu: goto label_1d2884c;
        default: break;
    }

    ctx->pc = 0x1d287fcu;

    // 0x1d287fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d287fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28800: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d28800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28804: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
    ctx->pc = 0x1D28804u;
    {
        const bool branch_taken_0x1d28804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D28808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D28804u;
        // 0x1d28808: 0x24060118  addiu       $a2, $zero, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d28804) {
            ctx->pc = 0x1D28790u;
            return;
        }
    }
    ctx->pc = 0x1D2880Cu;
label_1d2880c:
    // 0x1d2880c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2880cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28810: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d28810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28814: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x1D28814u;
    {
        const bool branch_taken_0x1d28814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D28818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D28814u;
        // 0x1d28818: 0x2406016d  addiu       $a2, $zero, 0x16D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 365));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d28814) {
            ctx->pc = 0x1D28790u;
            return;
        }
    }
    ctx->pc = 0x1D2881Cu;
label_1d2881c:
    // 0x1d2881c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2881cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28820: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d28820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28824: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x1D28824u;
    {
        const bool branch_taken_0x1d28824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D28828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D28824u;
        // 0x1d28828: 0x24060047  addiu       $a2, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d28824) {
            ctx->pc = 0x1D28790u;
            return;
        }
    }
    ctx->pc = 0x1D2882Cu;
label_1d2882c:
    // 0x1d2882c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2882cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28830: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d28830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28834: 0x1000ffd6  b           . + 4 + (-0x2A << 2)
    ctx->pc = 0x1D28834u;
    {
        const bool branch_taken_0x1d28834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D28838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D28834u;
        // 0x1d28838: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d28834) {
            ctx->pc = 0x1D28790u;
            return;
        }
    }
    ctx->pc = 0x1D2883Cu;
label_1d2883c:
    // 0x1d2883c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2883cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28840: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d28840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28844: 0x1000ffd2  b           . + 4 + (-0x2E << 2)
    ctx->pc = 0x1D28844u;
    {
        const bool branch_taken_0x1d28844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D28848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D28844u;
        // 0x1d28848: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d28844) {
            ctx->pc = 0x1D28790u;
            return;
        }
    }
    ctx->pc = 0x1D2884Cu;
label_1d2884c:
    // 0x1d2884c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2884cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28850: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d28850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28854: 0x1000ffce  b           . + 4 + (-0x32 << 2)
    ctx->pc = 0x1D28854u;
    {
        const bool branch_taken_0x1d28854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D28858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D28854u;
        // 0x1d28858: 0x24060198  addiu       $a2, $zero, 0x198 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 408));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d28854) {
            ctx->pc = 0x1D28790u;
            return;
        }
    }
    ctx->pc = 0x1D2885Cu;
    // 0x1d2885c: 0x0  nop
    ctx->pc = 0x1d2885cu;
    // NOP
    // 0x1d28860: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d28860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d28864: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d28864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d28868: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d28868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d2886c: 0x8749b24  j           func_1D26C90
    ctx->pc = 0x1D2886Cu;
    ctx->pc = 0x1D28870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2886Cu;
    // 0x1d28870: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C90u;
    sub_01D26C90_0x1d26c90(rdram, ctx, runtime); return;
    ctx->pc = 0x1D28874u;
    // 0x1d28874: 0x0  nop
    ctx->pc = 0x1d28874u;
    // NOP
    ctx->pc = 0x1d28878u;
}
