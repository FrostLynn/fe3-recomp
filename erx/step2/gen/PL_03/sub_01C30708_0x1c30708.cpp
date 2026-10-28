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

// Function: sub_01C30708
// Address: 0x1c30708 - 0x1c30778
void sub_01C30708_0x1c30708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C30708_0x1c30708");
#endif

    switch (ctx->pc) {
        case 0x1c3072cu: goto label_1c3072c;
        case 0x1c3073cu: goto label_1c3073c;
        case 0x1c30748u: goto label_1c30748;
        case 0x1c30758u: goto label_1c30758;
        default: break;
    }

    ctx->pc = 0x1c30708u;

    // 0x1c30708: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c30708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c3070c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c3070cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c30710: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c30710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c30714: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c30714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c30718: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c30718u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3071c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c3071cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c30720: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c30720u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c30724: 0xc70bdd6  jal         func_1C2F758
    ctx->pc = 0x1C30724u;
    SET_GPR_U32(ctx, 31, 0x1C3072Cu);
    ctx->pc = 0x1C30728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C30724u;
    // 0x1c30728: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F758u, 0x1C30724u, 0x1C3072Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3072Cu;
label_1c3072c:
    // 0x1c3072c: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c3072cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c30730: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c30730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c30734: 0xc70c088  jal         func_1C30220
    ctx->pc = 0x1C30734u;
    SET_GPR_U32(ctx, 31, 0x1C3073Cu);
    ctx->pc = 0x1C30738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C30734u;
    // 0x1c30738: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C30220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C30220u, 0x1C30734u, 0x1C3073Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3073Cu;
label_1c3073c:
    // 0x1c3073c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c3073cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c30740: 0xc70bdd6  jal         func_1C2F758
    ctx->pc = 0x1C30740u;
    SET_GPR_U32(ctx, 31, 0x1C30748u);
    ctx->pc = 0x1C30744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C30740u;
    // 0x1c30744: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F758u, 0x1C30740u, 0x1C30748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C30748u;
label_1c30748:
    // 0x1c30748: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c30748u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c3074c: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c3074cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c30750: 0xc70c088  jal         func_1C30220
    ctx->pc = 0x1C30750u;
    SET_GPR_U32(ctx, 31, 0x1C30758u);
    ctx->pc = 0x1C30754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C30750u;
    // 0x1c30754: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C30220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C30220u, 0x1C30750u, 0x1C30758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C30758u;
label_1c30758:
    // 0x1c30758: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1c30758u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1c3075c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3075cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c30760: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c30760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c30764: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c30764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c30768: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c30768u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3076c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c3076cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c30770: 0x870bdea  j           func_1C2F7A8
    ctx->pc = 0x1C30770u;
    ctx->pc = 0x1C30774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C30770u;
    // 0x1c30774: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F7A8u;
    sub_01C2F7A8_0x1c2f7a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1C30778u;
}
