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

// Function: sub_01CB7360
// Address: 0x1cb7360 - 0x1cb73f0
void sub_01CB7360_0x1cb7360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB7360_0x1cb7360");
#endif

    switch (ctx->pc) {
        case 0x1cb7374u: goto label_1cb7374;
        case 0x1cb7388u: goto label_1cb7388;
        case 0x1cb738cu: goto label_1cb738c;
        case 0x1cb73d4u: goto label_1cb73d4;
        default: break;
    }

    ctx->pc = 0x1cb7360u;

    // 0x1cb7360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cb7360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cb7364: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cb7364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cb7368: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cb7368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cb736c: 0xc72d9d2  jal         func_1CB6748
    ctx->pc = 0x1CB736Cu;
    SET_GPR_U32(ctx, 31, 0x1CB7374u);
    ctx->pc = 0x1CB7370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB736Cu;
    // 0x1cb7370: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6748u, 0x1CB736Cu, 0x1CB7374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB7374u;
label_1cb7374:
    // 0x1cb7374: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cb7374u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb7378: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CB7378u;
    {
        const bool branch_taken_0x1cb7378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CB737Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB7378u;
        // 0x1cb737c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb7378) {
            ctx->pc = 0x1CB739Cu;
            goto label_1cb739c;
        }
    }
    ctx->pc = 0x1CB7380u;
    // 0x1cb7380: 0xc72d9d4  jal         func_1CB6750
    ctx->pc = 0x1CB7380u;
    SET_GPR_U32(ctx, 31, 0x1CB7388u);
    ctx->pc = 0x1CB6750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6750u, 0x1CB7380u, 0x1CB7388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB7388u;
label_1cb7388:
    // 0x1cb7388: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1cb7388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1cb738c:
    // 0x1cb738c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cb738cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb7390: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cb7390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cb7394: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB7394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB7398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB7394u;
        // 0x1cb7398: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB7394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB739Cu;
label_1cb739c:
    // 0x1cb739c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1CB739Cu;
    {
        const bool branch_taken_0x1cb739c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB73A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB739Cu;
        // 0x1cb73a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb739c) {
            ctx->pc = 0x1CB738Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb738c;
        }
    }
    ctx->pc = 0x1CB73A4u;
    // 0x1cb73a4: 0x0  nop
    ctx->pc = 0x1cb73a4u;
    // NOP
    // 0x1cb73a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cb73a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cb73ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cb73acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb73b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cb73b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cb73b4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1cb73b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cb73b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cb73b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cb73bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cb73bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb73c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cb73c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb73c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb73c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb73c8: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1cb73c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cb73cc: 0xc72d9e2  jal         func_1CB6788
    ctx->pc = 0x1CB73CCu;
    SET_GPR_U32(ctx, 31, 0x1CB73D4u);
    ctx->pc = 0x1CB73D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB73CCu;
    // 0x1cb73d0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6788u, 0x1CB73CCu, 0x1CB73D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB73D4u;
label_1cb73d4:
    // 0x1cb73d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb73d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb73d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cb73d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cb73dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cb73dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb73e0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1cb73e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cb73e4: 0x872d9da  j           func_1CB6768
    ctx->pc = 0x1CB73E4u;
    ctx->pc = 0x1CB73E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB73E4u;
    // 0x1cb73e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6768u;
    sub_01CB6768_0x1cb6768(rdram, ctx, runtime); return;
    ctx->pc = 0x1CB73ECu;
    // 0x1cb73ec: 0x0  nop
    ctx->pc = 0x1cb73ecu;
    // NOP
    ctx->pc = 0x1cb73f0u;
}
