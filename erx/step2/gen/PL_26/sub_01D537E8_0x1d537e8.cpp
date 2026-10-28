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

// Function: sub_01D537E8
// Address: 0x1d537e8 - 0x1d53850
void sub_01D537E8_0x1d537e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D537E8_0x1d537e8");
#endif

    switch (ctx->pc) {
        case 0x1d53804u: goto label_1d53804;
        case 0x1d53814u: goto label_1d53814;
        case 0x1d53820u: goto label_1d53820;
        case 0x1d53830u: goto label_1d53830;
        default: break;
    }

    ctx->pc = 0x1d537e8u;

    // 0x1d537e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d537e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d537ec: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d537ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d537f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d537f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d537f4: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d537f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d537f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d537f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d537fc: 0xc7543d6  jal         func_1D50F58
    ctx->pc = 0x1D537FCu;
    SET_GPR_U32(ctx, 31, 0x1D53804u);
    ctx->pc = 0x1D53800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D537FCu;
    // 0x1d53800: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F58u, 0x1D537FCu, 0x1D53804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D53804u;
label_1d53804:
    // 0x1d53804: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d53804u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d53808: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d53808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d5380c: 0xc754684  jal         func_1D51A10
    ctx->pc = 0x1D5380Cu;
    SET_GPR_U32(ctx, 31, 0x1D53814u);
    ctx->pc = 0x1D53810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5380Cu;
    // 0x1d53810: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51A10u, 0x1D5380Cu, 0x1D53814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D53814u;
label_1d53814:
    // 0x1d53814: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d53814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d53818: 0xc7543d6  jal         func_1D50F58
    ctx->pc = 0x1D53818u;
    SET_GPR_U32(ctx, 31, 0x1D53820u);
    ctx->pc = 0x1D5381Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D53818u;
    // 0x1d5381c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F58u, 0x1D53818u, 0x1D53820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D53820u;
label_1d53820:
    // 0x1d53820: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d53820u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d53824: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d53824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d53828: 0xc754684  jal         func_1D51A10
    ctx->pc = 0x1D53828u;
    SET_GPR_U32(ctx, 31, 0x1D53830u);
    ctx->pc = 0x1D5382Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D53828u;
    // 0x1d5382c: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51A10u, 0x1D53828u, 0x1D53830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D53830u;
label_1d53830:
    // 0x1d53830: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1d53830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1d53834: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d53834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d53838: 0x3c0501d5  lui         $a1, 0x1D5
    ctx->pc = 0x1d53838u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)469 << 16));
    // 0x1d5383c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d5383cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d53840: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d53840u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d53844: 0x24a549c0  addiu       $a1, $a1, 0x49C0
    ctx->pc = 0x1d53844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18880));
    // 0x1d53848: 0x87543ea  j           func_1D50FA8
    ctx->pc = 0x1D53848u;
    ctx->pc = 0x1D5384Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D53848u;
    // 0x1d5384c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50FA8u;
    sub_01D50FA8_0x1d50fa8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D53850u;
}
