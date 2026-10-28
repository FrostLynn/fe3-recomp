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

// Function: sub_01C30368
// Address: 0x1c30368 - 0x1c303f8
void sub_01C30368_0x1c30368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C30368_0x1c30368");
#endif

    switch (ctx->pc) {
        case 0x1c3037cu: goto label_1c3037c;
        case 0x1c30390u: goto label_1c30390;
        case 0x1c30394u: goto label_1c30394;
        case 0x1c303dcu: goto label_1c303dc;
        default: break;
    }

    ctx->pc = 0x1c30368u;

    // 0x1c30368: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c30368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c3036c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c3036cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c30370: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c30370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c30374: 0xc70bdd2  jal         func_1C2F748
    ctx->pc = 0x1C30374u;
    SET_GPR_U32(ctx, 31, 0x1C3037Cu);
    ctx->pc = 0x1C30378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C30374u;
    // 0x1c30378: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F748u, 0x1C30374u, 0x1C3037Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3037Cu;
label_1c3037c:
    // 0x1c3037c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c3037cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c30380: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C30380u;
    {
        const bool branch_taken_0x1c30380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C30384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C30380u;
        // 0x1c30384: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c30380) {
            ctx->pc = 0x1C303A4u;
            goto label_1c303a4;
        }
    }
    ctx->pc = 0x1C30388u;
    // 0x1c30388: 0xc70bdd4  jal         func_1C2F750
    ctx->pc = 0x1C30388u;
    SET_GPR_U32(ctx, 31, 0x1C30390u);
    ctx->pc = 0x1C2F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F750u, 0x1C30388u, 0x1C30390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C30390u;
label_1c30390:
    // 0x1c30390: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c30390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c30394:
    // 0x1c30394: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c30394u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c30398: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c30398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c3039c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3039Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C303A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3039Cu;
        // 0x1c303a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3039Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C303A4u;
label_1c303a4:
    // 0x1c303a4: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C303A4u;
    {
        const bool branch_taken_0x1c303a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C303A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C303A4u;
        // 0x1c303a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c303a4) {
            ctx->pc = 0x1C30394u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c30394;
        }
    }
    ctx->pc = 0x1C303ACu;
    // 0x1c303ac: 0x0  nop
    ctx->pc = 0x1c303acu;
    // NOP
    // 0x1c303b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c303b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c303b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c303b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c303b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c303b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c303bc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c303bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c303c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c303c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c303c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c303c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c303c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c303c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c303cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c303ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c303d0: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c303d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c303d4: 0xc70bde2  jal         func_1C2F788
    ctx->pc = 0x1C303D4u;
    SET_GPR_U32(ctx, 31, 0x1C303DCu);
    ctx->pc = 0x1C303D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C303D4u;
    // 0x1c303d8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F788u, 0x1C303D4u, 0x1C303DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C303DCu;
label_1c303dc:
    // 0x1c303dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c303dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c303e0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c303e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c303e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c303e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c303e8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1c303e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c303ec: 0x870bdda  j           func_1C2F768
    ctx->pc = 0x1C303ECu;
    ctx->pc = 0x1C303F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C303ECu;
    // 0x1c303f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F768u;
    sub_01C2F768_0x1c2f768(rdram, ctx, runtime); return;
    ctx->pc = 0x1C303F4u;
    // 0x1c303f4: 0x0  nop
    ctx->pc = 0x1c303f4u;
    // NOP
    ctx->pc = 0x1c303f8u;
}
