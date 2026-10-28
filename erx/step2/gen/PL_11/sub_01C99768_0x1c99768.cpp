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

// Function: sub_01C99768
// Address: 0x1c99768 - 0x1c997f8
void sub_01C99768_0x1c99768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C99768_0x1c99768");
#endif

    switch (ctx->pc) {
        case 0x1c9977cu: goto label_1c9977c;
        case 0x1c99790u: goto label_1c99790;
        case 0x1c99794u: goto label_1c99794;
        case 0x1c997dcu: goto label_1c997dc;
        default: break;
    }

    ctx->pc = 0x1c99768u;

    // 0x1c99768: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c99768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c9976c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c9976cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c99770: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c99770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c99774: 0xc7262d2  jal         func_1C98B48
    ctx->pc = 0x1C99774u;
    SET_GPR_U32(ctx, 31, 0x1C9977Cu);
    ctx->pc = 0x1C99778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C99774u;
    // 0x1c99778: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B48u, 0x1C99774u, 0x1C9977Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9977Cu;
label_1c9977c:
    // 0x1c9977c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c9977cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c99780: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C99780u;
    {
        const bool branch_taken_0x1c99780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C99784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C99780u;
        // 0x1c99784: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c99780) {
            ctx->pc = 0x1C997A4u;
            goto label_1c997a4;
        }
    }
    ctx->pc = 0x1C99788u;
    // 0x1c99788: 0xc7262d4  jal         func_1C98B50
    ctx->pc = 0x1C99788u;
    SET_GPR_U32(ctx, 31, 0x1C99790u);
    ctx->pc = 0x1C98B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B50u, 0x1C99788u, 0x1C99790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C99790u;
label_1c99790:
    // 0x1c99790: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c99790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c99794:
    // 0x1c99794: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c99794u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c99798: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c99798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c9979c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9979Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C997A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9979Cu;
        // 0x1c997a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9979Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C997A4u;
label_1c997a4:
    // 0x1c997a4: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C997A4u;
    {
        const bool branch_taken_0x1c997a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C997A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C997A4u;
        // 0x1c997a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c997a4) {
            ctx->pc = 0x1C99794u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c99794;
        }
    }
    ctx->pc = 0x1C997ACu;
    // 0x1c997ac: 0x0  nop
    ctx->pc = 0x1c997acu;
    // NOP
    // 0x1c997b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c997b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c997b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c997b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c997b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c997b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c997bc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c997bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c997c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c997c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c997c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c997c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c997c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c997c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c997cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c997ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c997d0: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c997d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c997d4: 0xc7262e2  jal         func_1C98B88
    ctx->pc = 0x1C997D4u;
    SET_GPR_U32(ctx, 31, 0x1C997DCu);
    ctx->pc = 0x1C997D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C997D4u;
    // 0x1c997d8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B88u, 0x1C997D4u, 0x1C997DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C997DCu;
label_1c997dc:
    // 0x1c997dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c997dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c997e0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c997e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c997e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c997e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c997e8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1c997e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c997ec: 0x87262da  j           func_1C98B68
    ctx->pc = 0x1C997ECu;
    ctx->pc = 0x1C997F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C997ECu;
    // 0x1c997f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B68u;
    sub_01C98B68_0x1c98b68(rdram, ctx, runtime); return;
    ctx->pc = 0x1C997F4u;
    // 0x1c997f4: 0x0  nop
    ctx->pc = 0x1c997f4u;
    // NOP
    ctx->pc = 0x1c997f8u;
}
