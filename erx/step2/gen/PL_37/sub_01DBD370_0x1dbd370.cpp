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

// Function: sub_01DBD370
// Address: 0x1dbd370 - 0x1dbd3b8
void sub_01DBD370_0x1dbd370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBD370_0x1dbd370");
#endif

    switch (ctx->pc) {
        case 0x1dbd38cu: goto label_1dbd38c;
        case 0x1dbd3a0u: goto label_1dbd3a0;
        default: break;
    }

    ctx->pc = 0x1dbd370u;

    // 0x1dbd370: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dbd370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dbd374: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1dbd374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1dbd378: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dbd378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dbd37c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1dbd37cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1dbd380: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dbd380u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbd384: 0xc76ee58  jal         func_1DBB960
    ctx->pc = 0x1DBD384u;
    SET_GPR_U32(ctx, 31, 0x1DBD38Cu);
    ctx->pc = 0x1DBD388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBD384u;
    // 0x1dbd388: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB960u, 0x1DBD384u, 0x1DBD38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBD38Cu;
label_1dbd38c:
    // 0x1dbd38c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dbd38cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbd390: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1dbd390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dbd394: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1dbd394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dbd398: 0xc76f32a  jal         func_1DBCCA8
    ctx->pc = 0x1DBD398u;
    SET_GPR_U32(ctx, 31, 0x1DBD3A0u);
    ctx->pc = 0x1DBD39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBD398u;
    // 0x1dbd39c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBCCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBCCA8u, 0x1DBD398u, 0x1DBD3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBD3A0u;
label_1dbd3a0:
    // 0x1dbd3a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dbd3a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbd3a4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dbd3a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dbd3a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dbd3a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbd3ac: 0x876ef1c  j           func_1DBBC70
    ctx->pc = 0x1DBD3ACu;
    ctx->pc = 0x1DBD3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBD3ACu;
    // 0x1dbd3b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBBC70u;
    sub_01DBBC70_0x1dbbc70(rdram, ctx, runtime); return;
    ctx->pc = 0x1DBD3B4u;
    // 0x1dbd3b4: 0x0  nop
    ctx->pc = 0x1dbd3b4u;
    // NOP
    ctx->pc = 0x1dbd3b8u;
}
