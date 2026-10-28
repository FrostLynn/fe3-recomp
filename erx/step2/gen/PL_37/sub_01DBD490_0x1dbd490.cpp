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

// Function: sub_01DBD490
// Address: 0x1dbd490 - 0x1dbd508
void sub_01DBD490_0x1dbd490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBD490_0x1dbd490");
#endif

    switch (ctx->pc) {
        case 0x1dbd4b4u: goto label_1dbd4b4;
        case 0x1dbd4c4u: goto label_1dbd4c4;
        case 0x1dbd4dcu: goto label_1dbd4dc;
        case 0x1dbd4ecu: goto label_1dbd4ec;
        default: break;
    }

    ctx->pc = 0x1dbd490u;

    // 0x1dbd490: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dbd490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dbd494: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dbd494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dbd498: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1dbd498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1dbd49c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dbd49cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dbd4a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dbd4a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbd4a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1dbd4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1dbd4a8: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1dbd4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1dbd4ac: 0xc76ee58  jal         func_1DBB960
    ctx->pc = 0x1DBD4ACu;
    SET_GPR_U32(ctx, 31, 0x1DBD4B4u);
    ctx->pc = 0x1DBD4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBD4ACu;
    // 0x1dbd4b0: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB960u, 0x1DBD4ACu, 0x1DBD4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBD4B4u;
label_1dbd4b4:
    // 0x1dbd4b4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1dbd4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1dbd4b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1dbd4b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbd4bc: 0xc76ee5a  jal         func_1DBB968
    ctx->pc = 0x1DBD4BCu;
    SET_GPR_U32(ctx, 31, 0x1DBD4C4u);
    ctx->pc = 0x1DBD4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBD4BCu;
    // 0x1dbd4c0: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB968u, 0x1DBD4BCu, 0x1DBD4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBD4C4u;
label_1dbd4c4:
    // 0x1dbd4c4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1dbd4c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbd4c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dbd4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbd4cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dbd4ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbd4d0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1dbd4d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1dbd4d4: 0xc76f32a  jal         func_1DBCCA8
    ctx->pc = 0x1DBD4D4u;
    SET_GPR_U32(ctx, 31, 0x1DBD4DCu);
    ctx->pc = 0x1DBD4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBD4D4u;
    // 0x1dbd4d8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBCCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBCCA8u, 0x1DBD4D4u, 0x1DBD4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBD4DCu;
label_1dbd4dc:
    // 0x1dbd4dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dbd4dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbd4e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1dbd4e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbd4e4: 0xc76f334  jal         func_1DBCCD0
    ctx->pc = 0x1DBD4E4u;
    SET_GPR_U32(ctx, 31, 0x1DBD4ECu);
    ctx->pc = 0x1DBD4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBD4E4u;
    // 0x1dbd4e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBCCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBCCD0u, 0x1DBD4E4u, 0x1DBD4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBD4ECu;
label_1dbd4ec:
    // 0x1dbd4ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dbd4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbd4f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dbd4f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dbd4f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dbd4f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbd4f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dbd4f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dbd4fc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1dbd4fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dbd500: 0x876ef1a  j           func_1DBBC68
    ctx->pc = 0x1DBD500u;
    ctx->pc = 0x1DBD504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBD500u;
    // 0x1dbd504: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBBC68u;
    sub_01DBBC68_0x1dbbc68(rdram, ctx, runtime); return;
    ctx->pc = 0x1DBD508u;
}
