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

// Function: sub_01C312EC
// Address: 0x1c312ec - 0x1c313a8
void sub_01C312EC_0x1c312ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C312EC_0x1c312ec");
#endif

    switch (ctx->pc) {
        case 0x1c312fcu: goto label_1c312fc;
        case 0x1c3130cu: goto label_1c3130c;
        case 0x1c3131cu: goto label_1c3131c;
        case 0x1c3132cu: goto label_1c3132c;
        case 0x1c3133cu: goto label_1c3133c;
        case 0x1c3134cu: goto label_1c3134c;
        case 0x1c3135cu: goto label_1c3135c;
        case 0x1c3136cu: goto label_1c3136c;
        case 0x1c3137cu: goto label_1c3137c;
        default: break;
    }

    ctx->pc = 0x1c312ecu;

    // 0x1c312ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c312ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c312f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c312f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c312f4: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
    ctx->pc = 0x1C312F4u;
    {
        const bool branch_taken_0x1c312f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C312F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C312F4u;
        // 0x1c312f8: 0x2406004b  addiu       $a2, $zero, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c312f4) {
            ctx->pc = 0x1C31280u;
            return;
        }
    }
    ctx->pc = 0x1C312FCu;
label_1c312fc:
    // 0x1c312fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c312fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31300: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c31300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31304: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x1C31304u;
    {
        const bool branch_taken_0x1c31304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C31308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31304u;
        // 0x1c31308: 0x2406004c  addiu       $a2, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c31304) {
            ctx->pc = 0x1C31280u;
            return;
        }
    }
    ctx->pc = 0x1C3130Cu;
label_1c3130c:
    // 0x1c3130c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3130cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31310: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c31310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31314: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x1C31314u;
    {
        const bool branch_taken_0x1c31314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C31318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31314u;
        // 0x1c31318: 0x24060047  addiu       $a2, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c31314) {
            ctx->pc = 0x1C31280u;
            return;
        }
    }
    ctx->pc = 0x1C3131Cu;
label_1c3131c:
    // 0x1c3131c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3131cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31320: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c31320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31324: 0x1000ffd6  b           . + 4 + (-0x2A << 2)
    ctx->pc = 0x1C31324u;
    {
        const bool branch_taken_0x1c31324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C31328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31324u;
        // 0x1c31328: 0x2406004d  addiu       $a2, $zero, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c31324) {
            ctx->pc = 0x1C31280u;
            return;
        }
    }
    ctx->pc = 0x1C3132Cu;
label_1c3132c:
    // 0x1c3132c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3132cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31330: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c31330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31334: 0x1000ffd2  b           . + 4 + (-0x2E << 2)
    ctx->pc = 0x1C31334u;
    {
        const bool branch_taken_0x1c31334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C31338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31334u;
        // 0x1c31338: 0x24060049  addiu       $a2, $zero, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c31334) {
            ctx->pc = 0x1C31280u;
            return;
        }
    }
    ctx->pc = 0x1C3133Cu;
label_1c3133c:
    // 0x1c3133c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3133cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31340: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c31340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31344: 0x1000ffce  b           . + 4 + (-0x32 << 2)
    ctx->pc = 0x1C31344u;
    {
        const bool branch_taken_0x1c31344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C31348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31344u;
        // 0x1c31348: 0x24060046  addiu       $a2, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c31344) {
            ctx->pc = 0x1C31280u;
            return;
        }
    }
    ctx->pc = 0x1C3134Cu;
label_1c3134c:
    // 0x1c3134c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3134cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31350: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c31350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31354: 0x1000ffca  b           . + 4 + (-0x36 << 2)
    ctx->pc = 0x1C31354u;
    {
        const bool branch_taken_0x1c31354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C31358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31354u;
        // 0x1c31358: 0x24060045  addiu       $a2, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c31354) {
            ctx->pc = 0x1C31280u;
            return;
        }
    }
    ctx->pc = 0x1C3135Cu;
label_1c3135c:
    // 0x1c3135c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3135cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31360: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c31360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31364: 0x1000ffc6  b           . + 4 + (-0x3A << 2)
    ctx->pc = 0x1C31364u;
    {
        const bool branch_taken_0x1c31364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C31368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31364u;
        // 0x1c31368: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c31364) {
            ctx->pc = 0x1C31280u;
            return;
        }
    }
    ctx->pc = 0x1C3136Cu;
label_1c3136c:
    // 0x1c3136c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3136cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31370: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c31370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31374: 0x1000ffc2  b           . + 4 + (-0x3E << 2)
    ctx->pc = 0x1C31374u;
    {
        const bool branch_taken_0x1c31374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C31378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31374u;
        // 0x1c31378: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c31374) {
            ctx->pc = 0x1C31280u;
            return;
        }
    }
    ctx->pc = 0x1C3137Cu;
label_1c3137c:
    // 0x1c3137c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3137cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31380: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c31380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31384: 0x1000ffbe  b           . + 4 + (-0x42 << 2)
    ctx->pc = 0x1C31384u;
    {
        const bool branch_taken_0x1c31384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C31388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31384u;
        // 0x1c31388: 0x24060044  addiu       $a2, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c31384) {
            ctx->pc = 0x1C31280u;
            return;
        }
    }
    ctx->pc = 0x1C3138Cu;
    // 0x1c3138c: 0x0  nop
    ctx->pc = 0x1c3138cu;
    // NOP
    // 0x1c31390: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c31390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c31394: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c31394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c31398: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c31398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3139c: 0x870bde0  j           func_1C2F780
    ctx->pc = 0x1C3139Cu;
    ctx->pc = 0x1C313A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3139Cu;
    // 0x1c313a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F780u;
    sub_01C2F780_0x1c2f780(rdram, ctx, runtime); return;
    ctx->pc = 0x1C313A4u;
    // 0x1c313a4: 0x0  nop
    ctx->pc = 0x1c313a4u;
    // NOP
    ctx->pc = 0x1c313a8u;
}
