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

// Function: sub_01C10358
// Address: 0x1c10358 - 0x1c103e8
void sub_01C10358_0x1c10358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C10358_0x1c10358");
#endif

    switch (ctx->pc) {
        case 0x1c1036cu: goto label_1c1036c;
        case 0x1c10380u: goto label_1c10380;
        case 0x1c10384u: goto label_1c10384;
        case 0x1c103ccu: goto label_1c103cc;
        default: break;
    }

    ctx->pc = 0x1c10358u;

    // 0x1c10358: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c10358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c1035c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c1035cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c10360: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c10360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c10364: 0xc703dd2  jal         func_1C0F748
    ctx->pc = 0x1C10364u;
    SET_GPR_U32(ctx, 31, 0x1C1036Cu);
    ctx->pc = 0x1C10368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C10364u;
    // 0x1c10368: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F748u, 0x1C10364u, 0x1C1036Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1036Cu;
label_1c1036c:
    // 0x1c1036c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c1036cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c10370: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C10370u;
    {
        const bool branch_taken_0x1c10370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C10374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C10370u;
        // 0x1c10374: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c10370) {
            ctx->pc = 0x1C10394u;
            goto label_1c10394;
        }
    }
    ctx->pc = 0x1C10378u;
    // 0x1c10378: 0xc703dd4  jal         func_1C0F750
    ctx->pc = 0x1C10378u;
    SET_GPR_U32(ctx, 31, 0x1C10380u);
    ctx->pc = 0x1C0F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F750u, 0x1C10378u, 0x1C10380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C10380u;
label_1c10380:
    // 0x1c10380: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c10380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c10384:
    // 0x1c10384: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c10384u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c10388: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c10388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c1038c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1038Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C10390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1038Cu;
        // 0x1c10390: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1038Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C10394u;
label_1c10394:
    // 0x1c10394: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C10394u;
    {
        const bool branch_taken_0x1c10394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C10398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C10394u;
        // 0x1c10398: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c10394) {
            ctx->pc = 0x1C10384u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c10384;
        }
    }
    ctx->pc = 0x1C1039Cu;
    // 0x1c1039c: 0x0  nop
    ctx->pc = 0x1c1039cu;
    // NOP
    // 0x1c103a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c103a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c103a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c103a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c103a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c103a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c103ac: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c103acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c103b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c103b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c103b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c103b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c103b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c103b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c103bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c103bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c103c0: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c103c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c103c4: 0xc703de2  jal         func_1C0F788
    ctx->pc = 0x1C103C4u;
    SET_GPR_U32(ctx, 31, 0x1C103CCu);
    ctx->pc = 0x1C103C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C103C4u;
    // 0x1c103c8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F788u, 0x1C103C4u, 0x1C103CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C103CCu;
label_1c103cc:
    // 0x1c103cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c103ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c103d0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c103d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c103d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c103d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c103d8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1c103d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c103dc: 0x8703dda  j           func_1C0F768
    ctx->pc = 0x1C103DCu;
    ctx->pc = 0x1C103E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C103DCu;
    // 0x1c103e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F768u;
    sub_01C0F768_0x1c0f768(rdram, ctx, runtime); return;
    ctx->pc = 0x1C103E4u;
    // 0x1c103e4: 0x0  nop
    ctx->pc = 0x1c103e4u;
    // NOP
    ctx->pc = 0x1c103e8u;
}
