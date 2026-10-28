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

// Function: sub_01DBD3B8
// Address: 0x1dbd3b8 - 0x1dbd430
void sub_01DBD3B8_0x1dbd3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBD3B8_0x1dbd3b8");
#endif

    switch (ctx->pc) {
        case 0x1dbd3dcu: goto label_1dbd3dc;
        case 0x1dbd3ecu: goto label_1dbd3ec;
        case 0x1dbd404u: goto label_1dbd404;
        case 0x1dbd414u: goto label_1dbd414;
        default: break;
    }

    ctx->pc = 0x1dbd3b8u;

    // 0x1dbd3b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dbd3b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dbd3bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dbd3bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dbd3c0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1dbd3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1dbd3c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dbd3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dbd3c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dbd3c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbd3cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1dbd3ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1dbd3d0: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1dbd3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1dbd3d4: 0xc76ee58  jal         func_1DBB960
    ctx->pc = 0x1DBD3D4u;
    SET_GPR_U32(ctx, 31, 0x1DBD3DCu);
    ctx->pc = 0x1DBD3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBD3D4u;
    // 0x1dbd3d8: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB960u, 0x1DBD3D4u, 0x1DBD3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBD3DCu;
label_1dbd3dc:
    // 0x1dbd3dc: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1dbd3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1dbd3e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1dbd3e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbd3e4: 0xc76ee5a  jal         func_1DBB968
    ctx->pc = 0x1DBD3E4u;
    SET_GPR_U32(ctx, 31, 0x1DBD3ECu);
    ctx->pc = 0x1DBD3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBD3E4u;
    // 0x1dbd3e8: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB968u, 0x1DBD3E4u, 0x1DBD3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBD3ECu;
label_1dbd3ec:
    // 0x1dbd3ec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1dbd3ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbd3f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dbd3f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbd3f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dbd3f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbd3f8: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x1dbd3f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1dbd3fc: 0xc76f32a  jal         func_1DBCCA8
    ctx->pc = 0x1DBD3FCu;
    SET_GPR_U32(ctx, 31, 0x1DBD404u);
    ctx->pc = 0x1DBD400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBD3FCu;
    // 0x1dbd400: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBCCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBCCA8u, 0x1DBD3FCu, 0x1DBD404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBD404u;
label_1dbd404:
    // 0x1dbd404: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dbd404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbd408: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1dbd408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbd40c: 0xc76f334  jal         func_1DBCCD0
    ctx->pc = 0x1DBD40Cu;
    SET_GPR_U32(ctx, 31, 0x1DBD414u);
    ctx->pc = 0x1DBD410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBD40Cu;
    // 0x1dbd410: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBCCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBCCD0u, 0x1DBD40Cu, 0x1DBD414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBD414u;
label_1dbd414:
    // 0x1dbd414: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dbd414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbd418: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dbd418u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dbd41c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dbd41cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbd420: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dbd420u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dbd424: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1dbd424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dbd428: 0x876ef1a  j           func_1DBBC68
    ctx->pc = 0x1DBD428u;
    ctx->pc = 0x1DBD42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBD428u;
    // 0x1dbd42c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBBC68u;
    sub_01DBBC68_0x1dbbc68(rdram, ctx, runtime); return;
    ctx->pc = 0x1DBD430u;
}
