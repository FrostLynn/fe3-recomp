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

// Function: sub_01D93810
// Address: 0x1d93810 - 0x1d93880
void sub_01D93810_0x1d93810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D93810_0x1d93810");
#endif

    switch (ctx->pc) {
        case 0x1d93834u: goto label_1d93834;
        case 0x1d93844u: goto label_1d93844;
        case 0x1d93850u: goto label_1d93850;
        case 0x1d93860u: goto label_1d93860;
        default: break;
    }

    ctx->pc = 0x1d93810u;

    // 0x1d93810: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d93810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d93814: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d93814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d93818: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d93818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d9381c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d9381cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d93820: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d93820u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d93824: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d93824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d93828: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d93828u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9382c: 0xc764a16  jal         func_1D92858
    ctx->pc = 0x1D9382Cu;
    SET_GPR_U32(ctx, 31, 0x1D93834u);
    ctx->pc = 0x1D93830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9382Cu;
    // 0x1d93830: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92858u, 0x1D9382Cu, 0x1D93834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D93834u;
label_1d93834:
    // 0x1d93834: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d93834u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d93838: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d93838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d9383c: 0xc764cca  jal         func_1D93328
    ctx->pc = 0x1D9383Cu;
    SET_GPR_U32(ctx, 31, 0x1D93844u);
    ctx->pc = 0x1D93840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9383Cu;
    // 0x1d93840: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D93328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D93328u, 0x1D9383Cu, 0x1D93844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D93844u;
label_1d93844:
    // 0x1d93844: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d93844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d93848: 0xc764a16  jal         func_1D92858
    ctx->pc = 0x1D93848u;
    SET_GPR_U32(ctx, 31, 0x1D93850u);
    ctx->pc = 0x1D9384Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D93848u;
    // 0x1d9384c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92858u, 0x1D93848u, 0x1D93850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D93850u;
label_1d93850:
    // 0x1d93850: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d93850u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d93854: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d93854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d93858: 0xc764cca  jal         func_1D93328
    ctx->pc = 0x1D93858u;
    SET_GPR_U32(ctx, 31, 0x1D93860u);
    ctx->pc = 0x1D9385Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D93858u;
    // 0x1d9385c: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D93328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D93328u, 0x1D93858u, 0x1D93860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D93860u;
label_1d93860:
    // 0x1d93860: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1d93860u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1d93864: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d93864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d93868: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d93868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9386c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d9386cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d93870: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d93870u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d93874: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d93874u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d93878: 0x8764a2a  j           func_1D928A8
    ctx->pc = 0x1D93878u;
    ctx->pc = 0x1D9387Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D93878u;
    // 0x1d9387c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D928A8u;
    sub_01D928A8_0x1d928a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D93880u;
}
