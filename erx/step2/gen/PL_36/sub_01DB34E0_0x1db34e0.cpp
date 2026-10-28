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

// Function: sub_01DB34E0
// Address: 0x1db34e0 - 0x1db3548
void sub_01DB34E0_0x1db34e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB34E0_0x1db34e0");
#endif

    switch (ctx->pc) {
        case 0x1db34fcu: goto label_1db34fc;
        case 0x1db350cu: goto label_1db350c;
        case 0x1db3518u: goto label_1db3518;
        case 0x1db3528u: goto label_1db3528;
        default: break;
    }

    ctx->pc = 0x1db34e0u;

    // 0x1db34e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1db34e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1db34e4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1db34e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1db34e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1db34e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1db34ec: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1db34ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1db34f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1db34f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db34f4: 0xc76c3d6  jal         func_1DB0F58
    ctx->pc = 0x1DB34F4u;
    SET_GPR_U32(ctx, 31, 0x1DB34FCu);
    ctx->pc = 0x1DB34F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB34F4u;
    // 0x1db34f8: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F58u, 0x1DB34F4u, 0x1DB34FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB34FCu;
label_1db34fc:
    // 0x1db34fc: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1db34fcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1db3500: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1db3500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1db3504: 0xc76c684  jal         func_1DB1A10
    ctx->pc = 0x1DB3504u;
    SET_GPR_U32(ctx, 31, 0x1DB350Cu);
    ctx->pc = 0x1DB3508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB3504u;
    // 0x1db3508: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB1A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB1A10u, 0x1DB3504u, 0x1DB350Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB350Cu;
label_1db350c:
    // 0x1db350c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1db350cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1db3510: 0xc76c3d6  jal         func_1DB0F58
    ctx->pc = 0x1DB3510u;
    SET_GPR_U32(ctx, 31, 0x1DB3518u);
    ctx->pc = 0x1DB3514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB3510u;
    // 0x1db3514: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F58u, 0x1DB3510u, 0x1DB3518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB3518u;
label_1db3518:
    // 0x1db3518: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1db3518u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1db351c: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1db351cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1db3520: 0xc76c684  jal         func_1DB1A10
    ctx->pc = 0x1DB3520u;
    SET_GPR_U32(ctx, 31, 0x1DB3528u);
    ctx->pc = 0x1DB3524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB3520u;
    // 0x1db3524: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB1A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB1A10u, 0x1DB3520u, 0x1DB3528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB3528u;
label_1db3528:
    // 0x1db3528: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1db3528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1db352c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db352cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db3530: 0x3c0501db  lui         $a1, 0x1DB
    ctx->pc = 0x1db3530u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)475 << 16));
    // 0x1db3534: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1db3534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1db3538: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1db3538u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db353c: 0x24a542b0  addiu       $a1, $a1, 0x42B0
    ctx->pc = 0x1db353cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17072));
    // 0x1db3540: 0x876c7be  j           func_1DB1EF8
    ctx->pc = 0x1DB3540u;
    ctx->pc = 0x1DB3544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB3540u;
    // 0x1db3544: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB1EF8u;
    sub_01DB1EF8_0x1db1ef8(rdram, ctx, runtime); return;
    ctx->pc = 0x1DB3548u;
}
