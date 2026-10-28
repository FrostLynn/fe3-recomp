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

// Function: sub_01DBD2E0
// Address: 0x1dbd2e0 - 0x1dbd358
void sub_01DBD2E0_0x1dbd2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBD2E0_0x1dbd2e0");
#endif

    switch (ctx->pc) {
        case 0x1dbd304u: goto label_1dbd304;
        case 0x1dbd314u: goto label_1dbd314;
        case 0x1dbd32cu: goto label_1dbd32c;
        case 0x1dbd33cu: goto label_1dbd33c;
        default: break;
    }

    ctx->pc = 0x1dbd2e0u;

    // 0x1dbd2e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dbd2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dbd2e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dbd2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dbd2e8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1dbd2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1dbd2ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dbd2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dbd2f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dbd2f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbd2f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1dbd2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1dbd2f8: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1dbd2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1dbd2fc: 0xc76ee58  jal         func_1DBB960
    ctx->pc = 0x1DBD2FCu;
    SET_GPR_U32(ctx, 31, 0x1DBD304u);
    ctx->pc = 0x1DBD300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBD2FCu;
    // 0x1dbd300: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB960u, 0x1DBD2FCu, 0x1DBD304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBD304u;
label_1dbd304:
    // 0x1dbd304: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1dbd304u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1dbd308: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1dbd308u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbd30c: 0xc76ee5a  jal         func_1DBB968
    ctx->pc = 0x1DBD30Cu;
    SET_GPR_U32(ctx, 31, 0x1DBD314u);
    ctx->pc = 0x1DBD310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBD30Cu;
    // 0x1dbd310: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB968u, 0x1DBD30Cu, 0x1DBD314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBD314u;
label_1dbd314:
    // 0x1dbd314: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1dbd314u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbd318: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dbd318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbd31c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dbd31cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbd320: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x1dbd320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1dbd324: 0xc76f32a  jal         func_1DBCCA8
    ctx->pc = 0x1DBD324u;
    SET_GPR_U32(ctx, 31, 0x1DBD32Cu);
    ctx->pc = 0x1DBD328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBD324u;
    // 0x1dbd328: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBCCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBCCA8u, 0x1DBD324u, 0x1DBD32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBD32Cu;
label_1dbd32c:
    // 0x1dbd32c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dbd32cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbd330: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1dbd330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbd334: 0xc76f334  jal         func_1DBCCD0
    ctx->pc = 0x1DBD334u;
    SET_GPR_U32(ctx, 31, 0x1DBD33Cu);
    ctx->pc = 0x1DBD338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBD334u;
    // 0x1dbd338: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBCCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBCCD0u, 0x1DBD334u, 0x1DBD33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBD33Cu;
label_1dbd33c:
    // 0x1dbd33c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dbd33cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbd340: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dbd340u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dbd344: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dbd344u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbd348: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dbd348u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dbd34c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1dbd34cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dbd350: 0x876ef1a  j           func_1DBBC68
    ctx->pc = 0x1DBD350u;
    ctx->pc = 0x1DBD354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBD350u;
    // 0x1dbd354: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBBC68u;
    sub_01DBBC68_0x1dbbc68(rdram, ctx, runtime); return;
    ctx->pc = 0x1DBD358u;
}
