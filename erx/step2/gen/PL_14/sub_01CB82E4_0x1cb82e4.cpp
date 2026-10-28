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

// Function: sub_01CB82E4
// Address: 0x1cb82e4 - 0x1cb8380
void sub_01CB82E4_0x1cb82e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB82E4_0x1cb82e4");
#endif

    switch (ctx->pc) {
        case 0x1cb82f4u: goto label_1cb82f4;
        case 0x1cb8304u: goto label_1cb8304;
        case 0x1cb8314u: goto label_1cb8314;
        case 0x1cb8324u: goto label_1cb8324;
        case 0x1cb8334u: goto label_1cb8334;
        case 0x1cb8344u: goto label_1cb8344;
        case 0x1cb8354u: goto label_1cb8354;
        default: break;
    }

    ctx->pc = 0x1cb82e4u;

    // 0x1cb82e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb82e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb82e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cb82e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb82ec: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
    ctx->pc = 0x1CB82ECu;
    {
        const bool branch_taken_0x1cb82ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB82F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB82ECu;
        // 0x1cb82f0: 0x24060047  addiu       $a2, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb82ec) {
            ctx->pc = 0x1CB8278u;
            return;
        }
    }
    ctx->pc = 0x1CB82F4u;
label_1cb82f4:
    // 0x1cb82f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb82f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb82f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cb82f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb82fc: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x1CB82FCu;
    {
        const bool branch_taken_0x1cb82fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB8300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB82FCu;
        // 0x1cb8300: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb82fc) {
            ctx->pc = 0x1CB8278u;
            return;
        }
    }
    ctx->pc = 0x1CB8304u;
label_1cb8304:
    // 0x1cb8304: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb8304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8308: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cb8308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb830c: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x1CB830Cu;
    {
        const bool branch_taken_0x1cb830c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB8310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB830Cu;
        // 0x1cb8310: 0x24060049  addiu       $a2, $zero, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb830c) {
            ctx->pc = 0x1CB8278u;
            return;
        }
    }
    ctx->pc = 0x1CB8314u;
label_1cb8314:
    // 0x1cb8314: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb8314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8318: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cb8318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb831c: 0x1000ffd6  b           . + 4 + (-0x2A << 2)
    ctx->pc = 0x1CB831Cu;
    {
        const bool branch_taken_0x1cb831c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB8320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB831Cu;
        // 0x1cb8320: 0x24060045  addiu       $a2, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb831c) {
            ctx->pc = 0x1CB8278u;
            return;
        }
    }
    ctx->pc = 0x1CB8324u;
label_1cb8324:
    // 0x1cb8324: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb8324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8328: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cb8328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb832c: 0x1000ffd2  b           . + 4 + (-0x2E << 2)
    ctx->pc = 0x1CB832Cu;
    {
        const bool branch_taken_0x1cb832c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB8330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB832Cu;
        // 0x1cb8330: 0x24060044  addiu       $a2, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb832c) {
            ctx->pc = 0x1CB8278u;
            return;
        }
    }
    ctx->pc = 0x1CB8334u;
label_1cb8334:
    // 0x1cb8334: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb8334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8338: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cb8338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb833c: 0x1000ffce  b           . + 4 + (-0x32 << 2)
    ctx->pc = 0x1CB833Cu;
    {
        const bool branch_taken_0x1cb833c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB8340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB833Cu;
        // 0x1cb8340: 0x24060043  addiu       $a2, $zero, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb833c) {
            ctx->pc = 0x1CB8278u;
            return;
        }
    }
    ctx->pc = 0x1CB8344u;
label_1cb8344:
    // 0x1cb8344: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb8344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8348: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cb8348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb834c: 0x1000ffca  b           . + 4 + (-0x36 << 2)
    ctx->pc = 0x1CB834Cu;
    {
        const bool branch_taken_0x1cb834c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB8350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB834Cu;
        // 0x1cb8350: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb834c) {
            ctx->pc = 0x1CB8278u;
            return;
        }
    }
    ctx->pc = 0x1CB8354u;
label_1cb8354:
    // 0x1cb8354: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb8354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8358: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cb8358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb835c: 0x1000ffc6  b           . + 4 + (-0x3A << 2)
    ctx->pc = 0x1CB835Cu;
    {
        const bool branch_taken_0x1cb835c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB8360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB835Cu;
        // 0x1cb8360: 0x24060046  addiu       $a2, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb835c) {
            ctx->pc = 0x1CB8278u;
            return;
        }
    }
    ctx->pc = 0x1CB8364u;
    // 0x1cb8364: 0x0  nop
    ctx->pc = 0x1cb8364u;
    // NOP
    // 0x1cb8368: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cb8368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cb836c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cb836cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cb8370: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cb8370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb8374: 0x872d9e0  j           func_1CB6780
    ctx->pc = 0x1CB8374u;
    ctx->pc = 0x1CB8378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB8374u;
    // 0x1cb8378: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6780u;
    sub_01CB6780_0x1cb6780(rdram, ctx, runtime); return;
    ctx->pc = 0x1CB837Cu;
    // 0x1cb837c: 0x0  nop
    ctx->pc = 0x1cb837cu;
    // NOP
    ctx->pc = 0x1cb8380u;
}
