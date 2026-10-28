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

// Function: sub_01CCE3F0
// Address: 0x1cce3f0 - 0x1cce460
void sub_01CCE3F0_0x1cce3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCE3F0_0x1cce3f0");
#endif

    switch (ctx->pc) {
        case 0x1cce414u: goto label_1cce414;
        case 0x1cce424u: goto label_1cce424;
        case 0x1cce430u: goto label_1cce430;
        case 0x1cce440u: goto label_1cce440;
        default: break;
    }

    ctx->pc = 0x1cce3f0u;

    // 0x1cce3f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cce3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cce3f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cce3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cce3f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cce3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cce3fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cce3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cce400: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1cce400u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce404: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cce404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cce408: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cce408u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce40c: 0xc733516  jal         func_1CCD458
    ctx->pc = 0x1CCE40Cu;
    SET_GPR_U32(ctx, 31, 0x1CCE414u);
    ctx->pc = 0x1CCE410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE40Cu;
    // 0x1cce410: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD458u, 0x1CCE40Cu, 0x1CCE414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE414u;
label_1cce414:
    // 0x1cce414: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1cce414u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1cce418: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1cce418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1cce41c: 0xc7337c2  jal         func_1CCDF08
    ctx->pc = 0x1CCE41Cu;
    SET_GPR_U32(ctx, 31, 0x1CCE424u);
    ctx->pc = 0x1CCE420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE41Cu;
    // 0x1cce420: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCDF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCDF08u, 0x1CCE41Cu, 0x1CCE424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE424u;
label_1cce424:
    // 0x1cce424: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1cce424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cce428: 0xc733516  jal         func_1CCD458
    ctx->pc = 0x1CCE428u;
    SET_GPR_U32(ctx, 31, 0x1CCE430u);
    ctx->pc = 0x1CCE42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE428u;
    // 0x1cce42c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD458u, 0x1CCE428u, 0x1CCE430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE430u;
label_1cce430:
    // 0x1cce430: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1cce430u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1cce434: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1cce434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1cce438: 0xc7337c2  jal         func_1CCDF08
    ctx->pc = 0x1CCE438u;
    SET_GPR_U32(ctx, 31, 0x1CCE440u);
    ctx->pc = 0x1CCE43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE438u;
    // 0x1cce43c: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCDF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCDF08u, 0x1CCE438u, 0x1CCE440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE440u;
label_1cce440:
    // 0x1cce440: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1cce440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1cce444: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cce444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce448: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cce448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce44c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cce44cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cce450: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cce450u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cce454: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cce454u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cce458: 0x873352a  j           func_1CCD4A8
    ctx->pc = 0x1CCE458u;
    ctx->pc = 0x1CCE45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE458u;
    // 0x1cce45c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD4A8u;
    sub_01CCD4A8_0x1ccd4a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1CCE460u;
}
