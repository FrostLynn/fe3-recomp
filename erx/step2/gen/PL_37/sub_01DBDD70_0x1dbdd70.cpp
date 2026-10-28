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

// Function: sub_01DBDD70
// Address: 0x1dbdd70 - 0x1dbddd8
void sub_01DBDD70_0x1dbdd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBDD70_0x1dbdd70");
#endif

    switch (ctx->pc) {
        case 0x1dbdd90u: goto label_1dbdd90;
        case 0x1dbdd9cu: goto label_1dbdd9c;
        case 0x1dbddb0u: goto label_1dbddb0;
        case 0x1dbddb8u: goto label_1dbddb8;
        default: break;
    }

    ctx->pc = 0x1dbdd70u;

    // 0x1dbdd70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dbdd70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dbdd74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dbdd74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1dbdd78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dbdd78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dbdd7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dbdd7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dbdd80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dbdd80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbdd84: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1dbdd84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1dbdd88: 0xc76ee58  jal         func_1DBB960
    ctx->pc = 0x1DBDD88u;
    SET_GPR_U32(ctx, 31, 0x1DBDD90u);
    ctx->pc = 0x1DBDD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBDD88u;
    // 0x1dbdd8c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB960u, 0x1DBDD88u, 0x1DBDD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBDD90u;
label_1dbdd90:
    // 0x1dbdd90: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1dbdd90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbdd94: 0xc76f37a  jal         func_1DBCDE8
    ctx->pc = 0x1DBDD94u;
    SET_GPR_U32(ctx, 31, 0x1DBDD9Cu);
    ctx->pc = 0x1DBDD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBDD94u;
    // 0x1dbdd98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBCDE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBCDE8u, 0x1DBDD94u, 0x1DBDD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBDD9Cu;
label_1dbdd9c:
    // 0x1dbdd9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dbdd9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbdda0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1dbdda0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dbdda4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1dbdda4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dbdda8: 0xc76f32a  jal         func_1DBCCA8
    ctx->pc = 0x1DBDDA8u;
    SET_GPR_U32(ctx, 31, 0x1DBDDB0u);
    ctx->pc = 0x1DBDDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBDDA8u;
    // 0x1dbddac: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBCCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBCCA8u, 0x1DBDDA8u, 0x1DBDDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBDDB0u;
label_1dbddb0:
    // 0x1dbddb0: 0xc76ee62  jal         func_1DBB988
    ctx->pc = 0x1DBDDB0u;
    SET_GPR_U32(ctx, 31, 0x1DBDDB8u);
    ctx->pc = 0x1DBDDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBDDB0u;
    // 0x1dbddb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB988u, 0x1DBDDB0u, 0x1DBDDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBDDB8u;
label_1dbddb8:
    // 0x1dbddb8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1dbddb8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dbddbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dbddbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbddc0: 0xa22f0950  sb          $t7, 0x950($s1)
    ctx->pc = 0x1dbddc0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2384), (uint8_t)GPR_U32(ctx, 15));
    // 0x1dbddc4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dbddc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dbddc8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dbddc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dbddcc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBDDCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBDDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBDDCCu;
        // 0x1dbddd0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBDDCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBDDD4u;
    // 0x1dbddd4: 0x0  nop
    ctx->pc = 0x1dbddd4u;
    // NOP
    ctx->pc = 0x1dbddd8u;
}
