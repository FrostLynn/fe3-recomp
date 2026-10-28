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

// Function: sub_01CC3408
// Address: 0x1cc3408 - 0x1cc3478
void sub_01CC3408_0x1cc3408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC3408_0x1cc3408");
#endif

    switch (ctx->pc) {
        case 0x1cc342cu: goto label_1cc342c;
        case 0x1cc343cu: goto label_1cc343c;
        case 0x1cc3448u: goto label_1cc3448;
        case 0x1cc3458u: goto label_1cc3458;
        default: break;
    }

    ctx->pc = 0x1cc3408u;

    // 0x1cc3408: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cc3408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cc340c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cc340cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cc3410: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cc3410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cc3414: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cc3414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cc3418: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1cc3418u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc341c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cc341cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cc3420: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cc3420u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc3424: 0xc730918  jal         func_1CC2460
    ctx->pc = 0x1CC3424u;
    SET_GPR_U32(ctx, 31, 0x1CC342Cu);
    ctx->pc = 0x1CC3428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC3424u;
    // 0x1cc3428: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2460u, 0x1CC3424u, 0x1CC342Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC342Cu;
label_1cc342c:
    // 0x1cc342c: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1cc342cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1cc3430: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1cc3430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1cc3434: 0xc730bc8  jal         func_1CC2F20
    ctx->pc = 0x1CC3434u;
    SET_GPR_U32(ctx, 31, 0x1CC343Cu);
    ctx->pc = 0x1CC3438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC3434u;
    // 0x1cc3438: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2F20u, 0x1CC3434u, 0x1CC343Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC343Cu;
label_1cc343c:
    // 0x1cc343c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1cc343cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cc3440: 0xc730918  jal         func_1CC2460
    ctx->pc = 0x1CC3440u;
    SET_GPR_U32(ctx, 31, 0x1CC3448u);
    ctx->pc = 0x1CC3444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC3440u;
    // 0x1cc3444: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2460u, 0x1CC3440u, 0x1CC3448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC3448u;
label_1cc3448:
    // 0x1cc3448: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1cc3448u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1cc344c: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1cc344cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1cc3450: 0xc730bc8  jal         func_1CC2F20
    ctx->pc = 0x1CC3450u;
    SET_GPR_U32(ctx, 31, 0x1CC3458u);
    ctx->pc = 0x1CC3454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC3450u;
    // 0x1cc3454: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2F20u, 0x1CC3450u, 0x1CC3458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC3458u;
label_1cc3458:
    // 0x1cc3458: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1cc3458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1cc345c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cc345cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc3460: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cc3460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc3464: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cc3464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc3468: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cc3468u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc346c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cc346cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cc3470: 0x873092c  j           func_1CC24B0
    ctx->pc = 0x1CC3470u;
    ctx->pc = 0x1CC3474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC3470u;
    // 0x1cc3474: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC24B0u;
    sub_01CC24B0_0x1cc24b0(rdram, ctx, runtime); return;
    ctx->pc = 0x1CC3478u;
}
