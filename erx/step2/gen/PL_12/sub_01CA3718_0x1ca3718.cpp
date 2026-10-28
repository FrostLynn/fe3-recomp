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

// Function: sub_01CA3718
// Address: 0x1ca3718 - 0x1ca3788
void sub_01CA3718_0x1ca3718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CA3718_0x1ca3718");
#endif

    switch (ctx->pc) {
        case 0x1ca373cu: goto label_1ca373c;
        case 0x1ca374cu: goto label_1ca374c;
        case 0x1ca3758u: goto label_1ca3758;
        case 0x1ca3768u: goto label_1ca3768;
        default: break;
    }

    ctx->pc = 0x1ca3718u;

    // 0x1ca3718: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ca3718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ca371c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ca371cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ca3720: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ca3720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ca3724: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ca3724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ca3728: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ca3728u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca372c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1ca372cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1ca3730: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ca3730u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca3734: 0xc7289d6  jal         func_1CA2758
    ctx->pc = 0x1CA3734u;
    SET_GPR_U32(ctx, 31, 0x1CA373Cu);
    ctx->pc = 0x1CA3738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA3734u;
    // 0x1ca3738: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2758u, 0x1CA3734u, 0x1CA373Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA373Cu;
label_1ca373c:
    // 0x1ca373c: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1ca373cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1ca3740: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1ca3740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1ca3744: 0xc728c8c  jal         func_1CA3230
    ctx->pc = 0x1CA3744u;
    SET_GPR_U32(ctx, 31, 0x1CA374Cu);
    ctx->pc = 0x1CA3748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA3744u;
    // 0x1ca3748: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA3230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA3230u, 0x1CA3744u, 0x1CA374Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA374Cu;
label_1ca374c:
    // 0x1ca374c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1ca374cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1ca3750: 0xc7289d6  jal         func_1CA2758
    ctx->pc = 0x1CA3750u;
    SET_GPR_U32(ctx, 31, 0x1CA3758u);
    ctx->pc = 0x1CA3754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA3750u;
    // 0x1ca3754: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2758u, 0x1CA3750u, 0x1CA3758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA3758u;
label_1ca3758:
    // 0x1ca3758: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1ca3758u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1ca375c: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1ca375cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1ca3760: 0xc728c8c  jal         func_1CA3230
    ctx->pc = 0x1CA3760u;
    SET_GPR_U32(ctx, 31, 0x1CA3768u);
    ctx->pc = 0x1CA3764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA3760u;
    // 0x1ca3764: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA3230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA3230u, 0x1CA3760u, 0x1CA3768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA3768u;
label_1ca3768:
    // 0x1ca3768: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1ca3768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1ca376c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca376cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca3770: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ca3770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca3774: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ca3774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ca3778: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ca3778u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca377c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ca377cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ca3780: 0x87289ea  j           func_1CA27A8
    ctx->pc = 0x1CA3780u;
    ctx->pc = 0x1CA3784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA3780u;
    // 0x1ca3784: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA27A8u;
    sub_01CA27A8_0x1ca27a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1CA3788u;
}
