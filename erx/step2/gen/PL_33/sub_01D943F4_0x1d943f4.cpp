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

// Function: sub_01D943F4
// Address: 0x1d943f4 - 0x1d944b0
void sub_01D943F4_0x1d943f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D943F4_0x1d943f4");
#endif

    switch (ctx->pc) {
        case 0x1d94404u: goto label_1d94404;
        case 0x1d94414u: goto label_1d94414;
        case 0x1d94424u: goto label_1d94424;
        case 0x1d94434u: goto label_1d94434;
        case 0x1d94444u: goto label_1d94444;
        case 0x1d94454u: goto label_1d94454;
        case 0x1d94464u: goto label_1d94464;
        case 0x1d94474u: goto label_1d94474;
        case 0x1d94484u: goto label_1d94484;
        default: break;
    }

    ctx->pc = 0x1d943f4u;

    // 0x1d943f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d943f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d943f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d943f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d943fc: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
    ctx->pc = 0x1D943FCu;
    {
        const bool branch_taken_0x1d943fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D94400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D943FCu;
        // 0x1d94400: 0x2406004c  addiu       $a2, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d943fc) {
            ctx->pc = 0x1D94388u;
            return;
        }
    }
    ctx->pc = 0x1D94404u;
label_1d94404:
    // 0x1d94404: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d94404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94408: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d94408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9440c: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x1D9440Cu;
    {
        const bool branch_taken_0x1d9440c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D94410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9440Cu;
        // 0x1d94410: 0x2406004d  addiu       $a2, $zero, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9440c) {
            ctx->pc = 0x1D94388u;
            return;
        }
    }
    ctx->pc = 0x1D94414u;
label_1d94414:
    // 0x1d94414: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d94414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94418: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d94418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9441c: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x1D9441Cu;
    {
        const bool branch_taken_0x1d9441c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D94420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9441Cu;
        // 0x1d94420: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9441c) {
            ctx->pc = 0x1D94388u;
            return;
        }
    }
    ctx->pc = 0x1D94424u;
label_1d94424:
    // 0x1d94424: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d94424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94428: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d94428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9442c: 0x1000ffd6  b           . + 4 + (-0x2A << 2)
    ctx->pc = 0x1D9442Cu;
    {
        const bool branch_taken_0x1d9442c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D94430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9442Cu;
        // 0x1d94430: 0x2406004e  addiu       $a2, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9442c) {
            ctx->pc = 0x1D94388u;
            return;
        }
    }
    ctx->pc = 0x1D94434u;
label_1d94434:
    // 0x1d94434: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d94434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94438: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d94438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9443c: 0x1000ffd2  b           . + 4 + (-0x2E << 2)
    ctx->pc = 0x1D9443Cu;
    {
        const bool branch_taken_0x1d9443c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D94440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9443Cu;
        // 0x1d94440: 0x2406004a  addiu       $a2, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9443c) {
            ctx->pc = 0x1D94388u;
            return;
        }
    }
    ctx->pc = 0x1D94444u;
label_1d94444:
    // 0x1d94444: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d94444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94448: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d94448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9444c: 0x1000ffce  b           . + 4 + (-0x32 << 2)
    ctx->pc = 0x1D9444Cu;
    {
        const bool branch_taken_0x1d9444c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D94450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9444Cu;
        // 0x1d94450: 0x24060047  addiu       $a2, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9444c) {
            ctx->pc = 0x1D94388u;
            return;
        }
    }
    ctx->pc = 0x1D94454u;
label_1d94454:
    // 0x1d94454: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d94454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94458: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d94458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9445c: 0x1000ffca  b           . + 4 + (-0x36 << 2)
    ctx->pc = 0x1D9445Cu;
    {
        const bool branch_taken_0x1d9445c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D94460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9445Cu;
        // 0x1d94460: 0x24060046  addiu       $a2, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9445c) {
            ctx->pc = 0x1D94388u;
            return;
        }
    }
    ctx->pc = 0x1D94464u;
label_1d94464:
    // 0x1d94464: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d94464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94468: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d94468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9446c: 0x1000ffc6  b           . + 4 + (-0x3A << 2)
    ctx->pc = 0x1D9446Cu;
    {
        const bool branch_taken_0x1d9446c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D94470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9446Cu;
        // 0x1d94470: 0x24060049  addiu       $a2, $zero, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9446c) {
            ctx->pc = 0x1D94388u;
            return;
        }
    }
    ctx->pc = 0x1D94474u;
label_1d94474:
    // 0x1d94474: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d94474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94478: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d94478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9447c: 0x1000ffc2  b           . + 4 + (-0x3E << 2)
    ctx->pc = 0x1D9447Cu;
    {
        const bool branch_taken_0x1d9447c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D94480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9447Cu;
        // 0x1d94480: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9447c) {
            ctx->pc = 0x1D94388u;
            return;
        }
    }
    ctx->pc = 0x1D94484u;
label_1d94484:
    // 0x1d94484: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d94484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94488: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d94488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9448c: 0x1000ffbe  b           . + 4 + (-0x42 << 2)
    ctx->pc = 0x1D9448Cu;
    {
        const bool branch_taken_0x1d9448c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D94490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9448Cu;
        // 0x1d94490: 0x24060045  addiu       $a2, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9448c) {
            ctx->pc = 0x1D94388u;
            return;
        }
    }
    ctx->pc = 0x1D94494u;
    // 0x1d94494: 0x0  nop
    ctx->pc = 0x1d94494u;
    // NOP
    // 0x1d94498: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d94498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d9449c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d9449cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d944a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d944a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d944a4: 0x8764a20  j           func_1D92880
    ctx->pc = 0x1D944A4u;
    ctx->pc = 0x1D944A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D944A4u;
    // 0x1d944a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92880u;
    sub_01D92880_0x1d92880(rdram, ctx, runtime); return;
    ctx->pc = 0x1D944ACu;
    // 0x1d944ac: 0x0  nop
    ctx->pc = 0x1d944acu;
    // NOP
    ctx->pc = 0x1d944b0u;
}
